/* A Bison parser, made by GNU Bison 3.7.3.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_CGRAM_TAB_H_INCLUDED
# define YY_YY_CGRAM_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    BAD_TOKEN = 258,               /* BAD_TOKEN  */
    ICON = 259,                    /* ICON  */
    CCON = 260,                    /* CCON  */
    FCON = 261,                    /* FCON  */
    ENUMERATION_CONSTANT = 262,    /* ENUMERATION_CONSTANT  */
    IDENTIFIER = 263,              /* IDENTIFIER  */
    STRING = 264,                  /* STRING  */
    SIZEOF = 265,                  /* SIZEOF  */
    INCOP = 266,                   /* INCOP  */
    DECOP = 267,                   /* DECOP  */
    SHL = 268,                     /* SHL  */
    SHR = 269,                     /* SHR  */
    LE = 270,                      /* LE  */
    GE = 271,                      /* GE  */
    EQ = 272,                      /* EQ  */
    NE = 273,                      /* NE  */
    ANDAND = 274,                  /* ANDAND  */
    OROR = 275,                    /* OROR  */
    MUASN = 276,                   /* MUASN  */
    DIASN = 277,                   /* DIASN  */
    MOASN = 278,                   /* MOASN  */
    PLASN = 279,                   /* PLASN  */
    ASN = 280,                     /* ASN  */
    MIASN = 281,                   /* MIASN  */
    SLASN = 282,                   /* SLASN  */
    SRASN = 283,                   /* SRASN  */
    ANASN = 284,                   /* ANASN  */
    ERASN = 285,                   /* ERASN  */
    ORASN = 286,                   /* ORASN  */
    TYPEDEF_NAME = 287,            /* TYPEDEF_NAME  */
    CM = 288,                      /* CM  */
    SM = 289,                      /* SM  */
    LT = 290,                      /* LT  */
    GT = 291,                      /* GT  */
    PLUS = 292,                    /* PLUS  */
    MINUS = 293,                   /* MINUS  */
    MUL = 294,                     /* MUL  */
    DIV = 295,                     /* DIV  */
    MOD = 296,                     /* MOD  */
    LP = 297,                      /* LP  */
    RP = 298,                      /* RP  */
    LB = 299,                      /* LB  */
    RB = 300,                      /* RB  */
    LC = 301,                      /* LC  */
    RC = 302,                      /* RC  */
    COLON = 303,                   /* COLON  */
    QUEST = 304,                   /* QUEST  */
    AND = 305,                     /* AND  */
    OR = 306,                      /* OR  */
    ER = 307,                      /* ER  */
    NOT = 308,                     /* NOT  */
    FOLLOW = 309,                  /* FOLLOW  */
    BANG = 310,                    /* BANG  */
    DOT = 311,                     /* DOT  */
    TYPEDEF = 312,                 /* TYPEDEF  */
    EXTERN = 313,                  /* EXTERN  */
    STATIC = 314,                  /* STATIC  */
    AUTO = 315,                    /* AUTO  */
    REGISTER = 316,                /* REGISTER  */
    CHAR = 317,                    /* CHAR  */
    SHORT = 318,                   /* SHORT  */
    INT = 319,                     /* INT  */
    LONG = 320,                    /* LONG  */
    SIGNED = 321,                  /* SIGNED  */
    UNSIGNED = 322,                /* UNSIGNED  */
    FLOAT = 323,                   /* FLOAT  */
    DOUBLE = 324,                  /* DOUBLE  */
    CONST = 325,                   /* CONST  */
    VOLATILE = 326,                /* VOLATILE  */
    VOID = 327,                    /* VOID  */
    STRUCT = 328,                  /* STRUCT  */
    UNION = 329,                   /* UNION  */
    ENUM = 330,                    /* ENUM  */
    ELIPSIS = 331,                 /* ELIPSIS  */
    CASE = 332,                    /* CASE  */
    DEFAULT = 333,                 /* DEFAULT  */
    IF = 334,                      /* IF  */
    SWITCH = 335,                  /* SWITCH  */
    WHILE = 336,                   /* WHILE  */
    DO = 337,                      /* DO  */
    FOR = 338,                     /* FOR  */
    GOTO = 339,                    /* GOTO  */
    CONTINUE = 340,                /* CONTINUE  */
    BREAK = 341,                   /* BREAK  */
    RETURN = 342,                  /* RETURN  */
    THEN = 343,                    /* THEN  */
    ELSE = 344                     /* ELSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CGRAM_TAB_H_INCLUDED  */
