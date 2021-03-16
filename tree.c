#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h> 
#include "tree.h"
#include "ytab.h"
#include "cgram.tab.h"
#include "symtab.h"

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
   	yylval.treeptr->label = category;
	yylval.treeptr->symbolname = "";
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
    int i = 0;
    while(tr->kids[i] != NULL){
        visit(tr->kids[i]);
        i++;
    }
    visit(tr);

}

void preTrav(struct tree *tr, void (*visit)(struct tree *))
{
    int i = 0;
    visit(tr);
    while(tr->kids[i] != NULL)
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
        current = mksymtab(current, "global");
        if (stdioflg){
            current = mksymtab(current, "stdio.h");
            insert(current, "printf");
            insert(current, "sprintf");
            insert(current, "fopen");
            insert(current, "fclose");
            insert(current, "fprintf");
            insert(current, "fscanf");
        }

        if (stdlibflg){
            current = mksymtab(current, "stdlib.h");
            insert(current, "malloc");
            insert(current, "realloc");
            insert(current, "free");
            insert(current, "rand");

        }
        
        if (stringflg){
            current = mksymtab(current, "string.h");
            insert(current, "stringlen");
            insert(current, "strcpy");
            insert(current, "strcmp");
            insert(current, "strtok");
            
        }
        
        if (mathflg){
            current = mksymtab(current, "math.h");
            insert(current, "sqrt");
            insert(current, "cos");
            insert(current, "pow");
            insert(current, "sin");

        }
    }

    if (!strcmp(t->symbolname, "direct_function_declarator")){
        current = mksymtab(current, t->kids[0]->kids[0]->kids[0]->leaf->sval);
    }

    if (!strcmp(t->symbolname, "struct_or_union_specifier")){
        current = mksymtab(current, "struct");
        end = t->kids[4]->id;
    }

    //if (t->id == end){
    //    current = current->parent;
    //}

    if (!strcmp(t->symbolname, "identifier")){
        insert(current, t->kids[0]->leaf->sval);
    }

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
   fprintf(f, "N%d [shape=box label=\"%s\"];\n", t->id, pretty_print_name(t));
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