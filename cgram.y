%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tree.h"

//#define YYDEBUG 1
//#define DEBUG

extern int yyerror(char *);
extern int yylex(void);

extern struct tree *root;
/* declare externs for global variables and helper function prototypes */

%}

%union {
	struct tree *treeptr;
}

%token <treeptr> BAD_TOKEN
%token <treeptr> ICON CCON FCON
%token <treeptr> ENUMERATION_CONSTANT IDENTIFIER STRING
%token <treeptr> SIZEOF
%token <treeptr> INCOP DECOP SHL SHR LE GE EQ NE
%token <treeptr> ANDAND OROR MUASN DIASN MOASN PLASN ASN
%token <treeptr> MIASN SLASN SRASN ANASN
%token <treeptr> ERASN ORASN TYPEDEF_NAME
%token <treeptr> CM SM LT GT PLUS MINUS MUL DIV MOD LP RP LB RB LC RC COLON
%token <treeptr> QUEST AND OR ER NOT FOLLOW BANG DOT

%token <treeptr> TYPEDEF EXTERN STATIC AUTO REGISTER
%token <treeptr> CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOLATILE VOID
%token <treeptr> STRUCT UNION ENUM ELIPSIS

%token <treeptr> CASE DEFAULT IF SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN

/* Lowest Precedence */
%left THEN
%left ELSE

%left CM
%right ASN PLASN MIASN MUASN DIASN MOASN SRASN SLASN ANASN ERASN ORASN
%left OROR
%left ANDAND
%left OR
%left ER
%left AND
%left EQ NE
%left GT GE LT LE
%left SHL SHR
%left PLUS MINUS
%left MUL DIV MOD
%left BANG NOT INCOP DECOP SIZEOF
/* Highest Precedence */

%start file

/* we will need these once we are building syntax tree nodes */
%type <treeptr>     identifier
%type <treeptr>     file
%type <treeptr>     translation_unit
%type <treeptr>     external_declaration
%type <treeptr>     function_definition
%type <treeptr>     declaration
%type <treeptr>     untyped_declaration
%type <treeptr>     declaration_list
%type <treeptr>     declaration_specifiers
%type <treeptr>     storage_class_specifier
%type <treeptr>     type_specifier
%type <treeptr>     actual_type_specifier
%type <treeptr>     type_adjective
%type <treeptr>     type_qualifier
%type <treeptr>     struct_or_union_specifier
%type <treeptr>     struct_or_union
%type <treeptr>     struct_declaration_list
%type <treeptr>     init_declarator_list
%type <treeptr>     init_declarator
%type <treeptr>     struct_declaration
%type <treeptr>     specifier_qualifier_list
%type <treeptr>     struct_declarator_list
%type <treeptr>     struct_declarator
%type <treeptr>     enum_specifier
%type <treeptr>     enumerator_list
%type <treeptr>     enumerator
%type <treeptr>     declarator
%type <treeptr>     direct_declarator
%type <treeptr>     function_declarator
%type <treeptr>     direct_function_declarator
%type <treeptr>     pointer
%type <treeptr>     type_qualifier_list
%type <treeptr>     parameter_type_list
%type <treeptr>     parameter_list
%type <treeptr>     parameter_declaration
%type <treeptr>     identifier_list
%type <treeptr>     initializer
%type <treeptr>     initializer_list
%type <treeptr>     type_name
%type <treeptr>     abstract_declarator
%type <treeptr>     direct_abstract_declarator
%type <treeptr>     statement
%type <treeptr>     labeled_statement
%type <treeptr>     expression_statement
%type <treeptr>     compound_statement
%type <treeptr>     compound_statement_opt
%type <treeptr>     statement_list
%type <treeptr>     selection_statement
%type <treeptr>     iteration_statement
%type <treeptr>     forcntrl
%type <treeptr>     jump_statement
%type <treeptr>     expression
%type <treeptr>     assignment_expression
%type <treeptr>     assignment_operator
%type <treeptr>     conditional_expression
%type <treeptr>     constant_expression
%type <treeptr>     logical_or_expression
%type <treeptr>     logical_and_expression
%type <treeptr>     inclusive_or_expression
%type <treeptr>     exclusive_or_expression
%type <treeptr>     and_expression
%type <treeptr>     equality_expression
%type <treeptr>     relational_expression
%type <treeptr>     shift_expression
%type <treeptr>     additive_expression
%type <treeptr>     multiplicative_expression
%type <treeptr>     cast_expression
%type <treeptr>     unary_expression
%type <treeptr>     unary_operator
%type <treeptr>     postfix_expression
%type <treeptr>     primary_expression
%type <treeptr>     argument_expression_list
%type <treeptr>     constant
%%

