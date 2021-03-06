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


#line 90 "cgram.tab.c"

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
  YYSYMBOL_declaration = 96,               /* declaration  */
  YYSYMBOL_untyped_declaration = 97,       /* untyped_declaration  */
  YYSYMBOL_declaration_list = 98,          /* declaration_list  */
  YYSYMBOL_declaration_specifiers = 99,    /* declaration_specifiers  */
  YYSYMBOL_storage_class_specifier = 100,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 101,           /* type_specifier  */
  YYSYMBOL_actual_type_specifier = 102,    /* actual_type_specifier  */
  YYSYMBOL_type_adjective = 103,           /* type_adjective  */
  YYSYMBOL_type_qualifier = 104,           /* type_qualifier  */
  YYSYMBOL_struct_or_union_specifier = 105, /* struct_or_union_specifier  */
  YYSYMBOL_struct_or_union = 106,          /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 107,  /* struct_declaration_list  */
  YYSYMBOL_init_declarator_list = 108,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 109,          /* init_declarator  */
  YYSYMBOL_struct_declaration = 110,       /* struct_declaration  */
  YYSYMBOL_specifier_qualifier_list = 111, /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 112,   /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 113,        /* struct_declarator  */
  YYSYMBOL_enum_specifier = 114,           /* enum_specifier  */
  YYSYMBOL_enumerator_list = 115,          /* enumerator_list  */
  YYSYMBOL_enumerator = 116,               /* enumerator  */
  YYSYMBOL_declarator = 117,               /* declarator  */
  YYSYMBOL_direct_declarator = 118,        /* direct_declarator  */
  YYSYMBOL_function_declarator = 119,      /* function_declarator  */
  YYSYMBOL_direct_function_declarator = 120, /* direct_function_declarator  */
  YYSYMBOL_pointer = 121,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 122,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 123,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 124,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 125,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 126,          /* identifier_list  */
  YYSYMBOL_initializer = 127,              /* initializer  */
  YYSYMBOL_initializer_list = 128,         /* initializer_list  */
  YYSYMBOL_type_name = 129,                /* type_name  */
  YYSYMBOL_abstract_declarator = 130,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 131, /* direct_abstract_declarator  */
  YYSYMBOL_statement = 132,                /* statement  */
  YYSYMBOL_labeled_statement = 133,        /* labeled_statement  */
  YYSYMBOL_expression_statement = 134,     /* expression_statement  */
  YYSYMBOL_compound_statement = 135,       /* compound_statement  */
  YYSYMBOL_compound_statement_opt = 136,   /* compound_statement_opt  */
  YYSYMBOL_statement_list = 137,           /* statement_list  */
  YYSYMBOL_selection_statement = 138,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 139,      /* iteration_statement  */
  YYSYMBOL_forcntrl = 140,                 /* forcntrl  */
  YYSYMBOL_jump_statement = 141,           /* jump_statement  */
  YYSYMBOL_expression = 142,               /* expression  */
  YYSYMBOL_assignment_expression = 143,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 144,      /* assignment_operator  */
  YYSYMBOL_conditional_expression = 145,   /* conditional_expression  */
  YYSYMBOL_constant_expression = 146,      /* constant_expression  */
  YYSYMBOL_logical_or_expression = 147,    /* logical_or_expression  */
  YYSYMBOL_logical_and_expression = 148,   /* logical_and_expression  */
  YYSYMBOL_inclusive_or_expression = 149,  /* inclusive_or_expression  */
  YYSYMBOL_exclusive_or_expression = 150,  /* exclusive_or_expression  */
  YYSYMBOL_and_expression = 151,           /* and_expression  */
  YYSYMBOL_equality_expression = 152,      /* equality_expression  */
  YYSYMBOL_relational_expression = 153,    /* relational_expression  */
  YYSYMBOL_shift_expression = 154,         /* shift_expression  */
  YYSYMBOL_additive_expression = 155,      /* additive_expression  */
  YYSYMBOL_multiplicative_expression = 156, /* multiplicative_expression  */
  YYSYMBOL_cast_expression = 157,          /* cast_expression  */
  YYSYMBOL_unary_expression = 158,         /* unary_expression  */
  YYSYMBOL_unary_operator = 159,           /* unary_operator  */
  YYSYMBOL_postfix_expression = 160,       /* postfix_expression  */
  YYSYMBOL_primary_expression = 161,       /* primary_expression  */
  YYSYMBOL_argument_expression_list = 162, /* argument_expression_list  */
  YYSYMBOL_constant = 163                  /* constant  */
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
#define YYLAST   1366

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  74
/* YYNRULES -- Number of rules.  */
#define YYNRULES  237
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  384

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
       0,   139,   139,   141,   145,   152,   154,   160,   162,   164,
     169,   171,   173,   175,   180,   182,   187,   192,   194,   199,
     201,   203,   205,   207,   209,   216,   218,   220,   222,   224,
     229,   231,   236,   238,   240,   242,   244,   246,   248,   250,
     256,   258,   260,   262,   267,   269,   274,   276,   278,   283,
     285,   290,   292,   297,   300,   305,   307,   312,   314,   319,
     320,   322,   324,   329,   330,   335,   336,   338,   343,   345,
     347,   352,   354,   359,   361,   366,   368,   373,   375,   377,
     379,   381,   383,   385,   389,   391,   396,   398,   400,   405,
     407,   409,   411,   416,   418,   423,   425,   430,   432,   437,
     439,   441,   446,   448,   453,   455,   457,   462,   464,   469,
     471,   476,   478,   480,   486,   488,   490,   492,   494,   496,
     498,   500,   502,   507,   509,   511,   513,   515,   517,   522,
     524,   526,   531,   533,   538,   540,   545,   547,   549,   554,
     556,   561,   563,   565,   570,   572,   574,   579,   581,   583,
     585,   587,   589,   591,   593,   600,   602,   604,   606,   608,
     613,   615,   621,   623,   628,   629,   630,   631,   632,   633,
     634,   635,   636,   637,   638,   643,   645,   651,   656,   658,
     663,   665,   670,   672,   677,   679,   684,   686,   691,   693,
     695,   700,   702,   704,   706,   708,   713,   715,   717,   722,
     724,   726,   731,   733,   735,   737,   742,   744,   750,   752,
     754,   756,   758,   760,   765,   767,   769,   771,   773,   775,
     781,   782,   784,   786,   788,   790,   792,   794,   799,   801,
     803,   805,   810,   812,   817,   819,   821,   823
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
  "translation_unit", "external_declaration", "function_definition",
  "declaration", "untyped_declaration", "declaration_list",
  "declaration_specifiers", "storage_class_specifier", "type_specifier",
  "actual_type_specifier", "type_adjective", "type_qualifier",
  "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "init_declarator_list", "init_declarator",
  "struct_declaration", "specifier_qualifier_list",
  "struct_declarator_list", "struct_declarator", "enum_specifier",
  "enumerator_list", "enumerator", "declarator", "direct_declarator",
  "function_declarator", "direct_function_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "initializer",
  "initializer_list", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "statement", "labeled_statement",
  "expression_statement", "compound_statement", "compound_statement_opt",
  "statement_list", "selection_statement", "iteration_statement",
  "forcntrl", "jump_statement", "expression", "assignment_expression",
  "assignment_operator", "conditional_expression", "constant_expression",
  "logical_or_expression", "logical_and_expression",
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

