#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "type.h"
#include "ytab.h"
#include "symtab.h"
#include "prodrule.h"
#include "cgram.tab.h"
#include "errdef.h"

extern SymbolTable  current;
extern SymbolTable  global;


struct typeinfo null_type = { NULL_TYPE };
struct typeinfo integer_type = { INT_TYPE };
struct typeinfo float_type = { FLOAT_TYPE };
struct typeinfo charptr_type = { POINTER_TYPE };
struct typeinfo char_type = { CHAR_TYPE }; /* initialize later, e.g in alctype */


typeptr null_typeptr = &null_type;
typeptr integer_typeptr = &integer_type;
typeptr float_typeptr = &float_type;
typeptr string_typeptr = &charptr_type;
typeptr char_typeptr = &char_type;

void printdebug(typeptr r);
void printparam(struct param *p);

char *typenam[] =
   {"void", "int", "struct", "array", "float", "func", "pointer", "char", "any"};

typeptr alctype(int base)
{
    typeptr ret;
    ret = (typeptr) calloc(1, sizeof(struct typeinfo));
    if (ret == NULL) {
        fprintf(stderr, "Type failed to malloc");
        exit(MALERR);
    }

    if (base == NULL_TYPE) return null_typeptr;
    else if (base == INT_TYPE) return integer_typeptr;
    else if (base == FLOAT_TYPE) return float_typeptr;
    else if (base == POINTER_TYPE) {
        ret->basetype = POINTER_TYPE;
        ret->u.p.elemtype = calloc(1, sizeof(typeptr));
        return ret;
    }
    else if (base == STRUCT_TYPE) {
        ret->basetype = STRUCT_TYPE;
        ret->u.s.label = "";
        ret->u.s.nfields = 0;
        ret->u.s.f = NULL;
        ret->u.s.st = current;
        return ret;
    }
    else if (base == ARRAY_TYPE) {
        ret->basetype = ARRAY_TYPE;
        ret->u.a.size = 0;
        ret->u.a.elemtype = calloc(1, sizeof(typeptr));;
        return ret;
    }
    else if (base == FUNC_TYPE) {
        ret->basetype = FUNC_TYPE;
        ret->u.f.name = "";
        ret->u.f.st = current;
        ret->u.f.returntype = calloc(1, sizeof(typeptr));
        ret->u.f.nparams = 0;
        ret->u.f.parameters = calloc(1, sizeof(typeptr));
        return ret;
    }

    ret->basetype = base;
    return ret;
}

typeptr alcarray(typeptr etype, struct tree *t)
{
   typeptr ret = alctype(ARRAY_TYPE);
   ret->u.a.elemtype = etype;
   if (t != NULL && t->nkids==0 && t->leaf->category==ICON) {
      ret->u.a.size = t->leaf->ival;
      }
   else {
      ret->u.a.size = 0;
   }

   return ret;
}

typeptr alcstructtype()
{
   typeptr ret = alctype(STRUCT_TYPE);
   /* who initializes the fields, someone else I guess, later on */
   return ret;
}

/* in order for this to make any sense, you have to pass in the subtrees
 * for the return type (r) and the parameter list (p), but the calls to
 * to this function in the example are just passing NULL at present!
 */
