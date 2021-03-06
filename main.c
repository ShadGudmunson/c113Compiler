#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ytab.h"
#include "tree.h"
#include "errdef.h"

#define YYDEBUG 1

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
struct tree *root = NULL;


int main(int argc, char **argv)
{
    char * new_str = NULL;

    if(argc < 2){
        printf("Usage: %s <filename>(.c)", argv[0]);
        exit(FILEERR);
    }

    for(int i = 1; i < argc; i++){
        filename = argv[i];
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

        preTrav(root, printsyms);

        if(new_str != NULL){
            free(new_str);
            new_str = NULL;
        }
    }
    return 0;
}