#define YYPACT_NINF (-196)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-84)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     629,  -196,  -196,  -196,    51,   204,  -196,  -196,  -196,  -196,
    -196,  -196,  -196,  -196,  -196,  -196,  -196,  -196,  -196,  -196,
    -196,  -196,  -196,  -196,    16,  -196,    30,   629,  -196,  -196,
    -196,  -196,   184,  1233,  1233,  -196,  -196,  1233,  -196,    25,
     162,  -196,  -196,    27,   175,  1170,  -196,    66,  -196,  -196,
      51,     7,   214,    66,    68,    56,  -196,  -196,  -196,   252,
    1170,  -196,  -196,  -196,  1033,    65,   204,  -196,   809,   673,
     828,   317,  -196,  1170,   184,  -196,   175,  -196,  -196,  -196,
    -196,   717,   214,   110,    -8,  -196,    68,  -196,  1170,  -196,
    1033,  1033,  1277,  -196,    49,  1033,  -196,  -196,  -196,  -196,
    -196,  -196,  -196,  1021,  1073,  1073,  -196,  -196,  -196,   541,
     809,  -196,  -196,  -196,  -196,  -196,  -196,     6,   119,   109,
     113,   137,    67,   234,   278,   261,   269,  -196,   477,  1082,
       9,  -196,  -196,  -196,   220,   190,   126,   157,  -196,    -6,
    -196,  -196,   163,  -196,   177,   185,  -196,  -196,  1082,   199,
     196,   209,   229,   485,   241,   294,   202,   254,   819,   256,
     401,  -196,  -196,  -196,  -196,   289,   485,  -196,  -196,  -196,
     279,  -196,  -196,  -196,  -196,   287,    26,  1082,    68,  -196,
      81,  -196,  -196,  -196,  -196,  -196,  -196,  1082,   281,  -196,
     296,  1291,   541,  -196,  1082,  -196,  -196,   221,   302,    61,
    -196,   131,  1082,  1082,  1082,  1082,  1082,  1082,  1082,  1082,
    1082,  1082,  1082,  1082,  1082,  1082,  1082,  1082,  1082,  1082,
    1082,  -196,  -196,  -196,  -196,  -196,  -196,  -196,  -196,  -196,
    -196,  -196,  1082,  -196,  -196,  -196,   880,  1082,   294,   294,
     585,   889,  -196,    71,  -196,   232,   390,  1081,   340,   411,
    -196,   309,   485,  1082,  1082,  1082,   272,   941,   316,  -196,
    -196,  -196,   283,   485,   485,  -196,  -196,  1082,  -196,  -196,
    -196,  -196,  -196,  -196,  -196,    85,  -196,  1082,  -196,   315,
    1126,   236,  -196,  1082,  -196,   757,  -196,   119,    33,   109,
     113,   137,    67,   234,   234,   278,   278,   278,   278,   261,
     261,   269,   269,  -196,  -196,  -196,  -196,  -196,  -196,   129,
      87,  -196,  -196,  -196,   318,   319,  -196,   320,   232,  1214,
     950,  -196,  -196,  -196,   485,  -196,   150,   170,   188,   324,
    1002,   325,   285,  -196,  -196,  -196,  -196,  -196,  -196,  -196,
    -196,  -196,  -196,  1082,  1082,  -196,  -196,  -196,  -196,  -196,
    -196,   326,  -196,   328,  -196,   485,   485,   485,  1082,  1082,
     301,   485,  1011,  -196,  -196,  -196,  -196,   271,  -196,  -196,
     194,   338,  1082,  -196,  1082,   305,   485,   359,   338,   338,
    1082,  -196,  -196,   338
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     3,     2,    37,    89,     0,    25,    26,    27,    28,
      29,    33,    40,    34,    41,    42,    43,    35,    36,    44,
      45,    32,    49,    50,     0,    77,     0,     4,     5,     7,
       8,     9,     0,    19,    21,    30,    31,    23,    38,     0,
       0,    53,    39,    55,    75,     0,    84,     0,    93,    91,
      90,     0,    75,     0,     0,    70,     1,     6,    14,     0,
       0,    20,    22,    24,     0,    48,     0,    16,     0,     0,
       0,     0,    17,     0,     0,    10,    76,    85,    94,    92,
      78,     0,    76,    73,     0,    71,     0,    15,     0,    12,
      59,    61,     0,    51,     0,     0,    54,   234,   235,   236,
     237,   228,   230,     0,     0,     0,   216,   217,   215,     0,
       0,   214,   218,   219,    56,   104,   162,   175,   178,   180,
     182,   184,   186,   188,   191,   196,   199,   202,   206,     0,
     208,   220,   229,   102,    87,   100,     0,    95,    97,     0,
      79,   177,     0,   206,   237,   228,   132,   134,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     137,   139,   123,   125,   124,     0,   136,   126,   127,   128,
       0,   160,    18,    11,    82,     0,     0,     0,     0,    68,
       0,    13,    60,    62,    46,    52,    57,     0,     0,    63,
      65,     0,     0,   212,     0,   209,   210,   109,     0,     0,
     107,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   165,   166,   167,   168,   164,   169,   170,   171,   172,
     173,   174,     0,   211,   226,   227,     0,     0,     0,     0,
       0,     0,    99,   111,   101,   112,    86,     0,     0,    88,
      80,     0,     0,     0,     0,     0,     0,     0,     0,   156,
     157,   158,     0,     0,   138,   135,   140,     0,   133,    81,
      83,    74,    72,    69,    66,     0,    58,     0,    47,     0,
       0,   111,   110,     0,   231,     0,   105,   179,     0,   181,
     183,   185,   187,   189,   190,   194,   195,   192,   193,   197,
     198,   200,   201,   203,   204,   205,   163,   222,   232,     0,
       0,   225,   224,   119,     0,     0,   115,     0,   113,     0,
       0,    96,    98,   103,     0,   131,     0,     0,     0,     0,
       0,     0,     0,   155,   159,   129,   161,    64,    67,   213,
     207,   106,   108,     0,     0,   223,   221,   120,   114,   116,
     121,     0,   117,     0,   130,     0,     0,     0,     0,   147,
       0,     0,     0,   176,   233,   122,   118,   141,   143,   144,
       0,   148,   149,   146,   151,     0,     0,     0,   150,   152,
     153,   142,   145,   154
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -196,   -24,  -196,  -196,   387,  -196,    22,  -196,   106,     1,
    -196,   115,  -196,  -196,     8,  -196,  -196,   321,   -14,   351,
     -73,   -80,  -196,   143,  -196,   333,   242,     2,    14,   389,
     375,     4,  -196,   -64,  -196,   178,   345,  -104,  -196,   235,
    -122,  -195,   -89,  -196,  -196,   116,  -196,   268,  -196,  -196,
    -196,  -196,   -69,   -65,  -196,   -68,   -47,  -196,   227,   226,
     237,   225,   230,   132,    84,   128,   130,  -113,   -61,  -196,
    -196,  -196,  -196,  -196
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    25,    26,    27,    28,    29,    72,    31,    73,    74,
      33,    34,    35,    36,    37,    38,    39,    92,    40,    41,
      93,    94,   188,   189,    42,    84,    85,    43,    52,    45,
      46,    53,    50,   314,   137,   138,   139,   114,   201,   198,
     315,   245,   161,   162,   163,   164,   165,   166,   167,   168,
     331,   169,   170,   171,   232,   116,   142,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   309,   132
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      55,    32,   141,   115,    47,   136,   200,    51,    49,   143,
     182,   183,    48,   244,    44,    65,   233,   175,    59,   185,
     234,   235,    30,     1,     2,   178,   202,   248,    32,   197,
      56,    47,     1,     2,    61,    62,    47,   249,    63,   179,
     199,    44,   193,   195,   196,   115,    44,   159,   318,    30,
      80,   236,    68,   237,    79,   203,     1,     2,    78,   248,
      59,    76,    54,   238,   256,   239,   267,    82,   143,   270,
     135,    64,    91,     1,     2,   282,    83,   266,     1,     2,
     141,   343,   135,   186,   208,   209,   318,   143,     4,   262,
       4,     5,     1,     2,   267,   172,   190,   187,    91,    91,
      91,   251,    86,    91,   284,   303,   304,   305,     5,   141,
     172,    95,   197,   240,   178,   241,   143,    91,   185,   141,
     267,    19,    20,   199,     4,   199,   143,     5,   273,   159,
     271,   258,   346,   187,   288,   177,   159,   242,   204,   243,
     274,   143,   159,   143,   143,   143,   143,   143,   143,   143,
     143,   143,   143,   143,   143,   143,   143,   143,   143,   143,
     205,    75,   344,   325,   285,   206,    88,   306,   310,   246,
     340,   308,   345,   141,   335,   266,    89,   160,   286,    90,
     143,   342,   172,   267,   326,   327,   328,   207,   332,   173,
     247,     1,     2,   355,   317,    66,    67,     1,     2,    91,
      91,   281,   336,   267,   181,    90,    90,    90,   250,   141,
      90,     1,     2,   356,   311,   312,   143,    69,    58,    70,
     115,   267,   143,     4,    90,    -3,     5,   267,   159,     4,
     338,   357,   240,    -2,   241,   354,   259,   377,   253,   159,
     159,   135,    51,     4,   243,   -82,     5,   252,   135,   210,
     211,   254,   141,   -82,   -82,   351,    81,    82,    70,   143,
       4,   360,   -82,   280,   -82,   241,   367,   368,   369,   212,
     213,   255,   373,   353,   319,   363,   320,   190,   280,   364,
     241,   135,   143,   257,   281,    66,    87,   381,   260,   370,
     371,   214,   215,   375,   295,   296,   297,   298,   216,   217,
     159,     1,     2,   378,   263,   379,    90,    90,   218,   219,
     220,   383,   267,   268,   275,   276,   267,   334,   267,   362,
     135,    97,    98,    99,   144,   145,   102,   103,   104,   105,
     269,   159,   159,   159,   267,   372,   265,   159,   267,   380,
     293,   294,   299,   300,   277,   283,   301,   302,   323,     3,
     333,   146,   159,   329,   106,   107,   108,   324,   339,   109,
     376,   347,   348,    71,   147,   349,   358,   111,   361,   365,
     112,   267,   113,   366,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,   382,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,    97,    98,    99,   144,   145,
     102,   103,   104,   105,    57,   -81,   191,    96,   337,   180,
     272,    60,    77,   -81,   -81,   322,   176,   279,   264,   287,
     289,   291,   -81,     3,   -81,   146,   -83,   292,   106,   107,
     108,     0,   290,   109,   -83,   -83,     0,    71,     0,     0,
       0,   111,     0,   -83,   112,   -83,   113,     0,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,     0,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,    97,
      98,    99,   144,   145,   102,   103,   104,   105,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   146,
       0,     0,   106,   107,   108,     0,     0,   109,     0,     0,
       0,    71,     0,     0,     0,   111,     0,     0,   112,     0,
     113,     0,     0,     0,     0,    97,    98,    99,   100,   101,
     102,   103,   104,   105,     0,     0,     0,     0,     0,     0,
       0,     0,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,     3,     0,     0,     0,     0,   106,   107,
     108,     0,     0,   109,     0,     0,     0,     0,     0,     0,
       0,   111,     1,     2,   112,     0,   113,     0,     0,     0,
       0,     0,     0,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,     3,     0,     0,
       0,     0,     0,     0,     4,     0,     0,   240,   313,   241,
       0,     0,     0,     0,     0,     0,     1,     2,     0,     0,
       0,     0,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     3,     0,     0,     0,     0,     0,     0,     4,     0,
       0,     5,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   133,     0,     0,     0,     0,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,     3,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   134,     0,     0,     0,
       0,     0,     0,     0,     0,   133,     0,     0,     0,     0,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,     3,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     174,    97,    98,    99,   100,   101,   102,   103,   104,   105,
       0,     0,     0,     0,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,   106,   107,   108,     0,     0,   109,
       0,     0,     0,   110,   341,     0,     0,   111,     0,     0,
     112,     0,   113,    97,    98,    99,   100,   101,   102,   103,
     104,   105,     0,    97,    98,    99,   100,   101,   102,   103,
     104,   105,    97,    98,    99,   100,   101,   102,   103,   104,
     105,     0,     0,     0,     0,     0,   106,   107,   108,     0,
       0,   109,     0,   261,     0,   110,   106,   107,   108,   111,
       0,   109,   112,     0,   113,   106,   107,   108,     0,   111,
     109,     0,   112,   140,   113,     0,     0,     0,   111,     0,
       0,   112,     0,   113,    97,    98,    99,   100,   101,   102,
     103,   104,   105,    97,    98,    99,   100,   101,   102,   103,
     104,   105,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   106,   107,   108,
       0,     0,   109,   307,     0,     0,   106,   107,   108,     0,
     111,   109,     0,   112,   316,   113,     0,     0,     0,   111,
       0,     0,   112,     0,   113,    97,    98,    99,   100,   101,
     102,   103,   104,   105,    97,    98,    99,   100,   101,   102,
     103,   104,   105,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   330,     0,     0,   106,   107,
     108,     0,     0,   109,     0,     0,     0,   106,   107,   108,
       0,   111,   109,     0,   112,   352,   113,     0,     0,     0,
     111,     0,     0,   112,     0,   113,    97,    98,    99,   100,
     101,   102,   103,   104,   105,    97,    98,    99,   100,   101,
     102,   103,   104,   105,     0,    97,    98,    99,   100,   101,
     102,   103,   104,   105,     0,     0,   359,     0,     0,   106,
     107,   108,     0,     0,   109,   374,     0,     0,   106,   107,
     108,     0,   111,   109,     0,   112,     0,   113,   106,   107,
     108,   111,     0,   192,   112,     3,   113,     0,     0,     0,
       0,   111,     0,     0,   112,     0,   113,    97,    98,    99,
     100,   101,   102,   103,   104,   105,    97,    98,    99,   100,
     101,   102,   103,   104,   105,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,     0,
     106,   107,   108,     3,     0,   194,     0,     0,     0,   106,
     107,   108,     0,   111,   109,     0,   112,     0,   113,     0,
       0,     0,   111,     0,     0,   112,     0,   113,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,   321,     3,     0,
       0,     0,     0,     0,     0,     4,     0,     0,   280,   313,
     241,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     3,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    71,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     3,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   350,     0,     0,
       0,     0,     0,     0,     0,     3,     0,     0,     0,     0,
       0,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,     3,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     3,   184,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   278,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24
};

