#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <getopt.h>
#include "ytab.h"
#include "tree.h"
#include "errdef.h"
#include "symtab.h"


#define SIZE 1024 /*large string size*/

struct tokenlist {
    struct token *t;
    struct tokenlist *next;
};

void printHelp(char* progname);
extern int yyerror(char *);
extern int yylex();
extern int yyparse();

extern FILE* yyin;
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
    for(int q = 0; q < argc; q++){
        if (!(strcmp("-symtab", argv[q]))){
            fprintf(stderr, "Incorrect option please use --symtab or -s\n");
            exit(-1);
        }
    }

    char * new_str = NULL;
    int dotflag = 0, treeflag = 0, symflag = 0;
    int i = 1;
    char *dotcommand = malloc(SIZE);
    char *dotfile = malloc(SIZE);
    int c;

    while (1){
        int option_index = 0;
        static struct option long_options[] = {
            {"symtab",  no_argument,       0,  's' },
            {"dot",  no_argument,          0,  'd' },
            {"help",  no_argument,         0,  'h' }

        };
    
        c = getopt_long(argc, argv, "dsth",
                    long_options, &option_index);
        if (c == -1)
            break;
    
        switch (c) {
            case 'd':
                dotflag = 1;
                i++;
                break;
            case 's':
                symflag = 1;
                i++;
                break;
            case 't':
                treeflag = 1;
                i++;
                break;
            case 'h':
                printHelp(argv[0]);
                exit(0);
                break;  
            }
    }

    if(argc < 2){
        printHelp(argv[0]);
        exit(FILEERR);
    }

    for(; i < argc; i++){
        clearglobalst();
        filename = argv[i];
        if(strstr(argv[i], ".c") == NULL){
            if((new_str = malloc(strlen(argv[i])+strlen(".c")+1)) != NULL){
                new_str[0] = '\0';   // ensures the memory is an empty string
                strcat(new_str,argv[i]);
                strcat(new_str,".c\0");
                filename = strdup(new_str);
                printf("Opening: %s\n", filename);
                yyin = fopen(new_str, "r");

                if(yyin == NULL){
                    fprintf(stderr, "File not found!");
                    exit(FILEERR);
                }
            } else {
                printf("malloc failed!\n");
                exit(MALERR);
            }
        } else {
            printf("Opening: %s\n", filename);            
            yyin = fopen(filename, "r");
            if(yyin == NULL){
                fprintf(stderr,"File not found!");
                exit(FILEERR);
            }

            yyparse();
        
            if (treeflag){
                preTrav(root, printsyms);
            }
            
            if (symflag){
                printCurrentTable();
            }
    
            if (dotflag){
                
                sprintf(dotfile, "%s.dot", filename);
                print_graph(root, dotfile);
                
                sprintf(dotcommand, "dot -q -Tpng %s -o %s.png", dotfile, filename);
                system(dotcommand);
                
//                sprintf(dotcommand, "xdg-open %s.png", filename);
//                system(dotcommand);
                
                sprintf(dotcommand, "rm %s", dotfile);
                system(dotcommand);
            }
        }

        
    }

    if(new_str != NULL){
        free(new_str);
    }
    free(dotcommand);
    free(dotfile);
    return 0;
}

void printHelp(char* progname)
{
        printf("Usage: %s [-d -t -s -h] <filename>(.c)\n", progname);
        printf("-d, --dot: runs dot debug option creating a graphical representation of the syntax tree\n");
        printf("-s, --symtab: prints out symboltables\n");
        printf("-t: prints out the text of the syntax tree\n");
        printf("-h, --help: prints this help message and exits\n");
}
