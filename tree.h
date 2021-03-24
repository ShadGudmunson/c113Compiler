#ifndef TREE_H
#define TREE_H
#include "treedef.h"

struct tree *alcTree(int label, char *symbolname,int nkids, ...);
int alctoken(int category);
void tokenInit();
void addChild(struct tree *, struct tree*);
void printNode(struct tree *);
void visit(struct tree *tr);
void postTrav(struct tree *tr, void (*visit)(struct tree *));
void preTrav(struct tree *tr, void (*visit)(struct tree *));
char *convertString(char* str);
char *humanreadable(struct tree *t);
void treeprint(struct tree *t, int depth);
void parseTree(struct tree *t);
void printsyms(struct tree *t);
void printsymbol(char *s);
char *escape(char *s);
char *pretty_print_name(struct tree *t);
void print_branch(struct tree *t, FILE *f);
char *yyname(int);
void print_leaf(struct tree *t, FILE *f);
void print_graph2(struct tree *t, FILE *f);
void print_graph(struct tree *t, char *filename);
char *getname(int i);
#endif