identifier:
    IDENTIFIER
        {  }
    | ENUMERATION_CONSTANT
        {  }
    ;

file: translation_unit { root = $1;
    treeprint(root, 0);
 };

translation_unit:
    external_declaration
        {  }
    | translation_unit external_declaration
        { $$ = alcTree(1003, "translation_unit", 2, $1, $2); }
    ;

/* NAME things. Does not imply that NAME is present. */
external_declaration:
	 function_definition
        {  }
	 | declaration
        {  }
	 | untyped_declaration
	    {  }
	 ;

function_definition:
    function_declarator compound_statement
        { /* old school pre-ANSI, no return type */ fprintf(stderr, "Error: pre-ANSI not supported"); exit(2); }
    | function_declarator declaration_list compound_statement
        { /* old school pre ANSI */ fprintf(stderr, "Error: pre-ANSI not supported"); exit(2);}
    | declaration_specifiers function_declarator compound_statement
        { $$ = alcTree(1007, "function_definition", 3, $1, $2, $3); }
    | declaration_specifiers function_declarator  declaration_list compound_statement
        { /* declaration_list! This must be pre-ANSI  */ fprintf(stderr, "Error: pre-ANSI not supported"); exit(2); }
    ;

declaration:
    declaration_specifiers SM
		{ $$ = alcTree(1011, "declaration", 2, $1, $2); }
	| declaration_specifiers init_declarator_list SM
		{ $$ = alcTree(1012, "declaration", 3, $1, $2, $3); }
	;

untyped_declaration:
    init_declarator_list SM
        { $$ = alcTree(1013, "untyped_declaration", 2, $1, $2); }
    ;

declaration_list:
    declaration
        {  }
	| declaration_list declaration
		{ $$ = alcTree(1015, "declaration_list", 2, $1, $2); }
	;

declaration_specifiers:
    storage_class_specifier
    /* defines TYPEDEF,EXTERN,STATIC,AUTO,REGISTER*/
	| storage_class_specifier declaration_specifiers
        { $$ = alcTree(1016, "declaration_specifiers", 2, $1, $2); }
	| type_specifier
        {  }
	| type_specifier declaration_specifiers
        { $$ = alcTree(1018, "declaration_specifiers", 2, $1, $2); }
	| type_qualifier
        {  }
	| type_qualifier declaration_specifiers
        { $$ = alcTree(1020, "declaration_specifiers", 2, $1, $2); }
	;


storage_class_specifier:
	/* here we will know the storage specifier */
    TYPEDEF  /* indicate typedef is seen */
        {  }
	 | EXTERN
        {  }
	 | STATIC
		{  }
	 | AUTO
        {  }
	 | REGISTER
		{  }
	;

type_specifier:
    actual_type_specifier /* build ctype */
        {  }
    | type_adjective
        {  }
    ;

actual_type_specifier:
    VOID
        {  }
    | CHAR
        {  }
	| INT
        {  }
	| FLOAT
        {  }
    | DOUBLE
        {  }
    | TYPEDEF_NAME
        {  }
	| struct_or_union_specifier
        {}
	| enum_specifier
        {}
	;

