%option noinput
%option nounput
%option noyywrap

%{
#include "ytab.h"
#include "tree.h"
#include "cgram.tab.h"

struct token *yytoken = NULL;
extern char *filename;
extern void insert_head(struct token *tok);

int rows = 0, words = 0, chars = 0;

void yyerror (char const *s){
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
		} else{
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

int alctoken(int category){
	yytoken = malloc(sizeof(struct token));
	tokenInit();
	yytoken->category = category;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return category;

}

%}
%%

"else" {
    return alctoken(ELSE);
}
"long" {
    return alctoken(LONG);
}
"switch" {
    return alctoken(SWITCH);
}
"break" {
    return alctoken(BREAK);
}
"case" {
    return alctoken(CASE);
}
"return" {
    return alctoken(RETURN);
}
"char" {
    return alctoken(CHAR);
}
"float" {
    return alctoken(FLOAT);
}
"for" {
    return alctoken(FOR);
}
"void" {
    return alctoken(VOID);
}
"sizeof" {
    return alctoken(SIZEOF);
}
"default" {
    return alctoken(DEFAULT);
}
"if" {
    return alctoken(IF);
}
"while" {
    return alctoken(WHILE);
}
"int" {
    return alctoken(INT);
}
"struct" {
    return alctoken(STRUCT);
}
"double" {
    return alctoken(DOUBLE);
}
"=" {
    return alctoken(ASN);
}
"+" {
    return alctoken(PLUS);
}
"-" {
    return alctoken(MINUS);
}
"*" {
    return alctoken(MUL);
}
"/" {
    return alctoken(DIV);
}
"%" {
    return alctoken(MOD);
}
"~" {
    return alctoken(NOT);
}
"--" {
    return alctoken(DECOP);
}
"++" {
    return alctoken(INCOP);
}
"<=" {
    return alctoken(LE);
}
">=" {
    return alctoken(GE);
}
"==" {
    return alctoken(EQ);
}
"!=" {
    return alctoken(NE);
}
"&&" {
    return alctoken(ANDAND);
}
"||" {
    return alctoken(OROR);
}
"&" {
    return alctoken(AND);
}
"[" {
    return alctoken(LB);
}
"]" {
    return alctoken(RB);
}
"(" {
    return alctoken(LP);
}
")" {
    return alctoken(RP);
}
"{" {
    return alctoken(LC);
}
"}" {
    return alctoken(RC);
}
"." {
    return alctoken(DOT);
}
"," {
    return alctoken(CM);
}
"<" {
    return alctoken(LT);
}
">" {
    return alctoken(GT);
}
";" {
    return alctoken(SM);
}
"<<" {
	invalidToken();
}
">>" {
	invalidToken();
}
"*=" {
	invalidToken();
}
"/=" {
	invalidToken();
}
"%=" {
	invalidToken();
}
"+=" {
	invalidToken();
}
"-=" {
	invalidToken();
}
"<<=" {
	invalidToken();
}
">>=" {
	invalidToken();
}
"&=" {
	invalidToken();
}
"^=" {
	invalidToken();
}
"|=" {
	invalidToken();
}
"?" {
	invalidToken();
}
"->" {
	invalidToken();
}
"..." {
	invalidToken();
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
":" {
	invalidToken();
}
"|" {
	invalidToken();
}
"^" {
	invalidToken();
}
\"[^"\n]*\"	{
	alctoken(STRING);
	yytoken->sval = convertString(yytext);
	return STRING;
}
0x[0-9a-fA-f]+|0X[0-9a-fA-f]+|[0-9]+ {
	alctoken(ICON);
	yytoken->ival = atoi(yytoken->text);
	return ICON;
}
[0-9]*"."[0-9]+|[0-9]+"."[0-9]* {
	alctoken(FCON);
	yytoken->dval = atof(yytoken->text);
	return FCON;
}
'.{1}' {
	alctoken(CCON);
	yytoken->sval = convertString(yytext);
	return CCON;
}
<<EOF>> {
	return alctoken(EOF);
}
\n {rows++;}
[a-zA-Z][a-zA-Z0-9]* {
	words++;
	alctoken(IDENTIFIER);
	yytoken->sval = convertString(yytext);
	return IDENTIFIER;
}
[^ \t] {/*do nothing*/}
[//].* {rows++;}
#.* {rows++;}
. {chars++;}

%%

