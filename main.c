#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ytab.h"

#define FILEERR 2
#define MALERR  3

struct tokenlist {
    struct token *t;
    struct tokenlist *next;
};

extern FILE* yyin;
extern int yylex();
extern int yyparse();
extern int yyerror(char *);
extern char* yytext;
extern struct token *yytoken;
char* filename;

struct tokenlist *head = NULL;

/*Insert the given token at the head of the list*/
void insert_head(struct token *tok){
    struct tokenlist *toklst = malloc(sizeof(struct tokenlist));
    toklst->t = tok;
    toklst->next = head;

    head = toklst;
}

/*Go down the link list and print out each token*/
void printList() {
    struct tokenlist *ptr = head;
    printf("%s\t%s\t\t\t%s\t\t%s\t\t%s\n", "category", "text", "line#", "filename", "Ival/Sval");

    while(ptr != NULL) {
        if(strcmp(ptr->t->sval,"")){
            printf("%d\t\t%s\t\t\t%d\t\t%s\t\t%s\n", ptr->t->category, ptr->t->text, ptr->t->lineno, ptr->t->filename, ptr->t->sval);
        } else if(ptr->t->dval != 0){
            printf("%d\t\t%s\t\t\t%d\t\t%s\t\t%f\n", ptr->t->category, ptr->t->text, ptr->t->lineno, ptr->t->filename, ptr->t->dval);
        } else if(ptr->t->ival != 0){
            printf("%d\t\t%s\t\t\t%d\t\t%s\t\t%d\n", ptr->t->category, ptr->t->text, ptr->t->lineno, ptr->t->filename, ptr->t->ival);
        } else {
            printf("%d\t\t%s\t\t\t%d\t\t%s\n", ptr->t->category, ptr->t->text, ptr->t->lineno, ptr->t->filename);

        }
        ptr = ptr->next;
   }
}

/*A function to reverse the direction of the linked list */
void reverse(struct tokenlist** head_ref) {
    struct tokenlist* prev = NULL;
    struct tokenlist* current = *head_ref;
    struct tokenlist* next;
	
    while (current != NULL) {
        next  = current->next;
        current->next = prev;   
        prev = current;
        current = next;
    }
	
    *head_ref = prev;
}

void deleteList(){
    while(head->next != NULL){
        struct tokenlist *tmp = head->next;
        free(head->t->text);

        if(strcmp(head->t->sval,"")){
            free(head->t->sval);
        }
        free(head->t);
        head = tmp;
    }
}


int main(int argc, char **argv)
{
    char * new_str = NULL;

    if(argc < 2){
        printf("Usage: %s <filename>(.c)", argv[0]);
        exit(FILEERR);
    }

    for(int i = 1; i < argc; i++){
        filename = argv[i];
        printf("%s\n", argv[i]);
        if(strstr(argv[i], ".c") == NULL){
            if((new_str = malloc(strlen(argv[i])+strlen(".c")+1)) != NULL){
                new_str[0] = '\0';   // ensures the memory is an empty string
                strcat(new_str,argv[i]);
                strcat(new_str,".c\0");
                filename = strdup(new_str);
                yyin = fopen(new_str, "r");

                if(yyin == NULL){
                    printf("File not found!");
                    exit(FILEERR);
                }
            } else {
                printf("malloc failed!\n");
                exit(MALERR);
            }
        } else {
            yyin = fopen(argv[i], "r");
            if(yyin == NULL){
                printf("File not found!");
                exit(FILEERR);
            }
        }

        yyparse();

        reverse(&head);
        //printList();
        fclose(yyin);
        if(new_str != NULL){
            free(new_str);
        }
    }
    deleteList();
    return 0;
}