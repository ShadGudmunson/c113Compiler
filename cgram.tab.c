/* A Bison parser, made by GNU Bison 3.5.1.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

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
#include "errdef.h"

#define YYDEBUG 1
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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_CGRAM_TAB_H_INCLUDED
# define YY_YY_CGRAM_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    BAD_TOKEN = 258,
    ICON = 259,
    CCON = 260,
    FCON = 261,
    ENUMERATION_CONSTANT = 262,
    IDENTIFIER = 263,
    STRING = 264,
    SIZEOF = 265,
    INCOP = 266,
    DECOP = 267,
    SHL = 268,
    SHR = 269,
    LE = 270,
    GE = 271,
    EQ = 272,
    NE = 273,
    ANDAND = 274,
    OROR = 275,
    MUASN = 276,
    DIASN = 277,
    MOASN = 278,
    PLASN = 279,
    ASN = 280,
    MIASN = 281,
    SLASN = 282,
    SRASN = 283,
    ANASN = 284,
    ERASN = 285,
    ORASN = 286,
    TYPEDEF_NAME = 287,
    CM = 288,
    SM = 289,
    LT = 290,
    GT = 291,
    PLUS = 292,
    MINUS = 293,
    MUL = 294,
    DIV = 295,
    MOD = 296,
    LP = 297,
    RP = 298,
    LB = 299,
    RB = 300,
    LC = 301,
    RC = 302,
    COLON = 303,
    QUEST = 304,
    AND = 305,
    OR = 306,
    ER = 307,
    NOT = 308,
    FOLLOW = 309,
    BANG = 310,
    DOT = 311,
    TYPEDEF = 312,
    EXTERN = 313,
    STATIC = 314,
    AUTO = 315,
    REGISTER = 316,
    CHAR = 317,
    SHORT = 318,
    INT = 319,
    LONG = 320,
    SIGNED = 321,
    UNSIGNED = 322,
    FLOAT = 323,
    DOUBLE = 324,
    CONST = 325,
    VOLATILE = 326,
    VOID = 327,
    STRUCT = 328,
    UNION = 329,
    ENUM = 330,
    ELIPSIS = 331,
    CASE = 332,
    DEFAULT = 333,
    IF = 334,
    SWITCH = 335,
    WHILE = 336,
    DO = 337,
    FOR = 338,
    GOTO = 339,
    CONTINUE = 340,
    BREAK = 341,
    RETURN = 342,
    THEN = 343,
    ELSE = 344
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 21 "cgram.y"

	struct tree *treeptr;

#line 236 "cgram.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CGRAM_TAB_H_INCLUDED  */



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

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


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

#define YYUNDEFTOK  2
#define YYMAXUTOK   344


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

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
       0,   140,   140,   142,   146,   151,   153,   159,   161,   163,
     168,   170,   172,   174,   179,   181,   186,   191,   193,   198,
     200,   202,   204,   206,   208,   215,   217,   219,   221,   223,
     228,   230,   235,   237,   239,   241,   243,   245,   247,   249,
     255,   257,   259,   261,   266,   268,   273,   275,   277,   282,
     284,   289,   291,   296,   299,   304,   306,   311,   313,   318,
     319,   321,   323,   328,   329,   334,   335,   337,   342,   344,
     346,   351,   353,   358,   360,   365,   367,   372,   374,   376,
     378,   380,   382,   384,   388,   390,   395,   397,   399,   404,
     406,   408,   410,   415,   417,   422,   424,   429,   431,   436,
     438,   440,   445,   447,   452,   454,   456,   461,   463,   468,
     470,   475,   477,   479,   485,   487,   489,   491,   493,   495,
     497,   499,   501,   506,   508,   510,   512,   514,   516,   521,
     523,   525,   530,   532,   537,   539,   544,   546,   548,   553,
     555,   560,   562,   564,   569,   571,   573,   578,   580,   582,
     584,   586,   588,   590,   592,   599,   601,   603,   605,   607,
     612,   614,   619,   621,   626,   627,   628,   629,   630,   631,
     632,   633,   634,   635,   636,   641,   643,   649,   654,   656,
     661,   663,   668,   670,   675,   677,   682,   684,   689,   691,
     693,   698,   700,   702,   704,   706,   711,   713,   715,   720,
     722,   724,   729,   731,   733,   735,   740,   742,   748,   750,
     752,   754,   756,   758,   763,   765,   767,   769,   771,   773,
     779,   781,   783,   785,   787,   789,   791,   793,   798,   800,
     802,   804,   809,   811,   816,   818,   820,   822
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BAD_TOKEN", "ICON", "CCON", "FCON",
  "ENUMERATION_CONSTANT", "IDENTIFIER", "STRING", "SIZEOF", "INCOP",
  "DECOP", "SHL", "SHR", "LE", "GE", "EQ", "NE", "ANDAND", "OROR", "MUASN",
  "DIASN", "MOASN", "PLASN", "ASN", "MIASN", "SLASN", "SRASN", "ANASN",
  "ERASN", "ORASN", "TYPEDEF_NAME", "CM", "SM", "LT", "GT", "PLUS",
  "MINUS", "MUL", "DIV", "MOD", "LP", "RP", "LB", "RB", "LC", "RC",
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
#endif

# ifdef YYPRINT
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
# endif

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


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
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
# undef YYSTACK_RELOCATE
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
  case 2:
#line 141 "cgram.y"
        { (yyval.treeptr) = alcTree(identifier_id, "identifier", 1, (yyvsp[0].treeptr)); }
#line 1918 "cgram.tab.c"
    break;

  case 3:
#line 143 "cgram.y"
        { (yyval.treeptr) = alcTree(identifier_en, "identifier", 0, (yyvsp[0].treeptr)); }
#line 1924 "cgram.tab.c"
    break;

  case 4:
#line 146 "cgram.y"
                       { root = (yyvsp[0].treeptr);
    preTrav(root, parseTree);
 }
#line 1932 "cgram.tab.c"
    break;

  case 5:
#line 152 "cgram.y"
        { (yyval.treeptr) = alcTree(translation_unit_ex, "translation_unit", 1, (yyvsp[0].treeptr)); }
#line 1938 "cgram.tab.c"
    break;

  case 6:
