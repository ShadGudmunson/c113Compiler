/* A Bison parser, made by GNU Bison 3.5.1.  */

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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

#line 151 "cgram.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CGRAM_TAB_H_INCLUDED  */