type_adjective:    /* Build ctype for all */
    SHORT
        {  }
    | LONG
        {  }
    | SIGNED
        {  }
    | UNSIGNED
        {  }
    ;

type_qualifier:
    CONST
        {  }
	| VOLATILE
		{  }
	;

struct_or_union_specifier:
    struct_or_union LC struct_declaration_list RC
        { $$ = alcTree(1040, "struct_or_union_specifier", 4, $1, $2, $3, $4); }
    | struct_or_union identifier LC struct_declaration_list RC
        { $$ = alcTree(1041, "struct_or_union_specifier", 5, $1, $2, $3, $4, $5); }
    | struct_or_union identifier
        { $$ = alcTree(1042, "struct_or_union_specifier", 2, $1, $2); }
    ;

struct_or_union:
    STRUCT
        { } /* build ctype */
    | UNION
        { }  /* build ctype */
    ;

struct_declaration_list:
    struct_declaration
        { }
	| struct_declaration_list struct_declaration
		{ $$ = alcTree(1043, "struct_declaration_list", 2, $1, $2); }
	;

init_declarator_list:
    init_declarator
        /* an identifier has been found and added to the symbol table*/
        /* so reset ctype to be base type of declaration */
	| init_declarator_list CM init_declarator
        { $$ = alcTree(1044, "init_declarator_list", 3, $1, $2, $3); }
	;

init_declarator:
    declarator
        {  }
	| declarator ASN initializer
        { $$ = alcTree(1046, "init_declarator", 3, $1, $2, $3); }
	;

struct_declaration:
    specifier_qualifier_list SM
		{ $$ = alcTree(1047, "struct_declaration", 2, $1, $2); }
	|  specifier_qualifier_list struct_declarator_list SM
		{ $$ = alcTree(1048, "struct_declaration", 3, $1, $2, $3); }
	;

specifier_qualifier_list:
 type_specifier /* ctype build */
	| type_specifier specifier_qualifier_list  /* ctype build */
		{ $$ = alcTree(1049, "specifier_qualifier_list", 2, $1, $2); }
	| type_qualifier /* ctype build */
        {  }
	| type_qualifier specifier_qualifier_list  /* ctype build */
		{ $$ = alcTree(1051, "specifier_qualifier_list", 2, $1, $2); }
	;

struct_declarator_list:
 struct_declarator
	| struct_declarator_list CM struct_declarator
		{ $$ = alcTree(1052, "struct_declarator_list", 3, $1, $2, $3); }
	;

struct_declarator:
 declarator
	| COLON constant_expression
		{ $$ = alcTree(1053, "struct_declarator", 2, $1, $2); }
	| declarator COLON constant_expression
		{ $$ = alcTree(1054, "struct_declarator", 3, $1, $2, $3); }
	;

enum_specifier:
    ENUM LC enumerator_list RC
		{ $$ = alcTree(1055, "enum_specifier", 4, $1, $2, $3, $4); }
	| ENUM identifier LC enumerator_list RC
		{ $$ = alcTree(1056, "enum_specifier", 5, $1, $2, $3, $4, $5); }
	| ENUM identifier
		{ $$ = alcTree(1057, "enum_specifier", 2, $1, $2); }
	;

enumerator_list:
    enumerator
        {  }
	| enumerator_list CM enumerator
		{ $$ = alcTree(1059, "enumerator_list", 3, $1, $2, $3); }
	;

enumerator:
    IDENTIFIER
		{  }
	| IDENTIFIER ASN constant_expression
        { $$ = alcTree(1061, "enumerator", 3, $1, $2, $3); }
	;

declarator:
    direct_declarator
        {  }
	| pointer direct_declarator
        { $$ = alcTree(1063, "declarator", 2, $1, $2); }
	;

