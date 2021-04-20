#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "tree.h"
#include "type.h"
#include "ytab.h"
#include "cgram.tab.h"
#include "symtab.h"
#include "errdef.h"
#include "prodrule.h"

#define CHILDNUM 9

extern YYSTYPE yylval;
extern char *yytext;
extern int rows;
extern char *filename;
extern int stdioflg;
extern int stdlibflg;
extern int stringflg;
extern int mathflg;

extern int insert_head();

int serialnum = 0;
int end = -1;


SymbolTable current = NULL;
SymbolTable global = NULL;

void memerr()
{
    fprintf(stderr, "There was an issue mallocing!");
    exit(1);
}

struct tree *alcTree(int label, char *symbolname, int nkids, ...)
{
    va_list ap;
    struct tree *ptr = malloc(sizeof(struct tree) +
                                (nkids)*sizeof(struct tree *));
    if (ptr == NULL) {
       memerr();
    }
    ptr->id = serialnum++;
    ptr->label = label;
    ptr->type = calloc(1, sizeof(typeptr));
    ptr->symbolname = symbolname;
    ptr->nkids = nkids;

    va_start(ap, nkids);
    for(int i = 0; i < nkids; i++){
        ptr->kids[i] = va_arg(ap, struct tree *);
    }

    for(int i = nkids; i < NUMKIDS; i++){
        ptr->kids[i] = NULL;
    }

    if (nkids == 0){
        ptr->leaf = yylval.treeptr->leaf;
    } else {
        ptr->leaf = NULL;
    }
    va_end(ap);
    return ptr;
}

int alctoken(int category)
{
    if ((yylval.treeptr = (struct tree *)calloc(1, sizeof (struct tree)
                            + (CHILDNUM)*sizeof(struct tree *))) == NULL)
        memerr();
   	yylval.treeptr->label = -1;
	yylval.treeptr->symbolname = "";
    yylval.treeptr->type = calloc(1, sizeof(typeptr));
	yylval.treeptr->nkids = 0;
    yylval.treeptr->leaf = NULL;

    if ((yylval.treeptr->leaf = (struct token *)calloc(1, sizeof (struct token)))==NULL)
        memerr();
    tokenInit();
    yylval.treeptr->id = serialnum++;
	yylval.treeptr->leaf->category = category;
	yylval.treeptr->leaf->text = strdup(yytext);
	yylval.treeptr->leaf->lineno = rows;
	yylval.treeptr->leaf->filename = filename;

    if (category == STRING || category == CCON || category == IDENTIFIER){
        yylval.treeptr->leaf->sval = convertString(yytext);
    } else if(category == FCON){
        yylval.treeptr->leaf->dval = atof(yylval.treeptr->leaf->text);
    } else if(category == ICON){
        yylval.treeptr->leaf->ival = atoi(yylval.treeptr->leaf->text);
    }

	return category;

}

void tokenInit()
{
	yylval.treeptr->leaf->category = 0;
	yylval.treeptr->leaf->text = "";
	yylval.treeptr->leaf->lineno = 0;
	yylval.treeptr->leaf->filename = "";
	yylval.treeptr->leaf->ival = 0;
	yylval.treeptr->leaf->dval = 0;
	yylval.treeptr->leaf->sval = "";
}

void addChild(struct tree *child, struct tree *parent)
{
    int i = 0;
    while(parent->kids[i] != NULL){
        i++;
    }
    parent->kids[i] = child;
}

void printNode(struct tree *tr)
{
    printf("Tree Info:\n");
    printf("label\tsymbolname\t#kids\n");
    printf("%d\t%s\t%d\n",tr->label, tr->symbolname, tr->nkids);
    printf("\tToken Info:\n");
    printf("\t%s\t%s\t\t\t%s\t\t%s\t\t%s\n", "category", "text", "line#", "filename", "Ival/Sval");

    if(strcmp(tr->leaf->sval,"")){
            printf("\t%d\t\t\t%s\t\t\t\t%d\t\t%s\t\t%s\n", tr->leaf->category, tr->leaf->text, tr->leaf->lineno, tr->leaf->filename, tr->leaf->sval);
        } else if(tr->leaf->dval != 0){
            printf("\t%d\t\t\t%s\t\t\t\t%d\t\t%s\t\t%f\n", tr->leaf->category, tr->leaf->text, tr->leaf->lineno, tr->leaf->filename, tr->leaf->dval);
        } else if(tr->leaf->ival != 0){
            printf("\t%d\t\t\t%s\t\t\t\t%d\t\t%s\t\t%d\n", tr->leaf->category, tr->leaf->text, tr->leaf->lineno, tr->leaf->filename, tr->leaf->ival);
        } else {
            printf("\t%d\t\t\t%s\t\t\t\t%d\t\t\t%s\n", tr->leaf->category, tr->leaf->text, tr->leaf->lineno, tr->leaf->filename);
        }
    printf("\n\n\n");
}