typeptr alcfunctype(struct tree *retu, struct tree *par, SymbolTable st)
{
    typeptr ret = alctype(FUNC_TYPE);
    if (ret == NULL) return NULL;
    ret->u.f.st = st;
    /* fill in return type and paramlist by traversing subtrees */
    struct tree *nametree = findleftleaf(findrightlabel(par, direct_declarator_di_lp_pa_rp));
    if (nametree == NULL){
        nametree = findleftleaf(findrightlabel(par, direct_function_declarator_di_lp_rp));
    }
    if (nametree == NULL){
        nametree = findleftleaf(findrightlabel(par, direct_function_declarator_di_lp_pa_rp));
    }
    if (nametree == NULL){
        nametree = findleftleaf(findrightlabel(par, direct_declarator_di_lp_rp));
    }
    ret->u.f.name = nametree->leaf->text;

    
    if(!strcmp(findleftleaf(retu)->leaf->text, "int")){
        ret->u.f.returntype = alctype(INT_TYPE);
    } else if(!strcmp(findleftleaf(retu)->leaf->text, "char")){
        ret->u.f.returntype = alctype(CHAR_TYPE);            
    } else if(!strcmp(findleftleaf(retu)->leaf->text, "float")){
        ret->u.f.returntype = alctype(FLOAT_TYPE);
    } else if(!strcmp(findleftleaf(retu)->leaf->text, "double")){
        ret->u.f.returntype = alctype(FLOAT_TYPE);    
    } else if(!strcmp(findleftleaf(retu)->leaf->text, "void")){
        ret->u.f.returntype = alctype(NULL_TYPE);
    } else if(!strcmp(findleftleaf(retu)->leaf->text, "struct")){
        ret->u.f.returntype = alctype(STRUCT_TYPE);
    }

    struct tree *pointerchecker = findleftleaf(par);
    if (pointerchecker->leaf->category == 294){
        switch(ret->u.f.returntype->basetype){
            case NULL_TYPE:
                ret->u.f.returntype = alctype(POINTER_TYPE);
                ret->u.f.returntype->u.p.elemtype = alctype(NULL_TYPE);
            break;
            case INT_TYPE:
                ret->u.f.returntype = alctype(POINTER_TYPE);
                ret->u.f.returntype->u.p.elemtype = alctype(INT_TYPE);
            break;
            case FLOAT_TYPE:
                ret->u.f.returntype = alctype(POINTER_TYPE);
                ret->u.f.returntype->u.p.elemtype = alctype(FLOAT_TYPE);            
            break;
            case CHAR_TYPE:
                ret->u.f.returntype = alctype(POINTER_TYPE);
                ret->u.f.returntype->u.p.elemtype = alctype(CHAR_TYPE);
            break;

        }
    }

    ret->u.f.nparams = countParams(par);
    //printf("Parameters: %d\n", ret->u.f.nparams);

    if (ret->u.f.nparams != 0){
        ret->u.f.parameters = paramProcessing(findrightlabel(par, parameter_type_list_pa)->kids[0]);
    } else {
        free(ret->u.f.parameters);
        ret->u.f.parameters = NULL;
    }

    //printdebug(ret);

    return ret;
}

/**
 * This function will be called from alcfunctype type with the par tree. 
 * Function prototype with parameters from btfp -> 1050 -> 1066 -> parameter_type_list_pa -> get params
 * Function definition with parameters. -> 1074 (function_declarator_po_di) -> parameter_type_list_pa -> 1085 -> get params
 * This should be getting the start of the paramlist 1085
 */ 

struct param *paramProcessing(struct tree* t)
{
    if (t->label == parameter_type_list_pa){
        t = t->kids[0];
    }
    if (t->label == parameter_list_pa){
        t = t->kids[0];
    }

    struct param * ret = NULL;
    if (t->label == parameter_declaration_de_de){
        
        struct param * tmp = calloc(1, sizeof(struct param));
        
        struct tree *tmptree = findleftleaf(t);
        char *typename = tmptree->leaf->text;

        tmptree = findrightleaf(t);
        tmp->name = tmptree->leaf->text;

        if (t->kids[1]->label == declarator_po_di){
            if (!strcmp(typename, "int")){
                tmp->type = alctype(POINTER_TYPE);
                tmp->type->u.p.elemtype = alctype(INT_TYPE);
            } else if (!strcmp(typename, "char")){
                tmp->type = alctype(POINTER_TYPE);
                tmp->type->u.p.elemtype = alctype(CHAR_TYPE);
            } else if (!strcmp(typename, "float")){
                tmp->type = alctype(POINTER_TYPE);
                tmp->type->u.p.elemtype = alctype(FLOAT_TYPE);
            } else if (!strcmp(typename, "double")){
                tmp->type = alctype(POINTER_TYPE);
                tmp->type->u.p.elemtype = alctype(FLOAT_TYPE);
            } else if (!strcmp(typename, "void")){
                tmp->type = alctype(POINTER_TYPE);
                tmp->type->u.p.elemtype = alctype(NULL_TYPE);
            } else if (!strcmp(typename, "struct")){
                tmp->type = alctype(POINTER_TYPE);
                tmp->type->u.p.elemtype = alctype(STRUCT_TYPE);
            }
        } else {
            if (!strcmp(typename, "int")){
                tmp->type = alctype(INT_TYPE);
            } else if (!strcmp(typename, "char")){
                tmp->type = alctype(CHAR_TYPE);
            } else if (!strcmp(typename, "float")){
                tmp->type = alctype(FLOAT_TYPE);
            } else if (!strcmp(typename, "double")){
                tmp->type = alctype(FLOAT_TYPE);
            } else if (!strcmp(typename, "void")){
                tmp->type = alctype(NULL_TYPE);
            } else if (!strcmp(typename, "struct")){
                tmp->type = alctype(STRUCT_TYPE);
            }
        }

        return tmp;
    } else if (t->label == parameter_list_pa_cm_pa){
        struct param * lhs = paramProcessing(t->kids[0]);
        struct param * rhs = paramProcessing(t->kids[2]);

        struct param * tmp2 = lhs;

        while(tmp2->next != NULL){
            tmp2 = tmp2->next;
        }
        tmp2->next = rhs;
        return lhs;
    }