direct_declarator:
    identifier  /* this could be a TRUE identifier or a TYPEDEF identifier*/
        { }
	| LP declarator RP
        { $$ = alcTree(1064, "direct_declarator", 2, $1, $2); }
	| direct_declarator LB RB
        { $$ = alcTree(1065, "direct_declarator", 3, $1, $2, $3); }
	| direct_declarator LB constant_expression RB
        { $$ = alcTree(1066, "direct_declarator", 4, $1, $2, $3, $4); }
    | direct_declarator LP parameter_type_list RP
        { $$ = alcTree(1067, "direct_declarator", 4, $1, $2, $3, $4); }
	| direct_declarator LP RP
        { $$ = alcTree(1068, "direct_declarator", 3, $1, $2, $3); }
	| direct_declarator LP identifier_list RP
        { $$ = alcTree(1069, "direct_declarator", 4, $1, $2, $3, $4); }
    ;
function_declarator:
    direct_function_declarator
        {  }
    | pointer direct_function_declarator
		{ $$ = alcTree(1069, "function_declarator", 2, $1, $2); }
    ;

direct_function_declarator:
    direct_declarator LP parameter_type_list RP
        { $$ = alcTree(1070, "direct_function_declarator", 4, $1, $2, $3, $4); }
    | direct_declarator LP RP
        { $$ = alcTree(1071, "direct_function_declarator", 3, $1, $2, $3); }
    | direct_declarator LP identifier_list RP
        { /* pre-ANSI, error case */ printf("Error: pre-ANSI not supported"); exit(2);}
    ;

pointer:
    MUL
        {  }
    | MUL type_qualifier_list
        { $$ = alcTree(1075, "pointer", 2, $1, $2); }
    | MUL pointer
        { $$ = alcTree(1075, "pointer", 2, $1, $2);}
    | MUL type_qualifier_list pointer
        { $$ = alcTree(1076, "pointer", 3, $1, $2, $3); }
    ;

type_qualifier_list:
    type_qualifier
        {  }
    | type_qualifier_list type_qualifier
        { $$ = alcTree(1078, "type_qualifier_list", 2, $1, $2); }
    ;

parameter_type_list:
    parameter_list
        {  }
    | parameter_list CM ELIPSIS
        { $$ = alcTree(1080, "parameter_type_list", 3, $1, $2, $3); }
    ;

parameter_list:
    parameter_declaration
        {  }
    | parameter_list CM parameter_declaration
        { $$ = alcTree(1082, "parameter_list", 3, $1, $2, $3); }
    ;

parameter_declaration:
    declaration_specifiers declarator
        { $$ = alcTree(1083, "parameter_declaration", 2, $1, $2); }
    | declaration_specifiers
        {  }
    | declaration_specifiers abstract_declarator
        { $$ = alcTree(1085, "parameter_declaration", 2, $1, $2); }
    ;

identifier_list:
	IDENTIFIER
		{  }
	| identifier_list CM IDENTIFIER
		{ $$ = alcTree(1087, "identifier_list", 3, $1, $2, $3); }
	;

initializer:
    assignment_expression
        {  }
	| LC initializer_list RC
		{ $$ = alcTree(1088, "initializer", 3, $1, $2, $3); }
	| LC initializer_list CM RC
		{ $$ = alcTree(1089, "initializer", 4, $1, $2, $3, $4); }
	;

initializer_list:
    initializer
        {  }
	| initializer_list CM initializer
		{ $$ = alcTree(1091, "initializer_list", 3, $1, $2, $3); }
	;

type_name:
    specifier_qualifier_list
        {  }
	| specifier_qualifier_list abstract_declarator
        { $$ = alcTree(1093, "type_name", 2, $1, $2); }
	;

abstract_declarator:
    pointer
        {  }
	| direct_abstract_declarator
        {  }
	| pointer direct_abstract_declarator
		{ $$ = alcTree(1096, "abstract_declarator", 2, $1, $2); }
	;


