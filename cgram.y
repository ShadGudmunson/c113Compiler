%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tree.h"
#include "prodrule.h"
#include "symtab.h"

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
        { $$ = alcTree(identifier_id, "identifier", 1, $1); }
    | ENUMERATION_CONSTANT
        {  }
    ;

file: translation_unit { root = $1;
    preTrav(root, parseTree);
    printCurrentTable();
    //treeprint(root, 0);
 };

translation_unit:
    external_declaration
        {  }
    | translation_unit external_declaration
        { $$ = alcTree(translation_unit_tr_ex, "translation_unit", 2, $1, $2); }
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
        { /* old school pre-ANSI, no return type */ fprintf(stderr, "Error pre-ANSI not supported"); exit(2); }
    | function_declarator declaration_list compound_statement
        { /* old school pre ANSI */ fprintf(stderr, "Error pre-ANSI not supported"); exit(2);}
    | declaration_specifiers function_declarator compound_statement
        { $$ = alcTree(function_definition_de_fu_co, "function_definition", 3, $1, $2, $3); }
    | declaration_specifiers function_declarator  declaration_list compound_statement
        { /* declaration_list! This must be pre-ANSI  */ fprintf(stderr, "Error pre-ANSI not supported"); exit(2); }
    ;

declaration:
    declaration_specifiers SM
		{ $$ = alcTree(declaration_de_sm, "declaration", 2, $1, $2); }
	| declaration_specifiers init_declarator_list SM
		{ $$ = alcTree(declaration_de_in_sm, "declaration", 3, $1, $2, $3); }
	;

untyped_declaration:
    init_declarator_list SM
        { $$ = alcTree(untyped_declaration_in_sm, "untyped_declaration", 2, $1, $2); }
    ;

declaration_list:
    declaration
        {  }
	| declaration_list declaration
		{ $$ = alcTree(declaration_list_de_de, "declaration_list", 2, $1, $2); }
	;

declaration_specifiers:
    storage_class_specifier
    /* defines TYPEDEF,EXTERN,STATIC,AUTO,REGISTER*/
	| storage_class_specifier declaration_specifiers
        { $$ = alcTree(declaration_specifiers_st_de, "declaration_specifiers", 2, $1, $2); }
	| type_specifier
        {  }
	| type_specifier declaration_specifiers
        { $$ = alcTree(declaration_specifiers_tyse_de, "declaration_specifiers", 2, $1, $2); }
	| type_qualifier
        {  }
	| type_qualifier declaration_specifiers
        { $$ = alcTree(declaration_specifiers_tyqu_de, "declaration_specifiers", 2, $1, $2); }
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
        {  }
	| enum_specifier
        {  }
	;

type_adjective:
    /* Build ctype for all */
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
        { $$ = alcTree(struct_or_union_specifier_st_lc_st_rc, "struct_or_union_specifier", 4, $1, $2, $3, $4); }
    | struct_or_union identifier LC struct_declaration_list RC
        { $$ = alcTree(struct_or_union_specifier_st_id_lc_st_rc, "struct_or_union_specifier", 5, $1, $2, $3, $4, $5); }
    | struct_or_union identifier
        { $$ = alcTree(struct_or_union_specifier_st_id, "struct_or_union_specifier", 2, $1, $2); }
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
		{ $$ = alcTree(struct_declaration_list_st_st, "struct_declaration_list", 2, $1, $2); }
	;

init_declarator_list:
    init_declarator
        /* an identifier has been found and added to the symbol table*/
        /* so reset ctype to be base type of declaration */
	| init_declarator_list CM init_declarator
        { $$ = alcTree(init_declarator_list_in_cm_in, "init_declarator_list", 3, $1, $2, $3); }
	;

init_declarator:
    declarator
        {  }
	| declarator ASN initializer
        { $$ = alcTree(init_declarator_de_as_in, "init_declarator", 3, $1, $2, $3); }
	;

