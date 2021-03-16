#include <stdlib.h>

#define NBUCKETS 1024
#define MAXNAMELEN 255

typedef struct sym_table {
    int nBuckets;			/* # of buckets */
    int nEntries;			/* # of symbols in the table */
    struct sym_table *parent;		/* enclosing scope, superclass etc. */
    struct sym_entry **tbl;
    /* more per-scope/per-symbol-table attributes go here */
    char *scopeName;
} *SymbolTable;

typedef struct sym_entry {
    SymbolTable table;		/* what symbol table do we belong to*/
    char *s;			    /* string */
    /* more symbol attributes go here for code generation */
    struct sym_entry *next;
} *SymbolTableEntry;

SymbolTable mksymtab(SymbolTable parent, char* s);
int hash(SymbolTable st, char *s);
void insert(SymbolTable st, char *key);
void printTable(SymbolTable st);
void printCurrentTable();