direct_abstract_declarator:
    LP abstract_declarator RP
		{ $$ = alcTree(1097, "direct_abstract_declarator", 3, $1, $2, $3); }
	| LB RB
		{ $$ = alcTree(1098, "direct_abstract_declarator", 2, $1, $2); }
	| LB constant_expression RB
		{ $$ = alcTree(1099, "direct_abstract_declarator", 3, $1, $2, $3); }
	| direct_abstract_declarator LB RB
		{ $$ = alcTree(1100, "direct_abstract_declarator", 3, $1, $2, $3); }
	| direct_abstract_declarator LB constant_expression RB
		{ $$ = alcTree(1101, "direct_abstract_declarator", 4, $1, $2, $3, $4); }
	| LP RP
		{ $$ = alcTree(1102, "direct_abstract_declarator", 2, $1, $2); }
	| LP parameter_type_list RP
		{ $$ = alcTree(1103, "direct_abstract_declarator", 3, $1, $2, $3); }
	| direct_abstract_declarator LP RP
		{ $$ = alcTree(1104, "direct_abstract_declarator", 3, $1, $2, $3); }
	| direct_abstract_declarator LP parameter_type_list RP
		{ $$ = alcTree(1105, "direct_abstract_declarator", 4, $1, $2, $3, $4); }
	;

statement:
    labeled_statement {  }
	| compound_statement {  }
	| expression_statement {  }
	| selection_statement {  }
	| iteration_statement {  }
	| jump_statement {  }
	;

labeled_statement:
    identifier COLON statement
        { $$ = alcTree(1112, "labeled_statement", 3, $1, $2, $3); }
    | CASE constant_expression COLON statement
        { $$ = alcTree(1113, "labeled_statement", 3, $1, $2, $3); }
    | DEFAULT COLON statement
        { $$ = alcTree(1114, "labeled_statement", 3, $1, $2, $3); }
    ;

expression_statement:
    SM
		{  }
	| expression SM
		{ $$ = alcTree(1116, "expression_statement", 2, $1, $2); }
	;

compound_statement:
    LC RC
		{ $$ = alcTree(1117, "compound_statement", 2, $1, $2); }
    | LC compound_statement_opt RC
        { $$ = alcTree(1118, "compound_statement", 3, $1, $2, $3); }
    ;

compound_statement_opt:
    statement_list
		{  }
    | declaration_list
		{  }
    | declaration_list statement_list
		{ $$ = alcTree(1121, "compound_statement_opt", 2, $1, $2); }
    ;

statement_list:
    statement
        {  }
	| statement_list statement
		{ $$ = alcTree(1123, "statement_list", 2, $1, $2); }
	;

selection_statement:
	IF LP expression RP statement %prec THEN
        { $$ = alcTree(1124, "selection_statement", 5, $1, $2, $3, $4, $5);}
    | IF LP expression RP statement ELSE statement
        { $$ = alcTree(1125, "selection_statement", 6, $1, $2, $3, $4, $5, $7); }
    | SWITCH LP expression RP statement
        { $$ = alcTree(1126, "selection_statement", 5, $1, $2, $3, $4, $5);  }
    ;

iteration_statement:
    WHILE LP expression RP statement
        { $$ = alcTree(1127, "iteration_statement", 5, $1, $2, $3, $4, $5); }
    | DO statement WHILE LP expression RP SM
        { $$ = alcTree(1128, "iteration_statement", 7, $1, $2, $3, $4, $5, $6, $7); }
    | FOR LP forcntrl RP statement
        { $$ = alcTree(1129, "iteration_statement", 5, $1, $2, $3, $4, $5); }
    ;

