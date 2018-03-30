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
    BASE = 260,
    BOOL = 261,
    BREAK = 262,
    CASE = 263,
    CATCH = 264,
    CHAR = 265,
    CLASS = 266,
    CONST = 267,
    CONTINUE = 268,
    DEFAULT = 269,
    DO = 270,
    FALSE = 271,
    FINALLY = 272,
    FOR = 273,
    FOREACH = 274,
    GOTO = 275,
    IF = 276,
    IN = 277,
    INT = 278,
    LONG = 279,
    NAMESPACE = 280,
    NEW = 281,
    NULL_LIT = 282,
    OBJECT = 283,
    PARAMS = 284,
    PRIVATE = 285,
    PROTECTED = 286,
    PUBLIC = 287,
    REF = 288,
    RETURN = 289,
    STRING = 290,
    STRUCT = 291,
    SWITCH = 292,
    THIS = 293,
    THROW = 294,
    TRUE = 295,
    TRY = 296,
    TYPEOF = 297,
    UINT = 298,
    ULONG = 299,
    USING = 300,
    VOID = 301,
    WHILE = 302,
    ID = 303,
    DINT_LITERAL = 304,
    HDINT_LITERAL = 305,
    SIMPLE_ESC_SEQ = 306,
    CHAR_LITERAL = 307,
    REG_STR_LITERAL = 308,
    VER_STR_LITERAL = 309,
    DQM = 310,
    DCLN = 311,
    INCR = 312,
    DECR = 313,
    RAND = 314,
    ROR = 315,
    REQ = 316,
    RNE = 317,
    LE = 318,
    GE = 319,
    APLUS = 320,
    AMINUS = 321,
    AMULT = 322,
    ADIV = 323,
    AMOD = 324,
    AAND = 325,
    AOR = 326,
    ACARET = 327,
    LSHIFT = 328,
    LSHIFTEQ = 329,
    RSHIFT = 330,
    RSHIFTEQ = 331,
    WHERE = 332
  };
#endif
/* Tokens.  */
#define IFX 258
#define ELSE 259
#define BASE 260
#define BOOL 261
#define BREAK 262
#define CASE 263
#define CATCH 264
#define CHAR 265
#define CLASS 266
#define CONST 267
#define CONTINUE 268
#define DEFAULT 269
#define DO 270
#define FALSE 271
#define FINALLY 272
#define FOR 273
#define FOREACH 274
#define GOTO 275
#define IF 276
#define IN 277
#define INT 278
#define LONG 279
#define NAMESPACE 280
#define NEW 281
#define NULL_LIT 282
#define OBJECT 283
#define PARAMS 284
#define PRIVATE 285
#define PROTECTED 286
#define PUBLIC 287
#define REF 288
#define RETURN 289
#define STRING 290
#define STRUCT 291
#define SWITCH 292
#define THIS 293
#define THROW 294
#define TRUE 295
#define TRY 296
#define TYPEOF 297
#define UINT 298
#define ULONG 299
#define USING 300
#define VOID 301
#define WHILE 302
#define ID 303
#define DINT_LITERAL 304
#define HDINT_LITERAL 305
#define SIMPLE_ESC_SEQ 306
#define CHAR_LITERAL 307
#define REG_STR_LITERAL 308
#define VER_STR_LITERAL 309
#define DQM 310
#define DCLN 311
#define INCR 312
#define DECR 313
#define RAND 314
#define ROR 315
#define REQ 316
#define RNE 317
#define LE 318
#define GE 319
#define APLUS 320
#define AMINUS 321
#define AMULT 322
#define ADIV 323
#define AMOD 324
#define AAND 325
#define AOR 326
#define ACARET 327
#define LSHIFT 328
#define LSHIFTEQ 329
#define RSHIFT 330
#define RSHIFTEQ 331
#define WHERE 332

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 22 "src/asgn3.ypp" /* yacc.c:1909  */

	int iVal;
	char* sVal;
	char cVal;	

#line 214 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
