#ifndef TREEDEF_H
#define TREEDEF_H
#define NUMKIDS 9

#include "type.h"

struct tree {
   int id;
   int label; /*aka prodrule*/
   typeptr type;
   char *symbolname;
   int nkids;
   struct tree *kids[NUMKIDS]; /* if nkids >0 */
   struct token *leaf;   /* if nkids == 0; NULL for ε productions */
};
#endif