forcntrl:
    SM SM
        { $$ = alcTree(1130, "forcntrl", 2, $1, $2); }
    | SM SM expression
        { $$ = alcTree(1131, "forcntrl", 3, $1, $2, $3); }
    | SM expression SM
        { $$ = alcTree(1132, "forcntrl", 3, $1, $2, $3); }
    | SM expression SM expression
        { $$ = alcTree(1133, "forcntrl", 4, $1, $2, $3, $4); }
    | expression SM SM
        { $$ = alcTree(1134, "forcntrl", 3, $1, $2, $3); }
    | expression SM SM expression
        { $$ = alcTree(1135, "forcntrl", 4, $1, $2, $3, $4); }
    | expression SM expression SM
        { $$ = alcTree(1136, "forcntrl", 4, $1, $2, $3, $4); }
    | expression SM expression SM expression
        { $$ = alcTree(1137, "forcntrl", 4, $1, $2, $3, $4); }
    ;



jump_statement:
	GOTO identifier SM
        { $$ = alcTree(1138, "jump_statement", 3, $1, $2, $3); }
	| CONTINUE SM
        { $$ = alcTree(1139, "jump_statement", 2, $1, $2); }
	| BREAK SM
        { $$ = alcTree(1140, "jump_statement", 2, $1, $2); }
	| RETURN SM
        { $$ = alcTree(1141, "jump_statement", 2, $1, $2); }
	| RETURN expression SM
        { $$ = alcTree(1142, "jump_statement", 3, $1, $2, $3); }
	;

expression:
    assignment_expression
		{  }
	| expression CM assignment_expression
		{ $$ = alcTree(1144, "expression", 3, $1, $2, $3); }
	;


assignment_expression:
    conditional_expression
        {  }
	| unary_expression assignment_operator assignment_expression
        { $$ = alcTree(1146, "assignment_expression", 3, $1, $2, $3); }
	;

assignment_operator:
    ASN   {  }
	| MUASN {  }
	| DIASN {  }
	| MOASN {  }
	| PLASN {  }
	| MIASN {  }
	| SLASN {  }
	| SRASN {  }
	| ANASN {  }
	| ERASN {  }
	| ORASN {  }
	;


conditional_expression:
    logical_or_expression
        {  }
	| logical_or_expression QUEST expression COLON conditional_expression
		{ $$ = alcTree(1159, "conditional_expression", 5, $1, $2, $3, $4, $5); }
	;


constant_expression:
    conditional_expression
        {  }
	;

logical_or_expression:
    logical_and_expression
        {  }
	| logical_or_expression OROR logical_and_expression
		{ $$ = alcTree(1162, "logical_or_expression", 3, $1, $2, $3); }
	;

logical_and_expression:
    inclusive_or_expression
        {  }
	| logical_and_expression ANDAND inclusive_or_expression
		{ $$ = alcTree(1164, "logical_and_expression", 3, $1, $2, $3); }
	;

inclusive_or_expression:
    exclusive_or_expression
        {  }
	| inclusive_or_expression OR exclusive_or_expression
		{ $$ = alcTree(1166, "inclusive_or_expression", 3, $1, $2, $3); }
	;

exclusive_or_expression:
    and_expression
        {  }
	| exclusive_or_expression ER and_expression
		{ $$ = alcTree(1168, "exclusive_or_expression", 3, $1, $2, $3); }
	;

and_expression:
    equality_expression
        {  }
	| and_expression AND equality_expression
		{ $$ = alcTree(1170, "and_expression", 3, $1, $2, $3); }
	;

equality_expression:
    relational_expression
        {  }
	| equality_expression EQ relational_expression
		{ $$ = alcTree(1172, "equality_expression", 3, $1, $2, $3); }
	| equality_expression NE relational_expression
		{ $$ = alcTree(1173, "equality_expression", 3, $1, $2, $3); }
	;

relational_expression:
	 shift_expression
        {  }
	 | relational_expression LT shift_expression
        { $$ = alcTree(1175, "relational_expression", 3, $1, $2, $3); }
	 | relational_expression GT shift_expression
        { $$ = alcTree(1176, "relational_expression", 3, $1, $2, $3); }
	 | relational_expression LE shift_expression
        { $$ = alcTree(1177, "relational_expression", 3, $1, $2, $3); }
	 | relational_expression GE shift_expression
		{ $$ = alcTree(1178, "relational_expression", 3, $1, $2, $3); }
	 ;

