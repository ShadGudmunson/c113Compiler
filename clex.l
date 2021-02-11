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
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = STATIC;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return STATIC;
}
"volatile" {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = VOLATILE;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return VOLATILE;
}
"goto" {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = GOTO;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return GOTO;
}
"continue" {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = CONTINUE;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return CONTINUE;
}
"signed" {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = SIGNED;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return SIGNED;
}
"const" {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = CONST;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return CONST;
}
"auto" {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = AUTO;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return AUTO;
}
"do" {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = DO;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return DO;
}
"enum" {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = ENUM;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return ENUM;
}
"register" {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = REGISTER;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return REGISTER;
}
"typedef" {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = TYPEDEF;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return TYPEDEF;
}
"extern" {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = EXTERN;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return EXTERN;
}
"union" {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = UNION;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return UNION;
}
"short" {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = SHORT;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return SHORT;
}
"unsigned" {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = UNSIGNED;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return UNSIGNED;
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
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = OR;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return OR;
}
"^" {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = ER;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return ER;
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
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = COLON;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return COLON;
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
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = QUEST;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return QUEST;
}
"->" {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = FOLLOW;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return FOLLOW;
}
"..." {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = ELIPSIS;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return ELIPSIS;
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
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = SHL;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return SHL;
}
">>"  {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = SHR;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return SHR;
}
"*="  {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = MUASN;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return MUASN;
}
"/="  {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = DIASN;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return DIASN;
}
"%="  {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = MOASN;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return MOASN;
}
"+="  {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = PLASN;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return PLASN;
}
"-="  {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = MIASN;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return MIASN;
}
"<<="  {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = SLASN;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return SLASN;
}
">>="  {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = SRASN;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return SRASN;
}
"&="  {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = ANASN;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return ANASN;
}
"^="  {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = ERASN;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return ERASN;
}
"|="  {
	yytoken = malloc(sizeof(struct token));
	tokenInit();
    yytoken->category = ORASN;
	yytoken->text = strdup(yytext);
	yytoken->lineno = rows;
	yytoken->filename = filename;
	insert_head(yytoken);
	return ORASN;
}
[^ \t]  {/*do nothing*/}
[//].* {/*do nothing*/}
#.*	 {rows++;}
.	 {chars++;}

%%