struct_declaration:
    specifier_qualifier_list SM
		{ $$ = alcTree(struct_declaration_sp_sm, "struct_declaration", 2, $1, $2); }
	|  specifier_qualifier_list struct_declarator_list SM
		{ $$ = alcTree(struct_declaration__sp_st_sm, "struct_declaration", 3, $1, $2, $3); }
	;

specifier_qualifier_list:
 type_specifier /* ctype build */
	| type_specifier specifier_qualifier_list  /* ctype build */
		{ $$ = alcTree(struct_declaration__sp_st_sm, "specifier_qualifier_list", 2, $1, $2); }
	| type_qualifier /* ctype build */
        {  }
	| type_qualifier specifier_qualifier_list  /* ctype build */
		{ $$ = alcTree(struct_declaration__sp_st_sm, "specifier_qualifier_list", 2, $1, $2); }
	;

struct_declarator_list:
    struct_declarator
	| struct_declarator_list CM struct_declarator
		{ $$ = alcTree(struct_declarator_list_st_cm_st, "struct_declarator_list", 3, $1, $2, $3); }
	;

struct_declarator:
    declarator
	| COLON constant_expression
		{ $$ = alcTree(struct_declarator_co_co, "struct_declarator", 2, $1, $2); }
	| declarator COLON constant_expression
		{ $$ = alcTree(struct_declarator_de_co_co, "struct_declarator", 3, $1, $2, $3); }
	;

enum_specifier:
    ENUM LC enumerator_list RC
		{ $$ = alcTree(enum_specifier_en_lc_en_rc, "enum_specifier", 4, $1, $2, $3, $4); }
	| ENUM identifier LC enumerator_list RC
		{ $$ = alcTree(enum_specifier_en_id_lc_en_rc, "enum_specifier", 5, $1, $2, $3, $4, $5); }
	| ENUM identifier
		{ $$ = alcTree(enum_specifier_en_id, "enum_specifier", 2, $1, $2); }
	;

enumerator_list:
    enumerator
        {  }
	| enumerator_list CM enumerator
		{ $$ = alcTree(enumerator_list_en_cm_en, "enumerator_list", 3, $1, $2, $3); }
	;

enumerator:
    IDENTIFIER
		{  }
	| IDENTIFIER ASN constant_expression
        { $$ = alcTree(enumerator_id_as_co, "enumerator", 3, $1, $2, $3); }
	;

declarator:
    direct_declarator
        {  }
	| pointer direct_declarator
        { $$ = alcTree(declarator_po_di, "declarator", 2, $1, $2); }
	;

direct_declarator:
    identifier  /* this could be a TRUE identifier or a TYPEDEF identifier*/
        { }
	| LP declarator RP
        { $$ = alcTree(direct_declarator_lp_de_rp, "direct_declarator", 2, $1, $2); }
	| direct_declarator LB RB
        { $$ = alcTree(direct_declarator_di_lb_rb, "direct_declarator", 3, $1, $2, $3); }
	| direct_declarator LB constant_expression RB
        { $$ = alcTree(direct_declarator_di_lb_co_rb, "direct_declarator", 4, $1, $2, $3, $4); }
    | direct_declarator LP parameter_type_list RP
        { $$ = alcTree(direct_declarator_di_lp_pa_rp, "direct_declarator", 4, $1, $2, $3, $4); }
	| direct_declarator LP RP
        { $$ = alcTree(direct_declarator_di_lp_rp, "direct_declarator", 3, $1, $2, $3); }
	| direct_declarator LP identifier_list RP
        { $$ = alcTree(direct_declarator_di_lp_id_rp, "direct_declarator", 4, $1, $2, $3, $4); }
    ;
function_declarator:
    direct_function_declarator
        {  }
    | pointer direct_function_declarator
		{ $$ = alcTree(function_declarator_po_di, "function_declarator", 2, $1, $2); }
    ;

direct_function_declarator:
    direct_declarator LP parameter_type_list RP
        { $$ = alcTree(direct_function_declarator_di_lp_pa_rp, "direct_function_declarator", 4, $1, $2, $3, $4); }
    | direct_declarator LP RP
        { $$ = alcTree(direct_function_declarator_di_lp_rp, "direct_function_declarator", 3, $1, $2, $3); }
    | direct_declarator LP identifier_list RP
        { /* pre-ANSI, error case */ printf("Error: pre-ANSI not supported"); exit(2);}
    ;