shift_expression:
	 additive_expression
        {  }
	 | shift_expression SHL additive_expression
        { $$ = alcTree(1180, "shift_expression", 3, $1, $2, $3); }
	 | shift_expression SHR additive_expression
        { $$ = alcTree(1181, "shift_expression", 3, $1, $2, $3); }
    ;

additive_expression:
	 multiplicative_expression
        {  }
	 | additive_expression PLUS multiplicative_expression
        { $$ = alcTree(1183, "additive_expression", 3, $1, $2, $3); }
	 | additive_expression MINUS multiplicative_expression
        { $$ = alcTree(1184, "additive_expression", 3, $1, $2, $3); }
	 ;

multiplicative_expression:
	 cast_expression
        {  }
	 | multiplicative_expression MUL cast_expression
        { $$ = alcTree(1186, "multiplicative_expression", 3, $1, $2, $3); }
	 | multiplicative_expression DIV cast_expression
        { $$ = alcTree(1187, "multiplicative_expression", 3, $1, $2, $3); }
	 | multiplicative_expression MOD cast_expression
        { $$ = alcTree(1188, "multiplicative_expression", 3, $1, $2, $3); }
	 ;

cast_expression:
	 unary_expression
        {  }
	 | LP type_name RP cast_expression
        { $$ = alcTree(1190, "cast_expression", 4, $1, $2, $3, $4); }
	 ;


unary_expression:
	 postfix_expression
        {  }
	 | INCOP unary_expression
        { $$ = alcTree(1192, "unary_expression", 2, $1, $2); }
	 | DECOP unary_expression
        { $$ = alcTree(1193, "unary_expression", 2, $1, $2); }
	 | unary_operator cast_expression
        { $$ = alcTree(1194, "unary_expression", 2, $1, $2); }
	 | SIZEOF unary_expression
        { $$ = alcTree(1195, "unary_expression", 2, $1, $2); }
	 | SIZEOF LP type_name RP
        { $$ = alcTree(1196, "unary_expression", 4, $1, $2, $3, $4); }
	 ;

unary_operator:
	 AND
        {  }
	 | MUL
        {  }
	 | PLUS
        {  }
	 | MINUS
        {  }
	 | NOT
        {  }
	 | BANG
        {  }
	 ;


postfix_expression:
	 primary_expression
	 | postfix_expression LB expression RB
		 { $$ = alcTree(1203, "postfix_expression", 4, $1, $2, $3, $4); }
	 | postfix_expression LP RP
		 { $$ = alcTree(1204, "postfix_expression", 3, $1, $2, $3); }
	 | postfix_expression LP  argument_expression_list RP
		 { $$ = alcTree(1205, "postfix_expression", 4, $1, $2, $3, $4); }
	 | postfix_expression DOT identifier
		 { $$ = alcTree(1206, "postfix_expression", 3, $1, $2, $3); }
	 | postfix_expression FOLLOW identifier
		{ $$ = alcTree(1207, "postfix_expression", 3, $1, $2, $3); }
	 | postfix_expression INCOP
		 { $$ = alcTree(1208, "postfix_expression", 2, $1, $2); }
	 | postfix_expression DECOP
		 { $$ = alcTree(1209, "postfix_expression", 2, $1, $2); }
	 ;

primary_expression:
	 IDENTIFIER
        {  }
	 | constant
        {  }
	 | STRING
        {  }
	 | LP expression RP
	 { $$ = alcTree(1213, "primary_expression", 3, $1, $2, $3); }
	 ;

argument_expression_list:
    assignment_expression
        {  }
    | argument_expression_list CM assignment_expression
        { $$ = alcTree(1215, "argument_expression_list", 3, $1, $2, $3); }
    ;

constant:
    ICON
        {  }
    | CCON
        {  }
    | FCON
        {  }
    | ENUMERATION_CONSTANT
        {  }
    ;

%%