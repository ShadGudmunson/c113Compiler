#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
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

/**
add -dot commandline option for debugging
Good idea to use system() command to automatically make the diagram
*/
int main(int argc, char **argv)
{
    char * new_str = NULL;
    int dotflag = 0;
    int c;
    int i = 1;

    while ((c = getopt (argc, argv, "dh")) != -1){
        switch (c) {
        case 'd':
            dotflag = 1;
            i = 2;
            break;
        case 'h':
            printf("Usage: %s [-d -h] <filename>(.c)\n", argv[0]);
            printf("-d runs dot debug option creating a graphical representation of the syntax tree\n");
            printf("-h prints this help message and exits\n");
            exit(0);
            break;  
        }
    }

    if(argc < 2){
        printf("Usage: %s [-d -h] <filename>(.c)\n", argv[0]);
        printf("-d runs dot debug option creating a graphical representation of the syntax tree\n");
        printf("-h prints this help message and exits\n");
        exit(FILEERR);
    }

    for(; i < argc; i++){
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

        if (dotflag){
            print_graph(root, "dot.dot");
            system("dot -Tpng dot.dot -o out.png");
            system("xdg-open out.png");
            system("rm dot.dot");
        }

        if(new_str != NULL){
            free(new_str);
            new_str = NULL;
        }
    }
    return 0;
}