void deleteNode(struct tree *tr)
{
    /*need to implement*/
}

void postTrav(struct tree *tr, void (*visit)(struct tree *))
{
    if (tr == NULL){
        return;
    }

    int i = 0;
    while(i < tr->nkids){
        postTrav(tr->kids[i], visit);
        i++;
    }
    visit(tr);

}

void postrevTrav(struct tree *tr, void (*visit)(struct tree *))
{
    if (tr == NULL){
        return;
    }

    int i = (tr->nkids - 1);
    while(i >= 0){
        postrevTrav(tr->kids[i], visit);
        i--;
    }
    visit(tr);

}

void preTrav(struct tree *tr, void (*visit)(struct tree *))
{
    int i = 0;
    visit(tr);
    while(i < tr->nkids)
    {
        preTrav(tr->kids[i], visit);
        i++;
    }
}

char * convertString(char* str)
{
	int i, j = 0;
	str = strtok(str, "\"");
	char *new_str = calloc(1, (strlen(str) + 1));
	for(i = 0; i < strlen(str); i++, j++){
		if(str[i] == 92){
			switch(str[i+1]){
				case 'n':
					new_str[j] = 10;
					i++;
					break;
				case 't':
					new_str[j] = 9;
					i++;
					break;
				case '0':
					new_str[j] = 0;
					i++;
					break;
				case 'a':
					new_str[j] = 7;
					i++;
					break;
				case 'b':
					new_str[j] = 8;
					i++;
					break;
				case 'v':
					new_str[j] = 11;
					i++;
					break;
				case 'f':
					new_str[j] = 12;
					i++;
					break;
				case 'r':
					new_str[j] = 13;
					i++;
					break;

			}
		} else{
			new_str[j] = str[i];
		}
	}
	return new_str;
}

char *humanreadable(struct tree *t)
{
    return(t->symbolname);
}

void treeprint(struct tree *t, int depth)
{
    int i;
    if (t->nkids != 0){
        printf("%*s %s: %d\n", depth*2, " ", humanreadable(t), t->nkids);

        for(i=0; i < t->nkids ; i++){
            treeprint(t->kids[i], depth+1);
        }
    } else {
        printf("%*s %s: %d\n", depth*2, " ",t->leaf->text, t->leaf->category);
    }

}

void debugSymbol(char *s, char *s2)
{
    printf("Symbol: %s\tText: %s\n", s, s2); fflush(stdout);
}

