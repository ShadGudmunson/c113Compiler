#ifndef TREE_H
#define TREE_H
#define NUMKIDS 9

#include "type.h"

struct tree {
   int id;
   int label; /*aka prodrule*/
   int lineno;
   typeptr type;
   char *symbolname;
   int nkids;
   struct tree *kids[NUMKIDS]; /* if nkids >0 */
   struct token *leaf;   /* if nkids == 0; NULL for ε productions */
};

struct tree *alcTree(int label, char *symbolname,int nkids, ...);
int alctoken(int category);
void tokenInit();
void addChild(struct tree *, struct tree*);
void printNode(struct tree *);
void visit(struct tree *tr);
void postTrav(struct tree *tr, void (*visit)(struct tree *));
void postrevTrav(struct tree *tr, void (*visit)(struct tree *));
void preTrav(struct tree *tr, void (*visit)(struct tree *));
char *convertString(char* str);
char *humanreadable(struct tree *t);
void treeprint(struct tree *t, int depth);
void parseTree(struct tree *t);
void assignBaseType(struct tree *t);
void typeCheck(struct tree *t);
void typeerrCheck(struct tree *t);
typeptr opcheck(int operator, typeptr o1, typeptr o2);
typeptr operrcheck(int operator, struct tree* o1, struct tree* o2);
typeptr typefromstring(char *str);
void printsyms(struct tree *t);
void printsymbol(char *s);
char *escape(char *s);
char *pretty_print_name(struct tree *t);
void print_branch(struct tree *t, FILE *f);
char *yyname(int);
void print_leaf(struct tree *t, FILE *f);
void print_graph2(struct tree *t, FILE *f);
void print_graph(struct tree *t, char *filename);
struct tree* findleftleaf(struct tree *t);
struct tree* findrightleaf(struct tree *t);
struct tree* findleftlabel(struct tree *t, int label);
struct tree* findrightlabel(struct tree *t, int label);
int structcountfields(struct tree *t);
struct field *fieldsprocessing(struct tree *t);
char *getname(int i);

#endif