pointer:
    MUL
        {  }
    | MUL type_qualifier_list
        { $$ = alcTree(pointer_mu_ty, "pointer", 2, $1, $2); }
    | MUL pointer
        { $$ = alcTree(pointer_mu_po, "pointer", 2, $1, $2);}
    | MUL type_qualifier_list pointer
        { $$ = alcTree(pointer_mu_ty_po, "pointer", 3, $1, $2, $3); }
    ;

type_qualifier_list:
    type_qualifier
        {  }
    | type_qualifier_list type_qualifier
        { $$ = alcTree(type_qualifier_list_ty_ty, "type_qualifier_list", 2, $1, $2); }
    ;

parameter_type_list:
    parameter_list
        {  }
    | parameter_list CM ELIPSIS
        { $$ = alcTree(parameter_type_list_pa_cm_el, "parameter_type_list", 3, $1, $2, $3); }
    ;

parameter_list:
    parameter_declaration
        {  }
    | parameter_list CM parameter_declaration
        { $$ = alcTree(parameter_list_pa_cm_pa, "parameter_list", 3, $1, $2, $3); }
    ;

parameter_declaration:
    declaration_specifiers declarator
        { $$ = alcTree(parameter_declaration_de_de, "parameter_declaration", 2, $1, $2); }
    | declaration_specifiers
        {  }
    | declaration_specifiers abstract_declarator
        { $$ = alcTree(parameter_declaration_de_ab, "parameter_declaration", 2, $1, $2); }
    ;

identifier_list:
	IDENTIFIER
		{  }
	| identifier_list CM IDENTIFIER
		{ $$ = alcTree(identifier_list_id_cm_id, "identifier_list", 3, $1, $2, $3); }
	;

initializer:
    assignment_expression
        {  }
	| LC initializer_list RC
		{ $$ = alcTree(initializer_lc_in_rc, "initializer", 3, $1, $2, $3); }
	| LC initializer_list CM RC
		{ $$ = alcTree(initializer_lc_in_cm_rc, "initializer", 4, $1, $2, $3, $4); }
	;

initializer_list:
    initializer
        {  }
	| initializer_list CM initializer
		{ $$ = alcTree(initializer_list_in_cm_in, "initializer_list", 3, $1, $2, $3); }
	;

type_name:
    specifier_qualifier_list
        {  }
	| specifier_qualifier_list abstract_declarator
        { $$ = alcTree(type_name_sp_ab, "type_name", 2, $1, $2); }
	;

abstract_declarator:
    pointer
        {  }
	| direct_abstract_declarator
        {  }
	| pointer direct_abstract_declarator
		{ $$ = alcTree(abstract_declarator_po_di, "abstract_declarator", 2, $1, $2); }
	;


direct_abstract_declarator:
    LP abstract_declarator RP
		{ $$ = alcTree(direct_abstract_declarator_lp_ab_rp, "direct_abstract_declarator", 3, $1, $2, $3); }
	| LB RB
		{ $$ = alcTree(direct_abstract_declarator_lb_rb, "direct_abstract_declarator", 2, $1, $2); }
	| LB constant_expression RB
		{ $$ = alcTree(direct_abstract_declarator_lb_co_rb, "direct_abstract_declarator", 3, $1, $2, $3); }
	| direct_abstract_declarator LB RB
		{ $$ = alcTree(direct_abstract_declarator_di_lb_rb, "direct_abstract_declarator", 3, $1, $2, $3); }
	| direct_abstract_declarator LB constant_expression RB
		{ $$ = alcTree(direct_abstract_declarator_di_lb_co_rb, "direct_abstract_declarator", 4, $1, $2, $3, $4); }
	| LP RP
		{ $$ = alcTree(direct_abstract_declarator_lp_rp, "direct_abstract_declarator", 2, $1, $2); }
	| LP parameter_type_list RP
		{ $$ = alcTree(direct_abstract_declarator_lp_pa_rp, "direct_abstract_declarator", 3, $1, $2, $3); }
	| direct_abstract_declarator LP RP
		{ $$ = alcTree(direct_abstract_declarator_di_lp_rp, "direct_abstract_declarator", 3, $1, $2, $3); }
	| direct_abstract_declarator LP parameter_type_list RP
		{ $$ = alcTree(direct_abstract_declarator_di_lp_pa_rp, "direct_abstract_declarator", 4, $1, $2, $3, $4); }
	;