/**
To be used in a traversal
checks the the tree for variable definitions and adds them to current symbol table, or creates new symboltable
*/
void parseTree(struct tree *t)
{
    if (current == NULL){
        global = mksymtab(current, "global");
        current = global;
        if (stdioflg){
            alctype(FUNC_TYPE);
            insert(global, "printf", tfi("printf"), 0);
            insert(global, "sprintf", tfi("sprintf"), 0);
            insert(global, "fopen", tfi("fopen"), 0);
            insert(global, "fclose", tfi("fclose"), 0);
            insert(global, "fprintf", tfi("fprintf"), 0);
            insert(global, "fscanf", tfi("fscanf"), 0);
        }

        if (stdlibflg){
            insert(global, "malloc", tfi("malloc"), 0);
            insert(global, "realloc", tfi("realloc"), 0);
            insert(global, "free", tfi("free"), 0);
            insert(global, "rand", tfi("rand"), 0);
        }

        if (stringflg){
            insert(global, "strlen", tfi("strlen"), 0);
            insert(global, "strcpy", tfi("strcpy"), 0);
            insert(global, "strcmp", tfi("strcmp"), 0);
            insert(global, "strtok", tfi("strtok"), 0);
        }

        if (mathflg){
            insert(global, "sqrt", tfi("sqrt"), 0);
            insert(global, "cos", tfi("cos"), 0);
            insert(global, "pow", tfi("pow"), 0);
            insert(global, "sin", tfi("sin"), 0);
        }
    }

    if (t->label == struct_or_union_specifier_st_id_lc_st_rc){
        char* name = t->kids[1]->kids[0]->leaf->text;

        current = mksymtab(current, name);
        typeptr typ = alctype(STRUCT_TYPE);
        typ->u.s.label = name;
        typ->u.s.st = current;
        typ->u.s.nfields = structcountfields(t->kids[2]);
        typ->u.s.f = fieldsprocessing(t->kids[2]);

        struct field *tfv = typ->u.s.f;

        while (tfv != NULL){
            insert(current, tfv->name, tfv->elemtype, 0);
            tfv = tfv->next;
        }

        insert(global, name, typ, 0);

    }

    if ( t->label == struct_or_union_specifier_st_id){
        char* name = t->kids[1]->kids[0]->leaf->text;
        current = mksymtab(current, t->kids[1]->kids[0]->leaf->text);
        typeptr typ = alctype(STRUCT_TYPE);
        typ->u.s.label = name;
        typ->u.s.st = current;
        typ->u.s.nfields = 0;
        insert(global, name, typ, 0);
    }

    //Generic delcaration for any variable
    if (!strcmp(t->symbolname, "declaration")&& t->nkids >= 2){
        struct tree* tmp = findleftleaf(t);
        char *typename = tmp->leaf->text;
        //If the type declarator is a pointer do this

        if (t->kids[1]->kids[0]->label == declarator_po_di){
            char *typenameptr = calloc(1, strlen(typename) + 2);
            strncpy(typenameptr, typename, strlen(typename));
            //Is an array
            if (t->kids[1]->kids[0]->kids[0]->label == direct_declarator_di_lb_rb || t->kids[1]->kids[0]->kids[0]->label == direct_declarator_di_lb_co_rb){
                typeptr type = alctype(POINTER_TYPE);
                type->u.p.elemtype = alctype(ARRAY_TYPE);
                type->u.p.elemtype->u.a.elemtype = findleftleaf(t)->type;
                type->u.p.elemtype->u.a.size = findrightleaf(t)->leaf->ival;
                
                char* name = findleftleaf(findrightlabel(t, 1070))->leaf->text;

                insert(current, name, type, 0);
            //Is function prototype
            } else if ((!strcmp(t->kids[1]->kids[0]->kids[1]->kids[0]->symbolname, "direct_declarator" ) && t->kids[1]->kids[0]->kids[0]->nkids != 4)){
                insert(global, t->kids[1]->kids[0]->kids[1]->kids[0]->kids[0]->kids[0]->leaf->sval,
                    alcfunctype(t->kids[0], t->kids[1], current), 1);

                btfp(t);
            } else {
                insert(current, t->kids[1]->kids[0]->kids[1]->kids[0]->kids[0]->leaf->sval,
                    typefromstring(strcat(strdup(typenameptr), "*")), 0);
            }

        } else if (t->kids[1]->kids[0]->label == declarator_di) {
            //Is an array
            if (t->kids[1]->kids[0]->kids[0]->label == direct_declarator_di_lb_rb || t->kids[1]->kids[0]->kids[0]->label == direct_declarator_di_lb_co_rb){
                typeptr type = alctype(ARRAY_TYPE);
                type->u.a.elemtype = findleftleaf(t)->type;
                type->u.a.size = findrightleaf(t)->leaf->ival;
                
                char* name = findleftleaf(findrightlabel(t, 1070))->leaf->text;

                insert(current, name, type, 0);
            //Is function prototype
            } else if ((!strcmp(t->kids[1]->kids[0]->kids[0]->kids[0]->symbolname, "direct_declarator") && t->kids[1]->kids[0]->kids[0]->nkids != 4)) {
                insert(global, t->kids[1]->kids[0]->kids[0]->kids[0]->kids[0]->kids[0]->leaf->sval,
                        alcfunctype(t->kids[0], t->kids[1], current), 1);
                btfp(t);
            } else {
                insert(current, t->kids[1]->kids[0]->kids[0]->kids[0]->kids[0]->leaf->sval,
                        typefromstring(typename), 0);
            }
        }
    }

    // If the item is a declarator of some sort add it to the local symbol table
    if (!strcmp(t->symbolname, "function_definition")){
        char *typename = (char *)t->kids[0]->kids[0]->kids[0]->leaf->text;

        if (!strcmp(t->kids[1]->kids[0]->symbolname, "pointer")){
            char *typenameptr = calloc(1, strlen(typename) + 2);
            strncpy(typenameptr, typename, strlen(typename));

            current = mksymtab(current, t->kids[1]->kids[1]->kids[0]->kids[0]->kids[0]->leaf->sval);
            insert(global, t->kids[1]->kids[1]->kids[0]->kids[0]->kids[0]->leaf->sval,
                    alcfunctype(t->kids[0], t->kids[1], current), 0);
        } else {
            current = mksymtab(current, t->kids[1]->kids[0]->kids[0]->kids[0]->kids[0]->leaf->sval);
            insert(global, t->kids[1]->kids[0]->kids[0]->kids[0]->kids[0]->leaf->sval,
                    alcfunctype(t->kids[0], t->kids[1], current), 0);
        }
        alcfunctype(t->kids[0], t->kids[1], current);

        if (t->kids[1]->kids[0]->label == 1076){
            struct param *insertlist = paramProcessing(findrightlabel(t->kids[1], 1085));

            while (insertlist != NULL){
                insert(current, insertlist->name, insertlist->type, 0);
                insertlist = insertlist->next;
            }
        }
    }

    /*
    if (!strcmp(t->symbolname, "parameter_declaration")){
        char *typename = (char *)t->kids[0]->kids[0]->kids[0]->leaf->text;
        //Don't put parameter's from function declarations in the global scope.
        if (strcmp(current->scopeName, "global")){
            if (!strcmp(t->kids[1]->kids[0]->symbolname, "pointer")){
                char *typenameptr = calloc(1, strlen(typename) + 2);
                strncpy(typenameptr, typename, strlen(typename));

                insert(current, t->kids[1]->kids[1]->kids[0]->kids[0]->leaf->sval,
                    typefromstring(strcat(typenameptr, "*")), 0);
            } else {
                insert(current, t->kids[1]->kids[0]->kids[0]->kids[0]->leaf->sval,
                    typefromstring(typename), 0);
            }
        }

    }*/

    // Function call w/ parameters
    // Find the name and look it up in global symboltable, return type
    // Find parameters and their types
    // Compare
    // ????
    // Profit
    if (t->label == 1202){ //Find #define
        struct tree *nametree = findleftleaf(t);
        struct tree *paramtree = t->kids[1];

        char *name = nametree->leaf->sval;
        typeptr type = gettype(global, name);

        if (type->u.f.nparams != countcallparams(paramtree)){
            fprintf(stderr, "Call %s does not match with definition (Mismatched parameter count)\n", name);
            exit(SYNERR);
        } else {
            paramlist parmlist = buildcallparameters(t->kids[1]);
            compareParams(type->u.f.parameters, parmlist);
        }
    //Function call without parameters
    // Find the name and look it up in global symboltable, return type
    // Compare
    } else if (t->label == 1201){ // Find #define

    }

    // If the item is a primary expression, but not a constant "123", 'j', "2.2", or "abc"
    // Check the local and global symbol table for it. If it is not in either throw an error.
    if (!strcmp(t->symbolname, "primary_expression")){
        if (
        t->kids[0] != NULL &&
        !checktable(current, t->kids[0]->leaf->sval) &&
        t->kids[0]->leaf->category != ICON &&
        t->kids[0]->leaf->category != CCON &&
        t->kids[0]->leaf->category != FCON &&
        t->kids[0]->leaf->category != STRING
        ){
            if (!checktable(global, t->kids[0]->leaf->sval) &&
            t->kids[0]->leaf->category != ICON &&
            t->kids[0]->leaf->category != CCON &&
            t->kids[0]->leaf->category != FCON &&
            t->kids[0]->leaf->category != STRING){

                fprintf(stderr, "In scope '%s' '%s' used before defined! \n", current->scopeName, t->kids[0]->leaf->sval);
                exit(SYNERR);
            }
        }
    }
}

