struct tree {
   int label;
   char *symbolname;
   int nkids;
   struct tree *kids[9]; /* if nkids >0 */
   struct token *leaf;   /* if nkids == 0; NULL for ε productions */
};

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