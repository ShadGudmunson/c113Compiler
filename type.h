#ifndef TYPE_H
#define TYPE_H

typedef struct param {
   char *name;
   struct typeinfo *type;
   struct param *next;
   } *paramlist;
struct field {			/* members (fields) of structs */
   char *name;
   struct type *elemtype;
};

/* base types. How many more base types do we need? */
#define FIRST_TYPE   1000000

#define NULL_TYPE    1000000
#define INT_TYPE     1000001
#define STRUCT_TYPE  1000002
#define ARRAY_TYPE   1000003
#define DOUBLE_TYPE  1000004
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
         struct field **f;
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


extern struct sym_table *global_table;

typeptr alctype(int);
typeptr alcarray(typeptr, struct tree *);
typeptr alcstructtype();
typeptr alcfunctype(struct tree * r, struct tree * p, struct sym_table * st);
char *typename(typeptr t);
void btfp(struct tree *t);

extern typeptr integer_typeptr;
extern typeptr double_typeptr;
extern typeptr char_typeptr;
extern typeptr null_typeptr;
extern typeptr string_typeptr;


extern char *typenam[];

#endif
