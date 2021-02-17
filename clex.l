%option noinput
%option nounput
%option noyywrap

%{
#include "ytab.h"
#include "cgram.tab.h"

struct token *yytoken = NULL;
extern char *filename;
extern void insert_head(struct token *tok);

int rows = 0, words = 0, chars = 0;

void yyerror (char const *s) {
	fprintf (stderr, "%s\n", s);
}

void invalidToken(){
	printf("This feature is not suppored in c113c.");
	exit(1);
}

char * convertString(char* str){
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
        } else {
            new_str[j] = str[i];
        }
    }
    return new_str;
}

void tokenInit(){
    yytoken->category = 0;   
    yytoken->text = "";     
    yytoken->lineno = 0;     
    yytoken->filename = ""; 
    yytoken->ival = 0;       
    yytoken->dval = 0;	   
    yytoken->sval = "";     
}


%}
%%

"else" {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
	yytoken->category = ELSE;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return ELSE;
}
"long" {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = LONG;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return LONG;
    }
"switch"								{
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = SWITCH;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return SWITCH;
    }
"break" {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = BREAK;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return BREAK;
    }
"case" {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
	yytoken->category = CASE;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return CASE;
}
"return" {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
	yytoken->category = RETURN;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return RETURN;
}
"char" {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
	yytoken->category = CHAR;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return CHAR;
}
"float" {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
	yytoken->category = FLOAT;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return FLOAT;
}
"for" {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
	yytoken->category = FOR;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return FOR;
}
"void" {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
	yytoken->category = VOID;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return VOID;
}
"sizeof" {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
	yytoken->category = SIZEOF;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return SIZEOF;
}
"default" {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
	yytoken->category = DEFAULT;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return DEFAULT;
}
"if" {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
	yytoken->category = IF;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return IF;
}
"while" {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
	yytoken->category = WHILE;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return WHILE;
}
"int" {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
	yytoken->category = INT;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return INT;
}
"struct" {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
	yytoken->category = STRUCT;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return STRUCT;
}
"double" {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
	yytoken->category = DOUBLE;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return DOUBLE;
}
"static" {
	invalidToken();
}
"volatile" {
	invalidToken();
}
"goto" {
	invalidToken();
}
"continue" {
	invalidToken();
}
"signed" {
	invalidToken();
}
"const" {
	invalidToken();
}
"auto" {
	invalidToken();
}
"do" {
	invalidToken();
}
"enum" {
	invalidToken();
}
"register" {
	invalidToken();
}
"typedef" {
	invalidToken();
}
"extern" {
	invalidToken();
}
"union" {
	invalidToken();
}
"short" {
	invalidToken();
}
"unsigned" {
	invalidToken();
}
"="	 {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = ASN;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return ASN;
}
"+"	 {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = PLUS;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return PLUS;
}
"-"	 {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = MINUS;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return MINUS;
}
"*"	 {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = MUL;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return MUL;
}
"/"	 {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = DIV;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return DIV;
}
"%" {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = MOD;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return MOD;
}
"|" {
	invalidToken();
}
"^" {
	invalidToken();
}
"~" {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = NOT;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return NOT;
}
"--" {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = DECOP;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return DECOP;
}
"++" {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = INCOP;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return INCOP;
}
"<=" {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = LE;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return LE;
}
">=" {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = GE;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return GE;
}
"==" {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = EQ;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return EQ;
}
"!=" {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = NE;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return NE;
}
"&&" {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = ANDAND;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return ANDAND;
}
"||" {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = OROR;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return OROR;	
}
"&"	 {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = AND;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return AND;
}
"["	 {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = LB;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return LB;
}
"]"	 {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = RB;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return RB;
}
"("	 {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = LP;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return LP;
}
")"	 {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = RP;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return RP;
}
"{"	 {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = LC;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return LC;
}
"}"	 {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = RC;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return RC;
}
":"	 {
	invalidToken();
}
"."	 {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = DOT;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return DOT;
}
","	 {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = CM;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return CM;
}
"<"	 {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = LT;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return LT;
}
">"	 {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = GT;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return GT;
}
";"	 {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = SM;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return SM;
}
"?"	 {
	invalidToken();
}
"->" {
	invalidToken();
}
"..." {
	invalidToken();
}
\"[^"\n]*\"	{
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = STRING;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
    yytoken->sval = convertString(yytext);
	insert_head(yytoken);
	return STRING;
}
0x[0-9a-fA-f]+|0X[0-9a-fA-f]+|[0-9]+	{
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = ICON;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
    yytoken->ival = atoi(yytoken->text);    
	insert_head(yytoken);
	return ICON;
}
[0-9]*"."[0-9]+|[0-9]+"."[0-9]*			{
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = FLOAT;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
    yytoken->dval = atof(yytoken->text);     
	insert_head(yytoken);
	return FCON;
}
'.{1}' {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = CCON;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
    yytoken->sval = convertString(yytext);
	insert_head(yytoken);
	return CCON;
}
<<EOF>> {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = EOF;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return EOF;
}
\n	 {rows++;}
[a-zA-Z][a-zA-Z0-9]* {
    words++; 
    yytoken = malloc(sizeof(struct token));
    chars += strlen(yytext);
    yytoken->category = STRING;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
    yytoken->sval = convertString(yytext); 
    return IDENTIFIER;
}
"<<"  {
	invalidToken();
}
">>"  {
	invalidToken();
}
"*="  {
	invalidToken();
}
"/="  {
	invalidToken();
}
"%="  {
	invalidToken();
}
"+="  {
	invalidToken();
}
"-="  {
	invalidToken();
}
"<<="  {
	invalidToken();
}
">>="  {
	invalidToken();
}
"&="  {
	invalidToken();
}
"^="  {
	invalidToken();
}
"|="  {
	invalidToken();
}
[^ \t]  {/*do nothing*/}
[//].* {rows++;}
#.*	 {rows++;}
.	 {chars++;}

%%

