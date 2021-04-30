#include "symtab.h"
#include "errdef.h"
#include <string.h>
#include <stdio.h>

extern SymbolTable current;
extern SymbolTable global;

void clearglobalst()
{
    free(global);
    global = mksymtab(NULL, "global");
}

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
void insert(SymbolTable st, char *key, typeptr type, int isProto) 
{
    SymbolTableEntry item = calloc(1, sizeof(SymbolTableEntry) + MAXNAMELEN);
    if (item == NULL){
        fprintf(stderr, "Error! ran out of memory");
        exit(MALERR);
    }
    SymbolTableEntry tmp = NULL;
    item->s = key;
    item->type = type;
    item->table = current;
    item->isPrototype = isProto;

    st->nEntries++;

    //get the hash 
    int hashIndex = hash(st, key);

    //if there is already an item in the index 
    if (st->tbl[hashIndex] != NULL){
        tmp = st->tbl[hashIndex];
        int issamename = (strcmp(tmp->s, key) == 0);
        int inRettype = type->basetype;
        int rettype = type->basetype;
        do{
            //rettype = tmp->type->basetype;
            if (issamename && tmp->type->basetype == FUNC_TYPE){
                comparefunc(key, tmp->type, type);
            }

            if (issamename && tmp->isPrototype == 1 && isProto == 1){
                fprintf(stderr, "Symbol '%s' double defined! (Multiple protoypes used)\n", key);
                exit(SYNERR);
            } else if (issamename && rettype == inRettype && tmp->isPrototype == 0){
                fprintf(stderr, "Symbol '%s' double defined!\n", key);
                exit(SYNERR);
            } else if (issamename && rettype != inRettype){
                fprintf(stderr, "Conflicting declarations for '%s' (Return types differ)\n", key);
                exit(SYNERR);
            } else if (issamename && rettype == inRettype && tmp->isPrototype == 1 && isProto == 0){
                tmp->isPrototype = 0;
                return;
            }
            tmp = tmp->next;            
        } while (tmp->next != NULL);
        tmp->next = item;
    } else {
        st->tbl[hashIndex] = item;
    }
}

int checktable(SymbolTable st, char* string)
{
    int hashIndex = hash(st, string);
    SymbolTableEntry tmp = st->tbl[hashIndex];

    if(tmp == NULL){
        return 0;
    }

    do{
        if(!strcmp(tmp->s, string)){
            return 1;
        }

        if (tmp->next != NULL){
            tmp = tmp->next;
        } else {
            return 0;
        }
    } while (tmp->next != NULL);

    return 0;
}

typeptr gettype(SymbolTable st, char* symbolname)
{
    int hashIndex = hash(st, symbolname);
    SymbolTableEntry tmp = st->tbl[hashIndex];

    if(checktable(st, symbolname)){
        do{
            if(!strcmp(tmp->s, symbolname)){
                return tmp->type;
            }

            if (tmp->next != NULL){
                tmp = tmp->next;
            } else {
                return 0;
            }

        } while (tmp->next != NULL);

    } else {
        return NULL;
    }
    return NULL;
}

typeptr gettypeall(char* symbolname)
{
    SymbolTable tmpst = current;
    SymbolTableEntry tmp;
    int hashIndex = hash(tmpst, symbolname);
    
    do{
        tmp = tmpst->tbl[hashIndex];
        if(checktable(tmpst, symbolname)){
            do{
                if(!strcmp(tmp->s, symbolname)){
                    if (tmp->type->basetype == FUNC_TYPE){
                        return tmp->type->u.f.returntype;
                    }
                    return tmp->type;
                }

                if (tmp->next != NULL){
                    tmp = tmp->next;
                }

            } while (tmp->next != NULL);

        } else {
            if (tmpst != NULL){
                tmpst = tmpst->parent;
            }
            continue;
        }
        if (tmpst != NULL){
            tmpst = tmpst->parent;
        }
    }while (tmpst->parent != NULL);

    tmp = global->tbl[hashIndex];

    if(checktable(global, symbolname)){
        do{
            if(!strcmp(tmp->s, symbolname)){
                if (tmp->type->basetype == FUNC_TYPE){
                    return tmp->type->u.f.returntype;
                }
                return tmp->type;
            }

            if (tmp->next != NULL){
                tmp = tmp->next;
            } else {
                return 0;
            }

        } while (tmp->next != NULL);

    } else {
        return NULL;
    }

    return NULL;
}


