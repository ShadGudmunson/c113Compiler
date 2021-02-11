/* A Bison parser, made by GNU Bison 3.7.3.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "cgram.y"

#include <stdio.h>
#include <string.h>

/* include lots of your include files here */

# define YYDEBUG 1
/* #define DEBUG */

extern int yyerror(char *);
extern int yylex(void);

/* declare externs for global variables and helper function prototypes */


#line 87 "cgram.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "cgram.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_BAD_TOKEN = 3,                  /* BAD_TOKEN  */
  YYSYMBOL_ICON = 4,                       /* ICON  */
  YYSYMBOL_CCON = 5,                       /* CCON  */
  YYSYMBOL_FCON = 6,                       /* FCON  */
  YYSYMBOL_ENUMERATION_CONSTANT = 7,       /* ENUMERATION_CONSTANT  */
  YYSYMBOL_IDENTIFIER = 8,                 /* IDENTIFIER  */
  YYSYMBOL_STRING = 9,                     /* STRING  */
  YYSYMBOL_SIZEOF = 10,                    /* SIZEOF  */
  YYSYMBOL_INCOP = 11,                     /* INCOP  */
  YYSYMBOL_DECOP = 12,                     /* DECOP  */
  YYSYMBOL_SHL = 13,                       /* SHL  */
  YYSYMBOL_SHR = 14,                       /* SHR  */
  YYSYMBOL_LE = 15,                        /* LE  */
  YYSYMBOL_GE = 16,                        /* GE  */
  YYSYMBOL_EQ = 17,                        /* EQ  */
  YYSYMBOL_NE = 18,                        /* NE  */
  YYSYMBOL_ANDAND = 19,                    /* ANDAND  */
  YYSYMBOL_OROR = 20,                      /* OROR  */
  YYSYMBOL_MUASN = 21,                     /* MUASN  */
  YYSYMBOL_DIASN = 22,                     /* DIASN  */
  YYSYMBOL_MOASN = 23,                     /* MOASN  */
  YYSYMBOL_PLASN = 24,                     /* PLASN  */
  YYSYMBOL_ASN = 25,                       /* ASN  */
  YYSYMBOL_MIASN = 26,                     /* MIASN  */
  YYSYMBOL_SLASN = 27,                     /* SLASN  */
  YYSYMBOL_SRASN = 28,                     /* SRASN  */
  YYSYMBOL_ANASN = 29,                     /* ANASN  */
  YYSYMBOL_ERASN = 30,                     /* ERASN  */
  YYSYMBOL_ORASN = 31,                     /* ORASN  */
  YYSYMBOL_TYPEDEF_NAME = 32,              /* TYPEDEF_NAME  */
  YYSYMBOL_CM = 33,                        /* CM  */
  YYSYMBOL_SM = 34,                        /* SM  */
  YYSYMBOL_LT = 35,                        /* LT  */
  YYSYMBOL_GT = 36,                        /* GT  */
  YYSYMBOL_PLUS = 37,                      /* PLUS  */
  YYSYMBOL_MINUS = 38,                     /* MINUS  */
  YYSYMBOL_MUL = 39,                       /* MUL  */
  YYSYMBOL_DIV = 40,                       /* DIV  */
  YYSYMBOL_MOD = 41,                       /* MOD  */
  YYSYMBOL_LP = 42,                        /* LP  */
  YYSYMBOL_RP = 43,                        /* RP  */
  YYSYMBOL_LB = 44,                        /* LB  */
  YYSYMBOL_RB = 45,                        /* RB  */
  YYSYMBOL_LC = 46,                        /* LC  */
  YYSYMBOL_RC = 47,                        /* RC  */
  YYSYMBOL_COLON = 48,                     /* COLON  */
  YYSYMBOL_QUEST = 49,                     /* QUEST  */
  YYSYMBOL_AND = 50,                       /* AND  */
  YYSYMBOL_OR = 51,                        /* OR  */
  YYSYMBOL_ER = 52,                        /* ER  */
  YYSYMBOL_NOT = 53,                       /* NOT  */
  YYSYMBOL_FOLLOW = 54,                    /* FOLLOW  */
  YYSYMBOL_BANG = 55,                      /* BANG  */
  YYSYMBOL_DOT = 56,                       /* DOT  */
  YYSYMBOL_TYPEDEF = 57,                   /* TYPEDEF  */
  YYSYMBOL_EXTERN = 58,                    /* EXTERN  */
  YYSYMBOL_STATIC = 59,                    /* STATIC  */
  YYSYMBOL_AUTO = 60,                      /* AUTO  */
  YYSYMBOL_REGISTER = 61,                  /* REGISTER  */
  YYSYMBOL_CHAR = 62,                      /* CHAR  */
  YYSYMBOL_SHORT = 63,                     /* SHORT  */
  YYSYMBOL_INT = 64,                       /* INT  */
  YYSYMBOL_LONG = 65,                      /* LONG  */
  YYSYMBOL_SIGNED = 66,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 67,                  /* UNSIGNED  */
  YYSYMBOL_FLOAT = 68,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 69,                    /* DOUBLE  */
  YYSYMBOL_CONST = 70,                     /* CONST  */
  YYSYMBOL_VOLATILE = 71,                  /* VOLATILE  */
  YYSYMBOL_VOID = 72,                      /* VOID  */
  YYSYMBOL_STRUCT = 73,                    /* STRUCT  */
  YYSYMBOL_UNION = 74,                     /* UNION  */
  YYSYMBOL_ENUM = 75,                      /* ENUM  */
  YYSYMBOL_ELIPSIS = 76,                   /* ELIPSIS  */
  YYSYMBOL_CASE = 77,                      /* CASE  */
  YYSYMBOL_DEFAULT = 78,                   /* DEFAULT  */
  YYSYMBOL_IF = 79,                        /* IF  */
  YYSYMBOL_SWITCH = 80,                    /* SWITCH  */
  YYSYMBOL_WHILE = 81,                     /* WHILE  */
  YYSYMBOL_DO = 82,                        /* DO  */
  YYSYMBOL_FOR = 83,                       /* FOR  */
  YYSYMBOL_GOTO = 84,                      /* GOTO  */
  YYSYMBOL_CONTINUE = 85,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 86,                     /* BREAK  */
  YYSYMBOL_RETURN = 87,                    /* RETURN  */
  YYSYMBOL_THEN = 88,                      /* THEN  */
  YYSYMBOL_ELSE = 89,                      /* ELSE  */
  YYSYMBOL_YYACCEPT = 90,                  /* $accept  */
  YYSYMBOL_identifier = 91,                /* identifier  */
  YYSYMBOL_file = 92,                      /* file  */
  YYSYMBOL_translation_unit = 93,          /* translation_unit  */
  YYSYMBOL_external_declaration = 94,      /* external_declaration  */
  YYSYMBOL_function_definition = 95,       /* function_definition  */
  YYSYMBOL_96_1 = 96,                      /* $@1  */
  YYSYMBOL_97_2 = 97,                      /* $@2  */
  YYSYMBOL_98_3 = 98,                      /* $@3  */
  YYSYMBOL_99_4 = 99,                      /* $@4  */
  YYSYMBOL_declaration = 100,              /* declaration  */
  YYSYMBOL_untyped_declaration = 101,      /* untyped_declaration  */
  YYSYMBOL_declaration_list = 102,         /* declaration_list  */
  YYSYMBOL_declaration_specifiers = 103,   /* declaration_specifiers  */
  YYSYMBOL_storage_class_specifier = 104,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 105,           /* type_specifier  */
  YYSYMBOL_actual_type_specifier = 106,    /* actual_type_specifier  */
  YYSYMBOL_type_adjective = 107,           /* type_adjective  */
  YYSYMBOL_type_qualifier = 108,           /* type_qualifier  */
  YYSYMBOL_struct_or_union_specifier = 109, /* struct_or_union_specifier  */
  YYSYMBOL_110_5 = 110,                    /* $@5  */
  YYSYMBOL_111_6 = 111,                    /* $@6  */
  YYSYMBOL_struct_or_union = 112,          /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 113,  /* struct_declaration_list  */
  YYSYMBOL_init_declarator_list = 114,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 115,          /* init_declarator  */
  YYSYMBOL_struct_declaration = 116,       /* struct_declaration  */
  YYSYMBOL_specifier_qualifier_list = 117, /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 118,   /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 119,        /* struct_declarator  */
  YYSYMBOL_enum_specifier = 120,           /* enum_specifier  */
  YYSYMBOL_enumerator_list = 121,          /* enumerator_list  */
  YYSYMBOL_enumerator = 122,               /* enumerator  */
  YYSYMBOL_123_7 = 123,                    /* $@7  */
  YYSYMBOL_declarator = 124,               /* declarator  */
  YYSYMBOL_direct_declarator = 125,        /* direct_declarator  */
  YYSYMBOL_function_declarator = 126,      /* function_declarator  */
  YYSYMBOL_direct_function_declarator = 127, /* direct_function_declarator  */
  YYSYMBOL_pointer = 128,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 129,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 130,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 131,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 132,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 133,          /* identifier_list  */
  YYSYMBOL_initializer = 134,              /* initializer  */
  YYSYMBOL_initializer_list = 135,         /* initializer_list  */
  YYSYMBOL_type_name = 136,                /* type_name  */
  YYSYMBOL_abstract_declarator = 137,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 138, /* direct_abstract_declarator  */
  YYSYMBOL_statement = 139,                /* statement  */
  YYSYMBOL_labeled_statement = 140,        /* labeled_statement  */
  YYSYMBOL_expression_statement = 141,     /* expression_statement  */
  YYSYMBOL_compound_statement = 142,       /* compound_statement  */
  YYSYMBOL_143_8 = 143,                    /* $@8  */
  YYSYMBOL_compound_statement_opt = 144,   /* compound_statement_opt  */
  YYSYMBOL_statement_list = 145,           /* statement_list  */
  YYSYMBOL_selection_statement = 146,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 147,      /* iteration_statement  */
  YYSYMBOL_forcntrl = 148,                 /* forcntrl  */
  YYSYMBOL_jump_statement = 149,           /* jump_statement  */
  YYSYMBOL_expression = 150,               /* expression  */
  YYSYMBOL_assignment_expression = 151,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 152,      /* assignment_operator  */
  YYSYMBOL_conditional_expression = 153,   /* conditional_expression  */
  YYSYMBOL_constant_expression = 154,      /* constant_expression  */
  YYSYMBOL_logical_or_expression = 155,    /* logical_or_expression  */
  YYSYMBOL_logical_and_expression = 156,   /* logical_and_expression  */
  YYSYMBOL_inclusive_or_expression = 157,  /* inclusive_or_expression  */
  YYSYMBOL_exclusive_or_expression = 158,  /* exclusive_or_expression  */
  YYSYMBOL_and_expression = 159,           /* and_expression  */
  YYSYMBOL_equality_expression = 160,      /* equality_expression  */
  YYSYMBOL_relational_expression = 161,    /* relational_expression  */
  YYSYMBOL_shift_expression = 162,         /* shift_expression  */
  YYSYMBOL_additive_expression = 163,      /* additive_expression  */
  YYSYMBOL_multiplicative_expression = 164, /* multiplicative_expression  */
  YYSYMBOL_cast_expression = 165,          /* cast_expression  */
  YYSYMBOL_unary_expression = 166,         /* unary_expression  */
  YYSYMBOL_unary_operator = 167,           /* unary_operator  */
  YYSYMBOL_postfix_expression = 168,       /* postfix_expression  */
  YYSYMBOL_primary_expression = 169,       /* primary_expression  */
  YYSYMBOL_argument_expression_list = 170, /* argument_expression_list  */
  YYSYMBOL_constant = 171                  /* constant  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  56
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1313

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  82
/* YYNRULES -- Number of rules.  */
#define YYNRULES  245
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  392

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   344


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   134,   134,   137,   143,   149,   150,   156,   159,   161,
     167,   166,   174,   173,   181,   180,   188,   187,   196,   199,
     206,   212,   213,   219,   221,   224,   225,   229,   230,   239,
     242,   245,   248,   251,   257,   258,   262,   265,   268,   271,
     274,   277,   280,   281,   285,   288,   291,   294,   300,   303,
     310,   309,   314,   314,   317,   323,   325,   330,   332,   338,
     342,   348,   349,   354,   357,   363,   364,   367,   368,   374,
     375,   382,   383,   386,   392,   395,   398,   404,   405,   411,
     415,   414,   423,   426,   432,   435,   438,   441,   444,   447,
     450,   456,   457,   463,   466,   469,   475,   478,   482,   485,
     491,   492,   498,   499,   505,   506,   512,   514,   516,   521,
     523,   528,   529,   531,   536,   537,   542,   543,   548,   549,
     550,   556,   559,   562,   565,   568,   571,   574,   577,   580,
     586,   587,   588,   589,   590,   591,   595,   598,   601,   607,
     610,   616,   620,   619,   628,   632,   636,   644,   645,   651,
     655,   659,   665,   669,   673,   679,   682,   685,   688,   691,
     694,   697,   700,   708,   711,   714,   717,   720,   726,   729,
     736,   737,   743,   744,   745,   746,   747,   748,   749,   750,
     751,   752,   753,   758,   759,   766,   771,   772,   778,   779,
     784,   785,   791,   792,   798,   799,   805,   806,   809,   815,
     816,   819,   822,   825,   831,   832,   835,   841,   842,   845,
     851,   852,   855,   858,   864,   865,   872,   873,   876,   879,
     882,   885,   891,   894,   897,   900,   903,   906,   913,   914,
     917,   920,   923,   926,   929,   932,   938,   941,   942,   945,
     951,   954,   960,   963,   966,   969
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "BAD_TOKEN", "ICON",
  "CCON", "FCON", "ENUMERATION_CONSTANT", "IDENTIFIER", "STRING", "SIZEOF",
  "INCOP", "DECOP", "SHL", "SHR", "LE", "GE", "EQ", "NE", "ANDAND", "OROR",
  "MUASN", "DIASN", "MOASN", "PLASN", "ASN", "MIASN", "SLASN", "SRASN",
  "ANASN", "ERASN", "ORASN", "TYPEDEF_NAME", "CM", "SM", "LT", "GT",
  "PLUS", "MINUS", "MUL", "DIV", "MOD", "LP", "RP", "LB", "RB", "LC", "RC",
  "COLON", "QUEST", "AND", "OR", "ER", "NOT", "FOLLOW", "BANG", "DOT",
  "TYPEDEF", "EXTERN", "STATIC", "AUTO", "REGISTER", "CHAR", "SHORT",
  "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE", "CONST",
  "VOLATILE", "VOID", "STRUCT", "UNION", "ENUM", "ELIPSIS", "CASE",
  "DEFAULT", "IF", "SWITCH", "WHILE", "DO", "FOR", "GOTO", "CONTINUE",
  "BREAK", "RETURN", "THEN", "ELSE", "$accept", "identifier", "file",
  "translation_unit", "external_declaration", "function_definition", "$@1",
  "$@2", "$@3", "$@4", "declaration", "untyped_declaration",
  "declaration_list", "declaration_specifiers", "storage_class_specifier",
  "type_specifier", "actual_type_specifier", "type_adjective",
  "type_qualifier", "struct_or_union_specifier", "$@5", "$@6",
  "struct_or_union", "struct_declaration_list", "init_declarator_list",
  "init_declarator", "struct_declaration", "specifier_qualifier_list",
  "struct_declarator_list", "struct_declarator", "enum_specifier",
  "enumerator_list", "enumerator", "$@7", "declarator",
  "direct_declarator", "function_declarator", "direct_function_declarator",
  "pointer", "type_qualifier_list", "parameter_type_list",
  "parameter_list", "parameter_declaration", "identifier_list",
  "initializer", "initializer_list", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "statement", "labeled_statement",
  "expression_statement", "compound_statement", "$@8",
  "compound_statement_opt", "statement_list", "selection_statement",
  "iteration_statement", "forcntrl", "jump_statement", "expression",
  "assignment_expression", "assignment_operator", "conditional_expression",
  "constant_expression", "logical_or_expression", "logical_and_expression",
  "inclusive_or_expression", "exclusive_or_expression", "and_expression",
  "equality_expression", "relational_expression", "shift_expression",
  "additive_expression", "multiplicative_expression", "cast_expression",
  "unary_expression", "unary_operator", "postfix_expression",
  "primary_expression", "argument_expression_list", "constant", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344
};
#endif