void assignBaseType(struct tree *t)
{
    if(t->leaf != NULL){
        if (t->leaf->category == ICON || t->leaf->category == INT){
            t->type = alctype(INT_TYPE);
            return;
        } else if(t->leaf->category == FCON || t->leaf->category == FLOAT){
            t->type = alctype(FLOAT_TYPE);
            return;
        } else if (t->leaf->category == CCON || t->leaf->category == CHAR){
            t->type = alctype(CHAR_TYPE);
            return;
        } else if (t->leaf->category == VOID){
            t->type = alctype(NULL_TYPE);
            return;
        } else if (t->leaf->category == STRUCT){
            t->type = alctype(STRUCT_TYPE);
            return;
        } else if (t->leaf->category == MUL){
            t->type = alctype(POINTER_TYPE);
            return;
        } else if (t->leaf->category == STRING){
            t->type = alctype(POINTER_TYPE);
            t->type->u.p.elemtype = alctype(CHAR_TYPE);
            return;
        } else if (t->leaf->category == IDENTIFIER){
            t->type = gettypeall(t->leaf->text);
            return;
        }

    } else {
        if (t->kids[0]->type != NULL){
            t->type = t->kids[0]->type;
            return;
        }
    }
}

void typeCheck(struct tree *t)
{
    if (t->label == 1051 || t->label == 1153){
        t->type = opcheck(ASN, t->kids[0]->type, t->kids[2]->type);
    } else if (t->label == 1179){
        t->type = opcheck(PLUS, t->kids[0]->type, t->kids[2]->type);
    } else if (t->label == 1183){
        t->type = opcheck(DIV, t->kids[0]->type, t->kids[2]->type);
    } else if (t->label == 1182){
        t->type = opcheck(MUL, t->kids[0]->type, t->kids[2]->type);
    } else if (t->label == 1171){
        t->type = opcheck(LT, t->kids[0]->type, t->kids[2]->type);
    } else if (t->label == 1172){
        t->type = opcheck(GT, t->kids[0]->type, t->kids[2]->type);
    } else if (t->label == 1158){
        t->type = opcheck(OROR, t->kids[0]->type, t->kids[2]->type);
    } else if (t->label == 1160){
        t->type = opcheck(ANDAND, t->kids[0]->type, t->kids[2]->type);
    } else if (t->nkids == 1){
        t->type = t->kids[0]->type;
    }
}