statement:
    labeled_statement
        {  }
	| compound_statement
        {  }
	| expression_statement
        {  }
	| selection_statement
        {  }
    | iteration_statement
        {  }
	| jump_statement
        {  }
	;

labeled_statement:
    identifier COLON statement
        { $$ = alcTree(labeled_statement_id_co_st, "labeled_statement", 3, $1, $2, $3); }
    | CASE constant_expression COLON statement
        { $$ = alcTree(labeled_statement_ca_co_co_st, "labeled_statement", 3, $1, $2, $3); }
    | DEFAULT COLON statement
        { $$ = alcTree(labeled_statement_de_co_st, "labeled_statement", 3, $1, $2, $3); }
    ;

expression_statement:
    SM
		{  }
	| expression SM
		{ $$ = alcTree(expression_statement_ex_sm, "expression_statement", 2, $1, $2); }
	;

compound_statement:
    LC RC
		{ $$ = alcTree(compound_statement_lc_rc, "compound_statement", 2, $1, $2); }
    | LC compound_statement_opt RC
        { $$ = alcTree(compound_statement_lc_co_rc, "compound_statement", 3, $1, $2, $3); }
    ;

compound_statement_opt:
    statement_list
		{  }
    | declaration_list
		{  }
    | declaration_list statement_list
		{ $$ = alcTree(compound_statement_opt_de_st, "compound_statement_opt", 2, $1, $2); }
    ;

statement_list:
    statement
        {  }
	| statement_list statement
		{ $$ = alcTree(statement_list_st_st, "statement_list", 2, $1, $2); }
	;

selection_statement:
	IF LP expression RP statement
        { $$ = alcTree(selection_statement_if_lp_ex_rp_st, "selection_statement", 5, $1, $2, $3, $4, $5);}
    | IF LP expression RP statement ELSE statement
        { $$ = alcTree(selection_statement_if_lp_ex_rp_st_el_st, "selection_statement", 6, $1, $2, $3, $4, $5, $7); }
    | SWITCH LP expression RP statement
        { $$ = alcTree(selection_statement_sw_lp_ex_rp_st, "selection_statement", 5, $1, $2, $3, $4, $5);  }
    ;

iteration_statement:
    WHILE LP expression RP statement
        { $$ = alcTree(iteration_statement_wh_lp_ex_rp_st, "iteration_statement", 5, $1, $2, $3, $4, $5); }
    | DO statement WHILE LP expression RP SM
        { $$ = alcTree(iteration_statement_do_st_wh_lp_ex_rp_sm, "iteration_statement", 7, $1, $2, $3, $4, $5, $6, $7); }
    | FOR LP forcntrl RP statement
        { $$ = alcTree(iteration_statement_fo_lp_fo_rp_st, "iteration_statement", 5, $1, $2, $3, $4, $5); }
    ;

forcntrl:
    SM SM
        { $$ = alcTree(forcntrl_sm_sm, "forcntrl", 2, $1, $2); }
    | SM SM expression
        { $$ = alcTree(forcntrl_sm_sm_ex, "forcntrl", 3, $1, $2, $3); }
    | SM expression SM
        { $$ = alcTree(forcntrl_sm_ex_sm, "forcntrl", 3, $1, $2, $3); }
    | SM expression SM expression
        { $$ = alcTree(forcntrl_sm_ex_sm_ex, "forcntrl", 4, $1, $2, $3, $4); }
    | expression SM SM
        { $$ = alcTree(forcntrl_ex_sm_sm, "forcntrl", 3, $1, $2, $3); }
    | expression SM SM expression
        { $$ = alcTree(forcntrl_ex_sm_sm_ex, "forcntrl", 4, $1, $2, $3, $4); }
    | expression SM expression SM
        { $$ = alcTree(forcntrl_ex_sm_ex_sm, "forcntrl", 4, $1, $2, $3, $4); }
    | expression SM expression SM expression
        { $$ = alcTree(forcntrl_ex_sm_ex_sm_ex, "forcntrl", 4, $1, $2, $3, $4); }
    ;