#define YYPACT_NINF (-245)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-91)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     620,  -245,  -245,  -245,    57,   186,  -245,  -245,  -245,  -245,
    -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
    -245,  -245,  -245,  -245,    90,  -245,    28,   620,  -245,  -245,
    -245,  -245,   165,  1180,  1180,  -245,  -245,  1180,  -245,   110,
     206,  -245,  -245,    43,   -17,  1180,  -245,    15,  -245,  -245,
      57,    34,    30,    15,    85,    60,  -245,  -245,  -245,   213,
    1180,  -245,  -245,  -245,  -245,    65,   186,  -245,   800,   664,
     819,    69,  -245,  1180,   165,   -17,  -245,  -245,  -245,  -245,
     708,    30,   117,    -1,  -245,    85,  -245,    69,  1180,  1024,
    -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  1012,  1064,
    1064,  -245,  -245,  -245,   532,   800,  -245,  -245,  -245,  -245,
    -245,  -245,    42,   148,    99,   103,   126,   231,   185,   239,
     227,   204,  -245,   310,  1073,    22,  -245,  -245,  -245,   226,
     146,   140,   154,  -245,   -13,  -245,  -245,   153,  -245,   142,
    -245,    69,  -245,  -245,   167,    87,   166,    85,  -245,     3,
    -245,    69,  1024,  1024,  1224,  -245,   136,  1024,   532,  -245,
    1073,  -245,  -245,   170,   176,   108,  -245,  -245,    54,  1073,
    1073,  1073,  1073,  1073,  1073,  1073,  1073,  1073,  1073,  1073,
    1073,  1073,  1073,  1073,  1073,  1073,  1073,  1073,  -245,  -245,
    -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  -245,  1073,
    -245,  -245,  -245,   871,  1073,   270,   270,   576,   880,  -245,
     124,  -245,    95,   251,  1072,   200,   254,  -245,  -245,   379,
    -245,  -245,  -245,  1073,  -245,  -245,  -245,  -245,  -245,  -245,
    -245,  -245,  1073,   268,  -245,   174,  1238,   184,  1117,   104,
    -245,  1073,  1073,  -245,   748,  -245,   148,    37,    99,   103,
     126,   231,   185,   185,   239,   239,   239,   239,   227,   227,
     204,   204,  -245,  -245,  -245,  -245,  -245,  -245,   128,    88,
    -245,  -245,  -245,   190,   194,  -245,   168,    95,  1161,   932,
    -245,  -245,  -245,   210,   215,  -245,  1073,   218,   212,   244,
     252,   476,   255,   270,   265,   269,   810,   225,   379,  -245,
    -245,  -245,  -245,   259,   476,  -245,  -245,  -245,   271,  -245,
    -245,    44,  -245,  1073,  -245,  -245,  -245,  -245,  -245,  -245,
    1073,  1073,  -245,  -245,  -245,  -245,  -245,  -245,   272,  -245,
     281,   273,   476,  1073,  1073,  1073,   248,   941,   308,  -245,
    -245,  -245,   276,   476,   476,  -245,  -245,  -245,  -245,  -245,
    -245,  -245,  -245,  -245,   476,  -245,   131,   159,   163,   304,
     993,   305,   278,  -245,  -245,  -245,  -245,   476,   476,   476,
    1073,  1073,   280,   476,  1002,   258,  -245,  -245,   172,   317,
    1073,  -245,  1073,   284,   476,   318,   317,   317,  1073,  -245,
    -245,   317
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     3,     2,    41,    96,     0,    29,    30,    31,    32,
      33,    37,    44,    38,    45,    46,    47,    39,    40,    48,
      49,    36,    55,    56,     0,    84,     0,     4,     5,     7,
       8,     9,     0,    23,    25,    34,    35,    27,    42,     0,
       0,    59,    43,    61,    82,    10,    91,     0,   100,    98,
      97,     0,    82,     0,     0,    76,     1,     6,    18,     0,
      14,    24,    26,    28,    50,    54,     0,    20,     0,     0,
       0,     0,    21,    12,     0,    83,    92,   101,    99,    85,
       0,    83,    79,     0,    77,     0,    19,     0,    16,     0,
      52,    60,   242,   243,   244,   245,   236,   238,     0,     0,
       0,   224,   225,   223,     0,     0,   222,   226,   227,    62,
     111,   170,   183,   186,   188,   190,   192,   194,   196,   199,
     204,   207,   210,   214,     0,   216,   228,   237,   109,    94,
     107,     0,   102,   104,     0,    86,   185,     0,   214,   142,
      11,     0,    22,    89,     0,     0,     0,     0,    74,     0,
      15,     0,    65,    67,     0,    57,     0,     0,     0,   220,
       0,   217,   218,   116,     0,     0,   168,   114,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   173,   174,
     175,   176,   172,   177,   178,   179,   180,   181,   182,     0,
     219,   234,   235,     0,     0,     0,     0,     0,     0,   106,
     118,   108,   119,    93,     0,     0,    95,    87,   141,     0,
      13,    88,    90,     0,    78,    75,    17,    66,    68,    51,
      58,    63,     0,     0,    69,    71,     0,     0,     0,   118,
     117,     0,     0,   239,     0,   112,   187,     0,   189,   191,
     193,   195,   197,   198,   202,   203,   200,   201,   205,   206,
     208,   209,   211,   212,   213,   171,   230,   240,     0,     0,
     233,   232,   126,     0,     0,   122,     0,   120,     0,     0,
     103,   105,   110,   245,   236,   139,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   145,   147,
     130,   132,   131,     0,   144,   133,   134,   135,     0,    81,
      72,     0,    64,     0,    53,   221,   215,   169,   113,   115,
       0,     0,   231,   229,   127,   121,   123,   128,     0,   124,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   164,
     165,   166,     0,     0,   146,   143,   148,   140,    70,    73,
     184,   241,   129,   125,     0,   138,     0,     0,     0,     0,
       0,     0,     0,   163,   167,   136,   137,     0,     0,     0,
       0,   155,     0,     0,     0,   149,   151,   152,     0,   156,
     157,   154,   159,     0,     0,     0,   158,   160,   161,   150,
     153,   162
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -245,   -24,  -245,  -245,   324,  -245,  -245,  -245,  -245,  -245,
       2,  -245,   -54,     4,  -245,   -50,  -245,  -245,     5,  -245,
    -245,  -245,  -245,   196,   -18,   288,  -141,   -39,  -245,    45,
    -245,   274,   208,  -245,    -4,    16,   325,   311,    17,  -245,
     -61,  -245,   178,   282,   -95,  -245,   222,  -118,  -186,  -244,
    -245,  -245,   -29,  -245,  -245,    83,  -245,  -245,  -245,  -245,
     -99,   -65,  -245,   -63,  -197,  -245,   224,   211,   223,   221,
     228,   147,    52,   143,   144,  -106,   192,  -245,  -245,  -245,
    -245,  -245
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    25,    26,    27,    28,    29,    71,   141,    87,   151,
      72,    31,    73,    74,    33,    34,    35,    36,    37,    38,
      89,   157,    39,   154,    40,    41,   155,   156,   233,   234,
      42,    83,    84,   146,    43,    52,    45,    46,    53,    50,
     273,   132,   133,   134,   109,   168,   164,   274,   212,   299,
     300,   301,   302,   219,   303,   304,   305,   306,   361,   307,
     308,   166,   199,   111,   137,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     268,   127
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      55,    51,    30,   110,    32,   165,    88,   136,   131,    48,
     167,   276,   211,   230,    59,    65,    44,    47,   200,   144,
     215,    49,     1,     2,   277,    69,   309,    70,    56,    30,
     216,    32,   147,   201,   202,   310,   147,    61,    62,   152,
     110,    63,   140,    44,    47,   240,   148,   336,    44,    47,
     225,     1,     2,   277,   152,    77,    59,     5,   150,   165,
     346,   165,   169,    75,   203,   163,   204,    78,    68,    81,
     242,   247,    80,   130,    70,   142,   205,    79,   206,   262,
     263,   264,   330,     4,   130,   320,     5,   244,   355,   331,
     142,   170,   232,    82,   153,   230,     4,     1,     2,   365,
     346,   245,   152,   152,   152,   269,    85,   152,   152,   153,
     366,    90,   220,   227,   228,   139,   349,     1,     2,   163,
     215,   242,   226,   375,   376,   377,   209,    19,    20,   381,
     222,     1,     2,   323,   265,   316,    54,   278,   267,   279,
     389,   242,   -80,     1,     2,   136,   238,   210,   208,   319,
     172,   243,   235,     1,     2,   173,    64,   153,   153,   153,
     136,   321,   153,   153,   242,   298,   207,   171,   208,   136,
     231,   322,     1,     2,   367,     4,   174,   317,     5,   110,
     239,   270,   271,   213,   232,     4,   152,   214,   207,   218,
     208,   223,   242,     1,     2,   297,   242,   342,   217,    58,
     177,   178,   368,    51,     4,   242,   369,     5,   282,     4,
     221,   130,   238,   326,   208,   385,   136,   328,   130,   241,
     179,   180,   313,   136,   210,     4,    81,   315,     5,   254,
     255,   256,   257,   324,   356,   357,   358,   325,   362,    66,
      67,   153,   130,   185,   186,   187,    66,    86,   175,   176,
     136,   -89,   181,   182,   333,   239,   351,   350,    -3,   -89,
     -89,   372,   138,    -2,   183,   184,   332,   297,   -89,   338,
     -89,   378,   379,   343,   297,   383,   -88,     1,     2,   -90,
     297,   386,   130,   387,   -88,   -88,   334,   -90,   -90,   391,
     159,   161,   162,   -88,   335,   -88,   -90,   337,   -90,   339,
     142,   311,   312,   340,   242,   347,   345,   235,   297,   242,
     364,   242,   374,   242,   380,   352,   138,   242,   388,   297,
     297,   354,   252,   253,   258,   259,   353,   260,   261,   359,
     297,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   363,   297,   297,   297,   370,   384,   373,   297,
     242,    57,   390,   236,    91,   224,   348,    60,    76,   149,
     297,   138,   145,   138,   138,   138,   138,   138,   138,   138,
     138,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     237,   344,   248,    92,    93,    94,   283,   284,    97,    98,
      99,   100,   281,   246,   250,   249,     0,     0,     0,     0,
     138,     0,   251,     0,     0,     0,     0,     0,     0,     0,
       0,     3,     0,   285,     0,   138,   101,   102,   103,     0,
       0,   104,     0,     0,   138,   139,     0,     0,     0,   106,
       0,     0,   107,   138,   108,     0,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,     0,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,     0,     0,     0,
       0,   138,     0,     0,     0,     0,     0,     0,   138,     0,
      92,    93,    94,   283,   284,    97,    98,    99,   100,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   138,     0,     0,     0,     0,
     285,     0,   138,   101,   102,   103,     0,     0,   104,     0,
       0,     0,   139,     0,     0,     0,   106,     0,     0,   107,
       0,   108,     0,     0,     0,     0,    92,    93,    94,    95,
      96,    97,    98,    99,   100,     0,     0,     0,     0,     0,
       0,     0,     0,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,     3,     0,     0,     0,     0,   101,
     102,   103,     0,     0,   104,     0,     0,     0,     0,     0,
       0,     0,   106,     1,     2,   107,     0,   108,     0,     0,
       0,     0,     0,     0,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     3,     0,
       0,     0,     0,     0,     0,     4,     0,     0,   207,   272,
     208,     0,     0,     0,     0,     0,     0,     1,     2,     0,
       0,     0,     0,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     3,     0,     0,     0,     0,     0,     0,     4,
       0,     0,     5,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   128,     0,     0,     0,     0,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     3,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   129,     0,     0,
       0,     0,     0,     0,     0,     0,   128,     0,     0,     0,
       0,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   143,    92,    93,    94,    95,    96,    97,    98,    99,
     100,     0,     0,     0,     0,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,   101,   102,   103,     0,     0,
     104,     0,     0,     0,   105,   318,     0,     0,   106,     0,
       0,   107,     0,   108,    92,    93,    94,    95,    96,    97,
      98,    99,   100,     0,    92,    93,    94,    95,    96,    97,
      98,    99,   100,    92,    93,    94,    95,    96,    97,    98,
      99,   100,     0,     0,     0,     0,     0,   101,   102,   103,
       0,     0,   104,     0,   341,     0,   105,   101,   102,   103,
     106,     0,   104,   107,     0,   108,   101,   102,   103,     0,
     106,   104,     0,   107,   135,   108,     0,     0,     0,   106,
       0,     0,   107,     0,   108,    92,    93,    94,    95,    96,
      97,    98,    99,   100,    92,    93,    94,    95,    96,    97,
      98,    99,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   101,   102,
     103,     0,     0,   104,   266,     0,     0,   101,   102,   103,
       0,   106,   104,     0,   107,   275,   108,     0,     0,     0,
     106,     0,     0,   107,     0,   108,    92,    93,    94,    95,
      96,    97,    98,    99,   100,    92,    93,    94,    95,    96,
      97,    98,    99,   100,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   101,
     102,   103,     0,     0,   104,   360,     0,   329,   101,   102,
     103,     0,   106,   104,     0,   107,     0,   108,     0,     0,
       0,   106,     0,     0,   107,     0,   108,    92,    93,    94,
      95,    96,    97,    98,    99,   100,    92,    93,    94,    95,
      96,    97,    98,    99,   100,     0,    92,    93,    94,    95,
      96,    97,    98,    99,   100,     0,     0,   371,     0,     0,
     101,   102,   103,     0,     0,   104,   382,     0,     0,   101,
     102,   103,     0,   106,   104,     0,   107,     0,   108,   101,
     102,   103,   106,     0,   158,   107,     3,   108,     0,     0,
       0,     0,   106,     0,     0,   107,     0,   108,    92,    93,
      94,    95,    96,    97,    98,    99,   100,    92,    93,    94,
      95,    96,    97,    98,    99,   100,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,   101,   102,   103,     3,     0,   160,     0,     0,     0,
     101,   102,   103,     0,   106,   104,     0,   107,     0,   108,
       0,     0,     0,   106,     0,     0,   107,     0,   108,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,   280,     3,
       0,     0,     0,     0,     0,     0,     4,     0,     0,   238,
     272,   208,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     3,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   327,     0,     0,     0,     0,     0,
       0,     0,     3,     0,     0,     0,     0,     0,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     3,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       3,   229,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   314,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24
};