char* opname(int operator)
{
    switch(operator){
        case ASN:
            return "=";
        case PLUS:
            return "+";
        case MUL:
             return "*";
        case MINUS:
            return "-";
        case DIV:
            return "/";
        case DOT:
            return ".";
        case LB:
            return "[]";
        case LT:
            return "<";
        case GT:
            return ">";
        case ANDAND:
            return "&&";
        case OROR:
            return "||";
        case NOT:
            return "!";
        default:
            return "INVALID OP";
    }
}

void printtypeerror(int operator, typeptr o1, typeptr o2)
{
    fprintf(stderr, "types are incompatable '%s' and '%s' for operation '%s'\n", typename(o1), typename(o2), opname(operator));
    exit(SEMERR);
}

//returns the type the parent should be (e.g. int / float -> float)
typeptr opcheck(int operator, typeptr o1, typeptr o2)
{
    switch(operator){
        case ASN:
            if (o2->basetype == FUNC_TYPE){
                o2 = o2->u.f.returntype;
            }

            if(o1->basetype != o2->basetype){
                printtypeerror(ASN, o1, o2);
            }
            break;
        case PLUS:
            if (o1->basetype == FUNC_TYPE){
                o1 = o1->u.f.returntype;
            }

            if (o2->basetype == FUNC_TYPE){
                o2 = o2->u.f.returntype;
            }

            if((o1->basetype == FLOAT_TYPE && o2->basetype == INT_TYPE) || (o1->basetype == INT_TYPE && o2->basetype == FLOAT_TYPE)){
                return alctype(FLOAT_TYPE);
            } else if(o1->basetype != o2->basetype){
                printtypeerror(PLUS, o1, o2);
            } else {
                return alctype(o1->basetype);
            }
            break;
        case MUL:
            if (o1->basetype == FUNC_TYPE){
                o1 = o1->u.f.returntype;
            }

            if (o2->basetype == FUNC_TYPE){
                o2 = o2->u.f.returntype;
            }
            if((o1->basetype == FLOAT_TYPE && o2->basetype == INT_TYPE) || (o1->basetype == INT_TYPE && o2->basetype == FLOAT_TYPE)){
                return alctype(FLOAT_TYPE);
            } else if(o1->basetype != o2->basetype){
                printtypeerror(MUL, o1, o2);
            } else {
                return alctype(o1->basetype);
            }
            break;
        case MINUS:
            if (o1->basetype == FUNC_TYPE){
                o1 = o1->u.f.returntype;
            }

            if (o2->basetype == FUNC_TYPE){
                o2 = o2->u.f.returntype;
            }


            if((o1->basetype == FLOAT_TYPE && o2->basetype == INT_TYPE) || (o1->basetype == INT_TYPE && o2->basetype == FLOAT_TYPE)){
                return alctype(FLOAT_TYPE);
            } else if(o1->basetype != o2->basetype){
                printtypeerror(MINUS, o1, o2);
            } else {
                return alctype(o1->basetype);
            }
            break;
        case DIV:
            if (o1->basetype == FUNC_TYPE){
                o1 = o1->u.f.returntype;
            }

            if (o2->basetype == FUNC_TYPE){
                o2 = o2->u.f.returntype;
            }

            if((o1->basetype == FLOAT_TYPE && o2->basetype == INT_TYPE) || (o1->basetype == INT_TYPE && o2->basetype == FLOAT_TYPE)){
                return alctype(FLOAT_TYPE);
            } else if(o1->basetype != o2->basetype){
                printtypeerror(DIV, o1, o2);
            } else {
                return alctype(o1->basetype);
            }
            break;
        case DOT:
            if (o2->basetype == FUNC_TYPE){
                o2 = o2->u.f.returntype;
            }

            if(o1->basetype != o2->basetype){
                printtypeerror(DOT, o1, o2);
            } else {
                return alctype(o2->basetype);
            }
            break;
        case LB:
            if (o2->basetype == FUNC_TYPE){
                o2 = o2->u.f.returntype;
            }

            if(o2->basetype != INT_TYPE){
                fprintf(stderr, "Array index must be an integer");
                exit(SEMERR);
            } else {
                return alctype(ARRAY_TYPE);
            }
            break;
        case LT:
            if (o2->basetype == FUNC_TYPE){
                o2 = o2->u.f.returntype;
            }

            if(o1->basetype != o2->basetype){
                printtypeerror(LT, o1, o2);
            } else {
                return alctype(INT_TYPE);
            }
            break;
        case GT:
            if (o2->basetype == FUNC_TYPE){
                o2 = o2->u.f.returntype;
            }

            if(o1->basetype != o2->basetype){
                printtypeerror(GT, o1, o2);
            } else {
                return alctype(INT_TYPE);
            }
            break;
        case ANDAND:
            if (o2->basetype == FUNC_TYPE){
                o2 = o2->u.f.returntype;
            }

            if(o1->basetype != o2->basetype){
                printtypeerror(ANDAND, o1, o2);
            }
            break;
        case OROR:
            if (o2->basetype == FUNC_TYPE){
                o2 = o2->u.f.returntype;
            }

            if(o1->basetype != o2->basetype){
                printtypeerror(OROR, o1, o2);
            } else {
                return alctype(INT_TYPE);
            }
            break;
        case NOT:
            if (o2->basetype == FUNC_TYPE){
                o2 = o2->u.f.returntype;
            }

            if(o2->basetype != INT_TYPE){
                fprintf(stderr, "Not recognized as valid boolean expression");
                exit(SEMERR);
            } else {
                return alctype(INT_TYPE);
            }
            break;
    }
    return NULL;
}

