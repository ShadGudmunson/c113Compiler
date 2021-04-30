#include <stdlib.h>
#ifndef SYMTAB_H
#define SYMTAB_H

#include <stdio.h>
#include "type.h"


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
    typeptr type;             /* string of type*/
    /* more symbol attributes go here for code generation */
    struct sym_entry *next;
    int isPrototype; /*Is the table entry a function prototype 1 for yes 0 for no*/
    
    int offset;

} *SymbolTableEntry;

void clearglobalst();
SymbolTable mksymtab(SymbolTable parent, char* s);
int hash(SymbolTable st, char *s);
void insert(SymbolTable st, char *key, typeptr type, int isProto); 
int checktable(SymbolTable st, char* string);
typeptr gettype(SymbolTable st, char* symbolname);
typeptr gettypeall(char* symbolname);
typeptr gettypeallfunc(char* symbolname);
void comparefunc(char* name, typeptr t1, typeptr t2);
void printTable(SymbolTable st);
void printCurrentTable();
paramlist makeparam(char* name, typeptr type, paramlist next);

#endif