static const yytype_int16 yycheck[] =
{
      24,     5,     0,    68,     0,   104,    60,    70,    69,     4,
     105,   208,   130,   154,    32,    39,     0,     0,   124,    80,
      33,     4,     7,     8,   210,    42,   223,    44,     0,    27,
      43,    27,    33,    11,    12,   232,    33,    33,    34,    89,
     105,    37,    71,    27,    27,   163,    47,   291,    32,    32,
      47,     7,     8,   239,   104,    50,    74,    42,    87,   158,
     304,   160,    20,    47,    42,   104,    44,    50,    25,    53,
      33,   170,    42,    69,    44,    73,    54,    43,    56,   185,
     186,   187,   279,    39,    80,    48,    42,    33,   332,   286,
      88,    49,    48,     8,    89,   236,    39,     7,     8,   343,
     344,    47,   152,   153,   154,   204,    46,   157,   158,   104,
     354,    46,   141,   152,   153,    46,   313,     7,     8,   158,
      33,    33,   151,   367,   368,   369,   130,    70,    71,   373,
      43,     7,     8,    45,   199,   241,    46,    42,   203,    44,
     384,    33,    25,     7,     8,   208,    42,   130,    44,   244,
      51,    43,   156,     7,     8,    52,    46,   152,   153,   154,
     223,    33,   157,   158,    33,   219,    42,    19,    44,   232,
      34,    43,     7,     8,    43,    39,    50,   242,    42,   244,
     163,   205,   206,    43,    48,    39,   236,    33,    42,    47,
      44,    25,    33,     7,     8,   219,    33,   296,    45,    34,
      15,    16,    43,   207,    39,    33,    43,    42,     8,    39,
      43,   207,    42,    45,    44,    43,   279,   278,   214,    43,
      35,    36,    48,   286,   207,    39,   210,    43,    42,   177,
     178,   179,   180,    43,   333,   334,   335,    43,   337,    33,
      34,   236,   238,    39,    40,    41,    33,    34,    17,    18,
     313,    25,    13,    14,    42,   238,   321,   320,    48,    33,
      34,   360,    70,    48,    37,    38,    48,   291,    42,   293,
      44,   370,   371,    48,   298,   374,    25,     7,     8,    25,
     304,   380,   278,   382,    33,    34,    42,    33,    34,   388,
      98,    99,   100,    42,    42,    44,    42,    42,    44,    34,
     298,    33,    34,    34,    33,    34,    47,   311,   332,    33,
      34,    33,    34,    33,    34,    43,   124,    33,    34,   343,
     344,    48,   175,   176,   181,   182,    45,   183,   184,    81,
     354,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    34,   367,   368,   369,    42,    89,    43,   373,
      33,    27,    34,   157,    66,   147,   311,    32,    47,    85,
     384,   169,    80,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     158,   298,   171,     4,     5,     6,     7,     8,     9,    10,
      11,    12,   214,   169,   173,   172,    -1,    -1,    -1,    -1,
     208,    -1,   174,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    -1,    34,    -1,   223,    37,    38,    39,    -1,
      -1,    42,    -1,    -1,   232,    46,    -1,    -1,    -1,    50,
      -1,    -1,    53,   241,    55,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    -1,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    -1,    -1,    -1,
      -1,   279,    -1,    -1,    -1,    -1,    -1,    -1,   286,    -1,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   313,    -1,    -1,    -1,    -1,
      34,    -1,   320,    37,    38,    39,    -1,    -1,    42,    -1,
      -1,    -1,    46,    -1,    -1,    -1,    50,    -1,    -1,    53,
      -1,    55,    -1,    -1,    -1,    -1,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    32,    -1,    -1,    -1,    -1,    37,
      38,    39,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,     7,     8,    53,    -1,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    42,    43,
      44,    -1,    -1,    -1,    -1,    -1,    -1,     7,     8,    -1,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    32,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     8,    -1,    -1,    -1,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     8,    -1,    -1,    -1,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    -1,    37,    38,    39,    -1,    -1,
      42,    -1,    -1,    -1,    46,    47,    -1,    -1,    50,    -1,
      -1,    53,    -1,    55,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    -1,     4,     5,     6,     7,     8,     9,
      10,    11,    12,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    -1,    -1,    -1,    -1,    -1,    37,    38,    39,
      -1,    -1,    42,    -1,    34,    -1,    46,    37,    38,    39,
      50,    -1,    42,    53,    -1,    55,    37,    38,    39,    -1,
      50,    42,    -1,    53,    45,    55,    -1,    -1,    -1,    50,
      -1,    -1,    53,    -1,    55,     4,     5,     6,     7,     8,
       9,    10,    11,    12,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,
      39,    -1,    -1,    42,    43,    -1,    -1,    37,    38,    39,
      -1,    50,    42,    -1,    53,    45,    55,    -1,    -1,    -1,
      50,    -1,    -1,    53,    -1,    55,     4,     5,     6,     7,
       8,     9,    10,    11,    12,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      38,    39,    -1,    -1,    42,    34,    -1,    45,    37,    38,
      39,    -1,    50,    42,    -1,    53,    -1,    55,    -1,    -1,
      -1,    50,    -1,    -1,    53,    -1,    55,     4,     5,     6,
       7,     8,     9,    10,    11,    12,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    -1,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    -1,    -1,    34,    -1,    -1,
      37,    38,    39,    -1,    -1,    42,    34,    -1,    -1,    37,
      38,    39,    -1,    50,    42,    -1,    53,    -1,    55,    37,
      38,    39,    50,    -1,    42,    53,    32,    55,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    53,    -1,    55,     4,     5,
       6,     7,     8,     9,    10,    11,    12,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      -1,    37,    38,    39,    32,    -1,    42,    -1,    -1,    -1,
      37,    38,    39,    -1,    50,    42,    -1,    53,    -1,    55,
      -1,    -1,    -1,    50,    -1,    -1,    53,    -1,    55,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    42,
      43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    47,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,     8,    32,    39,    42,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    91,    92,    93,    94,    95,
     100,   101,   103,   104,   105,   106,   107,   108,   109,   112,
     114,   115,   120,   124,   125,   126,   127,   128,   108,   128,
     129,   124,   125,   128,    46,    91,     0,    94,    34,   114,
     126,   103,   103,   103,    46,    91,    33,    34,    25,    42,
      44,    96,   100,   102,   103,   125,   127,   108,   128,    43,
      42,   125,     8,   121,   122,    46,    34,    98,   102,   110,
      46,   115,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    37,    38,    39,    42,    46,    50,    53,    55,   134,
     151,   153,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   171,     8,    43,
     103,   130,   131,   132,   133,    45,   153,   154,   166,    46,
     142,    97,   100,    43,   130,   133,   123,    33,    47,   121,
     142,    99,   105,   108,   113,   116,   117,   111,    42,   166,
      42,   166,   166,   117,   136,   150,   151,   134,   135,    20,
      49,    19,    51,    52,    50,    17,    18,    15,    16,    35,
      36,    13,    14,    37,    38,    39,    40,    41,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,   152,
     165,    11,    12,    42,    44,    54,    56,    42,    44,   124,
     128,   137,   138,    43,    33,    33,    43,    45,    47,   143,
     142,    43,    43,    25,   122,    47,   142,   117,   117,    47,
     116,    34,    48,   118,   119,   124,   113,   136,    42,   128,
     137,    43,    33,    43,    33,    47,   156,   150,   157,   158,
     159,   160,   161,   161,   162,   162,   162,   162,   163,   163,
     164,   164,   165,   165,   165,   151,    43,   151,   170,   150,
      91,    91,    43,   130,   137,    45,   154,   138,    42,    44,
      76,   132,     8,     7,     8,    34,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    91,   102,   139,
     140,   141,   142,   144,   145,   146,   147,   149,   150,   154,
     154,    33,    34,    48,    47,    43,   165,   151,    47,   134,
      48,    33,    43,    45,    43,    43,    45,    43,   130,    45,
     154,   154,    48,    42,    42,    42,   139,    42,    91,    34,
      34,    34,   150,    48,   145,    47,   139,    34,   119,   154,
     153,   151,    43,    45,    48,   139,   150,   150,   150,    81,
      34,   148,   150,    34,    34,   139,   139,    43,    43,    43,
      42,    34,   150,    43,    34,   139,   139,   139,   150,   150,
      34,   139,    34,   150,    89,    43,   150,   150,    34,   139,
      34,   150
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    90,    91,    91,    92,    93,    93,    94,    94,    94,
      96,    95,    97,    95,    98,    95,    99,    95,   100,   100,
     101,   102,   102,   103,   103,   103,   103,   103,   103,   104,
     104,   104,   104,   104,   105,   105,   106,   106,   106,   106,
     106,   106,   106,   106,   107,   107,   107,   107,   108,   108,
     110,   109,   111,   109,   109,   112,   112,   113,   113,   114,
     114,   115,   115,   116,   116,   117,   117,   117,   117,   118,
     118,   119,   119,   119,   120,   120,   120,   121,   121,   122,
     123,   122,   124,   124,   125,   125,   125,   125,   125,   125,
     125,   126,   126,   127,   127,   127,   128,   128,   128,   128,
     129,   129,   130,   130,   131,   131,   132,   132,   132,   133,
     133,   134,   134,   134,   135,   135,   136,   136,   137,   137,
     137,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     139,   139,   139,   139,   139,   139,   140,   140,   140,   141,
     141,   142,   143,   142,   144,   144,   144,   145,   145,   146,
     146,   146,   147,   147,   147,   148,   148,   148,   148,   148,
     148,   148,   148,   149,   149,   149,   149,   149,   150,   150,
     151,   151,   152,   152,   152,   152,   152,   152,   152,   152,
     152,   152,   152,   153,   153,   154,   155,   155,   156,   156,
     157,   157,   158,   158,   159,   159,   160,   160,   160,   161,
     161,   161,   161,   161,   162,   162,   162,   163,   163,   163,
     164,   164,   164,   164,   165,   165,   166,   166,   166,   166,
     166,   166,   167,   167,   167,   167,   167,   167,   168,   168,
     168,   168,   168,   168,   168,   168,   169,   169,   169,   169,
     170,   170,   171,   171,   171,   171
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     2,     1,     1,     1,
       0,     3,     0,     4,     0,     4,     0,     5,     2,     3,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     5,     0,     6,     2,     1,     1,     1,     2,     1,
       3,     1,     3,     2,     3,     1,     2,     1,     2,     1,
       3,     1,     2,     3,     4,     5,     2,     1,     3,     1,
       0,     4,     1,     2,     1,     3,     3,     4,     4,     3,
       4,     1,     2,     4,     3,     4,     1,     2,     2,     3,
       1,     2,     1,     3,     1,     3,     2,     1,     2,     1,
       3,     1,     3,     4,     1,     3,     1,     2,     1,     1,
       2,     3,     2,     3,     3,     4,     2,     3,     3,     4,
       1,     1,     1,     1,     1,     1,     3,     4,     3,     1,
       2,     2,     0,     4,     1,     1,     2,     1,     2,     5,
       7,     5,     5,     7,     5,     2,     3,     3,     4,     3,
       4,     4,     5,     3,     2,     2,     2,     3,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     5,     1,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     1,     4,     1,     2,     2,     2,
       2,     4,     1,     1,     1,     1,     1,     1,     1,     4,
       3,     4,     3,     3,     2,     2,     1,     1,     1,     3,
       1,     3,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* identifier: IDENTIFIER  */
#line 135 "cgram.y"
      {
      }
#line 1745 "cgram.tab.c"
    break;

  case 3: /* identifier: ENUMERATION_CONSTANT  */
#line 138 "cgram.y"
      {
      }
#line 1752 "cgram.tab.c"
    break;

  case 4: /* file: translation_unit  */
#line 144 "cgram.y"
      {
      }
#line 1759 "cgram.tab.c"
    break;

  case 5: /* translation_unit: external_declaration  */
#line 149 "cgram.y"
                         { }
#line 1765 "cgram.tab.c"
    break;

  case 6: /* translation_unit: translation_unit external_declaration  */
#line 151 "cgram.y"
    { }
#line 1771 "cgram.tab.c"
    break;

  case 7: /* external_declaration: function_definition  */
#line 157 "cgram.y"
   { 
   }
#line 1778 "cgram.tab.c"
    break;

  case 8: /* external_declaration: declaration  */
#line 160 "cgram.y"
   { }
#line 1784 "cgram.tab.c"
    break;

  case 9: /* external_declaration: untyped_declaration  */
#line 162 "cgram.y"
   { }
#line 1790 "cgram.tab.c"
    break;

  case 10: /* $@1: %empty  */
#line 167 "cgram.y"
      { /* old school pre-ANSI, no return type */
      }
#line 1797 "cgram.tab.c"
    break;

  case 11: /* function_definition: function_declarator $@1 compound_statement  */
#line 170 "cgram.y"
      {
      }
#line 1804 "cgram.tab.c"
    break;

  case 12: /* $@2: %empty  */
#line 174 "cgram.y"
      { /* old school pre ANSI */
      }
#line 1811 "cgram.tab.c"
    break;

  case 13: /* function_definition: function_declarator declaration_list $@2 compound_statement  */
#line 177 "cgram.y"
      {
      }
#line 1818 "cgram.tab.c"
    break;

  case 14: /* $@3: %empty  */
#line 181 "cgram.y"
      { /* proper ANSI C function definition */
      }
#line 1825 "cgram.tab.c"
    break;

  case 15: /* function_definition: declaration_specifiers function_declarator $@3 compound_statement  */
#line 184 "cgram.y"
      {
      }
#line 1832 "cgram.tab.c"
    break;

  case 16: /* $@4: %empty  */
#line 188 "cgram.y"
      { /* declaration_list! This must be pre-ANSI  */
      }
#line 1839 "cgram.tab.c"
    break;

  case 17: /* function_definition: declaration_specifiers function_declarator declaration_list $@4 compound_statement  */
#line 191 "cgram.y"
      {
      }
#line 1846 "cgram.tab.c"
    break;

  case 18: /* declaration: declaration_specifiers SM  */
#line 197 "cgram.y"
          {
	  }
#line 1853 "cgram.tab.c"
    break;

  case 19: /* declaration: declaration_specifiers init_declarator_list SM  */
#line 201 "cgram.y"
          {
	  }
#line 1860 "cgram.tab.c"
    break;

  case 20: /* untyped_declaration: init_declarator_list SM  */
#line 207 "cgram.y"
            {
            }
#line 1867 "cgram.tab.c"
    break;

  case 21: /* declaration_list: declaration  */
#line 212 "cgram.y"
                      { }
#line 1873 "cgram.tab.c"
    break;

  case 22: /* declaration_list: declaration_list declaration  */
#line 214 "cgram.y"
          { 
	  }
#line 1880 "cgram.tab.c"
    break;

  case 24: /* declaration_specifiers: storage_class_specifier declaration_specifiers  */
#line 222 "cgram.y"
          {
          }
#line 1887 "cgram.tab.c"
    break;

  case 26: /* declaration_specifiers: type_specifier declaration_specifiers  */
#line 227 "cgram.y"
          { 
          }
#line 1894 "cgram.tab.c"
    break;

  case 28: /* declaration_specifiers: type_qualifier declaration_specifiers  */
#line 231 "cgram.y"
          {  
          }
#line 1901 "cgram.tab.c"
    break;

  case 29: /* storage_class_specifier: TYPEDEF  */
#line 240 "cgram.y"
           {
           }
#line 1908 "cgram.tab.c"
    break;

  case 30: /* storage_class_specifier: EXTERN  */
#line 243 "cgram.y"
           {
           }
#line 1915 "cgram.tab.c"
    break;

  case 31: /* storage_class_specifier: STATIC  */
#line 246 "cgram.y"
           {
           }
#line 1922 "cgram.tab.c"
    break;

  case 32: /* storage_class_specifier: AUTO  */
#line 249 "cgram.y"
           {
           }
#line 1929 "cgram.tab.c"
    break;

  case 33: /* storage_class_specifier: REGISTER  */
#line 252 "cgram.y"
           {
           }
#line 1936 "cgram.tab.c"
    break;

  case 36: /* actual_type_specifier: VOID  */
#line 263 "cgram.y"
        {
        }
#line 1943 "cgram.tab.c"
    break;

  case 37: /* actual_type_specifier: CHAR  */
#line 266 "cgram.y"
        {
        }
#line 1950 "cgram.tab.c"
    break;

  case 38: /* actual_type_specifier: INT  */
#line 269 "cgram.y"
        {
        }
#line 1957 "cgram.tab.c"
    break;

  case 39: /* actual_type_specifier: FLOAT  */
#line 272 "cgram.y"
        {
        }
#line 1964 "cgram.tab.c"
    break;

  case 40: /* actual_type_specifier: DOUBLE  */
#line 275 "cgram.y"
        {
        }
#line 1971 "cgram.tab.c"
    break;

  case 41: /* actual_type_specifier: TYPEDEF_NAME  */
#line 278 "cgram.y"
        {
        }
#line 1978 "cgram.tab.c"
    break;

  case 44: /* type_adjective: SHORT  */
#line 286 "cgram.y"
           {
           }
#line 1985 "cgram.tab.c"
    break;

  case 45: /* type_adjective: LONG  */
#line 289 "cgram.y"
           {
           }
#line 1992 "cgram.tab.c"
    break;

  case 46: /* type_adjective: SIGNED  */
#line 292 "cgram.y"
           {
           }
#line 1999 "cgram.tab.c"
    break;

  case 47: /* type_adjective: UNSIGNED  */
#line 295 "cgram.y"
           {
           }
#line 2006 "cgram.tab.c"
    break;

  case 48: /* type_qualifier: CONST  */
#line 301 "cgram.y"
          {
          }
#line 2013 "cgram.tab.c"
    break;

  case 49: /* type_qualifier: VOLATILE  */
#line 304 "cgram.y"
          {
          }
#line 2020 "cgram.tab.c"
    break;

  case 50: /* $@5: %empty  */
#line 310 "cgram.y"
       { }
#line 2026 "cgram.tab.c"
    break;

  case 51: /* struct_or_union_specifier: struct_or_union LC $@5 struct_declaration_list RC  */
#line 311 "cgram.y"
    {
    }
#line 2033 "cgram.tab.c"
    break;

  case 52: /* $@6: %empty  */
#line 314 "cgram.y"
                                    { }
#line 2039 "cgram.tab.c"
    break;

  case 53: /* struct_or_union_specifier: struct_or_union identifier LC $@6 struct_declaration_list RC  */
#line 315 "cgram.y"
    {
    }
#line 2046 "cgram.tab.c"
    break;

  case 54: /* struct_or_union_specifier: struct_or_union identifier  */
#line 318 "cgram.y"
    {
    }
#line 2053 "cgram.tab.c"
    break;

  case 55: /* struct_or_union: STRUCT  */
#line 324 "cgram.y"
      {  }
#line 2059 "cgram.tab.c"
    break;

  case 56: /* struct_or_union: UNION  */
#line 326 "cgram.y"
      {  }
#line 2065 "cgram.tab.c"
    break;

  case 57: /* struct_declaration_list: struct_declaration  */
#line 331 "cgram.y"
        {  }
#line 2071 "cgram.tab.c"
    break;

  case 58: /* struct_declaration_list: struct_declaration_list struct_declaration  */
#line 333 "cgram.y"
                {  }
#line 2077 "cgram.tab.c"
    break;

  case 60: /* init_declarator_list: init_declarator_list CM init_declarator  */
#line 343 "cgram.y"
        { 
        }
#line 2084 "cgram.tab.c"
    break;

  case 61: /* init_declarator: declarator  */
#line 348 "cgram.y"
                     { }
#line 2090 "cgram.tab.c"
    break;

  case 62: /* init_declarator: declarator ASN initializer  */
#line 350 "cgram.y"
          { }
#line 2096 "cgram.tab.c"
    break;

  case 63: /* struct_declaration: specifier_qualifier_list SM  */
#line 355 "cgram.y"
          {
	  }
#line 2103 "cgram.tab.c"
    break;

  case 64: /* struct_declaration: specifier_qualifier_list struct_declarator_list SM  */
#line 358 "cgram.y"
          {
          }
#line 2110 "cgram.tab.c"
    break;

  case 66: /* specifier_qualifier_list: type_specifier specifier_qualifier_list  */
#line 365 "cgram.y"
                {
		}
#line 2117 "cgram.tab.c"
    break;

  case 68: /* specifier_qualifier_list: type_qualifier specifier_qualifier_list  */
#line 369 "cgram.y"
                {
		}
#line 2124 "cgram.tab.c"
    break;

  case 70: /* struct_declarator_list: struct_declarator_list CM struct_declarator  */
#line 377 "cgram.y"
                {
		}
#line 2131 "cgram.tab.c"
    break;

  case 72: /* struct_declarator: COLON constant_expression  */
#line 384 "cgram.y"
                {
		}
#line 2138 "cgram.tab.c"
    break;

  case 73: /* struct_declarator: declarator COLON constant_expression  */
#line 387 "cgram.y"
                {
		}
#line 2145 "cgram.tab.c"
    break;

  case 74: /* enum_specifier: ENUM LC enumerator_list RC  */
#line 393 "cgram.y"
                {
		}
#line 2152 "cgram.tab.c"
    break;

  case 75: /* enum_specifier: ENUM identifier LC enumerator_list RC  */
#line 396 "cgram.y"
                {
		}
#line 2159 "cgram.tab.c"
    break;

  case 76: /* enum_specifier: ENUM identifier  */
#line 399 "cgram.y"
                {
		}
#line 2166 "cgram.tab.c"
    break;

  case 78: /* enumerator_list: enumerator_list CM enumerator  */
#line 406 "cgram.y"
                {
		}
#line 2173 "cgram.tab.c"
    break;

  case 79: /* enumerator: IDENTIFIER  */
#line 412 "cgram.y"
                {
		}
#line 2180 "cgram.tab.c"
    break;

  case 80: /* $@7: %empty  */
#line 415 "cgram.y"
                {
		}
#line 2187 "cgram.tab.c"
    break;

  case 81: /* enumerator: IDENTIFIER $@7 ASN constant_expression  */
#line 418 "cgram.y"
                {
		}
#line 2194 "cgram.tab.c"
    break;

  case 82: /* declarator: direct_declarator  */
#line 424 "cgram.y"
        {
	}
#line 2201 "cgram.tab.c"
    break;

  case 83: /* declarator: pointer direct_declarator  */
#line 427 "cgram.y"
        {
	}
#line 2208 "cgram.tab.c"
    break;

  case 84: /* direct_declarator: identifier  */
#line 433 "cgram.y"
        {
        }
#line 2215 "cgram.tab.c"
    break;

  case 85: /* direct_declarator: LP declarator RP  */
#line 436 "cgram.y"
        {
	}
#line 2222 "cgram.tab.c"
    break;

  case 86: /* direct_declarator: direct_declarator LB RB  */
#line 439 "cgram.y"
        {
        }
#line 2229 "cgram.tab.c"
    break;

  case 87: /* direct_declarator: direct_declarator LB constant_expression RB  */
#line 442 "cgram.y"
        {
        }
#line 2236 "cgram.tab.c"
    break;

  case 88: /* direct_declarator: direct_declarator LP parameter_type_list RP  */
#line 445 "cgram.y"
        {
	}
#line 2243 "cgram.tab.c"
    break;

  case 89: /* direct_declarator: direct_declarator LP RP  */
#line 448 "cgram.y"
        {
	}
#line 2250 "cgram.tab.c"
    break;

  case 90: /* direct_declarator: direct_declarator LP identifier_list RP  */
#line 451 "cgram.y"
        {
	}
#line 2257 "cgram.tab.c"
    break;

  case 92: /* function_declarator: pointer direct_function_declarator  */
#line 458 "cgram.y"
    {
    }
#line 2264 "cgram.tab.c"
    break;

  case 93: /* direct_function_declarator: direct_declarator LP parameter_type_list RP  */
#line 464 "cgram.y"
      {
      }
#line 2271 "cgram.tab.c"
    break;

  case 94: /* direct_function_declarator: direct_declarator LP RP  */
#line 467 "cgram.y"
      {
      }
#line 2278 "cgram.tab.c"
    break;

  case 95: /* direct_function_declarator: direct_declarator LP identifier_list RP  */
#line 470 "cgram.y"
      { /* pre-ANSI, error case */
      }
#line 2285 "cgram.tab.c"
    break;

  case 96: /* pointer: MUL  */
#line 476 "cgram.y"
      {
      }
#line 2292 "cgram.tab.c"
    break;

  case 97: /* pointer: MUL type_qualifier_list  */
#line 480 "cgram.y"
      {
      }
#line 2299 "cgram.tab.c"
    break;

  case 98: /* pointer: MUL pointer  */
#line 483 "cgram.y"
      {
      }
#line 2306 "cgram.tab.c"
    break;

  case 99: /* pointer: MUL type_qualifier_list pointer  */
#line 486 "cgram.y"
      {
      }
#line 2313 "cgram.tab.c"
    break;

  case 101: /* type_qualifier_list: type_qualifier_list type_qualifier  */
#line 493 "cgram.y"
    {
    }
#line 2320 "cgram.tab.c"
    break;

  case 102: /* parameter_type_list: parameter_list  */
#line 498 "cgram.y"
                     { }
#line 2326 "cgram.tab.c"
    break;

  case 103: /* parameter_type_list: parameter_list CM ELIPSIS  */
#line 500 "cgram.y"
    {
    }
#line 2333 "cgram.tab.c"
    break;

  case 104: /* parameter_list: parameter_declaration  */
#line 505 "cgram.y"
                             { }
#line 2339 "cgram.tab.c"
    break;

  case 105: /* parameter_list: parameter_list CM parameter_declaration  */
#line 507 "cgram.y"
      {
      }
#line 2346 "cgram.tab.c"
    break;

  case 106: /* parameter_declaration: declaration_specifiers declarator  */
#line 513 "cgram.y"
      { }
#line 2352 "cgram.tab.c"
    break;

  case 107: /* parameter_declaration: declaration_specifiers  */
#line 515 "cgram.y"
      { }
#line 2358 "cgram.tab.c"
    break;

  case 108: /* parameter_declaration: declaration_specifiers abstract_declarator  */
#line 517 "cgram.y"
      { }
#line 2364 "cgram.tab.c"
    break;

  case 109: /* identifier_list: IDENTIFIER  */
#line 522 "cgram.y"
                { }
#line 2370 "cgram.tab.c"
    break;

  case 110: /* identifier_list: identifier_list CM IDENTIFIER  */
#line 524 "cgram.y"
                { }
#line 2376 "cgram.tab.c"
    break;

  case 112: /* initializer: LC initializer_list RC  */
#line 530 "cgram.y"
                { }
#line 2382 "cgram.tab.c"
    break;

  case 113: /* initializer: LC initializer_list CM RC  */
#line 532 "cgram.y"
                { }
#line 2388 "cgram.tab.c"
    break;

  case 115: /* initializer_list: initializer_list CM initializer  */
#line 538 "cgram.y"
                { }
#line 2394 "cgram.tab.c"
    break;

  case 117: /* type_name: specifier_qualifier_list abstract_declarator  */
#line 544 "cgram.y"
          { }
#line 2400 "cgram.tab.c"
    break;

  case 120: /* abstract_declarator: pointer direct_abstract_declarator  */
#line 551 "cgram.y"
                {
		}
#line 2407 "cgram.tab.c"
    break;

  case 121: /* direct_abstract_declarator: LP abstract_declarator RP  */
#line 557 "cgram.y"
                {
		}
#line 2414 "cgram.tab.c"
    break;

  case 122: /* direct_abstract_declarator: LB RB  */
#line 560 "cgram.y"
                {
		}
#line 2421 "cgram.tab.c"
    break;

  case 123: /* direct_abstract_declarator: LB constant_expression RB  */
#line 563 "cgram.y"
                {
		}
#line 2428 "cgram.tab.c"
    break;

  case 124: /* direct_abstract_declarator: direct_abstract_declarator LB RB  */
#line 566 "cgram.y"
                {
		}
#line 2435 "cgram.tab.c"
    break;

  case 125: /* direct_abstract_declarator: direct_abstract_declarator LB constant_expression RB  */
#line 569 "cgram.y"
                {
		}
#line 2442 "cgram.tab.c"
    break;

  case 126: /* direct_abstract_declarator: LP RP  */
#line 572 "cgram.y"
                {
		}
#line 2449 "cgram.tab.c"
    break;

  case 127: /* direct_abstract_declarator: LP parameter_type_list RP  */
#line 575 "cgram.y"
                {
		}
#line 2456 "cgram.tab.c"
    break;

  case 128: /* direct_abstract_declarator: direct_abstract_declarator LP RP  */
#line 578 "cgram.y"
                {
		}
#line 2463 "cgram.tab.c"
    break;

  case 129: /* direct_abstract_declarator: direct_abstract_declarator LP parameter_type_list RP  */
#line 581 "cgram.y"
                {
		}
#line 2470 "cgram.tab.c"
    break;

  case 136: /* labeled_statement: identifier COLON statement  */
#line 596 "cgram.y"
    {
    }
#line 2477 "cgram.tab.c"
    break;

  case 137: /* labeled_statement: CASE constant_expression COLON statement  */
#line 599 "cgram.y"
      { 
      }
#line 2484 "cgram.tab.c"
    break;

  case 138: /* labeled_statement: DEFAULT COLON statement  */
#line 602 "cgram.y"
      {
      }
#line 2491 "cgram.tab.c"
    break;

  case 139: /* expression_statement: SM  */
#line 608 "cgram.y"
                {
		}
#line 2498 "cgram.tab.c"
    break;

  case 140: /* expression_statement: expression SM  */
#line 611 "cgram.y"
                {
		}
#line 2505 "cgram.tab.c"
    break;

  case 141: /* compound_statement: LC RC  */
#line 617 "cgram.y"
    {
    }
#line 2512 "cgram.tab.c"
    break;

  case 142: /* $@8: %empty  */
#line 620 "cgram.y"
      {
      }
#line 2519 "cgram.tab.c"
    break;

  case 143: /* compound_statement: LC $@8 compound_statement_opt RC  */
#line 623 "cgram.y"
      {
      }
#line 2526 "cgram.tab.c"
    break;

  case 144: /* compound_statement_opt: statement_list  */
#line 629 "cgram.y"
    {
    }
#line 2533 "cgram.tab.c"
    break;

  case 145: /* compound_statement_opt: declaration_list  */
#line 633 "cgram.y"
    {
    }
#line 2540 "cgram.tab.c"
    break;

  case 146: /* compound_statement_opt: declaration_list statement_list  */
#line 637 "cgram.y"
    { 
     
    }
#line 2548 "cgram.tab.c"
    break;

  case 148: /* statement_list: statement_list statement  */
#line 646 "cgram.y"
                {
		}
#line 2555 "cgram.tab.c"
    break;

  case 149: /* selection_statement: IF LP expression RP statement  */
#line 652 "cgram.y"
      {   

      }
#line 2563 "cgram.tab.c"
    break;

  case 150: /* selection_statement: IF LP expression RP statement ELSE statement  */
#line 656 "cgram.y"
     {
     }
#line 2570 "cgram.tab.c"
    break;

  case 151: /* selection_statement: SWITCH LP expression RP statement  */
#line 660 "cgram.y"
     {
     }
#line 2577 "cgram.tab.c"
    break;

  case 152: /* iteration_statement: WHILE LP expression RP statement  */
#line 666 "cgram.y"
    {

    }
#line 2585 "cgram.tab.c"
    break;

  case 153: /* iteration_statement: DO statement WHILE LP expression RP SM  */
#line 670 "cgram.y"
    {
    }
#line 2592 "cgram.tab.c"
    break;

  case 154: /* iteration_statement: FOR LP forcntrl RP statement  */
#line 674 "cgram.y"
      { 
      }
#line 2599 "cgram.tab.c"
    break;

  case 155: /* forcntrl: SM SM  */
#line 680 "cgram.y"
     {
     }
#line 2606 "cgram.tab.c"
    break;

  case 156: /* forcntrl: SM SM expression  */
#line 683 "cgram.y"
     {
     }
#line 2613 "cgram.tab.c"
    break;

  case 157: /* forcntrl: SM expression SM  */
#line 686 "cgram.y"
     {
     }
#line 2620 "cgram.tab.c"
    break;

  case 158: /* forcntrl: SM expression SM expression  */
#line 689 "cgram.y"
     {
     }
#line 2627 "cgram.tab.c"
    break;

  case 159: /* forcntrl: expression SM SM  */
#line 692 "cgram.y"
     {
     }
#line 2634 "cgram.tab.c"
    break;

  case 160: /* forcntrl: expression SM SM expression  */
#line 695 "cgram.y"
     {
     }
#line 2641 "cgram.tab.c"
    break;

  case 161: /* forcntrl: expression SM expression SM  */
#line 698 "cgram.y"
     {
     }
#line 2648 "cgram.tab.c"
    break;

  case 162: /* forcntrl: expression SM expression SM expression  */
#line 701 "cgram.y"
     {
     }
#line 2655 "cgram.tab.c"
    break;

  case 163: /* jump_statement: GOTO identifier SM  */
#line 709 "cgram.y"
  {
  }
#line 2662 "cgram.tab.c"
    break;

  case 164: /* jump_statement: CONTINUE SM  */
#line 712 "cgram.y"
  {
  }
#line 2669 "cgram.tab.c"
    break;

  case 165: /* jump_statement: BREAK SM  */
#line 715 "cgram.y"
  {
  }
#line 2676 "cgram.tab.c"
    break;

  case 166: /* jump_statement: RETURN SM  */
#line 718 "cgram.y"
  {
  }
#line 2683 "cgram.tab.c"
    break;

  case 167: /* jump_statement: RETURN expression SM  */
#line 721 "cgram.y"
  {
  }
#line 2690 "cgram.tab.c"
    break;

  case 168: /* expression: assignment_expression  */
#line 727 "cgram.y"
                {
		}
#line 2697 "cgram.tab.c"
    break;

  case 169: /* expression: expression CM assignment_expression  */
#line 730 "cgram.y"
                {
		}
#line 2704 "cgram.tab.c"
    break;

  case 171: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 738 "cgram.y"
          {
          }
#line 2711 "cgram.tab.c"
    break;

  case 172: /* assignment_operator: ASN  */
#line 743 "cgram.y"
                { }
#line 2717 "cgram.tab.c"
    break;

  case 173: /* assignment_operator: MUASN  */
#line 744 "cgram.y"
                { }
#line 2723 "cgram.tab.c"
    break;

  case 174: /* assignment_operator: DIASN  */
#line 745 "cgram.y"
                { }
#line 2729 "cgram.tab.c"
    break;

  case 175: /* assignment_operator: MOASN  */
#line 746 "cgram.y"
                { }
#line 2735 "cgram.tab.c"
    break;

  case 176: /* assignment_operator: PLASN  */
#line 747 "cgram.y"
                { }
#line 2741 "cgram.tab.c"
    break;

  case 177: /* assignment_operator: MIASN  */
#line 748 "cgram.y"
                { }
#line 2747 "cgram.tab.c"
    break;

  case 178: /* assignment_operator: SLASN  */
#line 749 "cgram.y"
                { }
#line 2753 "cgram.tab.c"
    break;

  case 179: /* assignment_operator: SRASN  */
#line 750 "cgram.y"
                { }
#line 2759 "cgram.tab.c"
    break;

  case 180: /* assignment_operator: ANASN  */
#line 751 "cgram.y"
                { }
#line 2765 "cgram.tab.c"
    break;

  case 181: /* assignment_operator: ERASN  */
#line 752 "cgram.y"
                { }
#line 2771 "cgram.tab.c"
    break;

  case 182: /* assignment_operator: ORASN  */
#line 753 "cgram.y"
                { }
#line 2777 "cgram.tab.c"
    break;

  case 184: /* conditional_expression: logical_or_expression QUEST expression COLON conditional_expression  */
#line 760 "cgram.y"
                {
		}
#line 2784 "cgram.tab.c"
    break;

  case 187: /* logical_or_expression: logical_or_expression OROR logical_and_expression  */
#line 773 "cgram.y"
                {
                }
#line 2791 "cgram.tab.c"
    break;

  case 189: /* logical_and_expression: logical_and_expression ANDAND inclusive_or_expression  */
#line 780 "cgram.y"
                { }
#line 2797 "cgram.tab.c"
    break;

  case 191: /* inclusive_or_expression: inclusive_or_expression OR exclusive_or_expression  */
#line 786 "cgram.y"
                {
		}
#line 2804 "cgram.tab.c"
    break;

  case 193: /* exclusive_or_expression: exclusive_or_expression ER and_expression  */
#line 793 "cgram.y"
                {
		}
#line 2811 "cgram.tab.c"
    break;

  case 195: /* and_expression: and_expression AND equality_expression  */
#line 800 "cgram.y"
                {
		}
#line 2818 "cgram.tab.c"
    break;

  case 197: /* equality_expression: equality_expression EQ relational_expression  */
#line 807 "cgram.y"
                {
	        }
#line 2825 "cgram.tab.c"
    break;

  case 198: /* equality_expression: equality_expression NE relational_expression  */
#line 810 "cgram.y"
                {
                }
#line 2832 "cgram.tab.c"
    break;

  case 200: /* relational_expression: relational_expression LT shift_expression  */
#line 817 "cgram.y"
     {
     }
#line 2839 "cgram.tab.c"
    break;

  case 201: /* relational_expression: relational_expression GT shift_expression  */
#line 820 "cgram.y"
     {
     }
#line 2846 "cgram.tab.c"
    break;

  case 202: /* relational_expression: relational_expression LE shift_expression  */
#line 823 "cgram.y"
     {
     }
#line 2853 "cgram.tab.c"
    break;

  case 203: /* relational_expression: relational_expression GE shift_expression  */
#line 826 "cgram.y"
     {
     }
#line 2860 "cgram.tab.c"
    break;

  case 205: /* shift_expression: shift_expression SHL additive_expression  */
#line 833 "cgram.y"
     {
     }
#line 2867 "cgram.tab.c"
    break;

  case 206: /* shift_expression: shift_expression SHR additive_expression  */
#line 836 "cgram.y"
     {
     }
#line 2874 "cgram.tab.c"
    break;

  case 208: /* additive_expression: additive_expression PLUS multiplicative_expression  */
#line 843 "cgram.y"
     {
     }
#line 2881 "cgram.tab.c"
    break;

  case 209: /* additive_expression: additive_expression MINUS multiplicative_expression  */
#line 846 "cgram.y"
     {
     }
#line 2888 "cgram.tab.c"
    break;

  case 211: /* multiplicative_expression: multiplicative_expression MUL cast_expression  */
#line 853 "cgram.y"
     {
     }
#line 2895 "cgram.tab.c"
    break;

  case 212: /* multiplicative_expression: multiplicative_expression DIV cast_expression  */
#line 856 "cgram.y"
     {
     }
#line 2902 "cgram.tab.c"
    break;

  case 213: /* multiplicative_expression: multiplicative_expression MOD cast_expression  */
#line 859 "cgram.y"
     {
     }
#line 2909 "cgram.tab.c"
    break;

  case 215: /* cast_expression: LP type_name RP cast_expression  */
#line 866 "cgram.y"
   {
   }
#line 2916 "cgram.tab.c"
    break;

  case 217: /* unary_expression: INCOP unary_expression  */
#line 874 "cgram.y"
   {
   }
#line 2923 "cgram.tab.c"
    break;

  case 218: /* unary_expression: DECOP unary_expression  */
#line 877 "cgram.y"
   {
   }
#line 2930 "cgram.tab.c"
    break;

  case 219: /* unary_expression: unary_operator cast_expression  */
#line 880 "cgram.y"
   {
   }
#line 2937 "cgram.tab.c"
    break;

  case 220: /* unary_expression: SIZEOF unary_expression  */
#line 883 "cgram.y"
   {
   }
#line 2944 "cgram.tab.c"
    break;

  case 221: /* unary_expression: SIZEOF LP type_name RP  */
#line 886 "cgram.y"
   {  
   }
#line 2951 "cgram.tab.c"
    break;

  case 222: /* unary_operator: AND  */
#line 892 "cgram.y"
   {
   }
#line 2958 "cgram.tab.c"
    break;

  case 223: /* unary_operator: MUL  */
#line 895 "cgram.y"
   {
   }
#line 2965 "cgram.tab.c"
    break;

  case 224: /* unary_operator: PLUS  */
#line 898 "cgram.y"
   {
   }
#line 2972 "cgram.tab.c"
    break;

  case 225: /* unary_operator: MINUS  */
#line 901 "cgram.y"
   {
   }
#line 2979 "cgram.tab.c"
    break;

  case 226: /* unary_operator: NOT  */
#line 904 "cgram.y"
   {
   }
#line 2986 "cgram.tab.c"
    break;

  case 227: /* unary_operator: BANG  */
#line 907 "cgram.y"
   {
   }
#line 2993 "cgram.tab.c"
    break;

  case 229: /* postfix_expression: postfix_expression LB expression RB  */
#line 915 "cgram.y"
     {
     }
#line 3000 "cgram.tab.c"
    break;

  case 230: /* postfix_expression: postfix_expression LP RP  */
#line 918 "cgram.y"
     {
     }
#line 3007 "cgram.tab.c"
    break;

  case 231: /* postfix_expression: postfix_expression LP argument_expression_list RP  */
#line 921 "cgram.y"
     {
     }
#line 3014 "cgram.tab.c"
    break;

  case 232: /* postfix_expression: postfix_expression DOT identifier  */
#line 924 "cgram.y"
     {
     }
#line 3021 "cgram.tab.c"
    break;

  case 233: /* postfix_expression: postfix_expression FOLLOW identifier  */
#line 927 "cgram.y"
     {
     }
#line 3028 "cgram.tab.c"
    break;

  case 234: /* postfix_expression: postfix_expression INCOP  */
#line 930 "cgram.y"
     {
     }
#line 3035 "cgram.tab.c"
    break;

  case 235: /* postfix_expression: postfix_expression DECOP  */
#line 933 "cgram.y"
     {
     }
#line 3042 "cgram.tab.c"
    break;

  case 236: /* primary_expression: IDENTIFIER  */
#line 939 "cgram.y"
   { 
   }
#line 3049 "cgram.tab.c"
    break;

  case 238: /* primary_expression: STRING  */
#line 943 "cgram.y"
     {
     }
#line 3056 "cgram.tab.c"
    break;

  case 239: /* primary_expression: LP expression RP  */
#line 946 "cgram.y"
   { 
   }
#line 3063 "cgram.tab.c"
    break;

  case 240: /* argument_expression_list: assignment_expression  */
#line 952 "cgram.y"
   {
   }
#line 3070 "cgram.tab.c"
    break;

  case 241: /* argument_expression_list: argument_expression_list CM assignment_expression  */
#line 955 "cgram.y"
   {
   }
#line 3077 "cgram.tab.c"
    break;

  case 242: /* constant: ICON  */
#line 961 "cgram.y"
   {
   }
#line 3084 "cgram.tab.c"
    break;

  case 243: /* constant: CCON  */
#line 964 "cgram.y"
   {
   }
#line 3091 "cgram.tab.c"
    break;

  case 244: /* constant: FCON  */
#line 967 "cgram.y"
   {
   }
#line 3098 "cgram.tab.c"
    break;

  case 245: /* constant: ENUMERATION_CONSTANT  */
#line 970 "cgram.y"
   {
   }
#line 3105 "cgram.tab.c"
    break;


#line 3109 "cgram.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 974 "cgram.y"

