#include "symtab.h"
#include "errdef.h"
#include <stdio.h>

extern SymbolTable current;


SymbolTable mksymtab(SymbolTable parent)
{
    SymbolTableEntry *arr = calloc(NBUCKETS, sizeof(SymbolTableEntry));
    if (arr == NULL){
        fprintf(stderr, "Error! ran out of memory");
        exit(MALERR);
    }
    SymbolTable ret = calloc(1, sizeof(SymbolTable));
    if (ret == NULL){
        fprintf(stderr, "Error! ran out of memory");
        exit(MALERR);
    }
    ret->nEntries = 0;
    ret->nBuckets = NBUCKETS;
    ret->parent = parent;
    ret->tbl = arr;
    
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

   SymbolTableEntry item = calloc(1, sizeof(SymbolTableEntry));
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
    for (int i = 0; i < NBUCKETS; i++){
        if (st->tbl[i] != NULL){
            printf("%d: %s\n", i, st->tbl[i]->s);
        }
    }
}

void printCurrentTable()
{
    for (int i = 0; i < NBUCKETS; i++){
        if (current->tbl[i] != NULL){
            printf("%d: %s\n", i, current->tbl[i]->s);
        }
    }
    if (current->parent != NULL){
        printf("printing parent: \n");
        printTable(current->parent);
    }
}