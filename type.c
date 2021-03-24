#include <stdio.h>
#include <stdlib.h>
#include "type.h"
#include "ytab.h"
#include "symtab.h"
#include "prodrule.h"
#include "cgram.tab.h"
   
struct typeinfo integer_type = { INT_TYPE };
struct typeinfo null_type = { NULL_TYPE };
struct typeinfo char_type = { CHAR_TYPE };
struct typeinfo charptr_type = { POINTER_TYPE }; /* initialize later, e.g in alctype */

typeptr null_typeptr = &null_type;
typeptr integer_typeptr = &integer_type;
typeptr string_typeptr;

char *typenam[] =
   {"null", "int", "struct", "array", "double", "func", "pointer", "char"};

typeptr alctype(int base)
{
   typeptr rv;
   if (base == INT_TYPE) return integer_typeptr;
   else if (base == NULL_TYPE) return null_typeptr;

   rv = (typeptr) calloc(1, sizeof(struct typeinfo));
   if (rv == NULL) return rv;
   rv->basetype = base;
   return rv;
}

typeptr alcarray(typeptr etype, struct tree *sz)
{
   typeptr rv = alctype(ARRAY_TYPE);
   rv->u.a.elemtype = etype;
   if (sz != NULL && sz->nkids==0 && sz->leaf->category==ICON) {
      rv->u.a.size = sz->leaf->ival;
      }
   else
      rv->u.a.size = 0;
   return rv;
}



typeptr alcstructtype()
{
   typeptr rv = alctype(STRUCT_TYPE);
   /* who initializes the fields, someone else I guess, later on */
   return rv;
}

/* in order for this to make any sense, you have to pass in the subtrees
 * for the return type (r) and the parameter list (p), but the calls to
 * to this function in the example are just passing NULL at present!
 */
typeptr alcfunctype(struct tree * r, struct tree * p, SymbolTable st)
{
   typeptr rv = alctype(FUNC_TYPE);
   if (rv == NULL) return NULL;
   rv->u.f.st = st;
   /* fill in return type and paramlist by traversing subtrees */
   /* rf->u.f.returntype = ... */
   return rv;
}

char *typename(typeptr t)
{
   if (!t) return "(NULL)";
   else if (t->basetype < FIRST_TYPE || t->basetype > LAST_TYPE)
      return "(BOGUS)";
   else return typenam[t->basetype-1000000];
}

/*
 * Build Type From Prototype (syntax tree) Example
 */
/*placeholders for get type*/
#define INTEGER 1
#define CHARACTER 1
#define FLOAT 1
#define DONT_KNOW_YET 1
#define DONT_KNOW 1
#define POINTER 1
#define FUNC 1
#define PARAMDECL_2 1

typeptr get_type(int c)
{
    //implement
    typeptr x = NULL;
    return x;
}

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
        case constant_ic:
            t->type = get_type(INTEGER);
            break;
        case constant_cc:
            t->type = get_type(CHARACTER);
            break;
        case constant_fc:
            t->type = get_type(FLOAT);
            break;            
        case IDENTIFIER:
            t->type = get_type(DONT_KNOW_YET); /*need to look at the parent*/
            break;
        case MUL:
            t->type = get_type(POINTER);
            break;
        case parameter_declaration_de_de:
            t->type = t->kids[0]->kids[0]->type;
            break;
        case PARAMDECL_2:
            //t->type = clone_type(t->kids[1]->type);
            t->type->u.p.elemtype = t->kids[0]->type;
            break;
        case function_declarator_di:
            t->type = get_type(FUNC);
            t->type->u.f.returntype = get_type(DONT_KNOW);
            t->type->u.f.parameters->type = t->kids[1]->type;
            break;
    }
}