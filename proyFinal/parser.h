/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

#ifndef YY_YY_INCLUDE_PARSER_H_INCLUDED
# define YY_YY_INCLUDE_PARSER_H_INCLUDED
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
    INT = 258,
    FLOAT = 259,
    CHAR = 260,
    VOID = 261,
    STRUCT = 262,
    IF = 263,
    ELSE = 264,
    WHILE = 265,
    DO = 266,
    FOR = 267,
    SWITCH = 268,
    CASE = 269,
    BREAK = 270,
    DEFAULT = 271,
    FUNCT = 272,
    RETURN = 273,
    PRINT = 274,
    TRUE = 275,
    FALSE = 276,
    CCHAR = 277,
    STR = 278,
    NUMERO = 279,
    DP = 280,
    PYC = 281,
    LI = 282,
    LD = 283,
    COMA = 284,
    ASIG = 285,
    OR = 286,
    AND = 287,
    EQ = 288,
    NEQ = 289,
    LT = 290,
    LE = 291,
    GT = 292,
    GE = 293,
    MAS = 294,
    MEN = 295,
    MUL = 296,
    DIV = 297,
    MOD = 298,
    NOT = 299,
    PTO = 300,
    CI = 301,
    CD = 302,
    PI = 303,
    PD = 304,
    ID = 305
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 26 "src/parser.y" /* yacc.c:1909  */

    struct {
        enum TT tipo;
        char sval[16];
        union {
            int i;
            float f;
        } val;
    } num;
    // apunta a alguna entrada en la tabla de tipos
    struct tipo *tipo;
    struct {
        enum TT tipo;
        // stack de direcciones siguientes
        struct list_head *next;
    } sent;
    struct {
        // Almacena si es cierta (1) o falsa (0)
        u8 val;
        // Almacena un stack de direcciones que almacena el numero de las
        // instrucciones que deben de incluir la etiqueta verdadra o falsa
        struct list_head * true, *false;
    } cond;
    struct {
        enum TT tipo;
        size_t tam;
        char dir[16];
    } expr;
    char str16[16];

#line 136 "include/parser.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_INCLUDE_PARSER_H_INCLUDED  */