#line 154 "cgram.y"
        { (yyval.treeptr) = alcTree(translation_unit_tr_ex, "translation_unit", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 1944 "cgram.tab.c"
    break;

  case 7:
#line 160 "cgram.y"
        { (yyval.treeptr) = alcTree(external_declaration_fu, "external_declaration", 1, (yyvsp[0].treeptr)); }
#line 1950 "cgram.tab.c"
    break;

  case 8:
#line 162 "cgram.y"
        { (yyval.treeptr) = alcTree(external_declaration_de, "external_declaration", 1, (yyvsp[0].treeptr)); }
#line 1956 "cgram.tab.c"
    break;

  case 9:
#line 164 "cgram.y"
            { (yyval.treeptr) = alcTree(external_declaration_un, "external_declaration", 1, (yyvsp[0].treeptr)); }
#line 1962 "cgram.tab.c"
    break;

  case 10:
#line 169 "cgram.y"
        { /* old school pre-ANSI, no return type */ fprintf(stderr, "Error pre-ANSI not supported"); exit(SYNERR); }
#line 1968 "cgram.tab.c"
    break;

  case 11:
#line 171 "cgram.y"
        { /* old school pre ANSI */ fprintf(stderr, "Error pre-ANSI not supported"); exit(SYNERR);}
#line 1974 "cgram.tab.c"
    break;

  case 12:
#line 173 "cgram.y"
        { (yyval.treeptr) = alcTree(function_definition_de_fu_co, "function_definition", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 1980 "cgram.tab.c"
    break;

  case 13:
#line 175 "cgram.y"
        { /* declaration_list! This must be pre-ANSI  */ fprintf(stderr, "Error pre-ANSI not supported"); exit(SYNERR); }
#line 1986 "cgram.tab.c"
    break;

  case 14:
#line 180 "cgram.y"
                { (yyval.treeptr) = alcTree(declaration_de_sm, "declaration", 1, (yyvsp[-1].treeptr)); }
#line 1992 "cgram.tab.c"
    break;

  case 15:
#line 182 "cgram.y"
                { (yyval.treeptr) = alcTree(declaration_de_in_sm, "declaration", 2, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr)); }
#line 1998 "cgram.tab.c"
    break;

  case 16:
#line 187 "cgram.y"
        { (yyval.treeptr) = alcTree(untyped_declaration_in_sm, "untyped_declaration", 1, (yyvsp[-1].treeptr)); }
#line 2004 "cgram.tab.c"
    break;

  case 17:
#line 192 "cgram.y"
        { (yyval.treeptr) = alcTree(declaration_list_de, "declaration_list", 1, (yyvsp[0].treeptr)); }
#line 2010 "cgram.tab.c"
    break;

  case 18:
#line 194 "cgram.y"
                { (yyval.treeptr) = alcTree(declaration_list_de_de, "declaration_list", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2016 "cgram.tab.c"
    break;

  case 20:
#line 201 "cgram.y"
        { (yyval.treeptr) = alcTree(declaration_specifiers_st_de, "declaration_specifiers", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2022 "cgram.tab.c"
    break;

  case 21:
#line 203 "cgram.y"
        { (yyval.treeptr) = alcTree(declaration_specifiers_tysp, "declaration_specifiers", 1, (yyvsp[0].treeptr)); }
#line 2028 "cgram.tab.c"
    break;

  case 22:
#line 205 "cgram.y"
        { (yyval.treeptr) = alcTree(declaration_specifiers_tyse_de, "declaration_specifiers", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2034 "cgram.tab.c"
    break;

  case 23:
#line 207 "cgram.y"
        { (yyval.treeptr) = alcTree(declaration_specifiers_tyqu, "declaration_specifiers", 1, (yyvsp[0].treeptr)); }
#line 2040 "cgram.tab.c"
    break;

  case 24:
#line 209 "cgram.y"
        { (yyval.treeptr) = alcTree(declaration_specifiers_tyqu_de, "declaration_specifiers", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2046 "cgram.tab.c"
    break;

  case 25:
#line 216 "cgram.y"
        { (yyval.treeptr) = alcTree(storage_class_specifier_ty, "storage_class_specifier", 0, (yyvsp[0].treeptr)); }
#line 2052 "cgram.tab.c"
    break;

  case 26:
#line 218 "cgram.y"
        { (yyval.treeptr) = alcTree(storage_class_specifier_ex, "storage_class_specifier", 0, (yyvsp[0].treeptr)); }
#line 2058 "cgram.tab.c"
    break;

  case 27:
#line 220 "cgram.y"
                { (yyval.treeptr) = alcTree(storage_class_specifier_st, "storage_class_specifier", 0, (yyvsp[0].treeptr)); }
#line 2064 "cgram.tab.c"
    break;

  case 28:
#line 222 "cgram.y"
        { (yyval.treeptr) = alcTree(storage_class_specifier_au, "storage_class_specifier", 0, (yyvsp[0].treeptr)); }
#line 2070 "cgram.tab.c"
    break;

  case 29:
#line 224 "cgram.y"
                { (yyval.treeptr) = alcTree(storage_class_specifier_re, "storage_class_specifier", 0, (yyvsp[0].treeptr)); }
#line 2076 "cgram.tab.c"
    break;

  case 30:
#line 229 "cgram.y"
        { (yyval.treeptr) = alcTree(storage_class_specifier_re, "type_specifier", 1, (yyvsp[0].treeptr)); }
#line 2082 "cgram.tab.c"
    break;

  case 31:
#line 231 "cgram.y"
        { (yyval.treeptr) = alcTree(type_specifier_ty, "type_specifier", 1, (yyvsp[0].treeptr)); }
#line 2088 "cgram.tab.c"
    break;

  case 32:
#line 236 "cgram.y"
        { (yyval.treeptr) = alcTree(actual_type_specifier_vo, "actual_type_specifier", 0, (yyvsp[0].treeptr)); }
#line 2094 "cgram.tab.c"
    break;

  case 33:
#line 238 "cgram.y"
        { (yyval.treeptr) = alcTree(actual_type_specifier_ch, "actual_type_specifier", 0, (yyvsp[0].treeptr)); }
#line 2100 "cgram.tab.c"
    break;

  case 34:
#line 240 "cgram.y"
        { (yyval.treeptr) = alcTree(actual_type_specifier_in, "actual_type_specifier", 0, (yyvsp[0].treeptr)); }
#line 2106 "cgram.tab.c"
    break;

  case 35:
#line 242 "cgram.y"
        { (yyval.treeptr) = alcTree(actual_type_specifier_fl, "actual_type_specifier", 0, (yyvsp[0].treeptr)); }
#line 2112 "cgram.tab.c"
    break;

  case 36:
#line 244 "cgram.y"
        { (yyval.treeptr) = alcTree(actual_type_specifier_do, "actual_type_specifier", 0, (yyvsp[0].treeptr)); }
#line 2118 "cgram.tab.c"
    break;

  case 37:
#line 246 "cgram.y"
        { (yyval.treeptr) = alcTree(actual_type_specifier_ty, "actual_type_specifier", 0, (yyvsp[0].treeptr)); }
#line 2124 "cgram.tab.c"
    break;

  case 38:
#line 248 "cgram.y"
        { (yyval.treeptr) = alcTree(actual_type_specifier_st, "actual_type_specifier", 1, (yyvsp[0].treeptr)); }
#line 2130 "cgram.tab.c"
    break;

  case 39:
#line 250 "cgram.y"
        { (yyval.treeptr) = alcTree(actual_type_specifier_en, "actual_type_specifier", 1, (yyvsp[0].treeptr)); }
#line 2136 "cgram.tab.c"
    break;

  case 40:
#line 256 "cgram.y"
        { (yyval.treeptr) = alcTree(type_adjective_sh, "type_adjective", 0, (yyvsp[0].treeptr)); }
#line 2142 "cgram.tab.c"
    break;

  case 41:
#line 258 "cgram.y"
        { (yyval.treeptr) = alcTree(type_adjective_lo, "type_adjective", 0, (yyvsp[0].treeptr)); }
#line 2148 "cgram.tab.c"
    break;

  case 42:
#line 260 "cgram.y"
        { (yyval.treeptr) = alcTree(type_adjective_si, "type_adjective", 0, (yyvsp[0].treeptr)); }
#line 2154 "cgram.tab.c"
    break;

  case 43:
#line 262 "cgram.y"
        { (yyval.treeptr) = alcTree(type_adjective_un, "type_adjective", 0, (yyvsp[0].treeptr)); }
#line 2160 "cgram.tab.c"
    break;

  case 44:
#line 267 "cgram.y"
        { (yyval.treeptr) = alcTree(type_qualifier_co, "type_qualifier", 0, (yyvsp[0].treeptr)); }
#line 2166 "cgram.tab.c"
    break;

  case 45:
#line 269 "cgram.y"
                { (yyval.treeptr) = alcTree(type_qualifier_vo, "type_qualifier", 0, (yyvsp[0].treeptr)); }
#line 2172 "cgram.tab.c"
    break;

  case 46:
#line 274 "cgram.y"
        { (yyval.treeptr) = alcTree(struct_or_union_specifier_st_lc_st_rc, "struct_or_union_specifier", 4, (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2178 "cgram.tab.c"
    break;

  case 47:
#line 276 "cgram.y"
        { (yyval.treeptr) = alcTree(struct_or_union_specifier_st_id_lc_st_rc, "struct_or_union_specifier", 5, (yyvsp[-4].treeptr), (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2184 "cgram.tab.c"
    break;

  case 48:
#line 278 "cgram.y"
        { (yyval.treeptr) = alcTree(struct_or_union_specifier_st_id, "struct_or_union_specifier", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2190 "cgram.tab.c"
    break;

  case 49:
#line 283 "cgram.y"
        { (yyval.treeptr) = alcTree(struct_or_union_st, "struct_or_union", 0, (yyvsp[0].treeptr)); }
#line 2196 "cgram.tab.c"
    break;

  case 50:
#line 285 "cgram.y"
        { (yyval.treeptr) = alcTree(struct_or_union_un, "struct_or_union", 0, (yyvsp[0].treeptr)); }
#line 2202 "cgram.tab.c"
    break;

  case 51:
#line 290 "cgram.y"
        { (yyval.treeptr) = alcTree(struct_declaration_list_st, "struct_declaration_list", 1, (yyvsp[0].treeptr)); }
#line 2208 "cgram.tab.c"
    break;

  case 52:
#line 292 "cgram.y"
                { (yyval.treeptr) = alcTree(struct_declaration_list_st_st, "struct_declaration_list", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2214 "cgram.tab.c"
    break;

  case 54:
#line 300 "cgram.y"
        { (yyval.treeptr) = alcTree(init_declarator_list_in_cm_in, "init_declarator_list", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2220 "cgram.tab.c"
    break;

  case 55:
#line 305 "cgram.y"
        { (yyval.treeptr) = alcTree(init_declarator_de, "init_declarator", 1, (yyvsp[0].treeptr)); }
#line 2226 "cgram.tab.c"
    break;

  case 56:
#line 307 "cgram.y"
        { (yyval.treeptr) = alcTree(init_declarator_de_as_in, "init_declarator", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2232 "cgram.tab.c"
    break;

  case 57:
#line 312 "cgram.y"
                { (yyval.treeptr) = alcTree(struct_declaration_sp_sm, "struct_declaration", 1, (yyvsp[-1].treeptr)); }
#line 2238 "cgram.tab.c"
    break;

  case 58:
#line 314 "cgram.y"
                { (yyval.treeptr) = alcTree(struct_declaration__sp_st_sm, "struct_declaration", 2, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr)); }
#line 2244 "cgram.tab.c"
    break;

  case 60:
#line 320 "cgram.y"
                { (yyval.treeptr) = alcTree(struct_declaration__sp_st_sm, "specifier_qualifier_list", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2250 "cgram.tab.c"
    break;

  case 61:
#line 322 "cgram.y"
        { (yyval.treeptr) = alcTree(struct_declaration__sp_st_sm, "specifier_qualifier_list", 0, (yyvsp[0].treeptr)); }
#line 2256 "cgram.tab.c"
    break;

  case 62:
#line 324 "cgram.y"
                { (yyval.treeptr) = alcTree(struct_declaration__sp_st_sm, "specifier_qualifier_list", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2262 "cgram.tab.c"
    break;

  case 64:
#line 330 "cgram.y"
                { (yyval.treeptr) = alcTree(struct_declarator_list_st_cm_st, "struct_declarator_list", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2268 "cgram.tab.c"
    break;

  case 66:
#line 336 "cgram.y"
                { (yyval.treeptr) = alcTree(struct_declarator_co_co, "struct_declarator", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2274 "cgram.tab.c"
    break;

  case 67:
#line 338 "cgram.y"
                { (yyval.treeptr) = alcTree(struct_declarator_de_co_co, "struct_declarator", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2280 "cgram.tab.c"
    break;

  case 68:
#line 343 "cgram.y"
                { (yyval.treeptr) = alcTree(enum_specifier_en_lc_en_rc, "enum_specifier", 4, (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2286 "cgram.tab.c"
    break;

  case 69:
#line 345 "cgram.y"
                { (yyval.treeptr) = alcTree(enum_specifier_en_id_lc_en_rc, "enum_specifier", 5, (yyvsp[-4].treeptr), (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2292 "cgram.tab.c"
    break;

  case 70:
#line 347 "cgram.y"
                { (yyval.treeptr) = alcTree(enum_specifier_en_id, "enum_specifier", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2298 "cgram.tab.c"
    break;

  case 71:
#line 352 "cgram.y"
        { (yyval.treeptr) = alcTree(enumerator_list_en, "enumerator_list", 1, (yyvsp[0].treeptr)); }
#line 2304 "cgram.tab.c"
    break;

  case 72:
#line 354 "cgram.y"
                { (yyval.treeptr) = alcTree(enumerator_list_en_cm_en, "enumerator_list", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2310 "cgram.tab.c"
    break;

  case 73:
#line 359 "cgram.y"
                { (yyval.treeptr) = alcTree(enumerator_id, "enumerator", 0, (yyvsp[0].treeptr)); }
#line 2316 "cgram.tab.c"
    break;

  case 74:
#line 361 "cgram.y"
        { (yyval.treeptr) = alcTree(enumerator_id_as_co, "enumerator", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2322 "cgram.tab.c"
    break;

  case 75:
#line 366 "cgram.y"
        { (yyval.treeptr) = alcTree(declarator_di, "declarator", 1, (yyvsp[0].treeptr)); }
#line 2328 "cgram.tab.c"
    break;

  case 76:
#line 368 "cgram.y"
        { (yyval.treeptr) = alcTree(declarator_po_di, "declarator", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2334 "cgram.tab.c"
    break;

  case 77:
#line 373 "cgram.y"
        { (yyval.treeptr) = alcTree(declarator_po_di, "direct_declarator", 1, (yyvsp[0].treeptr)); }
#line 2340 "cgram.tab.c"
    break;

  case 78:
#line 375 "cgram.y"
        { (yyval.treeptr) = alcTree(direct_declarator_lp_de_rp, "direct_declarator", 1, (yyvsp[-2].treeptr)); }
#line 2346 "cgram.tab.c"
    break;

  case 79:
#line 377 "cgram.y"
        { (yyval.treeptr) = alcTree(direct_declarator_di_lb_rb, "direct_declarator", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2352 "cgram.tab.c"
    break;

  case 80:
#line 379 "cgram.y"
        { (yyval.treeptr) = alcTree(direct_declarator_di_lb_co_rb, "direct_declarator", 4, (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2358 "cgram.tab.c"
    break;

  case 81:
#line 381 "cgram.y"
        { (yyval.treeptr) = alcTree(direct_declarator_di_lp_pa_rp, "direct_declarator", 2, (yyvsp[-3].treeptr), (yyvsp[-1].treeptr)); }
#line 2364 "cgram.tab.c"
    break;

  case 82:
#line 383 "cgram.y"
        { (yyval.treeptr) = alcTree(direct_declarator_di_lp_rp, "direct_declarator", 1, (yyvsp[-2].treeptr)); }
#line 2370 "cgram.tab.c"
    break;

  case 83:
#line 385 "cgram.y"
        { (yyval.treeptr) = alcTree(direct_declarator_di_lp_id_rp, "direct_declarator", 2, (yyvsp[-3].treeptr), (yyvsp[-1].treeptr)); }
#line 2376 "cgram.tab.c"
    break;

  case 84:
#line 389 "cgram.y"
        { (yyval.treeptr) = alcTree(function_declarator_di, "function_declarator", 1, (yyvsp[0].treeptr)); }
#line 2382 "cgram.tab.c"
    break;

  case 85:
#line 391 "cgram.y"
                { (yyval.treeptr) = alcTree(function_declarator_po_di, "function_declarator", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2388 "cgram.tab.c"
    break;

  case 86:
#line 396 "cgram.y"
        { (yyval.treeptr) = alcTree(direct_function_declarator_di_lp_pa_rp, "direct_function_declarator", 2, (yyvsp[-3].treeptr), (yyvsp[-1].treeptr)); }
#line 2394 "cgram.tab.c"
    break;

  case 87:
#line 398 "cgram.y"
        { (yyval.treeptr) = alcTree(direct_function_declarator_di_lp_rp, "direct_function_declarator", 1, (yyvsp[-2].treeptr)); }
#line 2400 "cgram.tab.c"
    break;

  case 88:
#line 400 "cgram.y"
        { /* pre-ANSI, error case */ printf("Error: pre-ANSI not supported"); exit(SYNERR);}
#line 2406 "cgram.tab.c"
    break;

  case 89:
#line 405 "cgram.y"
        { (yyval.treeptr) = alcTree(pointer_mu, "pointer", 1, (yyvsp[0].treeptr)); }
#line 2412 "cgram.tab.c"
    break;

  case 90:
#line 407 "cgram.y"
        { (yyval.treeptr) = alcTree(pointer_mu_ty, "pointer", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2418 "cgram.tab.c"
    break;

  case 91:
#line 409 "cgram.y"
        { (yyval.treeptr) = alcTree(pointer_mu_po, "pointer", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr));}
#line 2424 "cgram.tab.c"
    break;

  case 92:
#line 411 "cgram.y"
        { (yyval.treeptr) = alcTree(pointer_mu_ty_po, "pointer", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2430 "cgram.tab.c"
    break;

  case 93:
#line 416 "cgram.y"
        { (yyval.treeptr) = alcTree(type_qualifier_list_ty, "type_qualifier_list", 1, (yyvsp[0].treeptr)); }
#line 2436 "cgram.tab.c"
    break;

  case 94:
#line 418 "cgram.y"
        { (yyval.treeptr) = alcTree(type_qualifier_list_ty_ty, "type_qualifier_list", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2442 "cgram.tab.c"
    break;

  case 95:
#line 423 "cgram.y"
        { (yyval.treeptr) = alcTree(parameter_type_list_pa, "parameter_type_list", 1, (yyvsp[0].treeptr)); }
#line 2448 "cgram.tab.c"
    break;

  case 96:
#line 425 "cgram.y"
        { (yyval.treeptr) = alcTree(parameter_type_list_pa_cm_el, "parameter_type_list", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2454 "cgram.tab.c"
    break;

  case 97:
#line 430 "cgram.y"
        { (yyval.treeptr) = alcTree(parameter_list_pa, "parameter_list", 1, (yyvsp[0].treeptr)); }
#line 2460 "cgram.tab.c"
    break;

  case 98:
#line 432 "cgram.y"
        { (yyval.treeptr) = alcTree(parameter_list_pa_cm_pa, "parameter_list", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2466 "cgram.tab.c"
    break;

  case 99:
#line 437 "cgram.y"
        { (yyval.treeptr) = alcTree(parameter_declaration_de_de, "parameter_declaration", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2472 "cgram.tab.c"
    break;

  case 100:
#line 439 "cgram.y"
        { (yyval.treeptr) = alcTree(parameter_declaration_de, "parameter_declaration", 1, (yyvsp[0].treeptr)); }
#line 2478 "cgram.tab.c"
    break;

  case 101:
#line 441 "cgram.y"
        { (yyval.treeptr) = alcTree(parameter_declaration_de_ab, "parameter_declaration", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2484 "cgram.tab.c"
    break;

  case 102:
#line 446 "cgram.y"
                { (yyval.treeptr) = alcTree(identifier_list_id, "identifier_list", 0, (yyvsp[0].treeptr)); }
#line 2490 "cgram.tab.c"
    break;

  case 103:
#line 448 "cgram.y"
                { (yyval.treeptr) = alcTree(identifier_list_id_cm_id, "identifier_list", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2496 "cgram.tab.c"
    break;

  case 104:
#line 453 "cgram.y"
        { (yyval.treeptr) = alcTree(initializer_as, "initializer", 1, (yyvsp[0].treeptr)); }
#line 2502 "cgram.tab.c"
    break;

  case 105:
#line 455 "cgram.y"
                { (yyval.treeptr) = alcTree(initializer_lc_in_rc, "initializer", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2508 "cgram.tab.c"
    break;

  case 106:
#line 457 "cgram.y"
                { (yyval.treeptr) = alcTree(initializer_lc_in_cm_rc, "initializer", 4, (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2514 "cgram.tab.c"
    break;

  case 107:
#line 462 "cgram.y"
        { (yyval.treeptr) = alcTree(initializer_list_in, "initializer_list", 1, (yyvsp[0].treeptr)); }
#line 2520 "cgram.tab.c"
    break;

  case 108:
#line 464 "cgram.y"
                { (yyval.treeptr) = alcTree(initializer_list_in_cm_in, "initializer_list", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2526 "cgram.tab.c"
    break;

  case 109:
#line 469 "cgram.y"
        { (yyval.treeptr) = alcTree(type_name_sp, "type_name", 1, (yyvsp[0].treeptr)); }
#line 2532 "cgram.tab.c"
    break;

  case 110:
#line 471 "cgram.y"
        { (yyval.treeptr) = alcTree(type_name_sp_ab, "type_name", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2538 "cgram.tab.c"
    break;

  case 111:
#line 476 "cgram.y"
        { (yyval.treeptr) = alcTree(abstract_declarator_po, "abstract_declarator", 1, (yyvsp[0].treeptr)); }
#line 2544 "cgram.tab.c"
    break;

  case 112:
#line 478 "cgram.y"
        { (yyval.treeptr) = alcTree(abstract_declarator_di, "abstract_declarator", 1, (yyvsp[0].treeptr)); }
#line 2550 "cgram.tab.c"
    break;

  case 113:
#line 480 "cgram.y"
                { (yyval.treeptr) = alcTree(abstract_declarator_po_di, "abstract_declarator", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2556 "cgram.tab.c"
    break;

  case 114:
#line 486 "cgram.y"
                { (yyval.treeptr) = alcTree(direct_abstract_declarator_lp_ab_rp, "direct_abstract_declarator", 1, (yyvsp[-1].treeptr)); }
#line 2562 "cgram.tab.c"
    break;

  case 115:
#line 488 "cgram.y"
                { (yyval.treeptr) = alcTree(direct_abstract_declarator_lb_rb, "direct_abstract_declarator", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2568 "cgram.tab.c"
    break;

  case 116:
#line 490 "cgram.y"
                { (yyval.treeptr) = alcTree(direct_abstract_declarator_lb_co_rb, "direct_abstract_declarator", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2574 "cgram.tab.c"
    break;

  case 117:
#line 492 "cgram.y"
                { (yyval.treeptr) = alcTree(direct_abstract_declarator_di_lb_rb, "direct_abstract_declarator", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2580 "cgram.tab.c"
    break;

  case 118:
#line 494 "cgram.y"
                { (yyval.treeptr) = alcTree(direct_abstract_declarator_di_lb_co_rb, "direct_abstract_declarator", 4, (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2586 "cgram.tab.c"
    break;

  case 119:
#line 496 "cgram.y"
                { (yyval.treeptr) = alcTree(direct_abstract_declarator_lp_rp, "direct_abstract_declarator", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2592 "cgram.tab.c"
    break;

  case 120:
#line 498 "cgram.y"
                { (yyval.treeptr) = alcTree(direct_abstract_declarator_lp_pa_rp, "direct_abstract_declarator", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2598 "cgram.tab.c"
    break;

  case 121:
#line 500 "cgram.y"
                { (yyval.treeptr) = alcTree(direct_abstract_declarator_di_lp_rp, "direct_abstract_declarator", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2604 "cgram.tab.c"
    break;

  case 122:
#line 502 "cgram.y"
                { (yyval.treeptr) = alcTree(direct_abstract_declarator_di_lp_pa_rp, "direct_abstract_declarator", 4, (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2610 "cgram.tab.c"
    break;

  case 123:
#line 507 "cgram.y"
        { (yyval.treeptr) = alcTree(statement_la, "statement", 1, (yyvsp[0].treeptr)); }
#line 2616 "cgram.tab.c"
    break;

  case 124:
#line 509 "cgram.y"
        { (yyval.treeptr) = alcTree(statement_co, "statement", 1, (yyvsp[0].treeptr)); }
#line 2622 "cgram.tab.c"
    break;

  case 125:
#line 511 "cgram.y"
        { (yyval.treeptr) = alcTree(statement_ex, "statement", 1, (yyvsp[0].treeptr)); }
#line 2628 "cgram.tab.c"
    break;

  case 126:
#line 513 "cgram.y"
        { (yyval.treeptr) = alcTree(statement_se, "statement", 1, (yyvsp[0].treeptr)); }
#line 2634 "cgram.tab.c"
    break;

  case 127:
#line 515 "cgram.y"
        { (yyval.treeptr) = alcTree(statement_it, "statement", 1, (yyvsp[0].treeptr)); }
#line 2640 "cgram.tab.c"
    break;

  case 128:
#line 517 "cgram.y"
        { (yyval.treeptr) = alcTree(statement_ju, "statement", 1, (yyvsp[0].treeptr)); }
#line 2646 "cgram.tab.c"
    break;

  case 129:
#line 522 "cgram.y"
        { (yyval.treeptr) = alcTree(labeled_statement_id_co_st, "labeled_statement", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2652 "cgram.tab.c"
    break;

  case 130:
#line 524 "cgram.y"
        { (yyval.treeptr) = alcTree(labeled_statement_ca_co_co_st, "labeled_statement", 3, (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr)); }
#line 2658 "cgram.tab.c"
    break;

  case 131:
#line 526 "cgram.y"
        { (yyval.treeptr) = alcTree(labeled_statement_de_co_st, "labeled_statement", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2664 "cgram.tab.c"
    break;

  case 132:
#line 531 "cgram.y"
                { (yyval.treeptr) = alcTree(expression_statement_sm, "expression_statement", 0, (yyvsp[0].treeptr)); }
#line 2670 "cgram.tab.c"
    break;

  case 133:
#line 533 "cgram.y"
                { (yyval.treeptr) = alcTree(expression_statement_ex_sm, "expression_statement", 1, (yyvsp[-1].treeptr)); }
#line 2676 "cgram.tab.c"
    break;

  case 134:
#line 538 "cgram.y"
                { (yyval.treeptr) = alcTree(compound_statement_lc_rc, "compound_statement", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2682 "cgram.tab.c"
    break;

  case 135:
#line 540 "cgram.y"
        { (yyval.treeptr) = alcTree(compound_statement_lc_co_rc, "compound_statement", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2688 "cgram.tab.c"
    break;

  case 136:
#line 545 "cgram.y"
                { (yyval.treeptr) = alcTree(compound_statement_opt_st, "compound_statement_opt", 1, (yyvsp[0].treeptr)); }
#line 2694 "cgram.tab.c"
    break;

  case 137:
#line 547 "cgram.y"
                { (yyval.treeptr) = alcTree(compound_statement_opt_de, "compound_statement_opt", 1, (yyvsp[0].treeptr)); }
#line 2700 "cgram.tab.c"
    break;

  case 138:
#line 549 "cgram.y"
                { (yyval.treeptr) = alcTree(compound_statement_opt_de_st, "compound_statement_opt", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2706 "cgram.tab.c"
    break;

  case 139:
#line 554 "cgram.y"
        { (yyval.treeptr) = alcTree(statement_list_st, "statement_list", 1, (yyvsp[0].treeptr)); }
#line 2712 "cgram.tab.c"
    break;

  case 140:
#line 556 "cgram.y"
                { (yyval.treeptr) = alcTree(statement_list_st_st, "statement_list", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2718 "cgram.tab.c"
    break;

  case 141:
#line 561 "cgram.y"
        { (yyval.treeptr) = alcTree(selection_statement_if_lp_ex_rp_st, "selection_statement", 3, (yyvsp[-4].treeptr), (yyvsp[-2].treeptr), (yyvsp[0].treeptr));}
#line 2724 "cgram.tab.c"
    break;

  case 142:
#line 563 "cgram.y"
        { (yyval.treeptr) = alcTree(selection_statement_if_lp_ex_rp_st_el_st, "selection_statement", 6, (yyvsp[-6].treeptr), (yyvsp[-5].treeptr), (yyvsp[-4].treeptr), (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[0].treeptr)); }
#line 2730 "cgram.tab.c"
    break;

  case 143:
#line 565 "cgram.y"
        { (yyval.treeptr) = alcTree(selection_statement_sw_lp_ex_rp_st, "selection_statement", 3, (yyvsp[-4].treeptr), (yyvsp[-2].treeptr), (yyvsp[0].treeptr));  }
#line 2736 "cgram.tab.c"
    break;

  case 144:
#line 570 "cgram.y"
        { (yyval.treeptr) = alcTree(iteration_statement_wh_lp_ex_rp_st, "iteration_statement", 3, (yyvsp[-4].treeptr), (yyvsp[-2].treeptr), (yyvsp[0].treeptr)); }
#line 2742 "cgram.tab.c"
    break;

  case 145:
#line 572 "cgram.y"
        { (yyval.treeptr) = alcTree(iteration_statement_do_st_wh_lp_ex_rp_sm, "iteration_statement", 4, (yyvsp[-6].treeptr), (yyvsp[-5].treeptr), (yyvsp[-4].treeptr), (yyvsp[-2].treeptr)); }
#line 2748 "cgram.tab.c"
    break;

  case 146:
#line 574 "cgram.y"
        { (yyval.treeptr) = alcTree(iteration_statement_fo_lp_fo_rp_st, "iteration_statement", 5, (yyvsp[-4].treeptr), (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2754 "cgram.tab.c"
    break;

  case 147:
#line 579 "cgram.y"
        { (yyval.treeptr) = alcTree(forcntrl_sm_sm, "forcntrl", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2760 "cgram.tab.c"
    break;

  case 148:
#line 581 "cgram.y"
        { (yyval.treeptr) = alcTree(forcntrl_sm_sm_ex, "forcntrl", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2766 "cgram.tab.c"
    break;

  case 149:
#line 583 "cgram.y"
        { (yyval.treeptr) = alcTree(forcntrl_sm_ex_sm, "forcntrl", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2772 "cgram.tab.c"
    break;

  case 150:
#line 585 "cgram.y"
        { (yyval.treeptr) = alcTree(forcntrl_sm_ex_sm_ex, "forcntrl", 4, (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2778 "cgram.tab.c"
    break;

  case 151:
#line 587 "cgram.y"
        { (yyval.treeptr) = alcTree(forcntrl_ex_sm_sm, "forcntrl", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2784 "cgram.tab.c"
    break;

  case 152:
#line 589 "cgram.y"
        { (yyval.treeptr) = alcTree(forcntrl_ex_sm_sm_ex, "forcntrl", 4, (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2790 "cgram.tab.c"
    break;

  case 153:
#line 591 "cgram.y"
        { (yyval.treeptr) = alcTree(forcntrl_ex_sm_ex_sm, "forcntrl", 4, (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2796 "cgram.tab.c"
    break;

  case 154:
#line 593 "cgram.y"
        { (yyval.treeptr) = alcTree(forcntrl_ex_sm_ex_sm_ex, "forcntrl", 4, (yyvsp[-4].treeptr), (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr)); }
#line 2802 "cgram.tab.c"
    break;

  case 155:
#line 600 "cgram.y"
        { (yyval.treeptr) = alcTree(jump_statement_go_id_sm, "jump_statement", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2808 "cgram.tab.c"
    break;

  case 156:
#line 602 "cgram.y"
        { (yyval.treeptr) = alcTree(jump_statement_co_sm, "jump_statement", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2814 "cgram.tab.c"
    break;

  case 157:
#line 604 "cgram.y"
        { (yyval.treeptr) = alcTree(jump_statement_br_sm, "jump_statement", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2820 "cgram.tab.c"
    break;

  case 158:
#line 606 "cgram.y"
        { (yyval.treeptr) = alcTree(jump_statement_re_sm, "jump_statement", 1, (yyvsp[-1].treeptr)); }
#line 2826 "cgram.tab.c"
    break;

  case 159:
#line 608 "cgram.y"
        { (yyval.treeptr) = alcTree(jump_statement_re_ex_sm, "jump_statement", 2, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr)); }
#line 2832 "cgram.tab.c"
    break;

  case 160:
#line 613 "cgram.y"
                { (yyval.treeptr) = alcTree(expression_as, "expression", 1, (yyvsp[0].treeptr)); }
#line 2838 "cgram.tab.c"
    break;

  case 161:
#line 615 "cgram.y"
                { (yyval.treeptr) = alcTree(expression_ex_cm_as, "expression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2844 "cgram.tab.c"
    break;

  case 162:
#line 620 "cgram.y"
        { (yyval.treeptr) = alcTree(assignment_expression_co, "assignment_expression", 1, (yyvsp[0].treeptr)); }
#line 2850 "cgram.tab.c"
    break;

  case 163:
#line 622 "cgram.y"
        { (yyval.treeptr) = alcTree(assignment_expression_un_as_as, "assignment_expression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2856 "cgram.tab.c"
    break;

  case 164:
#line 626 "cgram.y"
        { (yyval.treeptr) = alcTree(assignment_expression_un_as_as, "assignment_operator", 0, (yyvsp[0].treeptr)); }
#line 2862 "cgram.tab.c"
    break;

  case 165:
#line 627 "cgram.y"
                { (yyval.treeptr) = alcTree(assignment_expression_un_as_as, "assignment_operator", 0, (yyvsp[0].treeptr)); }
#line 2868 "cgram.tab.c"
    break;

  case 166:
#line 628 "cgram.y"
                { (yyval.treeptr) = alcTree(assignment_expression_un_as_as, "assignment_operator", 0, (yyvsp[0].treeptr)); }
#line 2874 "cgram.tab.c"
    break;

  case 167:
#line 629 "cgram.y"
                { (yyval.treeptr) = alcTree(assignment_expression_un_as_as, "assignment_operator", 0, (yyvsp[0].treeptr)); }
#line 2880 "cgram.tab.c"
    break;

  case 168:
#line 630 "cgram.y"
                { (yyval.treeptr) = alcTree(assignment_expression_un_as_as, "assignment_operator", 0, (yyvsp[0].treeptr)); }
#line 2886 "cgram.tab.c"
    break;

  case 169:
#line 631 "cgram.y"
                { (yyval.treeptr) = alcTree(assignment_expression_un_as_as, "assignment_operator", 0, (yyvsp[0].treeptr)); }
#line 2892 "cgram.tab.c"
    break;

  case 170:
#line 632 "cgram.y"
                { (yyval.treeptr) = alcTree(assignment_expression_un_as_as, "assignment_operator", 0, (yyvsp[0].treeptr)); }
#line 2898 "cgram.tab.c"
    break;

  case 171:
#line 633 "cgram.y"
                { (yyval.treeptr) = alcTree(assignment_expression_un_as_as, "assignment_operator", 0, (yyvsp[0].treeptr)); }
#line 2904 "cgram.tab.c"
    break;

  case 172:
#line 634 "cgram.y"
                { (yyval.treeptr) = alcTree(assignment_expression_un_as_as, "assignment_operator", 0, (yyvsp[0].treeptr)); }
#line 2910 "cgram.tab.c"
    break;

  case 173:
#line 635 "cgram.y"
                { (yyval.treeptr) = alcTree(assignment_expression_un_as_as, "assignment_operator", 0, (yyvsp[0].treeptr)); }
#line 2916 "cgram.tab.c"
    break;

  case 174:
#line 636 "cgram.y"
                { (yyval.treeptr) = alcTree(assignment_expression_un_as_as, "assignment_operator", 0, (yyvsp[0].treeptr)); }
#line 2922 "cgram.tab.c"
    break;

  case 175:
#line 642 "cgram.y"
        { (yyval.treeptr) = alcTree(conditional_expression_lo, "conditional_expression", 1, (yyvsp[0].treeptr)); }
#line 2928 "cgram.tab.c"
    break;

  case 176:
#line 644 "cgram.y"
                { (yyval.treeptr) = alcTree(conditional_expression_lo_qu_ex_co_co, "conditional_expression", 5, (yyvsp[-4].treeptr), (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2934 "cgram.tab.c"
    break;

  case 177:
#line 650 "cgram.y"
        { (yyval.treeptr) = alcTree(constant_expression_co, "constant_expression", 1, (yyvsp[0].treeptr)); }
#line 2940 "cgram.tab.c"
    break;

  case 178:
#line 655 "cgram.y"
        { (yyval.treeptr) = alcTree(logical_or_expression_lo, "logical_or_expression", 1, (yyvsp[0].treeptr)); }
#line 2946 "cgram.tab.c"
    break;

  case 179:
#line 657 "cgram.y"
                { (yyval.treeptr) = alcTree(logical_or_expression_lo_or_lo, "logical_or_expression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2952 "cgram.tab.c"
    break;

  case 180:
#line 662 "cgram.y"
        { (yyval.treeptr) = alcTree(logical_and_expression_in, "logical_and_expression", 1, (yyvsp[0].treeptr)); }
#line 2958 "cgram.tab.c"
    break;

  case 181:
#line 664 "cgram.y"
                { (yyval.treeptr) = alcTree(logical_and_expression_lo_an_in, "logical_and_expression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2964 "cgram.tab.c"
    break;

  case 182:
#line 669 "cgram.y"
        { (yyval.treeptr) = alcTree(inclusive_or_expression_ex, "inclusive_or_expression", 1, (yyvsp[0].treeptr)); }
#line 2970 "cgram.tab.c"
    break;

  case 183:
#line 671 "cgram.y"
                { (yyval.treeptr) = alcTree(inclusive_or_expression_in_or_ex, "inclusive_or_expression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2976 "cgram.tab.c"
    break;

  case 184:
#line 676 "cgram.y"
        { (yyval.treeptr) = alcTree(exclusive_or_expression_an, "exclusive_or_expression", 1, (yyvsp[0].treeptr)); }
#line 2982 "cgram.tab.c"
    break;

  case 185:
#line 678 "cgram.y"
                { (yyval.treeptr) = alcTree(exclusive_or_expression_ex_er_an, "exclusive_or_expression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 2988 "cgram.tab.c"
    break;

  case 186:
#line 683 "cgram.y"
        { (yyval.treeptr) = alcTree(and_expression_eq, "and_expression", 1, (yyvsp[0].treeptr)); }
#line 2994 "cgram.tab.c"
    break;

  case 187:
#line 685 "cgram.y"
                { (yyval.treeptr) = alcTree(and_expression_an_an_eq, "and_expression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 3000 "cgram.tab.c"
    break;

  case 188:
#line 690 "cgram.y"
        { (yyval.treeptr) = alcTree(equality_expression_re, "equality_expression", 1, (yyvsp[0].treeptr)); }
#line 3006 "cgram.tab.c"
    break;

  case 189:
#line 692 "cgram.y"
                { (yyval.treeptr) = alcTree(equality_expression_eq_eq_re, "equality_expression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 3012 "cgram.tab.c"
    break;

  case 190:
#line 694 "cgram.y"
                { (yyval.treeptr) = alcTree(equality_expression_eq_ne_re, "equality_expression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 3018 "cgram.tab.c"
    break;

  case 191:
#line 699 "cgram.y"
        { (yyval.treeptr) = alcTree(relational_expression_sh, "relational_expression", 1, (yyvsp[0].treeptr)); }
#line 3024 "cgram.tab.c"
    break;

  case 192:
#line 701 "cgram.y"
        { (yyval.treeptr) = alcTree(relational_expression_re_lt_sh, "relational_expression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 3030 "cgram.tab.c"
    break;

  case 193:
#line 703 "cgram.y"
        { (yyval.treeptr) = alcTree(relational_expression_re_gt_sh, "relational_expression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 3036 "cgram.tab.c"
    break;

  case 194:
#line 705 "cgram.y"
        { (yyval.treeptr) = alcTree(relational_expression_re_le_sh, "relational_expression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 3042 "cgram.tab.c"
    break;

  case 195:
#line 707 "cgram.y"
                { (yyval.treeptr) = alcTree(relational_expression_re_ge_sh, "relational_expression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 3048 "cgram.tab.c"
    break;

  case 196:
#line 712 "cgram.y"
        { (yyval.treeptr) = alcTree(shift_expression_ad, "shift_expression", 1, (yyvsp[0].treeptr)); }
#line 3054 "cgram.tab.c"
    break;

  case 197:
#line 714 "cgram.y"
        { (yyval.treeptr) = alcTree(shift_expression_sh_shl_ad, "shift_expression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 3060 "cgram.tab.c"
    break;

  case 198:
#line 716 "cgram.y"
        { (yyval.treeptr) = alcTree(shift_expression_sh_shr_ad, "shift_expression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 3066 "cgram.tab.c"
    break;

  case 199:
#line 721 "cgram.y"
        { (yyval.treeptr) = alcTree(additive_expression_mu, "additive_expression", 1, (yyvsp[0].treeptr)); }
#line 3072 "cgram.tab.c"
    break;

  case 200:
#line 723 "cgram.y"
        { (yyval.treeptr) = alcTree(additive_expression_ad_pl_mu, "additive_expression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 3078 "cgram.tab.c"
    break;

  case 201:
#line 725 "cgram.y"
        { (yyval.treeptr) = alcTree(additive_expression_ad_mi_mu, "additive_expression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 3084 "cgram.tab.c"
    break;

  case 202:
#line 730 "cgram.y"
        { (yyval.treeptr) = alcTree(multiplicative_expression_ca, "multiplicative_expression", 1, (yyvsp[0].treeptr)); }
#line 3090 "cgram.tab.c"
    break;

  case 203:
#line 732 "cgram.y"
        { (yyval.treeptr) = alcTree(multiplicative_expression_mu_mu_ca, "multiplicative_expression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 3096 "cgram.tab.c"
    break;

  case 204:
#line 734 "cgram.y"
        { (yyval.treeptr) = alcTree(multiplicative_expression_mu_di_ca, "multiplicative_expression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 3102 "cgram.tab.c"
    break;

  case 205:
#line 736 "cgram.y"
        { (yyval.treeptr) = alcTree(multiplicative_expression_mu_mo_ca, "multiplicative_expression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 3108 "cgram.tab.c"
    break;

  case 206:
#line 741 "cgram.y"
        { (yyval.treeptr) = alcTree(cast_expression_un, "cast_expression", 1, (yyvsp[0].treeptr)); }
#line 3114 "cgram.tab.c"
    break;

  case 207:
#line 743 "cgram.y"
        { (yyval.treeptr) = alcTree(cast_expression_lp_ty_rp_ca, "cast_expression", 4, (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 3120 "cgram.tab.c"
    break;

  case 208:
#line 749 "cgram.y"
        { (yyval.treeptr) = alcTree(unary_expression_po, "unary_expression", 1, (yyvsp[0].treeptr)); }
#line 3126 "cgram.tab.c"
    break;

  case 209:
#line 751 "cgram.y"
        { (yyval.treeptr) = alcTree(unary_expression_in_un, "unary_expression", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 3132 "cgram.tab.c"
    break;

  case 210:
#line 753 "cgram.y"
        { (yyval.treeptr) = alcTree(unary_expression_de_un, "unary_expression", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 3138 "cgram.tab.c"
    break;

  case 211:
#line 755 "cgram.y"
        { (yyval.treeptr) = alcTree(unary_expression_un_ca, "unary_expression", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 3144 "cgram.tab.c"
    break;

  case 212:
#line 757 "cgram.y"
        { (yyval.treeptr) = alcTree(unary_expression_si_un, "unary_expression", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 3150 "cgram.tab.c"
    break;

  case 213:
#line 759 "cgram.y"
        { (yyval.treeptr) = alcTree(unary_expression_si_lp_ty_rp, "unary_expression", 2, (yyvsp[-3].treeptr), (yyvsp[-1].treeptr)); }
#line 3156 "cgram.tab.c"
    break;

  case 214:
#line 764 "cgram.y"
        { (yyval.treeptr) = alcTree(unary_operator_an, "unary_operator", 0, (yyvsp[0].treeptr)); }
#line 3162 "cgram.tab.c"
    break;

  case 215:
#line 766 "cgram.y"
        { (yyval.treeptr) = alcTree(unary_operator_mu, "unary_operator", 0, (yyvsp[0].treeptr)); }
#line 3168 "cgram.tab.c"
    break;

  case 216:
#line 768 "cgram.y"
        { (yyval.treeptr) = alcTree(unary_operator_pl, "unary_operator", 0, (yyvsp[0].treeptr)); }
#line 3174 "cgram.tab.c"
    break;

  case 217:
#line 770 "cgram.y"
        { (yyval.treeptr) = alcTree(unary_operator_mi, "unary_operator", 0, (yyvsp[0].treeptr)); }
#line 3180 "cgram.tab.c"
    break;

  case 218:
#line 772 "cgram.y"
        { (yyval.treeptr) = alcTree(unary_operator_no, "unary_operator", 0, (yyvsp[0].treeptr)); }
#line 3186 "cgram.tab.c"
    break;

  case 219:
#line 774 "cgram.y"
        { (yyval.treeptr) = alcTree(unary_operator_ba, "unary_operator", 0, (yyvsp[0].treeptr)); }
#line 3192 "cgram.tab.c"
    break;

  case 220:
#line 780 "cgram.y"
        { (yyval.treeptr) = alcTree(postfix_expression_pr, "postfix_expression", 1, (yyvsp[0].treeptr)); }
#line 3198 "cgram.tab.c"
    break;

  case 221:
#line 782 "cgram.y"
                 { (yyval.treeptr) = alcTree(postfix_expression_po_lb_ex_rb, "postfix_expression", 4, (yyvsp[-3].treeptr), (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 3204 "cgram.tab.c"
    break;

  case 222:
#line 784 "cgram.y"
                 { (yyval.treeptr) = alcTree(postfix_expression_po_lp_rp, "postfix_expression", 1, (yyvsp[-2].treeptr)); }
#line 3210 "cgram.tab.c"
    break;

  case 223:
#line 786 "cgram.y"
                 { (yyval.treeptr) = alcTree(postfix_expression_po_lp__ar_rp, "postfix_expression", 2, (yyvsp[-3].treeptr), (yyvsp[-1].treeptr)); }
#line 3216 "cgram.tab.c"
    break;

  case 224:
#line 788 "cgram.y"
                 { (yyval.treeptr) = alcTree(postfix_expression_po_do_id, "postfix_expression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 3222 "cgram.tab.c"
    break;

  case 225:
#line 790 "cgram.y"
                { (yyval.treeptr) = alcTree(postfix_expression_po_fo_id, "postfix_expression", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 3228 "cgram.tab.c"
    break;

  case 226:
#line 792 "cgram.y"
                 { (yyval.treeptr) = alcTree(postfix_expression_po_in, "postfix_expression", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 3234 "cgram.tab.c"
    break;

  case 227:
#line 794 "cgram.y"
                 { (yyval.treeptr) = alcTree(postfix_expression_po_de, "postfix_expression", 2, (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 3240 "cgram.tab.c"
    break;

  case 228:
#line 799 "cgram.y"
        { (yyval.treeptr) = alcTree(primary_expression_id, "primary_expression", 1, (yyvsp[0].treeptr)); }
#line 3246 "cgram.tab.c"
    break;

  case 229:
#line 801 "cgram.y"
        { (yyval.treeptr) = alcTree(primary_expression_co, "primary_expression", 1, (yyvsp[0].treeptr)); }
#line 3252 "cgram.tab.c"
    break;

  case 230:
#line 803 "cgram.y"
        { (yyval.treeptr) = alcTree(primary_expression_st, "primary_expression", 0, (yyvsp[0].treeptr)); }
#line 3258 "cgram.tab.c"
    break;

  case 231:
#line 805 "cgram.y"
         { (yyval.treeptr) = alcTree(primary_expression_lp_ex_rp, "primary_expression", 1, (yyvsp[-1].treeptr)); }
#line 3264 "cgram.tab.c"
    break;

  case 232:
#line 810 "cgram.y"
        { (yyval.treeptr) = alcTree(argument_expression_list_as, "argument_expression_list", 1, (yyvsp[0].treeptr)); }
#line 3270 "cgram.tab.c"
    break;

  case 233:
#line 812 "cgram.y"
        { (yyval.treeptr) = alcTree(argument_expression_list_ar_cm_as, "argument_expression_list", 3, (yyvsp[-2].treeptr), (yyvsp[-1].treeptr), (yyvsp[0].treeptr)); }
#line 3276 "cgram.tab.c"
    break;

  case 234:
#line 817 "cgram.y"
        { (yyval.treeptr) = alcTree(constant_ic, "constant", 0, (yyvsp[0].treeptr)); }
#line 3282 "cgram.tab.c"
    break;

  case 235:
#line 819 "cgram.y"
        { (yyval.treeptr) = alcTree(constant_cc, "constant", 0, (yyvsp[0].treeptr)); }
#line 3288 "cgram.tab.c"
    break;

  case 236:
#line 821 "cgram.y"
        { (yyval.treeptr) = alcTree(constant_fc, "constant", 0, (yyvsp[0].treeptr)); }
#line 3294 "cgram.tab.c"
    break;

  case 237:
#line 823 "cgram.y"
        { (yyval.treeptr) = alcTree(constant_en, "constant", 0, (yyvsp[0].treeptr)); }
#line 3300 "cgram.tab.c"
    break;


#line 3304 "cgram.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 826 "cgram.y"