    return ret;
}

paramlist buildcallparameters(struct tree *t)
{
    if (t == NULL){
        return NULL;
    }

    paramlist ret = calloc(1, sizeof(paramlist));

    if (t->label == 1212){
        ret = buildcallparameters(t->kids[0]);
        ret->next = calloc(1, sizeof(paramlist));
        struct tree *nametree = findleftleaf(t->kids[2]);
        ret->next->name = strdup(nametree->leaf->text);
        ret->next->type = gettype(current, ret->next->name);
        if (ret->next->type == NULL){
            switch(findleftleaf(t->kids[2])->label){
                case constant_ic:
                    ret->next->type = alctype(INT_TYPE);
                    break;
                case constant_fc:
                    ret->next->type = alctype(FLOAT_TYPE);
                    break;
                case constant_cc:
                    ret->next->type = alctype(CHAR_TYPE);
                    break;
                case primary_expression_st:
                    ret->next->type = alctype(POINTER_TYPE);
                    ret->next->type->u.p.elemtype = alctype(CHAR_TYPE);
                    break;

            }
        }

    } else if (t->label == 1211){
        struct tree *nametree = findleftleaf(t->kids[0]);
        ret->name = strdup(nametree->leaf->text);
        ret->type = gettype(current, ret->name);
        if (ret->type == NULL){
            switch(findleftleaf(t)->label){
                case constant_ic:
                    ret->type = alctype(INT_TYPE);
                    break;
                case constant_fc:
                    ret->type = alctype(FLOAT_TYPE);
                    break;
                case constant_cc:
                    ret->type = alctype(CHAR_TYPE);
                    break;
                case primary_expression_st:
                    ret->type = alctype(POINTER_TYPE);
                    ret->type->u.p.elemtype = alctype(CHAR_TYPE);
                    break;
            }
        }
    }

    return ret;
}


int countParams(struct tree* t)
{
    int ret = 0;
    if (t == NULL){
        return 0;
    }
            //                          1087                              1085                                1088
    while (t != NULL && t->label != parameter_list_pa && t->label != parameter_type_list_pa && t->label != parameter_list_pa_cm_pa){ 
        if (t->label == declarator_po_di || t->label == function_declarator_po_di ){ // 1067 prototype with pointer return type function_declarator_po_di function with pointer return
            t = t->kids[1];
        }
            //              1071                                                 1076
        if (t->label == direct_declarator_di_lp_pa_rp || t->label == direct_function_declarator_di_lp_pa_rp ){ //  parameter_type_list_pa is for function parameter_type_list_pa is for prototypes
            t = t->kids[1]; 
            //                 1072                                         1077 
        } else if (t->label == direct_declarator_di_lp_rp || t->label == direct_function_declarator_di_lp_rp){ 
            return 0;
        }
        if (t != NULL){
            t = t->kids[0];
        }
    }

    while (t != NULL && t->nkids != 0){
            //              1088                                    1089                                1090
        if (t->label == parameter_list_pa_cm_pa || t->label == parameter_declaration_de_de || t->label == parameter_declaration_de){ 
            ret++;
        }
        if (t != NULL){
            t = t->kids[0];
        }    
    }
    return ret;
}

int countcallparams(struct tree *t)
{
    int ret = 0;
    if (t == NULL){
        return 0;
    }

    while (t != NULL && t->label != 1211){
        if (t->label == 1212){
            ret++;
        }
        if (t != NULL){
            t = t->kids[0];
        } 
    }

    if (t->label == 1211){
        ret++;
    }

    return ret;
}

