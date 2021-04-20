#ifndef TYPE_H
#define TYPE_H


struct tree;

typedef struct param {
   char *name;
   struct typeinfo *type;
   struct param *next;
} *paramlist;

struct field {			/* members (fields) of structs */
   char *name;
   struct typeinfo *elemtype;
   struct field *next;
};

/* base types. How many more base types do we need? */
#define FIRST_TYPE   1000000

#define NULL_TYPE    1000000
#define INT_TYPE     1000001
#define STRUCT_TYPE  1000002
#define ARRAY_TYPE   1000003
#define FLOAT_TYPE   1000004
#define FUNC_TYPE    1000005
#define POINTER_TYPE 1000006
#define CHAR_TYPE    1000007

#define LAST_TYPE    1000007

typedef struct typeinfo {
   int basetype;
   union {
      struct structinfo {
         char *label;
         int nfields;
         struct field *f;
         /* and */
         struct sym_table *st;
      }s;
      struct arrayinfo {
         int size;
         struct typeinfo *elemtype;
      }a;
      struct funcinfo {
         char *name; /* ? */
         struct sym_table *st;
         struct typeinfo *returntype;
         int nparams;
         struct param *parameters;
      }f;
      struct pointer {
         struct typeinfo *elemtype;
      } p;
   } u;
} *typeptr;

#include "tree.h"

extern struct sym_table *global_table;

typeptr alctype(int);
typeptr alcarray(typeptr etype, struct tree *sz);
typeptr alcstructtype();
typeptr alcfunctype(struct tree * r, struct tree * p, struct sym_table * st);
struct param *paramProcessing(struct tree* t);
int countParams(struct tree* t);
int countcallparams(struct tree *t);
paramlist buildcallparameters(struct tree *t);
char *typename(typeptr t);
void btfp(struct tree *t);
int comparetype(struct tree *t1, struct tree *t2);
void compareParams(struct param *p1, struct param *p2);
typeptr tfi(char *str);


extern typeptr integer_typeptr;
extern typeptr float_typeptr;
extern typeptr char_typeptr;
extern typeptr null_typeptr;
extern typeptr string_typeptr;


extern char *typenam[];

#endif
