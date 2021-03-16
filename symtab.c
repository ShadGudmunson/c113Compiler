#include "symtab.h"
#include "errdef.h"
#include <string.h>
#include <stdio.h>

extern SymbolTable current;

SymbolTable mksymtab(SymbolTable parent, char *s)
{
    SymbolTableEntry *arr = calloc(NBUCKETS, sizeof(SymbolTableEntry) + MAXNAMELEN);
    if (arr == NULL){
        fprintf(stderr, "Error! ran out of memory");
        exit(MALERR);
    }
    SymbolTable ret = calloc(1, sizeof(SymbolTable) + MAXNAMELEN);
    if (ret == NULL){
        fprintf(stderr, "Error! ran out of memory");
        exit(MALERR);
    }
    ret->scopeName = s;
    ret->nEntries = 0;
    ret->nBuckets = NBUCKETS;
    ret->parent = parent;
    ret->tbl = arr;
    
    for(int i = 0; i < NBUCKETS; i++){
        ret->tbl[i] = NULL;
    }

    return ret;
}

int hash(SymbolTable st, char *s)
{
    register int h = 0;
    register char c = 0;
    while ((c = *s++)) {
        h += c & 0377;
        h *= 37;
    }
    if (h < 0) h = -h;
    return h % st->nBuckets;
}

/*credit to https://www.tutorialspoint.com/data_structures_algorithms/hash_table_program_in_c.htm
* for the original code
*/
void insert(SymbolTable st, char *key) 
{
   SymbolTableEntry item = calloc(1, sizeof(SymbolTableEntry) + MAXNAMELEN);
    if (item == NULL){
        fprintf(stderr, "Error! ran out of memory");
        exit(MALERR);
    }
   SymbolTableEntry tmp = NULL;
   item->s = key;
   item->table = current;

   //get the hash 
   int hashIndex = hash(st, key);

    //if there is already an item in the index 
    if (st->tbl[hashIndex] != NULL){
        if (!strcmp(st->tbl[hashIndex]->s, key)){
            fprintf(stderr, "Symbol '%s' double defined!\n", key);
            exit(SYNERR);
        }
        tmp = st->tbl[hashIndex];
        while (tmp->next != NULL){
            tmp = tmp->next;            
        }
        tmp->next = item;
    } else {
        st->tbl[hashIndex] = item;
    }
}

void printTable(SymbolTable st)
{
    printf("---- symbol table for: %s ----\n", st->scopeName);

    for (int i = 0; i < NBUCKETS; i++){
        if (st->tbl[i] != NULL){
            printf("\t%s\n", st->tbl[i]->s);
        }
    }
}

void printCurrentTable()
{
    printf("---- symbol table for: %s ----\n", current->scopeName);
    for (int i = 0; i < NBUCKETS; i++){
        if (current->tbl[i] != NULL){
            printf("\t%s\n",current->tbl[i]->s);
        }
    }
    if (current->parent != NULL){
        printTable(current->parent);
    }
}