static const yytype_int16 yycheck[] =
{
      24,     0,    70,    68,     0,    69,   110,     5,     4,    70,
      90,    91,     4,   135,     0,    39,   129,    81,    32,    92,
      11,    12,     0,     7,     8,    33,    20,    33,    27,   109,
       0,    27,     7,     8,    33,    34,    32,    43,    37,    47,
     109,    27,   103,   104,   105,   110,    32,    71,   243,    27,
      43,    42,    25,    44,    50,    49,     7,     8,    50,    33,
      74,    47,    46,    54,   153,    56,    33,    53,   129,    43,
      69,    46,    64,     7,     8,   197,     8,   166,     7,     8,
     148,    48,    81,    34,    17,    18,   281,   148,    39,   158,
      39,    42,     7,     8,    33,    73,    94,    48,    90,    91,
      92,   148,    46,    95,    43,   218,   219,   220,    42,   177,
      88,    46,   192,    42,    33,    44,   177,   109,   191,   187,
      33,    70,    71,   192,    39,   194,   187,    42,    47,   153,
     177,   155,    45,    48,   203,    25,   160,   135,    19,   135,
     187,   202,   166,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
      51,    45,    33,   252,    33,    52,    60,   232,   237,    43,
     283,   236,    43,   241,   263,   264,    60,    71,    47,    64,
     241,   285,   160,    33,   253,   254,   255,    50,   257,    73,
      33,     7,     8,    43,   241,    33,    34,     7,     8,   191,
     192,   197,   267,    33,    88,    90,    91,    92,    45,   277,
      95,     7,     8,    43,   238,   239,   277,    42,    34,    44,
     285,    33,   283,    39,   109,    48,    42,    33,   252,    39,
     277,    43,    42,    48,    44,   324,    34,    43,    42,   263,
     264,   240,   240,    39,   240,    25,    42,    48,   247,    15,
      16,    42,   320,    33,    34,   319,    42,   243,    44,   320,
      39,   330,    42,    42,    44,    44,   355,   356,   357,    35,
      36,    42,   361,   320,    42,   343,    44,   275,    42,   344,
      44,   280,   343,    42,   280,    33,    34,   376,    34,   358,
     359,    13,    14,   362,   210,   211,   212,   213,    37,    38,
     324,     7,     8,   372,    48,   374,   191,   192,    39,    40,
      41,   380,    33,    34,    33,    34,    33,    34,    33,    34,
     319,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      43,   355,   356,   357,    33,    34,    47,   361,    33,    34,
     208,   209,   214,   215,    48,    43,   216,   217,     8,    32,
      34,    34,   376,    81,    37,    38,    39,    48,    43,    42,
      89,    43,    43,    46,    47,    45,    42,    50,    43,    43,
      53,    33,    55,    45,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    34,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    27,    25,    95,    66,   275,    86,
     178,    32,    47,    33,    34,   247,    81,   192,   160,   202,
     204,   206,    42,    32,    44,    34,    25,   207,    37,    38,
      39,    -1,   205,    42,    33,    34,    -1,    46,    -1,    -1,
      -1,    50,    -1,    42,    53,    44,    55,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    -1,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    37,    38,    39,    -1,    -1,    42,    -1,    -1,
      -1,    46,    -1,    -1,    -1,    50,    -1,    -1,    53,    -1,
      55,    -1,    -1,    -1,    -1,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    32,    -1,    -1,    -1,    -1,    37,    38,
      39,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,     7,     8,    53,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    42,    43,    44,
      -1,    -1,    -1,    -1,    -1,    -1,     7,     8,    -1,    -1,
      -1,    -1,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    32,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     8,    -1,    -1,    -1,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     8,    -1,    -1,    -1,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    -1,    37,    38,    39,    -1,    -1,    42,
      -1,    -1,    -1,    46,    47,    -1,    -1,    50,    -1,    -1,
      53,    -1,    55,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    -1,     4,     5,     6,     7,     8,     9,    10,
      11,    12,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    -1,    37,    38,    39,    -1,
      -1,    42,    -1,    34,    -1,    46,    37,    38,    39,    50,
      -1,    42,    53,    -1,    55,    37,    38,    39,    -1,    50,
      42,    -1,    53,    45,    55,    -1,    -1,    -1,    50,    -1,
      -1,    53,    -1,    55,     4,     5,     6,     7,     8,     9,
      10,    11,    12,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    39,
      -1,    -1,    42,    43,    -1,    -1,    37,    38,    39,    -1,
      50,    42,    -1,    53,    45,    55,    -1,    -1,    -1,    50,
      -1,    -1,    53,    -1,    55,     4,     5,     6,     7,     8,
       9,    10,    11,    12,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    37,    38,
      39,    -1,    -1,    42,    -1,    -1,    -1,    37,    38,    39,
      -1,    50,    42,    -1,    53,    45,    55,    -1,    -1,    -1,
      50,    -1,    -1,    53,    -1,    55,     4,     5,     6,     7,
       8,     9,    10,    11,    12,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    -1,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    -1,    -1,    34,    -1,    -1,    37,
      38,    39,    -1,    -1,    42,    34,    -1,    -1,    37,    38,
      39,    -1,    50,    42,    -1,    53,    -1,    55,    37,    38,
      39,    50,    -1,    42,    53,    32,    55,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    53,    -1,    55,     4,     5,     6,
       7,     8,     9,    10,    11,    12,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    -1,
      37,    38,    39,    32,    -1,    42,    -1,    -1,    -1,    37,
      38,    39,    -1,    50,    42,    -1,    53,    -1,    55,    -1,
      -1,    -1,    50,    -1,    -1,    53,    -1,    55,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    42,    43,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,     8,    32,    39,    42,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    91,    92,    93,    94,    95,
      96,    97,    99,   100,   101,   102,   103,   104,   105,   106,
     108,   109,   114,   117,   118,   119,   120,   121,   104,   121,
     122,   117,   118,   121,    46,    91,     0,    94,    34,   108,
     119,    99,    99,    99,    46,    91,    33,    34,    25,    42,
      44,    46,    96,    98,    99,   135,   118,   120,   104,   121,
      43,    42,   118,     8,   115,   116,    46,    34,    98,   135,
     101,   104,   107,   110,   111,    46,   109,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    37,    38,    39,    42,
      46,    50,    53,    55,   127,   143,   145,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   163,     8,    43,    99,   123,   124,   125,   126,
      45,   145,   146,   158,     7,     8,    34,    47,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    91,
      98,   132,   133,   134,   135,   136,   137,   138,   139,   141,
     142,   143,    96,   135,    43,   123,   126,    25,    33,    47,
     115,   135,   111,   111,    47,   110,    34,    48,   112,   113,
     117,   107,    42,   158,    42,   158,   158,   111,   129,   142,
     127,   128,    20,    49,    19,    51,    52,    50,    17,    18,
      15,    16,    35,    36,    13,    14,    37,    38,    39,    40,
      41,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,   144,   157,    11,    12,    42,    44,    54,    56,
      42,    44,   117,   121,   130,   131,    43,    33,    33,    43,
      45,   146,    48,    42,    42,    42,   132,    42,    91,    34,
      34,    34,   142,    48,   137,    47,   132,    33,    34,    43,
      43,   146,   116,    47,   146,    33,    34,    48,    47,   129,
      42,   121,   130,    43,    43,    33,    47,   148,   142,   149,
     150,   151,   152,   153,   153,   154,   154,   154,   154,   155,
     155,   156,   156,   157,   157,   157,   143,    43,   143,   162,
     142,    91,    91,    43,   123,   130,    45,   146,   131,    42,
      44,    76,   125,     8,    48,   132,   142,   142,   142,    81,
      34,   140,   142,    34,    34,   132,   143,   113,   146,    43,
     157,    47,   127,    48,    33,    43,    45,    43,    43,    45,
      43,   123,    45,   146,   132,    43,    43,    43,    42,    34,
     142,    43,    34,   145,   143,    43,    45,   132,   132,   132,
     142,   142,    34,   132,    34,   142,    89,    43,   142,   142,
      34,   132,    34,   142
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    90,    91,    91,    92,    93,    93,    94,    94,    94,
      95,    95,    95,    95,    96,    96,    97,    98,    98,    99,
      99,    99,    99,    99,    99,   100,   100,   100,   100,   100,
     101,   101,   102,   102,   102,   102,   102,   102,   102,   102,
     103,   103,   103,   103,   104,   104,   105,   105,   105,   106,
     106,   107,   107,   108,   108,   109,   109,   110,   110,   111,
     111,   111,   111,   112,   112,   113,   113,   113,   114,   114,
     114,   115,   115,   116,   116,   117,   117,   118,   118,   118,
     118,   118,   118,   118,   119,   119,   120,   120,   120,   121,
     121,   121,   121,   122,   122,   123,   123,   124,   124,   125,
     125,   125,   126,   126,   127,   127,   127,   128,   128,   129,
     129,   130,   130,   130,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   132,   132,   132,   132,   132,   132,   133,
     133,   133,   134,   134,   135,   135,   136,   136,   136,   137,
     137,   138,   138,   138,   139,   139,   139,   140,   140,   140,
     140,   140,   140,   140,   140,   141,   141,   141,   141,   141,
     142,   142,   143,   143,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   145,   145,   146,   147,   147,
     148,   148,   149,   149,   150,   150,   151,   151,   152,   152,
     152,   153,   153,   153,   153,   153,   154,   154,   154,   155,
     155,   155,   156,   156,   156,   156,   157,   157,   158,   158,
     158,   158,   158,   158,   159,   159,   159,   159,   159,   159,
     160,   160,   160,   160,   160,   160,   160,   160,   161,   161,
     161,   161,   162,   162,   163,   163,   163,   163
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     2,     1,     1,     1,
       2,     3,     3,     4,     2,     3,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     5,     2,     1,
       1,     1,     2,     1,     3,     1,     3,     2,     3,     1,
       2,     1,     2,     1,     3,     1,     2,     3,     4,     5,
       2,     1,     3,     1,     3,     1,     2,     1,     3,     3,
       4,     4,     3,     4,     1,     2,     4,     3,     4,     1,
       2,     2,     3,     1,     2,     1,     3,     1,     3,     2,
       1,     2,     1,     3,     1,     3,     4,     1,     3,     1,
       2,     1,     1,     2,     3,     2,     3,     3,     4,     2,
       3,     3,     4,     1,     1,     1,     1,     1,     1,     3,
       4,     3,     1,     2,     2,     3,     1,     1,     2,     1,
       2,     5,     7,     5,     5,     7,     5,     2,     3,     3,
       4,     3,     4,     4,     5,     3,     2,     2,     2,     3,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     1,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     1,     4,     1,     2,
       2,     2,     2,     4,     1,     1,     1,     1,     1,     1,
       1,     4,     3,     4,     3,     3,     2,     2,     1,     1,
       1,     3,     1,     3,     1,     1,     1,     1
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
#line 140 "cgram.y"
        { (yyval.treeptr) = alcTree(identifier_id, "identifier", 1, (yyvsp[0].treeptr)); }
#line 1741 "cgram.tab.c"
    break;

  case 3: /* identifier: ENUMERATION_CONSTANT  */
#line 142 "cgram.y"
        {  }
#line 1747 "cgram.tab.c"
    break;

  case 4: /* file: translation_unit  */
#line 145 "cgram.y"
                       { root = (yyvsp[0].treeptr);
    preTrav(root, parseTree);
    printCurrentTable();
    //treeprint(root, 0);
 }
#line 1757 "cgram.tab.c"
    break;

  case 5: /* translation_unit: external_declaration  */
#line 153 "cgram.y"
        {  }
#line 1763 "cgram.tab.c"
    break;

  case 6: /* translation_unit: translation_unit external_declaration  */
#line 155 "cgram.y"
        { (yyval.treeptr) = alcTree(translation_unit_tr_ex, "translation_unit", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 1769 "cgram.tab.c"
    break;

  case 7: /* external_declaration: function_definition  */
#line 161 "cgram.y"
        {  }
#line 1775 "cgram.tab.c"
    break;

  case 8: /* external_declaration: declaration  */
#line 163 "cgram.y"
        {  }
#line 1781 "cgram.tab.c"
    break;

  case 9: /* external_declaration: untyped_declaration  */
#line 165 "cgram.y"
            {  }
#line 1787 "cgram.tab.c"
    break;

  case 10: /* function_definition: function_declarator compound_statement  */
#line 170 "cgram.y"
        { /* old school pre-ANSI, no return type */ fprintf(stderr, "Error pre-ANSI not supported"); exit(2); }
#line 1793 "cgram.tab.c"
    break;

  case 11: /* function_definition: function_declarator declaration_list compound_statement  */
#line 172 "cgram.y"
        { /* old school pre ANSI */ fprintf(stderr, "Error pre-ANSI not supported"); exit(2);}
#line 1799 "cgram.tab.c"
    break;

  case 12: /* function_definition: declaration_specifiers function_declarator compound_statement  */
#line 174 "cgram.y"
        { (yyval.treeptr) = alcTree(function_definition_de_fu_co, "function_definition", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 1805 "cgram.tab.c"
    break;

  case 13: /* function_definition: declaration_specifiers function_declarator declaration_list compound_statement  */
#line 176 "cgram.y"
        { /* declaration_list! This must be pre-ANSI  */ fprintf(stderr, "Error pre-ANSI not supported"); exit(2); }
#line 1811 "cgram.tab.c"
    break;

  case 14: /* declaration: declaration_specifiers SM  */
#line 181 "cgram.y"
                { (yyval.treeptr) = alcTree(declaration_de_sm, "declaration", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 1817 "cgram.tab.c"
    break;

  case 15: /* declaration: declaration_specifiers init_declarator_list SM  */
#line 183 "cgram.y"
                { (yyval.treeptr) = alcTree(declaration_de_in_sm, "declaration", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 1823 "cgram.tab.c"
    break;

  case 16: /* untyped_declaration: init_declarator_list SM  */
#line 188 "cgram.y"
        { (yyval.treeptr) = alcTree(untyped_declaration_in_sm, "untyped_declaration", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 1829 "cgram.tab.c"
    break;

  case 17: /* declaration_list: declaration  */
#line 193 "cgram.y"
        {  }
#line 1835 "cgram.tab.c"
    break;

  case 18: /* declaration_list: declaration_list declaration  */
#line 195 "cgram.y"
                { (yyval.treeptr) = alcTree(declaration_list_de_de, "declaration_list", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 1841 "cgram.tab.c"
    break;

  case 20: /* declaration_specifiers: storage_class_specifier declaration_specifiers  */
#line 202 "cgram.y"
        { (yyval.treeptr) = alcTree(declaration_specifiers_st_de, "declaration_specifiers", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 1847 "cgram.tab.c"
    break;

  case 21: /* declaration_specifiers: type_specifier  */
#line 204 "cgram.y"
        {  }
#line 1853 "cgram.tab.c"
    break;

  case 22: /* declaration_specifiers: type_specifier declaration_specifiers  */
#line 206 "cgram.y"
        { (yyval.treeptr) = alcTree(declaration_specifiers_tyse_de, "declaration_specifiers", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 1859 "cgram.tab.c"
    break;

  case 23: /* declaration_specifiers: type_qualifier  */
#line 208 "cgram.y"
        {  }
#line 1865 "cgram.tab.c"
    break;

  case 24: /* declaration_specifiers: type_qualifier declaration_specifiers  */
#line 210 "cgram.y"
        { (yyval.treeptr) = alcTree(declaration_specifiers_tyqu_de, "declaration_specifiers", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 1871 "cgram.tab.c"
    break;

  case 25: /* storage_class_specifier: TYPEDEF  */
#line 217 "cgram.y"
        {  }
#line 1877 "cgram.tab.c"
    break;

  case 26: /* storage_class_specifier: EXTERN  */
#line 219 "cgram.y"
        {  }
#line 1883 "cgram.tab.c"
    break;

  case 27: /* storage_class_specifier: STATIC  */
#line 221 "cgram.y"
                {  }
#line 1889 "cgram.tab.c"
    break;

  case 28: /* storage_class_specifier: AUTO  */
#line 223 "cgram.y"
        {  }
#line 1895 "cgram.tab.c"
    break;

  case 29: /* storage_class_specifier: REGISTER  */
#line 225 "cgram.y"
                {  }
#line 1901 "cgram.tab.c"
    break;

  case 30: /* type_specifier: actual_type_specifier  */
#line 230 "cgram.y"
        {  }
#line 1907 "cgram.tab.c"
    break;

  case 31: /* type_specifier: type_adjective  */
#line 232 "cgram.y"
        {  }
#line 1913 "cgram.tab.c"
    break;

  case 32: /* actual_type_specifier: VOID  */
#line 237 "cgram.y"
        {  }
#line 1919 "cgram.tab.c"
    break;

  case 33: /* actual_type_specifier: CHAR  */
#line 239 "cgram.y"
        {  }
#line 1925 "cgram.tab.c"
    break;

  case 34: /* actual_type_specifier: INT  */
#line 241 "cgram.y"
        {  }
#line 1931 "cgram.tab.c"
    break;

  case 35: /* actual_type_specifier: FLOAT  */
#line 243 "cgram.y"
        {  }
#line 1937 "cgram.tab.c"
    break;

  case 36: /* actual_type_specifier: DOUBLE  */
#line 245 "cgram.y"
        {  }
#line 1943 "cgram.tab.c"
    break;

  case 37: /* actual_type_specifier: TYPEDEF_NAME  */
#line 247 "cgram.y"
        {  }
#line 1949 "cgram.tab.c"
    break;

  case 38: /* actual_type_specifier: struct_or_union_specifier  */
#line 249 "cgram.y"
        {  }
#line 1955 "cgram.tab.c"
    break;

  case 39: /* actual_type_specifier: enum_specifier  */
#line 251 "cgram.y"
        {  }
#line 1961 "cgram.tab.c"
    break;

  case 40: /* type_adjective: SHORT  */
#line 257 "cgram.y"
        {  }
#line 1967 "cgram.tab.c"
    break;

  case 41: /* type_adjective: LONG  */
#line 259 "cgram.y"
        {  }
#line 1973 "cgram.tab.c"
    break;

  case 42: /* type_adjective: SIGNED  */
#line 261 "cgram.y"
        {  }
#line 1979 "cgram.tab.c"
    break;

  case 43: /* type_adjective: UNSIGNED  */
#line 263 "cgram.y"
        {  }
#line 1985 "cgram.tab.c"
    break;

  case 44: /* type_qualifier: CONST  */
#line 268 "cgram.y"
        {  }
#line 1991 "cgram.tab.c"
    break;

  case 45: /* type_qualifier: VOLATILE  */
#line 270 "cgram.y"
                {  }
#line 1997 "cgram.tab.c"
    break;

  case 46: /* struct_or_union_specifier: struct_or_union LC struct_declaration_list RC  */
#line 275 "cgram.y"
        { (yyval.treeptr) = alcTree(struct_or_union_specifier_st_lc_st_rc, "struct_or_union_specifier", 4, (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2003 "cgram.tab.c"
    break;

  case 47: /* struct_or_union_specifier: struct_or_union identifier LC struct_declaration_list RC  */
#line 277 "cgram.y"
        { (yyval.treeptr) = alcTree(struct_or_union_specifier_st_id_lc_st_rc, "struct_or_union_specifier", 5, (yyvsp[-4].treeptr), (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2009 "cgram.tab.c"
    break;

  case 48: /* struct_or_union_specifier: struct_or_union identifier  */
#line 279 "cgram.y"
        { (yyval.treeptr) = alcTree(struct_or_union_specifier_st_id, "struct_or_union_specifier", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2015 "cgram.tab.c"
    break;

  case 49: /* struct_or_union: STRUCT  */
#line 284 "cgram.y"
        { }
#line 2021 "cgram.tab.c"
    break;

  case 50: /* struct_or_union: UNION  */
#line 286 "cgram.y"
        { }
#line 2027 "cgram.tab.c"
    break;

  case 51: /* struct_declaration_list: struct_declaration  */
#line 291 "cgram.y"
        { }
#line 2033 "cgram.tab.c"
    break;

  case 52: /* struct_declaration_list: struct_declaration_list struct_declaration  */
#line 293 "cgram.y"
                { (yyval.treeptr) = alcTree(struct_declaration_list_st_st, "struct_declaration_list", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2039 "cgram.tab.c"
    break;

  case 54: /* init_declarator_list: init_declarator_list CM init_declarator  */
#line 301 "cgram.y"
        { (yyval.treeptr) = alcTree(init_declarator_list_in_cm_in, "init_declarator_list", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2045 "cgram.tab.c"
    break;

  case 55: /* init_declarator: declarator  */
#line 306 "cgram.y"
        {  }
#line 2051 "cgram.tab.c"
    break;

  case 56: /* init_declarator: declarator ASN initializer  */
#line 308 "cgram.y"
        { (yyval.treeptr) = alcTree(init_declarator_de_as_in, "init_declarator", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2057 "cgram.tab.c"
    break;

  case 57: /* struct_declaration: specifier_qualifier_list SM  */
#line 313 "cgram.y"
                { (yyval.treeptr) = alcTree(struct_declaration_sp_sm, "struct_declaration", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2063 "cgram.tab.c"
    break;

  case 58: /* struct_declaration: specifier_qualifier_list struct_declarator_list SM  */
#line 315 "cgram.y"
                { (yyval.treeptr) = alcTree(struct_declaration__sp_st_sm, "struct_declaration", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2069 "cgram.tab.c"
    break;

  case 60: /* specifier_qualifier_list: type_specifier specifier_qualifier_list  */
#line 321 "cgram.y"
                { (yyval.treeptr) = alcTree(struct_declaration__sp_st_sm, "specifier_qualifier_list", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2075 "cgram.tab.c"
    break;

  case 61: /* specifier_qualifier_list: type_qualifier  */
#line 323 "cgram.y"
        {  }
#line 2081 "cgram.tab.c"
    break;

  case 62: /* specifier_qualifier_list: type_qualifier specifier_qualifier_list  */
#line 325 "cgram.y"
                { (yyval.treeptr) = alcTree(struct_declaration__sp_st_sm, "specifier_qualifier_list", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2087 "cgram.tab.c"
    break;

  case 64: /* struct_declarator_list: struct_declarator_list CM struct_declarator  */
#line 331 "cgram.y"
                { (yyval.treeptr) = alcTree(struct_declarator_list_st_cm_st, "struct_declarator_list", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2093 "cgram.tab.c"
    break;

  case 66: /* struct_declarator: COLON constant_expression  */
#line 337 "cgram.y"
                { (yyval.treeptr) = alcTree(struct_declarator_co_co, "struct_declarator", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2099 "cgram.tab.c"
    break;

  case 67: /* struct_declarator: declarator COLON constant_expression  */
#line 339 "cgram.y"
                { (yyval.treeptr) = alcTree(struct_declarator_de_co_co, "struct_declarator", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2105 "cgram.tab.c"
    break;

  case 68: /* enum_specifier: ENUM LC enumerator_list RC  */
#line 344 "cgram.y"
                { (yyval.treeptr) = alcTree(enum_specifier_en_lc_en_rc, "enum_specifier", 4, (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2111 "cgram.tab.c"
    break;

  case 69: /* enum_specifier: ENUM identifier LC enumerator_list RC  */
#line 346 "cgram.y"
                { (yyval.treeptr) = alcTree(enum_specifier_en_id_lc_en_rc, "enum_specifier", 5, (yyvsp[-4].treeptr), (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2117 "cgram.tab.c"
    break;

  case 70: /* enum_specifier: ENUM identifier  */
#line 348 "cgram.y"
                { (yyval.treeptr) = alcTree(enum_specifier_en_id, "enum_specifier", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2123 "cgram.tab.c"
    break;

  case 71: /* enumerator_list: enumerator  */
#line 353 "cgram.y"
        {  }
#line 2129 "cgram.tab.c"
    break;

  case 72: /* enumerator_list: enumerator_list CM enumerator  */
#line 355 "cgram.y"
                { (yyval.treeptr) = alcTree(enumerator_list_en_cm_en, "enumerator_list", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2135 "cgram.tab.c"
    break;

  case 73: /* enumerator: IDENTIFIER  */
#line 360 "cgram.y"
                {  }
#line 2141 "cgram.tab.c"
    break;

  case 74: /* enumerator: IDENTIFIER ASN constant_expression  */
#line 362 "cgram.y"
        { (yyval.treeptr) = alcTree(enumerator_id_as_co, "enumerator", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2147 "cgram.tab.c"
    break;

  case 75: /* declarator: direct_declarator  */
#line 367 "cgram.y"
        {  }
#line 2153 "cgram.tab.c"
    break;

  case 76: /* declarator: pointer direct_declarator  */
#line 369 "cgram.y"
        { (yyval.treeptr) = alcTree(declarator_po_di, "declarator", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2159 "cgram.tab.c"
    break;

  case 77: /* direct_declarator: identifier  */
#line 374 "cgram.y"
        { }
#line 2165 "cgram.tab.c"
    break;

  case 78: /* direct_declarator: LP declarator RP  */
#line 376 "cgram.y"
        { (yyval.treeptr) = alcTree(direct_declarator_lp_de_rp, "direct_declarator", 2, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr)); }
#line 2171 "cgram.tab.c"
    break;

  case 79: /* direct_declarator: direct_declarator LB RB  */
#line 378 "cgram.y"
        { (yyval.treeptr) = alcTree(direct_declarator_di_lb_rb, "direct_declarator", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2177 "cgram.tab.c"
    break;

  case 80: /* direct_declarator: direct_declarator LB constant_expression RB  */
#line 380 "cgram.y"
        { (yyval.treeptr) = alcTree(direct_declarator_di_lb_co_rb, "direct_declarator", 4, (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2183 "cgram.tab.c"
    break;

  case 81: /* direct_declarator: direct_declarator LP parameter_type_list RP  */
#line 382 "cgram.y"
        { (yyval.treeptr) = alcTree(direct_declarator_di_lp_pa_rp, "direct_declarator", 4, (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2189 "cgram.tab.c"
    break;

  case 82: /* direct_declarator: direct_declarator LP RP  */
#line 384 "cgram.y"
        { (yyval.treeptr) = alcTree(direct_declarator_di_lp_rp, "direct_declarator", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2195 "cgram.tab.c"
    break;

  case 83: /* direct_declarator: direct_declarator LP identifier_list RP  */
#line 386 "cgram.y"
        { (yyval.treeptr) = alcTree(direct_declarator_di_lp_id_rp, "direct_declarator", 4, (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2201 "cgram.tab.c"
    break;

  case 84: /* function_declarator: direct_function_declarator  */
#line 390 "cgram.y"
        {  }
#line 2207 "cgram.tab.c"
    break;

  case 85: /* function_declarator: pointer direct_function_declarator  */
#line 392 "cgram.y"
                { (yyval.treeptr) = alcTree(function_declarator_po_di, "function_declarator", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2213 "cgram.tab.c"
    break;

  case 86: /* direct_function_declarator: direct_declarator LP parameter_type_list RP  */
#line 397 "cgram.y"
        { (yyval.treeptr) = alcTree(direct_function_declarator_di_lp_pa_rp, "direct_function_declarator", 4, (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2219 "cgram.tab.c"
    break;

  case 87: /* direct_function_declarator: direct_declarator LP RP  */
#line 399 "cgram.y"
        { (yyval.treeptr) = alcTree(direct_function_declarator_di_lp_rp, "direct_function_declarator", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2225 "cgram.tab.c"
    break;

  case 88: /* direct_function_declarator: direct_declarator LP identifier_list RP  */
#line 401 "cgram.y"
        { /* pre-ANSI, error case */ printf("Error: pre-ANSI not supported"); exit(2);}
#line 2231 "cgram.tab.c"
    break;

  case 89: /* pointer: MUL  */
#line 406 "cgram.y"
        {  }
#line 2237 "cgram.tab.c"
    break;

  case 90: /* pointer: MUL type_qualifier_list  */
#line 408 "cgram.y"
        { (yyval.treeptr) = alcTree(pointer_mu_ty, "pointer", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2243 "cgram.tab.c"
    break;

  case 91: /* pointer: MUL pointer  */
#line 410 "cgram.y"
        { (yyval.treeptr) = alcTree(pointer_mu_po, "pointer", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2249 "cgram.tab.c"
    break;

  case 92: /* pointer: MUL type_qualifier_list pointer  */
#line 412 "cgram.y"
        { (yyval.treeptr) = alcTree(pointer_mu_ty_po, "pointer", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2255 "cgram.tab.c"
    break;

  case 93: /* type_qualifier_list: type_qualifier  */
#line 417 "cgram.y"
        {  }
#line 2261 "cgram.tab.c"
    break;

  case 94: /* type_qualifier_list: type_qualifier_list type_qualifier  */
#line 419 "cgram.y"
        { (yyval.treeptr) = alcTree(type_qualifier_list_ty_ty, "type_qualifier_list", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2267 "cgram.tab.c"
    break;

  case 95: /* parameter_type_list: parameter_list  */
#line 424 "cgram.y"
        {  }
#line 2273 "cgram.tab.c"
    break;

  case 96: /* parameter_type_list: parameter_list CM ELIPSIS  */
#line 426 "cgram.y"
        { (yyval.treeptr) = alcTree(parameter_type_list_pa_cm_el, "parameter_type_list", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2279 "cgram.tab.c"
    break;

  case 97: /* parameter_list: parameter_declaration  */
#line 431 "cgram.y"
        {  }
#line 2285 "cgram.tab.c"
    break;

  case 98: /* parameter_list: parameter_list CM parameter_declaration  */
#line 433 "cgram.y"
        { (yyval.treeptr) = alcTree(parameter_list_pa_cm_pa, "parameter_list", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2291 "cgram.tab.c"
    break;

  case 99: /* parameter_declaration: declaration_specifiers declarator  */
#line 438 "cgram.y"
        { (yyval.treeptr) = alcTree(parameter_declaration_de_de, "parameter_declaration", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2297 "cgram.tab.c"
    break;

  case 100: /* parameter_declaration: declaration_specifiers  */
#line 440 "cgram.y"
        {  }
#line 2303 "cgram.tab.c"
    break;

  case 101: /* parameter_declaration: declaration_specifiers abstract_declarator  */
#line 442 "cgram.y"
        { (yyval.treeptr) = alcTree(parameter_declaration_de_ab, "parameter_declaration", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2309 "cgram.tab.c"
    break;

  case 102: /* identifier_list: IDENTIFIER  */
#line 447 "cgram.y"
                {  }
#line 2315 "cgram.tab.c"
    break;

  case 103: /* identifier_list: identifier_list CM IDENTIFIER  */
#line 449 "cgram.y"
                { (yyval.treeptr) = alcTree(identifier_list_id_cm_id, "identifier_list", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2321 "cgram.tab.c"
    break;

  case 104: /* initializer: assignment_expression  */
#line 454 "cgram.y"
        {  }
#line 2327 "cgram.tab.c"
    break;

  case 105: /* initializer: LC initializer_list RC  */
#line 456 "cgram.y"
                { (yyval.treeptr) = alcTree(initializer_lc_in_rc, "initializer", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2333 "cgram.tab.c"
    break;

  case 106: /* initializer: LC initializer_list CM RC  */
#line 458 "cgram.y"
                { (yyval.treeptr) = alcTree(initializer_lc_in_cm_rc, "initializer", 4, (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2339 "cgram.tab.c"
    break;

  case 107: /* initializer_list: initializer  */
#line 463 "cgram.y"
        {  }
#line 2345 "cgram.tab.c"
    break;

  case 108: /* initializer_list: initializer_list CM initializer  */
#line 465 "cgram.y"
                { (yyval.treeptr) = alcTree(initializer_list_in_cm_in, "initializer_list", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2351 "cgram.tab.c"
    break;

  case 109: /* type_name: specifier_qualifier_list  */
#line 470 "cgram.y"
        {  }
#line 2357 "cgram.tab.c"
    break;

  case 110: /* type_name: specifier_qualifier_list abstract_declarator  */
#line 472 "cgram.y"
        { (yyval.treeptr) = alcTree(type_name_sp_ab, "type_name", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2363 "cgram.tab.c"
    break;

  case 111: /* abstract_declarator: pointer  */
#line 477 "cgram.y"
        {  }
#line 2369 "cgram.tab.c"
    break;

  case 112: /* abstract_declarator: direct_abstract_declarator  */
#line 479 "cgram.y"
        {  }
#line 2375 "cgram.tab.c"
    break;

  case 113: /* abstract_declarator: pointer direct_abstract_declarator  */
#line 481 "cgram.y"
                { (yyval.treeptr) = alcTree(abstract_declarator_po_di, "abstract_declarator", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2381 "cgram.tab.c"
    break;

  case 114: /* direct_abstract_declarator: LP abstract_declarator RP  */
#line 487 "cgram.y"
                { (yyval.treeptr) = alcTree(direct_abstract_declarator_lp_ab_rp, "direct_abstract_declarator", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2387 "cgram.tab.c"
    break;

  case 115: /* direct_abstract_declarator: LB RB  */
#line 489 "cgram.y"
                { (yyval.treeptr) = alcTree(direct_abstract_declarator_lb_rb, "direct_abstract_declarator", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2393 "cgram.tab.c"
    break;

  case 116: /* direct_abstract_declarator: LB constant_expression RB  */
#line 491 "cgram.y"
                { (yyval.treeptr) = alcTree(direct_abstract_declarator_lb_co_rb, "direct_abstract_declarator", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2399 "cgram.tab.c"
    break;

  case 117: /* direct_abstract_declarator: direct_abstract_declarator LB RB  */
#line 493 "cgram.y"
                { (yyval.treeptr) = alcTree(direct_abstract_declarator_di_lb_rb, "direct_abstract_declarator", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2405 "cgram.tab.c"
    break;

  case 118: /* direct_abstract_declarator: direct_abstract_declarator LB constant_expression RB  */
#line 495 "cgram.y"
                { (yyval.treeptr) = alcTree(direct_abstract_declarator_di_lb_co_rb, "direct_abstract_declarator", 4, (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2411 "cgram.tab.c"
    break;

  case 119: /* direct_abstract_declarator: LP RP  */
#line 497 "cgram.y"
                { (yyval.treeptr) = alcTree(direct_abstract_declarator_lp_rp, "direct_abstract_declarator", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2417 "cgram.tab.c"
    break;

  case 120: /* direct_abstract_declarator: LP parameter_type_list RP  */
#line 499 "cgram.y"
                { (yyval.treeptr) = alcTree(direct_abstract_declarator_lp_pa_rp, "direct_abstract_declarator", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2423 "cgram.tab.c"
    break;

  case 121: /* direct_abstract_declarator: direct_abstract_declarator LP RP  */
#line 501 "cgram.y"
                { (yyval.treeptr) = alcTree(direct_abstract_declarator_di_lp_rp, "direct_abstract_declarator", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2429 "cgram.tab.c"
    break;

  case 122: /* direct_abstract_declarator: direct_abstract_declarator LP parameter_type_list RP  */
#line 503 "cgram.y"
                { (yyval.treeptr) = alcTree(direct_abstract_declarator_di_lp_pa_rp, "direct_abstract_declarator", 4, (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2435 "cgram.tab.c"
    break;

  case 123: /* statement: labeled_statement  */
#line 508 "cgram.y"
        {  }
#line 2441 "cgram.tab.c"
    break;

  case 124: /* statement: compound_statement  */
#line 510 "cgram.y"
        {  }
#line 2447 "cgram.tab.c"
    break;

  case 125: /* statement: expression_statement  */
#line 512 "cgram.y"
        {  }
#line 2453 "cgram.tab.c"
    break;

  case 126: /* statement: selection_statement  */
#line 514 "cgram.y"
        {  }
#line 2459 "cgram.tab.c"
    break;

  case 127: /* statement: iteration_statement  */
#line 516 "cgram.y"
        {  }
#line 2465 "cgram.tab.c"
    break;

  case 128: /* statement: jump_statement  */
#line 518 "cgram.y"
        {  }
#line 2471 "cgram.tab.c"
    break;

  case 129: /* labeled_statement: identifier COLON statement  */
#line 523 "cgram.y"
        { (yyval.treeptr) = alcTree(labeled_statement_id_co_st, "labeled_statement", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2477 "cgram.tab.c"
    break;

  case 130: /* labeled_statement: CASE constant_expression COLON statement  */
#line 525 "cgram.y"
        { (yyval.treeptr) = alcTree(labeled_statement_ca_co_co_st, "labeled_statement", 3, (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr)); }
#line 2483 "cgram.tab.c"
    break;

  case 131: /* labeled_statement: DEFAULT COLON statement  */
#line 527 "cgram.y"
        { (yyval.treeptr) = alcTree(labeled_statement_de_co_st, "labeled_statement", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2489 "cgram.tab.c"
    break;

  case 132: /* expression_statement: SM  */
#line 532 "cgram.y"
                {  }
#line 2495 "cgram.tab.c"
    break;

  case 133: /* expression_statement: expression SM  */
#line 534 "cgram.y"
                { (yyval.treeptr) = alcTree(expression_statement_ex_sm, "expression_statement", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2501 "cgram.tab.c"
    break;

  case 134: /* compound_statement: LC RC  */
#line 539 "cgram.y"
                { (yyval.treeptr) = alcTree(compound_statement_lc_rc, "compound_statement", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2507 "cgram.tab.c"
    break;

  case 135: /* compound_statement: LC compound_statement_opt RC  */
#line 541 "cgram.y"
        { (yyval.treeptr) = alcTree(compound_statement_lc_co_rc, "compound_statement", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2513 "cgram.tab.c"
    break;

  case 136: /* compound_statement_opt: statement_list  */
#line 546 "cgram.y"
                {  }
#line 2519 "cgram.tab.c"
    break;

  case 137: /* compound_statement_opt: declaration_list  */
#line 548 "cgram.y"
                {  }
#line 2525 "cgram.tab.c"
    break;

  case 138: /* compound_statement_opt: declaration_list statement_list  */
#line 550 "cgram.y"
                { (yyval.treeptr) = alcTree(compound_statement_opt_de_st, "compound_statement_opt", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2531 "cgram.tab.c"
    break;

  case 139: /* statement_list: statement  */
#line 555 "cgram.y"
        {  }
#line 2537 "cgram.tab.c"
    break;

  case 140: /* statement_list: statement_list statement  */
#line 557 "cgram.y"
                { (yyval.treeptr) = alcTree(statement_list_st_st, "statement_list", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2543 "cgram.tab.c"
    break;

  case 141: /* selection_statement: IF LP expression RP statement  */
#line 562 "cgram.y"
        { (yyval.treeptr) = alcTree(selection_statement_if_lp_ex_rp_st, "selection_statement", 5, (yyvsp[-4].treeptr), (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2549 "cgram.tab.c"
    break;

  case 142: /* selection_statement: IF LP expression RP statement ELSE statement  */
#line 564 "cgram.y"
        { (yyval.treeptr) = alcTree(selection_statement_if_lp_ex_rp_st_el_st, "selection_statement", 6, (yyvsp[-6].treeptr), (yyvsp[-5].treeptr), (yyvsp[-4].treeptr), (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[0].treeptr)); }
#line 2555 "cgram.tab.c"
    break;

  case 143: /* selection_statement: SWITCH LP expression RP statement  */
#line 566 "cgram.y"
        { (yyval.treeptr) = alcTree(selection_statement_sw_lp_ex_rp_st, "selection_statement", 5, (yyvsp[-4].treeptr), (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr));  }
#line 2561 "cgram.tab.c"
    break;

  case 144: /* iteration_statement: WHILE LP expression RP statement  */
#line 571 "cgram.y"
        { (yyval.treeptr) = alcTree(iteration_statement_wh_lp_ex_rp_st, "iteration_statement", 5, (yyvsp[-4].treeptr), (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2567 "cgram.tab.c"
    break;

  case 145: /* iteration_statement: DO statement WHILE LP expression RP SM  */
#line 573 "cgram.y"
        { (yyval.treeptr) = alcTree(iteration_statement_do_st_wh_lp_ex_rp_sm, "iteration_statement", 7, (yyvsp[-6].treeptr), (yyvsp[-5].treeptr), (yyvsp[-4].treeptr), (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2573 "cgram.tab.c"
    break;

  case 146: /* iteration_statement: FOR LP forcntrl RP statement  */
#line 575 "cgram.y"
        { (yyval.treeptr) = alcTree(iteration_statement_fo_lp_fo_rp_st, "iteration_statement", 5, (yyvsp[-4].treeptr), (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2579 "cgram.tab.c"
    break;

  case 147: /* forcntrl: SM SM  */
#line 580 "cgram.y"
        { (yyval.treeptr) = alcTree(forcntrl_sm_sm, "forcntrl", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2585 "cgram.tab.c"
    break;

  case 148: /* forcntrl: SM SM expression  */
#line 582 "cgram.y"
        { (yyval.treeptr) = alcTree(forcntrl_sm_sm_ex, "forcntrl", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2591 "cgram.tab.c"
    break;

  case 149: /* forcntrl: SM expression SM  */
#line 584 "cgram.y"
        { (yyval.treeptr) = alcTree(forcntrl_sm_ex_sm, "forcntrl", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2597 "cgram.tab.c"
    break;

  case 150: /* forcntrl: SM expression SM expression  */
#line 586 "cgram.y"
        { (yyval.treeptr) = alcTree(forcntrl_sm_ex_sm_ex, "forcntrl", 4, (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2603 "cgram.tab.c"
    break;

  case 151: /* forcntrl: expression SM SM  */
#line 588 "cgram.y"
        { (yyval.treeptr) = alcTree(forcntrl_ex_sm_sm, "forcntrl", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2609 "cgram.tab.c"
    break;

  case 152: /* forcntrl: expression SM SM expression  */
#line 590 "cgram.y"
        { (yyval.treeptr) = alcTree(forcntrl_ex_sm_sm_ex, "forcntrl", 4, (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2615 "cgram.tab.c"
    break;

  case 153: /* forcntrl: expression SM expression SM  */
#line 592 "cgram.y"
        { (yyval.treeptr) = alcTree(forcntrl_ex_sm_ex_sm, "forcntrl", 4, (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2621 "cgram.tab.c"
    break;

  case 154: /* forcntrl: expression SM expression SM expression  */
#line 594 "cgram.y"
        { (yyval.treeptr) = alcTree(forcntrl_ex_sm_ex_sm_ex, "forcntrl", 4, (yyvsp[-4].treeptr), (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr)); }
#line 2627 "cgram.tab.c"
    break;

  case 155: /* jump_statement: GOTO identifier SM  */
#line 601 "cgram.y"
        { (yyval.treeptr) = alcTree(jump_statement_go_id_sm, "jump_statement", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2633 "cgram.tab.c"
    break;

  case 156: /* jump_statement: CONTINUE SM  */
#line 603 "cgram.y"
        { (yyval.treeptr) = alcTree(jump_statement_co_sm, "jump_statement", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2639 "cgram.tab.c"
    break;

  case 157: /* jump_statement: BREAK SM  */
#line 605 "cgram.y"
        { (yyval.treeptr) = alcTree(jump_statement_br_sm, "jump_statement", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2645 "cgram.tab.c"
    break;

  case 158: /* jump_statement: RETURN SM  */
#line 607 "cgram.y"
        { (yyval.treeptr) = alcTree(jump_statement_re_sm, "jump_statement", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2651 "cgram.tab.c"
    break;

  case 159: /* jump_statement: RETURN expression SM  */
#line 609 "cgram.y"
        { (yyval.treeptr) = alcTree(jump_statement_re_ex_sm, "jump_statement", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2657 "cgram.tab.c"
    break;

  case 160: /* expression: assignment_expression  */
#line 614 "cgram.y"
                {  }
#line 2663 "cgram.tab.c"
    break;

  case 161: /* expression: expression CM assignment_expression  */
#line 616 "cgram.y"
                { (yyval.treeptr) = alcTree(expression_ex_cm_as, "expression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2669 "cgram.tab.c"
    break;

  case 162: /* assignment_expression: conditional_expression  */
#line 622 "cgram.y"
        {  }
#line 2675 "cgram.tab.c"
    break;

  case 163: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 624 "cgram.y"
        { (yyval.treeptr) = alcTree(assignment_expression_un_as_as, "assignment_expression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2681 "cgram.tab.c"
    break;

  case 164: /* assignment_operator: ASN  */
#line 628 "cgram.y"
        {  }
#line 2687 "cgram.tab.c"
    break;

  case 165: /* assignment_operator: MUASN  */
#line 629 "cgram.y"
                {  }
#line 2693 "cgram.tab.c"
    break;

  case 166: /* assignment_operator: DIASN  */
#line 630 "cgram.y"
                {  }
#line 2699 "cgram.tab.c"
    break;

  case 167: /* assignment_operator: MOASN  */
#line 631 "cgram.y"
                {  }
#line 2705 "cgram.tab.c"
    break;

  case 168: /* assignment_operator: PLASN  */
#line 632 "cgram.y"
                {  }
#line 2711 "cgram.tab.c"
    break;

  case 169: /* assignment_operator: MIASN  */
#line 633 "cgram.y"
                {  }
#line 2717 "cgram.tab.c"
    break;

  case 170: /* assignment_operator: SLASN  */
#line 634 "cgram.y"
                {  }
#line 2723 "cgram.tab.c"
    break;

  case 171: /* assignment_operator: SRASN  */
#line 635 "cgram.y"
                {  }
#line 2729 "cgram.tab.c"
    break;

  case 172: /* assignment_operator: ANASN  */
#line 636 "cgram.y"
                {  }
#line 2735 "cgram.tab.c"
    break;

  case 173: /* assignment_operator: ERASN  */
#line 637 "cgram.y"
                {  }
#line 2741 "cgram.tab.c"
    break;

  case 174: /* assignment_operator: ORASN  */
#line 638 "cgram.y"
                {  }
#line 2747 "cgram.tab.c"
    break;

  case 175: /* conditional_expression: logical_or_expression  */
#line 644 "cgram.y"
        {  }
#line 2753 "cgram.tab.c"
    break;

  case 176: /* conditional_expression: logical_or_expression QUEST expression COLON conditional_expression  */
#line 646 "cgram.y"
                { (yyval.treeptr) = alcTree(conditional_expression_lo_qu_ex_co_co, "conditional_expression", 5, (yyvsp[-4].treeptr), (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2759 "cgram.tab.c"
    break;

  case 177: /* constant_expression: conditional_expression  */
#line 652 "cgram.y"
        {  }
#line 2765 "cgram.tab.c"
    break;

  case 178: /* logical_or_expression: logical_and_expression  */
#line 657 "cgram.y"
        {  }
#line 2771 "cgram.tab.c"
    break;

  case 179: /* logical_or_expression: logical_or_expression OROR logical_and_expression  */
#line 659 "cgram.y"
                { (yyval.treeptr) = alcTree(logical_or_expression_lo_or_lo, "logical_or_expression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2777 "cgram.tab.c"
    break;

  case 180: /* logical_and_expression: inclusive_or_expression  */
#line 664 "cgram.y"
        {  }
#line 2783 "cgram.tab.c"
    break;

  case 181: /* logical_and_expression: logical_and_expression ANDAND inclusive_or_expression  */
#line 666 "cgram.y"
                { (yyval.treeptr) = alcTree(logical_and_expression_lo_an_in, "logical_and_expression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2789 "cgram.tab.c"
    break;

  case 182: /* inclusive_or_expression: exclusive_or_expression  */
#line 671 "cgram.y"
        {  }
#line 2795 "cgram.tab.c"
    break;

  case 183: /* inclusive_or_expression: inclusive_or_expression OR exclusive_or_expression  */
#line 673 "cgram.y"
                { (yyval.treeptr) = alcTree(inclusive_or_expression_in_or_ex, "inclusive_or_expression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2801 "cgram.tab.c"
    break;

  case 184: /* exclusive_or_expression: and_expression  */
#line 678 "cgram.y"
        {  }
#line 2807 "cgram.tab.c"
    break;

  case 185: /* exclusive_or_expression: exclusive_or_expression ER and_expression  */
#line 680 "cgram.y"
                { (yyval.treeptr) = alcTree(exclusive_or_expression_ex_er_an, "exclusive_or_expression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2813 "cgram.tab.c"
    break;

  case 186: /* and_expression: equality_expression  */
#line 685 "cgram.y"
        {  }
#line 2819 "cgram.tab.c"
    break;

  case 187: /* and_expression: and_expression AND equality_expression  */
#line 687 "cgram.y"
                { (yyval.treeptr) = alcTree(and_expression_an_an_eq, "and_expression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2825 "cgram.tab.c"
    break;

  case 188: /* equality_expression: relational_expression  */
#line 692 "cgram.y"
        {  }
#line 2831 "cgram.tab.c"
    break;

  case 189: /* equality_expression: equality_expression EQ relational_expression  */
#line 694 "cgram.y"
                { (yyval.treeptr) = alcTree(equality_expression_eq_eq_re, "equality_expression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2837 "cgram.tab.c"
    break;

  case 190: /* equality_expression: equality_expression NE relational_expression  */
#line 696 "cgram.y"
                { (yyval.treeptr) = alcTree(equality_expression_eq_ne_re, "equality_expression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2843 "cgram.tab.c"
    break;

  case 191: /* relational_expression: shift_expression  */
#line 701 "cgram.y"
        {  }
#line 2849 "cgram.tab.c"
    break;

  case 192: /* relational_expression: relational_expression LT shift_expression  */
#line 703 "cgram.y"
        { (yyval.treeptr) = alcTree(relational_expression_re_lt_sh, "relational_expression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2855 "cgram.tab.c"
    break;

  case 193: /* relational_expression: relational_expression GT shift_expression  */
#line 705 "cgram.y"
        { (yyval.treeptr) = alcTree(relational_expression_re_gt_sh, "relational_expression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2861 "cgram.tab.c"
    break;

  case 194: /* relational_expression: relational_expression LE shift_expression  */
#line 707 "cgram.y"
        { (yyval.treeptr) = alcTree(relational_expression_re_le_sh, "relational_expression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2867 "cgram.tab.c"
    break;

  case 195: /* relational_expression: relational_expression GE shift_expression  */
#line 709 "cgram.y"
                { (yyval.treeptr) = alcTree(relational_expression_re_ge_sh, "relational_expression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2873 "cgram.tab.c"
    break;

  case 196: /* shift_expression: additive_expression  */
#line 714 "cgram.y"
        {  }
#line 2879 "cgram.tab.c"
    break;

  case 197: /* shift_expression: shift_expression SHL additive_expression  */
#line 716 "cgram.y"
        { (yyval.treeptr) = alcTree(shift_expression_sh_shl_ad, "shift_expression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2885 "cgram.tab.c"
    break;

  case 198: /* shift_expression: shift_expression SHR additive_expression  */
#line 718 "cgram.y"
        { (yyval.treeptr) = alcTree(shift_expression_sh_shr_ad, "shift_expression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2891 "cgram.tab.c"
    break;

  case 199: /* additive_expression: multiplicative_expression  */
#line 723 "cgram.y"
        {  }
#line 2897 "cgram.tab.c"
    break;

  case 200: /* additive_expression: additive_expression PLUS multiplicative_expression  */
#line 725 "cgram.y"
        { (yyval.treeptr) = alcTree(additive_expression_ad_pl_mu, "additive_expression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2903 "cgram.tab.c"
    break;

  case 201: /* additive_expression: additive_expression MINUS multiplicative_expression  */
#line 727 "cgram.y"
        { (yyval.treeptr) = alcTree(additive_expression_ad_mi_mu, "additive_expression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2909 "cgram.tab.c"
    break;

  case 202: /* multiplicative_expression: cast_expression  */
#line 732 "cgram.y"
        {  }
#line 2915 "cgram.tab.c"
    break;

  case 203: /* multiplicative_expression: multiplicative_expression MUL cast_expression  */
#line 734 "cgram.y"
        { (yyval.treeptr) = alcTree(multiplicative_expression_mu_mu_ca, "multiplicative_expression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2921 "cgram.tab.c"
    break;

  case 204: /* multiplicative_expression: multiplicative_expression DIV cast_expression  */
#line 736 "cgram.y"
        { (yyval.treeptr) = alcTree(multiplicative_expression_mu_di_ca, "multiplicative_expression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2927 "cgram.tab.c"
    break;

  case 205: /* multiplicative_expression: multiplicative_expression MOD cast_expression  */
#line 738 "cgram.y"
        { (yyval.treeptr) = alcTree(multiplicative_expression_mu_mo_ca, "multiplicative_expression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2933 "cgram.tab.c"
    break;

  case 206: /* cast_expression: unary_expression  */
#line 743 "cgram.y"
        {  }
#line 2939 "cgram.tab.c"
    break;

  case 207: /* cast_expression: LP type_name RP cast_expression  */
#line 745 "cgram.y"
        { (yyval.treeptr) = alcTree(cast_expression_lp_ty_rp_ca, "cast_expression", 4, (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2945 "cgram.tab.c"
    break;

  case 208: /* unary_expression: postfix_expression  */
#line 751 "cgram.y"
        {  }
#line 2951 "cgram.tab.c"
    break;

  case 209: /* unary_expression: INCOP unary_expression  */
#line 753 "cgram.y"
        { (yyval.treeptr) = alcTree(unary_expression_in_un, "unary_expression", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2957 "cgram.tab.c"
    break;

  case 210: /* unary_expression: DECOP unary_expression  */
#line 755 "cgram.y"
        { (yyval.treeptr) = alcTree(unary_expression_de_un, "unary_expression", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2963 "cgram.tab.c"
    break;

  case 211: /* unary_expression: unary_operator cast_expression  */
#line 757 "cgram.y"
        { (yyval.treeptr) = alcTree(unary_expression_un_ca, "unary_expression", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2969 "cgram.tab.c"
    break;

  case 212: /* unary_expression: SIZEOF unary_expression  */
#line 759 "cgram.y"
        { (yyval.treeptr) = alcTree(unary_expression_si_un, "unary_expression", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2975 "cgram.tab.c"
    break;

  case 213: /* unary_expression: SIZEOF LP type_name RP  */
#line 761 "cgram.y"
        { (yyval.treeptr) = alcTree(unary_expression_si_lp_ty_rp, "unary_expression", 4, (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2981 "cgram.tab.c"
    break;

  case 214: /* unary_operator: AND  */
#line 766 "cgram.y"
        {  }
#line 2987 "cgram.tab.c"
    break;

  case 215: /* unary_operator: MUL  */
#line 768 "cgram.y"
        {  }
#line 2993 "cgram.tab.c"
    break;

  case 216: /* unary_operator: PLUS  */
#line 770 "cgram.y"
        {  }
#line 2999 "cgram.tab.c"
    break;

  case 217: /* unary_operator: MINUS  */
#line 772 "cgram.y"
        {  }
#line 3005 "cgram.tab.c"
    break;

  case 218: /* unary_operator: NOT  */
#line 774 "cgram.y"
        {  }
#line 3011 "cgram.tab.c"
    break;

  case 219: /* unary_operator: BANG  */
#line 776 "cgram.y"
        {  }
#line 3017 "cgram.tab.c"
    break;

  case 221: /* postfix_expression: postfix_expression LB expression RB  */
#line 783 "cgram.y"
                 { (yyval.treeptr) = alcTree(postfix_expression_po_lb_ex_rb, "postfix_expression", 4, (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 3023 "cgram.tab.c"
    break;

  case 222: /* postfix_expression: postfix_expression LP RP  */
#line 785 "cgram.y"
                 { (yyval.treeptr) = alcTree(postfix_expression_po_lp_rp, "postfix_expression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 3029 "cgram.tab.c"
    break;

  case 223: /* postfix_expression: postfix_expression LP argument_expression_list RP  */
#line 787 "cgram.y"
                 { (yyval.treeptr) = alcTree(postfix_expression_po_lp__ar_rp, "postfix_expression", 4, (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 3035 "cgram.tab.c"
    break;

  case 224: /* postfix_expression: postfix_expression DOT identifier  */
#line 789 "cgram.y"
                 { (yyval.treeptr) = alcTree(postfix_expression_po_do_id, "postfix_expression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 3041 "cgram.tab.c"
    break;

  case 225: /* postfix_expression: postfix_expression FOLLOW identifier  */
#line 791 "cgram.y"
                { (yyval.treeptr) = alcTree(postfix_expression_po_fo_id, "postfix_expression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 3047 "cgram.tab.c"
    break;

  case 226: /* postfix_expression: postfix_expression INCOP  */
#line 793 "cgram.y"
                 { (yyval.treeptr) = alcTree(postfix_expression_po_in, "postfix_expression", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 3053 "cgram.tab.c"
    break;

  case 227: /* postfix_expression: postfix_expression DECOP  */
#line 795 "cgram.y"
                 { (yyval.treeptr) = alcTree(postfix_expression_po_de, "postfix_expression", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 3059 "cgram.tab.c"
    break;

  case 228: /* primary_expression: IDENTIFIER  */
#line 800 "cgram.y"
        {  }
#line 3065 "cgram.tab.c"
    break;

  case 229: /* primary_expression: constant  */
#line 802 "cgram.y"
        {  }
#line 3071 "cgram.tab.c"
    break;

  case 230: /* primary_expression: STRING  */
#line 804 "cgram.y"
        {  }
#line 3077 "cgram.tab.c"
    break;

  case 231: /* primary_expression: LP expression RP  */
#line 806 "cgram.y"
         { (yyval.treeptr) = alcTree(primary_expression_lp_ex_rp, "primary_expression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 3083 "cgram.tab.c"
    break;

  case 232: /* argument_expression_list: assignment_expression  */
#line 811 "cgram.y"
        {  }
#line 3089 "cgram.tab.c"
    break;

  case 233: /* argument_expression_list: argument_expression_list CM assignment_expression  */
#line 813 "cgram.y"
        { (yyval.treeptr) = alcTree(argument_expression_list_ar_cm_as, "argument_expression_list", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 3095 "cgram.tab.c"
    break;

  case 234: /* constant: ICON  */
#line 818 "cgram.y"
        {  }
#line 3101 "cgram.tab.c"
    break;

  case 235: /* constant: CCON  */
#line 820 "cgram.y"
        {  }
#line 3107 "cgram.tab.c"
    break;

  case 236: /* constant: FCON  */
#line 822 "cgram.y"
        {  }
#line 3113 "cgram.tab.c"
    break;

  case 237: /* constant: ENUMERATION_CONSTANT  */
#line 824 "cgram.y"
        {  }
#line 3119 "cgram.tab.c"
    break;


#line 3123 "cgram.tab.c"

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

#line 827 "cgram.y"