char *typename(typeptr t)
{
   if (!t) return "(NULL)";
   else if (t->basetype < FIRST_TYPE || t->basetype > LAST_TYPE)
      return "(INVALID TYPE)";
   else return typenam[t->basetype-1000000];
}

char *typenameworkaround(typeptr t)
{
   if (!t) return "(NULL)";
   else if (t->basetype < FIRST_TYPE || t->basetype > LAST_TYPE)
      return "(INVALID TYPE)";
   else return typenam[t->basetype-1000000];
}

/*placeholders for get type*/
#define DONT_KNOW_YET 1

typeptr get_type(int c)
{
    typeptr x = NULL;

    x = alctype(c);
    if (c == FUNC_TYPE){
        x->u.f.parameters = calloc(1, sizeof(struct param));
    }

    return x;
}

/*
 * Build Type From Prototype (syntax tree) Example
 */
void btfp(struct tree *t)
{
    if (t==NULL) 
    {
        return;
    }
    for(int i = 0; i < t->nkids; i++){
        btfp(t->kids[i]);
    }

    switch (t->label) {
        case actual_type_specifier_in:
            t->type = get_type(INT_TYPE);
            break;
        case actual_type_specifier_ch:
            t->type = get_type(CHAR_TYPE);
            break;
        case actual_type_specifier_fl:
            t->type = get_type(FLOAT_TYPE);
            break;            
        case identifier_id:
            t->type = get_type(DONT_KNOW_YET); /*need to look at the parent*/
            break;
        case declaration_specifiers_tysp:
            t->type = get_type(POINTER_TYPE);
            break;
        case parameter_list_pa:
            t->type = t->kids[0]->kids[0]->type;
            break;
        case parameter_list_pa_cm_pa:
            //t->type = clone_type(t->kids[1]->type);
            t->type->u.p.elemtype = t->kids[0]->type;
            break;
        case declaration_de_in_sm:
            t->type = get_type(FUNC_TYPE);
            t->type = alcfunctype(t->kids[0], t->kids[1], current);
            t->type->u.f.returntype = get_type(DONT_KNOW_YET); //We don't know this yet because it will be the value of a parent node
            //t->type->u.f.parameters->type->basetype = t->kids[1]->type->basetype;
            break;
        default:
            //printf("%d\n", t->label);
            ;
            break;
    }
}

/*takes in two trees and compares theyre type, returns 0 if they are the same nonzero for false*/
int comparetype(struct tree *t1, struct tree *t2)
{
    if (t1->type->basetype == FUNC_TYPE || t2->type->basetype == FUNC_TYPE){
        if (t1->type->basetype == t2->type->basetype){
            compareParams(t1->type->u.f.parameters, t2->type->u.f.parameters);
        } else {
            return 1;
        }
    }
    return t1->type->basetype - t2->type->basetype;
}

/**/
void compareParams(struct param *p1, struct param *p2)
{
    while (p1 != NULL && p2 != NULL){
        if (p1->type->basetype == ANY_TYPE || p2->type->basetype == ANY_TYPE){
            p1 = p1->next;
            p2 = p2->next;
            continue;
        } else {
            if (p1->type->basetype != p2->type->basetype){
                if(p1->type->basetype == POINTER_TYPE && p2->type->basetype != POINTER_TYPE){
                    if(p1->type->u.p.elemtype->basetype != p2->type->basetype){
                        fprintf(stderr, "Mismatching parameters on call (mismatching types) %s:%s %s:%s \n", p1->name, typename(p1->type), p2->name, typename(p2->type) );
                        exit(SEMERR);            
                    }
                } else if (p2->type->basetype == POINTER_TYPE && p1->type->basetype != POINTER_TYPE ){
                    if(p1->type->basetype != p2->type->u.p.elemtype->basetype){
                        fprintf(stderr, "Mismatching parameters on call (mismatching types) %s:%s %s:%s \n", p1->name, typename(p1->type), p2->name, typename(p2->type) );
                        exit(SEMERR);            
                    }
                } else if (p2->type->basetype == POINTER_TYPE && p1->type->basetype == POINTER_TYPE ){
                    if(p1->type->u.p.elemtype->basetype != p2->type->u.p.elemtype->basetype){
                        fprintf(stderr, "Mismatching parameters on call (mismatching types) %s:%s %s:%s \n", p1->name, typename(p1->type), p2->name, typename(p2->type) );
                        exit(SEMERR);            
                    }
                }
            }
        }
        p1 = p1->next;
        p2 = p2->next;
    }
}