typeptr typefromstring(char *str)
{
    typeptr tmp = NULL;
    if(!strcmp(str, "int")){
        return alctype(INT_TYPE);
    } else if(!strcmp(str, "char")){
        return alctype(CHAR_TYPE);
    } else if(!strcmp(str, "float")){
        return alctype(FLOAT_TYPE);
    } else if(!strcmp(str, "void")){
        return alctype(NULL_TYPE);
    } else if(!strcmp(str, "char*")){
        tmp = alctype(POINTER_TYPE);
        tmp->u.p.elemtype = alctype(CHAR_TYPE);
        return tmp;
    } else if(!strcmp(str, "int*")){
        tmp = alctype(POINTER_TYPE);
        tmp->u.p.elemtype = alctype(INT_TYPE);
        return tmp;
    } else if(!strcmp(str, "float*")){
        tmp = alctype(POINTER_TYPE);
        tmp->u.p.elemtype = alctype(FLOAT_TYPE);
        return tmp;
    } else if(!strcmp(str, "void*")){
        tmp = alctype(POINTER_TYPE);
        tmp->u.p.elemtype = alctype(POINTER_TYPE);
        return tmp;
    }
    return NULL;
}

void printsyms(struct tree *t)
{

    if (t->leaf != NULL){
        debugSymbol(t->symbolname, t->leaf->text);
    } else {
        debugSymbol(t->symbolname, "empty");
    }
}

void printsymbol(char *s)
{
    printf("Symbol: %s\n", s); fflush(stdout);
}

/**
Code from Dr.j needs to be adapted from his implementation to mine.
*/
int j;

