#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h> 
#include "tree.h"
#include "ytab.h"
#include "cgram.tab.h"

#define CHILDNUM 9

extern YYSTYPE yylval;
extern char *yytext;
extern int rows;
extern char *filename;
extern int insert_head();

struct tree *alcTree(int label, char *symbolname, int nkids, ...)
{
    int i;
    va_list ap;
    struct tree *ptr = malloc(sizeof(struct tree) +
                                (nkids-1)*sizeof(struct tree *));
    if (ptr == NULL) {
       fprintf(stderr, "alctree out of memory\n"); 
       exit(1); 
    }
    ptr->label = label;
    ptr->symbolname = symbolname;
    ptr->nkids = nkids;
    va_start(ap, nkids);
    for(i=0; i < nkids; i++)
        ptr->kids[i] = va_arg(ap, struct tree *);
    va_end(ap);
    return ptr;
}

void memerr(){
    fprintf(stderr, "There was an issue mallocing!");
    exit(1);
}

int alctoken(int category)
{
    if ((yylval.treeptr = (struct tree *)calloc(1, sizeof (struct tree))) == NULL)
        memerr();
   	yylval.treeptr->label = category;
	yylval.treeptr->symbolname = "";
	yylval.treeptr->nkids = 0;
	for(int i = 0; i < CHILDNUM; i++){
		yylval.treeptr->kids[i] = NULL;
	}

    if ((yylval.treeptr->leaf = (struct token *)malloc(sizeof (struct token)))==NULL)
        memerr();
    tokenInit();
	yylval.treeptr->leaf->category = category;
	yylval.treeptr->leaf->text = strdup(yytext);
	yylval.treeptr->leaf->lineno = rows;
	yylval.treeptr->leaf->filename = filename;
    
    if (category == STRING || category == CCON || category == IDENTIFIER){
        yylval.treeptr->leaf->sval = convertString(yytext);
    } else if(category == FCON){
        yylval.treeptr->leaf->dval = atof(yylval.treeptr->leaf->text);
    } else if(category == ICON){
        yylval.treeptr->leaf->ival = atoi(yylval.treeptr->leaf->text);
    }
    
    printf("From alctoken:\n");
    printNode(yylval.treeptr);

	return category;

}

void tokenInit()
{
	yylval.treeptr->leaf->category = 0;
	yylval.treeptr->leaf->text = "";
	yylval.treeptr->leaf->lineno = 0;
	yylval.treeptr->leaf->filename = "";
	yylval.treeptr->leaf->ival = 0;
	yylval.treeptr->leaf->dval = 0;
	yylval.treeptr->leaf->sval = "";
}

void addChild(struct tree *child, struct tree *parent)
{
    int i = 0;
    while(parent->kids[i] != NULL){
        i++;
    }
    parent->kids[i] = child;
}

void printNode(struct tree *tr)
{
    printf("Tree Info:\n");
    printf("label\tsymbolname\t#kids\n");
    printf("%d\t%s\t%d\n",tr->label, tr->symbolname, tr->nkids);
    printf("\tToken Info:\n");
    printf("\t%s\t%s\t\t\t%s\t\t%s\t\t%s\n", "category", "text", "line#", "filename", "Ival/Sval");

    if(strcmp(tr->leaf->sval,"")){
            printf("\t%d\t\t\t%s\t\t\t\t%d\t\t%s\t\t%s\n", tr->leaf->category, tr->leaf->text, tr->leaf->lineno, tr->leaf->filename, tr->leaf->sval);
        } else if(tr->leaf->dval != 0){
            printf("\t%d\t\t\t%s\t\t\t\t%d\t\t%s\t\t%f\n", tr->leaf->category, tr->leaf->text, tr->leaf->lineno, tr->leaf->filename, tr->leaf->dval);
        } else if(tr->leaf->ival != 0){
            printf("\t%d\t\t\t%s\t\t\t\t%d\t\t%s\t\t%d\n", tr->leaf->category, tr->leaf->text, tr->leaf->lineno, tr->leaf->filename, tr->leaf->ival);
        } else {
            printf("\t%d\t\t\t%s\t\t\t\t%d\t\t\t%s\n", tr->leaf->category, tr->leaf->text, tr->leaf->lineno, tr->leaf->filename);
        }
    printf("\n\n\n");
}

void deleteNode(struct tree *tr){
    /*need to implement*/
}

void postTrav(struct tree *tr, void (*visit)(struct tree *))
{
    int i = 0;
    while(tr->kids[i] != NULL){
        visit(tr->kids[i]);
        i++;
    }
    visit(tr);

}

void preTrav(struct tree *tr, void (*visit)(struct tree *)){
    int i = 0;
    visit(tr);
    while(tr->kids[i] != NULL)
    {
        visit(tr->kids[i]);
        i++;
    }
}

char * convertString(char* str)
{
	int i, j = 0;
	str = strtok(str, "\"");
	char *new_str = malloc(strlen(str) + 1);
	for(i = 0; i < strlen(str); i++, j++){
		if(str[i] == 92){
			switch(str[i+1]){
				case 'n':
					new_str[j] = 10;
					i++;
					break;
				case 't':
					new_str[j] = 9;
					i++;
					break;
				case '0':
					new_str[j] = 0;
					i++;
					break;
				case 'a':
					new_str[j] = 7;
					i++;
					break;
				case 'b':
					new_str[j] = 8;
					i++;
					break;
				case 'v':
					new_str[j] = 11;
					i++;
					break;
				case 'f':
					new_str[j] = 12;
					i++;
					break;
				case 'r':
					new_str[j] = 13;
					i++;
					break;

			}
		} else{
			new_str[j] = str[i];
		}
	}
	return new_str;
}