typeptr gettypeallfunc(char* symbolname)
{
    SymbolTable tmpst = current;
    SymbolTableEntry tmp;
    int hashIndex = hash(tmpst, symbolname);
    
    do{
        tmp = tmpst->tbl[hashIndex];
        if(checktable(tmpst, symbolname)){
            do{
                if(!strcmp(tmp->s, symbolname)){
                    return tmp->type;
                }

                if (tmp->next != NULL){
                    tmp = tmp->next;
                }

            } while (tmp->next != NULL);

        } else {
            break;
        }
        if (tmpst->parent != NULL){
            tmpst = tmpst->parent;
        }
    }while (tmpst->parent != NULL);

    tmp = global->tbl[hashIndex];

    if(checktable(global, symbolname)){
        do{
            if(!strcmp(tmp->s, symbolname)){
                return tmp->type;
            }

            if (tmp->next != NULL){
                tmp = tmp->next;
            } else {
                return 0;
            }

        } while (tmp->next != NULL);

    } else {
        return NULL;
    }

    return NULL;
}

void comparefunc(char* name, typeptr t1, typeptr t2)
{
    if( t1->u.f.nparams != t2->u.f.nparams){
        fprintf(stderr, "Conflicting declarations for '%s' (Different number of parameters)\n", name);
        exit(SYNERR);
    }

    paramlist p1 = t1->u.f.parameters;
    paramlist p2 = t2->u.f.parameters;
    for(int i = 0; i < t1->u.f.nparams; i++ ){
        if (p1->type->basetype != p2->type->basetype){
            fprintf(stderr, "Conflicting declarations for '%s' (Parameters different types)\n", name);
            exit(SYNERR);
        } else {
            p1 = p1->next;
            p2 = p2->next; 
        }
    }
}

struct sym_table *findtable(char *name)
{
    struct sym_table *tmp = current;
    while(tmp != NULL){
        if (!strcmp(tmp->scopeName, name)){
            return tmp;
        } else {
            tmp = tmp->parent;
        }
    }
    return NULL;
}

void printTable(SymbolTable st)
{
    printf("---- symbol table for: %s ----\n", st->scopeName);

    for (int i = 0; i < NBUCKETS; i++){
        if (st->tbl[i] != NULL){
            if (st->tbl[i]->type->basetype != FUNC_TYPE && st->tbl[i]->type->basetype != POINTER_TYPE){
                printf("\t%s\t%s\n", typename(st->tbl[i]->type), st->tbl[i]->s);
            } else if (st->tbl[i]->type->basetype == FUNC_TYPE) {
                printf("\tfunc %s\t%s\n", typename(st->tbl[i]->type->u.f.returntype), st->tbl[i]->s);
            } else if (st->tbl[i]->type->basetype == POINTER_TYPE) {
                printf("\t%s*\t%s\n", typename(st->tbl[i]->type->u.p.elemtype), st->tbl[i]->s);
            }
        }
    }
}

void printCurrentTable()
{
    printf("---- symbol table for: %s ----\n", current->scopeName);
    for (int i = 0; i < NBUCKETS; i++){
        if (current->tbl[i] != NULL){
            if (current->tbl[i]->type->basetype != FUNC_TYPE && current->tbl[i]->type->basetype != POINTER_TYPE){
                printf("\t%s\t%s\n", typename(current->tbl[i]->type), current->tbl[i]->s);
            } else if (current->tbl[i]->type->basetype == FUNC_TYPE) {
                printf("\t%s\t%s\n", typename(current->tbl[i]->type->u.f.returntype), current->tbl[i]->s);
            } else if (current->tbl[i]->type->basetype == POINTER_TYPE) {
                printf("\t%s*\t%s\n", typename(current->tbl[i]->type->u.p.elemtype), current->tbl[i]->s);
            }
        }
    }
    SymbolTable tmp = current;
    while (tmp->parent != NULL){
        printTable(tmp->parent);
        tmp = tmp->parent;
    }
}

paramlist makeparam(char* name, typeptr type, paramlist next)
{
    paramlist tmp = calloc(1, sizeof(paramlist));
    tmp->name = name;
    tmp->type = type;
    tmp->next = next;
    return tmp;
}