//Type for includes
typeptr tfi(char *str)
{
    int hashindex = hash(global, str); //Just using the hash for easy switch statement;
    typeptr tmp = NULL;
    typeptr string = typefromstring("char*");
    typeptr voidptr = typefromstring("void*");

    switch(hashindex){
        case 597: ; // printf:
            struct param * p2 = makeparam("var", alctype(ANY_TYPE), NULL);
            struct param * p1 = makeparam("format", string, p2);
            tmp = alctype(FUNC_TYPE);
            tmp->u.f.name = "printf";
            tmp->u.f.returntype = alctype(INT_TYPE);
            tmp->u.f.nparams = 2;
            tmp->u.f.parameters = p1;
        break;
        case 382: ; // sprintf:
        //dont have FILE implemented
            struct param * pa3 = makeparam("...", alctype(INT_TYPE), NULL);
            struct param * pa2 = makeparam("format", string, pa3);
            struct param * pa1 = makeparam("stream", string, pa2);
            tmp = alctype(FUNC_TYPE);
            tmp->u.f.name = "sprintf";
            tmp->u.f.returntype = alctype(INT_TYPE);
            tmp->u.f.nparams = 3;
            tmp->u.f.parameters = pa1;
        break;
        case 496: ; // fopen:
        //dont have FILE implemented
            struct param * pb2 = makeparam("mode", string, NULL);
            struct param * pb1 = makeparam("pathname", string, pb2);
            tmp = alctype(FUNC_TYPE);
            tmp->u.f.name = "fopen";
            tmp->u.f.returntype = string;
            tmp->u.f.nparams = 2;
            tmp->u.f.parameters = pb1;
        break;
        case 376: ; // fclose:
        //dont have FILE implemented
            struct param * pc1 = makeparam("stream", string, NULL);
            tmp = alctype(FUNC_TYPE);
            tmp->u.f.name = "fclose";
            tmp->u.f.returntype = alctype(INT_TYPE);
            tmp->u.f.nparams = 1;
            tmp->u.f.parameters = pc1;
        break;
        case 217: ; // fprintf:
        //dont have FILE implemented
            struct param * pd3 = makeparam("...", alctype(INT_TYPE), NULL);
            struct param * pd2 = makeparam("format", string, pd3);
            struct param * pd1 = makeparam("stream", string, pd2);
            tmp = alctype(FUNC_TYPE);
            tmp->u.f.name = "fprintf";
            tmp->u.f.returntype = alctype(INT_TYPE);
            tmp->u.f.nparams = 3;
            tmp->u.f.parameters = pd1;
        break;
        case 335: ; // fscanf:
        //dont have FILE implemented
            struct param * pe3 = makeparam("...", alctype(INT_TYPE), NULL);
            struct param * pe2 = makeparam("format", string, pe3);
            struct param * pe1 = makeparam("stream", string, pe2);
            tmp = alctype(FUNC_TYPE);
            tmp->u.f.name = "fprintf";
            tmp->u.f.returntype = alctype(INT_TYPE);
            tmp->u.f.nparams = 3;
            tmp->u.f.parameters = pe1;
        break;
        case 232: ; // malloc:
            struct param * pf1 = makeparam("size", alctype(INT_TYPE), NULL);
            tmp = alctype(FUNC_TYPE);
            tmp->u.f.name = "malloc";
            tmp->u.f.returntype = voidptr;
            tmp->u.f.nparams = 1;
            tmp->u.f.parameters = pf1;
            break;
        case 870: ; // realloc:
            struct param * pg2 = makeparam("size", alctype(INT_TYPE), NULL);
            struct param * pg1 = makeparam("ptr", voidptr, pg2);
            tmp = alctype(FUNC_TYPE);
            tmp->u.f.name = "realloc";
            tmp->u.f.returntype = voidptr;
            tmp->u.f.nparams = 2;
            tmp->u.f.parameters = pg1;
            break;
        case 806: ; // free:
            struct param * ph1 = makeparam("ptr", voidptr, NULL);
            tmp = alctype(FUNC_TYPE);
            tmp->u.f.name = "free";
            tmp->u.f.returntype = alctype(NULL_TYPE);
            tmp->u.f.nparams = 1;
            tmp->u.f.parameters = ph1;
        break;
        case 705: ; // rand:
            tmp = alctype(FUNC_TYPE);
            tmp->u.f.name = "rand";
            tmp->u.f.returntype = alctype(INT_TYPE);
            tmp->u.f.nparams = 0;
        break;
        case 160: ; // strlen:
            struct param * pi1 = makeparam("s", string, NULL);
            tmp = alctype(FUNC_TYPE);
            tmp->u.f.name = "strlen";
            tmp->u.f.returntype = alctype(INT_TYPE);
            tmp->u.f.nparams = 1;
            tmp->u.f.parameters = pi1;
        break;
        case 251: ; // strcpy:
            struct param * pj2 = makeparam("src", string, NULL);
            struct param * pj1 = makeparam("dest", string, pj2);
            tmp = alctype(FUNC_TYPE);
            tmp->u.f.name = "strcpy";
            tmp->u.f.returntype = string;
            tmp->u.f.nparams = 2;
            tmp->u.f.parameters = pj1;
        break;
        case 595: ; // strcmp:
            struct param * pk2 = makeparam("s2", string, NULL);
            struct param * pk1 = makeparam("s1", string, pk2);
            tmp = alctype(FUNC_TYPE);
            tmp->u.f.name = "strcmp";
            tmp->u.f.returntype = alctype(INT_TYPE);
            tmp->u.f.nparams = 2;
            tmp->u.f.parameters = pk1;
        break;
        case 173: ; // strtok:
            struct param * pl2 = makeparam("delim", string, NULL);
            struct param * pl1 = makeparam("str", string, pl2);
            tmp = alctype(FUNC_TYPE);
            tmp->u.f.name = "strtok";
            tmp->u.f.returntype = string;
            tmp->u.f.nparams = 2;
            tmp->u.f.parameters = pl1;
        break;
        case 310: ; // sqrt:
            struct param * pm1 = makeparam("x", alctype(FLOAT_TYPE), NULL);
            tmp = alctype(FUNC_TYPE);
            tmp->u.f.name = "sqrt";
            tmp->u.f.returntype = alctype(FLOAT_TYPE);
            tmp->u.f.nparams = 1;
            tmp->u.f.parameters = pm1;
        break;
        case 685: ; // cos:
            struct param *pn1 = makeparam("x", alctype(FLOAT_TYPE), NULL);
            tmp = alctype(FUNC_TYPE);
            tmp->u.f.name = "cos";
            tmp->u.f.returntype = alctype(FLOAT_TYPE);
            tmp->u.f.nparams = 1;
            tmp->u.f.parameters = pn1;
        break;
        case 890: ; // pow:
            struct param * po2 = makeparam("y", alctype(FLOAT_TYPE), NULL);
            struct param * po1 = makeparam("x", alctype(FLOAT_TYPE), po2);
            tmp = alctype(FUNC_TYPE);
            tmp->u.f.name = "pow";
            tmp->u.f.returntype = alctype(FLOAT_TYPE);
            tmp->u.f.nparams = 2;
            tmp->u.f.parameters = po1;
        break;
        case 942: ; // sin
            struct param * pp1 = makeparam("x", alctype(FLOAT_TYPE), NULL);
            tmp = alctype(FUNC_TYPE);
            tmp->u.f.name = "sin";
            tmp->u.f.returntype = alctype(FLOAT_TYPE);
            tmp->u.f.nparams = 1;
            tmp->u.f.parameters = pp1;
        break;
    }
    return tmp;
}


/*Internal helpers*/
void printdebug(typeptr r)
{
    printf("===============================\n");
    printf("Symboltable: %p\n", r->u.f.st);
    printf("Name: %s\n", r->u.f.name);
    printf("Num Params: %d\n", r->u.f.nparams);
    
    if (r->u.f.returntype != NULL){
        printdebug(r->u.f.returntype);
    }

    if (r->u.f.parameters != NULL){
        printparam(r->u.f.parameters);
    }
}

void printparam(struct param *p)
{
    printf("\tName: %s\n", p->name);
    printf("\tType: %d\n", p->type->basetype);
    if(p->next != NULL){
        printparam(p->next);
    }
}

