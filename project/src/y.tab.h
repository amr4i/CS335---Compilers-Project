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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    IFX = 258,
    ELSE = 259,
    CONST = 260,
    CONTINUE = 261,
    DEFAULT = 262,
    DO = 263,
    FINALLY = 264,
    FOR = 265,
    GOTO = 266,
    IF = 267,
    IN = 268,
    NAMESPACE = 269,
    PARAMS = 270,
    REF = 271,
    RETURN = 272,
    STRUCT = 273,
    SWITCH = 274,
    THROW = 275,
    TRY = 276,
    TYPEOF = 277,
    USING = 278,
    VOID = 279,
    WHILE = 280,
    SIMPLE_ESC_SEQ = 281,
    CHAR_LITERAL = 282,
    REG_STR_LITERAL = 283,
    VER_STR_LITERAL = 284,
    DQM = 285,
    RAND = 286,
    ROR = 287,
    REQ = 288,
    RNE = 289,
    LE = 290,
    GE = 291,
    APLUS = 292,
    AMINUS = 293,
    AMULT = 294,
    ADIV = 295,
    AMOD = 296,
    AAND = 297,
    AOR = 298,
    ACARET = 299,
    LSHIFT = 300,
    LSHIFTEQ = 301,
    WHERE = 302,
    TRUE = 303,
    FALSE = 304,
    DCLN = 305,
    RSHIFT = 306,
    RSHIFTEQ = 307,
    INT = 308,
    CHAR = 309,
    LONG = 310,
    OBJECT = 311,
    STRING = 312,
    BOOL = 313,
    ID = 314,
    NULL_LIT = 315,
    THIS = 316,
    INCR = 317,
    DECR = 318,
    NEW = 319,
    PUBLIC = 320,
    PROTECTED = 321,
    PRIVATE = 322,
    BREAK = 323,
    CASE = 324,
    CATCH = 325,
    BASE = 326,
    CLASS = 327,
    DINT_LITERAL = 328,
    HDINT_LITERAL = 329
  };
#endif
/* Tokens.  */
#define IFX 258
#define ELSE 259
#define CONST 260
#define CONTINUE 261
#define DEFAULT 262
#define DO 263
#define FINALLY 264
#define FOR 265
#define GOTO 266
#define IF 267
#define IN 268
#define NAMESPACE 269
#define PARAMS 270
#define REF 271
#define RETURN 272
#define STRUCT 273
#define SWITCH 274
#define THROW 275
#define TRY 276
#define TYPEOF 277
#define USING 278
#define VOID 279
#define WHILE 280
#define SIMPLE_ESC_SEQ 281
#define CHAR_LITERAL 282
#define REG_STR_LITERAL 283
#define VER_STR_LITERAL 284
#define DQM 285
#define RAND 286
#define ROR 287
#define REQ 288
#define RNE 289
#define LE 290
#define GE 291
#define APLUS 292
#define AMINUS 293
#define AMULT 294
#define ADIV 295
#define AMOD 296
#define AAND 297
#define AOR 298
#define ACARET 299
#define LSHIFT 300
#define LSHIFTEQ 301
#define WHERE 302
#define TRUE 303
#define FALSE 304
#define DCLN 305
#define RSHIFT 306
#define RSHIFTEQ 307
#define INT 308
#define CHAR 309
#define LONG 310
#define OBJECT 311
#define STRING 312
#define BOOL 313
#define ID 314
#define NULL_LIT 315
#define THIS 316
#define INCR 317
#define DECR 318
#define NEW 319
#define PUBLIC 320
#define PROTECTED 321
#define PRIVATE 322
#define BREAK 323
#define CASE 324
#define CATCH 325
#define BASE 326
#define CLASS 327
#define DINT_LITERAL 328
#define HDINT_LITERAL 329

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 31 "parser.ypp" /* yacc.c:1909  */

	int iVal;
	char *sVal;
	struct genNode* node;	

#line 208 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