jump_statement:
	GOTO identifier SM
        { $$ = alcTree(jump_statement_go_id_sm, "jump_statement", 3, $1, $2, $3); }
	| CONTINUE SM
        { $$ = alcTree(jump_statement_co_sm, "jump_statement", 2, $1, $2); }
	| BREAK SM
        { $$ = alcTree(jump_statement_br_sm, "jump_statement", 2, $1, $2); }
	| RETURN SM
        { $$ = alcTree(jump_statement_re_sm, "jump_statement", 2, $1, $2); }
	| RETURN expression SM
        { $$ = alcTree(jump_statement_re_ex_sm, "jump_statement", 3, $1, $2, $3); }
	;

expression:
    assignment_expression
		{  }
	| expression CM assignment_expression
		{ $$ = alcTree(expression_ex_cm_as, "expression", 3, $1, $2, $3); }
	;


assignment_expression:
    conditional_expression
        {  }
	| unary_expression assignment_operator assignment_expression
        { $$ = alcTree(assignment_expression_un_as_as, "assignment_expression", 3, $1, $2, $3); }
	;

assignment_operator:
    ASN {  }
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
		{ $$ = alcTree(conditional_expression_lo_qu_ex_co_co, "conditional_expression", 5, $1, $2, $3, $4, $5); }
	;


constant_expression:
    conditional_expression
        {  }
	;

logical_or_expression:
    logical_and_expression
        {  }
	| logical_or_expression OROR logical_and_expression
		{ $$ = alcTree(logical_or_expression_lo_or_lo, "logical_or_expression", 3, $1, $2, $3); }
	;

logical_and_expression:
    inclusive_or_expression
        {  }
	| logical_and_expression ANDAND inclusive_or_expression
		{ $$ = alcTree(logical_and_expression_lo_an_in, "logical_and_expression", 3, $1, $2, $3); }
	;

inclusive_or_expression:
    exclusive_or_expression
        {  }
	| inclusive_or_expression OR exclusive_or_expression
		{ $$ = alcTree(inclusive_or_expression_in_or_ex, "inclusive_or_expression", 3, $1, $2, $3); }
	;

exclusive_or_expression:
    and_expression
        {  }
	| exclusive_or_expression ER and_expression
		{ $$ = alcTree(exclusive_or_expression_ex_er_an, "exclusive_or_expression", 3, $1, $2, $3); }
	;

and_expression:
    equality_expression
        {  }
	| and_expression AND equality_expression
		{ $$ = alcTree(and_expression_an_an_eq, "and_expression", 3, $1, $2, $3); }
	;

equality_expression:
    relational_expression
        {  }
	| equality_expression EQ relational_expression
		{ $$ = alcTree(equality_expression_eq_eq_re, "equality_expression", 3, $1, $2, $3); }
	| equality_expression NE relational_expression
		{ $$ = alcTree(equality_expression_eq_ne_re, "equality_expression", 3, $1, $2, $3); }
	;

relational_expression:
	 shift_expression
        {  }
	 | relational_expression LT shift_expression
        { $$ = alcTree(relational_expression_re_lt_sh, "relational_expression", 3, $1, $2, $3); }
	 | relational_expression GT shift_expression
        { $$ = alcTree(relational_expression_re_gt_sh, "relational_expression", 3, $1, $2, $3); }
	 | relational_expression LE shift_expression
        { $$ = alcTree(relational_expression_re_le_sh, "relational_expression", 3, $1, $2, $3); }
	 | relational_expression GE shift_expression
		{ $$ = alcTree(relational_expression_re_ge_sh, "relational_expression", 3, $1, $2, $3); }
	 ;