char *escape(char *s)
{
    char *s2 = malloc(strlen(s)+4);
    s = strdup(s);
    if (s[0] == '\"') {
        if (s[strlen(s)-1] != '\"') {
        fprintf(stderr, "What is it?!\n");
    }
        s[strlen(s)-1] = '\0'; // chop off trailing double quote
        sprintf(s2, "\\%s\\\"", s);
        return s2;
    }
    else{
        return s;
    }
}

char *pretty_print_name(struct tree *t)
{
    char *s2 = malloc(40);
    if (t->leaf == NULL) {
        sprintf(s2, "%s#%d", t->symbolname, t->label);
        return s2;
    }
    else {
        sprintf(s2,"%s:%d", escape(t->leaf->text), t->leaf->category);
        return s2;
    }
}
/*supposed to be internal node*/
void print_branch(struct tree *t, FILE *f)
{
    if (t->type != NULL){
        fprintf(f, "N%d [shape=box label=\"%s\n%s\"];\n", t->id, pretty_print_name(t), typename(t->type));
    } else {
        fprintf(f, "N%d [shape=box label=\"%s\"];\n", t->id, pretty_print_name(t));
    }
}

/*supposed to be only for leaf nodes*/
/*Probably only need one*/
void print_leaf(struct tree *t, FILE *f)
{
    char *s = getname(t->leaf->category);
    print_branch(t, f);
    fprintf(f, "N%d [shape=box style=dotted label=\" %s \\n ", t->id, s);
    fprintf(f, "text = %s \\l lineno = %d \\l\"];\n", escape(t->leaf->text),
    t->leaf->lineno);
}

void print_graph2(struct tree *t, FILE *f)
{
    int i, j;
    if (t->leaf != NULL) {
        print_leaf(t, f);
        return;
    }
    /* not a leaf ==> internal node */
    print_branch(t, f);
    for(i=0; i < t->nkids; i++) {
        if (t->kids[i] != NULL) {
            fprintf(f, "N%d -> N%d;\n", t->id, t->kids[i]->id);
            print_graph2(t->kids[i], f);
        } else { /* NULL kid, epsilon production or something */
            fprintf(f, "N%d -> N%d%d;\n", t->id, t->kids[i]->id, j);
            fprintf(f, "N%d%d [label=\"%s\"];\n", t->id, j, "Empty rule");
            j++;
        }
    }
}

void print_graph(struct tree *t, char *filename)
{
    FILE *f = fopen(filename, "w"); /* should check for NULL */
    fprintf(f, "digraph {\n");
    j = 0;
    print_graph2(t, f);
    fprintf(f,"}\n");
    fclose(f);
}
//End Dr. J's code
struct tree* findleftleaf(struct tree *t)
{
    if (t == NULL) {
        return NULL;
    }
    struct tree* ret = NULL;
    if (t->leaf == NULL){
        ret = findleftleaf(t->kids[0]);
    } else {
        ret = t;
    }
    return ret;
}

struct tree* findrightleaf(struct tree *t)
{
    struct tree* ret = NULL;
    if (t->nkids != 0){
        ret = findrightleaf(t->kids[t->nkids - 1]);
    } else {
        return t;
    }
    return ret;
}

struct tree* findleftlabel(struct tree *t, int label)
{
    struct tree* ret = NULL;
    if (t->label != label){
        ret = findleftlabel(t->kids[0], label);
    } else {
        return t;
    }
    return ret;
}

struct tree* findrightlabel(struct tree *t, int label)
{
    struct tree* ret = NULL;
    if (t == NULL) {
        return NULL;
    }

    if (t->label != label){
        ret = findrightlabel(t->kids[t->nkids - 1], label);
    } else {
        return t;
    }
    return ret;
}

int structcountfields(struct tree *t)
{
    int ret = 0;
    if (t == NULL){
        return 0;
    }

    while (t != NULL && t->label != 1046){
        if (t->label == 1047){
            ret++;
        }
        if (t != NULL){
            t = t->kids[0];
        } 
    }

    if (t->label == 1046){
        ret++;
    }
    return ret;
}

struct field *fieldsprocessing(struct tree *t)
{
    if (t->label == 1046){
        t = t->kids[0];
    }

