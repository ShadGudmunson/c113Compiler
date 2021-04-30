%option noinput
%option nounput
%option noyywrap

%{
#include "ytab.h"
#include "tree.h"
#include "cgram.tab.h"
#include "errdef.h"

struct token *yytoken = NULL;
extern char *filename;
extern void insert_head(struct token *tok);
int stdioflg = 0;
int stdlibflg = 0;
int stringflg = 0;
int mathflg = 0;


int rows = 1, words = 0, chars = 0;

void yyerror (char const *s){
	fprintf (stderr, "%s\n", s);
	fprintf (stderr, "Something went wrong with \"%s\" in file %s on line %d\n",\
	 yylval.treeptr->leaf->text, yylval.treeptr->leaf->filename, yylval.treeptr->leaf->lineno);
	exit(LEXERR);
}

void invalidToken(){
	fprintf (stderr, "Something went wrong with \"%s\" in file %s on line %d\n",\
	 yylval.treeptr->leaf->text, yylval.treeptr->leaf->filename, yylval.treeptr->leaf->lineno);
	printf("This feature is not suppored in c113c.");
	exit(LEXERR);
}

%}
%%

"else" {
    return alctoken(ELSE);
}
"long" {
    return alctoken(INT);
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
    return alctoken(FLOAT);
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
"!" {
    return alctoken(NOT);
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
"#include <stdio.h>" { stdioflg = 1; }
"#include <string.h>" { stringflg = 1; }
"#include <stdlib.h>" { stdlibflg = 1; }
"#include <math.h>" { mathflg = 1; }
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
    return alctoken(INT);
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
	return alctoken(STRING);
}
[0-9]+ {
	return alctoken(ICON);
}
[0-9]*"."[0-9]+|[0-9]+"."[0-9]* {
	return alctoken(FCON);
}
'.{1,2}' {
	return alctoken(CCON);
}
<<EOF>> {
	return alctoken(EOF);
}
\n {rows++;}
[a-zA-Z][a-zA-Z0-9]* {
	words++;
	return alctoken(IDENTIFIER);
}
[^ \t] {/*do nothing*/}
[/]{2}.* {/*do nothing*/}
#.* {/*do nothing*/}
\/\*(.|\n)*?\*\/ {/*do nothing*/}
. {chars++;}

%%