shift_expression:
	 additive_expression
        {  }
	 | shift_expression SHL additive_expression
        { $$ = alcTree(shift_expression_sh_shl_ad, "shift_expression", 3, $1, $2, $3); }
	 | shift_expression SHR additive_expression
        { $$ = alcTree(shift_expression_sh_shr_ad, "shift_expression", 3, $1, $2, $3); }
    ;

additive_expression:
	 multiplicative_expression
        {  }
	 | additive_expression PLUS multiplicative_expression
        { $$ = alcTree(additive_expression_ad_pl_mu, "additive_expression", 3, $1, $2, $3); }
	 | additive_expression MINUS multiplicative_expression
        { $$ = alcTree(additive_expression_ad_mi_mu, "additive_expression", 3, $1, $2, $3); }
	 ;

multiplicative_expression:
	 cast_expression
        {  }
	 | multiplicative_expression MUL cast_expression
        { $$ = alcTree(multiplicative_expression_mu_mu_ca, "multiplicative_expression", 3, $1, $2, $3); }
	 | multiplicative_expression DIV cast_expression
        { $$ = alcTree(multiplicative_expression_mu_di_ca, "multiplicative_expression", 3, $1, $2, $3); }
	 | multiplicative_expression MOD cast_expression
        { $$ = alcTree(multiplicative_expression_mu_mo_ca, "multiplicative_expression", 3, $1, $2, $3); }
	 ;

cast_expression:
	 unary_expression
        {  }
	 | LP type_name RP cast_expression
        { $$ = alcTree(cast_expression_lp_ty_rp_ca, "cast_expression", 4, $1, $2, $3, $4); }
	 ;


unary_expression:
	 postfix_expression
        {  }
	 | INCOP unary_expression
        { $$ = alcTree(unary_expression_in_un, "unary_expression", 2, $1, $2); }
	 | DECOP unary_expression
        { $$ = alcTree(unary_expression_de_un, "unary_expression", 2, $1, $2); }
	 | unary_operator cast_expression
        { $$ = alcTree(unary_expression_un_ca, "unary_expression", 2, $1, $2); }
	 | SIZEOF unary_expression
        { $$ = alcTree(unary_expression_si_un, "unary_expression", 2, $1, $2); }
	 | SIZEOF LP type_name RP
        { $$ = alcTree(unary_expression_si_lp_ty_rp, "unary_expression", 4, $1, $2, $3, $4); }
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
		 { $$ = alcTree(postfix_expression_po_lb_ex_rb, "postfix_expression", 4, $1, $2, $3, $4); }
	 | postfix_expression LP RP
		 { $$ = alcTree(postfix_expression_po_lp_rp, "postfix_expression", 3, $1, $2, $3); }
	 | postfix_expression LP  argument_expression_list RP
		 { $$ = alcTree(postfix_expression_po_lp__ar_rp, "postfix_expression", 4, $1, $2, $3, $4); }
	 | postfix_expression DOT identifier
		 { $$ = alcTree(postfix_expression_po_do_id, "postfix_expression", 3, $1, $2, $3); }
	 | postfix_expression FOLLOW identifier
		{ $$ = alcTree(postfix_expression_po_fo_id, "postfix_expression", 3, $1, $2, $3); }
	 | postfix_expression INCOP
		 { $$ = alcTree(postfix_expression_po_in, "postfix_expression", 2, $1, $2); }
	 | postfix_expression DECOP
		 { $$ = alcTree(postfix_expression_po_de, "postfix_expression", 2, $1, $2); }
	 ;

primary_expression:
	 IDENTIFIER
        {  }
	 | constant
        {  }
	 | STRING
        {  }
	 | LP expression RP
	 { $$ = alcTree(primary_expression_lp_ex_rp, "primary_expression", 3, $1, $2, $3); }
	 ;

argument_expression_list:
    assignment_expression
        {  }
    | argument_expression_list CM assignment_expression
        { $$ = alcTree(argument_expression_list_ar_cm_as, "argument_expression_list", 3, $1, $2, $3); }
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