    if (t->label == 1053){
        
        struct field *tmp = calloc(1, sizeof(struct field));
        
        struct tree *tmptree = findleftleaf(t);
        char *typename = tmptree->leaf->text;

        tmptree = findrightleaf(t);
        tmp->name = tmptree->leaf->text;
        if (t->kids[1]->label == declarator_po_di){
            if (!strcmp(typename, "int")){
                tmp->elemtype = alctype(POINTER_TYPE);
                tmp->elemtype->u.p.elemtype = alctype(INT_TYPE);
            } else if (!strcmp(typename, "char")){
                tmp->elemtype = alctype(POINTER_TYPE);
                tmp->elemtype->u.p.elemtype = alctype(CHAR_TYPE);
            } else if (!strcmp(typename, "float")){
                tmp->elemtype = alctype(POINTER_TYPE);
                tmp->elemtype->u.p.elemtype = alctype(FLOAT_TYPE);
            } else if (!strcmp(typename, "void")){
                tmp->elemtype = alctype(POINTER_TYPE);
                tmp->elemtype->u.p.elemtype = alctype(NULL_TYPE);
            }
        } else {
            if (!strcmp(typename, "int")){
                tmp->elemtype = alctype(INT_TYPE);
            } else if (!strcmp(typename, "char")){
                tmp->elemtype = alctype(CHAR_TYPE);
            } else if (!strcmp(typename, "float")){
                tmp->elemtype = alctype(FLOAT_TYPE);
            } else if (!strcmp(typename, "void")){
                tmp->elemtype = alctype(NULL_TYPE);
            }
        }

        return tmp;
    } else if (t->label == 1047){
        struct field * lhs = fieldsprocessing(t->kids[0]);
        struct field * rhs = fieldsprocessing(t->kids[1]);

        struct field * tmp2 = lhs;

        while(tmp2->next != NULL){
            tmp2 = tmp2->next;
        }
        tmp2->next = rhs;
        return lhs;
    }

    return NULL;
}

char * getname(int i)
{
    switch (i){
        case 258:
            return "bad_token";
        case 259:
            return "icon";
        case 260:
            return "ccon";
        case 261:
            return "fcon";
        case 262:
            return "enumeration_constant";
        case 263:
            return "identifier";
        case 264:
            return "string";
        case 265:
            return "sizeof";
        case 266:
            return "incop";
        case 267:
            return "decop";
        case 268:
            return "shl";
        case 269:
            return "shr";
        case 270:
            return "le";
        case 271:
            return "ge";
        case 272:
            return "eq";
        case 273:
            return "ne";
        case 274:
            return "andand";
        case 275:
            return "oror";
        case 276:
            return "muasn";
        case 277:
            return "diasn";
        case 278:
            return "moasn";
        case 279:
            return "plasn";
        case 280:
            return "asn";
        case 281:
            return "miasn";
        case 282:
            return "slasn";
        case 283:
            return "srasn";
        case 284:
            return "anasn";
        case 285:
            return "erasn";
        case 286:
            return "orasn";
        case 287:
            return "typedef_name";
        case 288:
            return "cm";
        case 289:
            return "sm";
        case 290:
            return "lt";
        case 291:
            return "gt";
        case 292:
            return "plus";
        case 293:
            return "minus";
        case 294:
            return "mul";
        case 295:
            return "div";
        case 296:
            return "mod";
        case 297:
            return "lp";
        case 298:
            return "rp";
        case 299:
            return "lb";
        case 300:
            return "rb";
        case 301:
            return "lc";
        case 302:
            return "rc";
        case 303:
            return "colon";
        case 304:
            return "quest";
        case 305:
            return "and";
        case 306:
            return "or";
        case 307:
            return "er";
        case 308:
            return "not";
        case 309:
            return "follow";
        case 310:
            return "bang";
        case 311:
            return "dot";
        case 312:
            return "typedef";
        case 313:
            return "extern";
        case 314:
            return "static";
        case 315:
            return "auto";
        case 316:
            return "register";
        case 317:
            return "char";
        case 318:
            return "short";
        case 319:
            return "int";
        case 320:
            return "long";
        case 321:
            return "signed";
        case 322:
            return "unsigned";
        case 323:
            return "float";
        case 324:
            return "double";
        case 325:
            return "const";
        case 326:
            return "volatile";
        case 327:
            return "void";
        case 328:
            return "struct";
        case 329:
            return "union";
        case 330:
            return "enum";
        case 331:
            return "elipsis";
        case 332:
            return "case";
        case 333:
            return "default";
        case 334:
            return "if";
        case 335:
            return "switch";
        case 336:
            return "while";
        case 337:
            return "do";
        case 338:
            return "for";
        case 339:
            return "goto";
        case 340:
            return "continue";
        case 341:
            return "break";
        case 342:
            return "return";
        case 343:
            return "then";
        case 344:
            return "else";
        default:
            return "unrecognized";
   }
   return "Not found";
}