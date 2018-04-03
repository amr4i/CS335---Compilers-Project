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
    FOREACH = 266,
    GOTO = 267,
    IF = 268,
    IN = 269,
    NAMESPACE = 270,
    PARAMS = 271,
    REF = 272,
    RETURN = 273,
    STRUCT = 274,
    SWITCH = 275,
    THROW = 276,
    TRY = 277,
    TYPEOF = 278,
    USING = 279,
    VOID = 280,
    WHILE = 281,
    SIMPLE_ESC_SEQ = 282,
    CHAR_LITERAL = 283,
    REG_STR_LITERAL = 284,
    VER_STR_LITERAL = 285,
    DQM = 286,
    RAND = 287,
    ROR = 288,
    REQ = 289,
    RNE = 290,
    LE = 291,
    GE = 292,
    APLUS = 293,
    AMINUS = 294,
    AMULT = 295,
    ADIV = 296,
    AMOD = 297,
    AAND = 298,
    AOR = 299,
    ACARET = 300,
    LSHIFT = 301,
    LSHIFTEQ = 302,
    WHERE = 303,
    TRUE = 304,
    FALSE = 305,
    DCLN = 306,
    RSHIFT = 307,
    RSHIFTEQ = 308,
    INT = 309,
    CHAR = 310,
    LONG = 311,
    OBJECT = 312,
    STRING = 313,
    BOOL = 314,
    ID = 315,
    NULL_LIT = 316,
    THIS = 317,
    INCR = 318,
    DECR = 319,
    NEW = 320,
    PUBLIC = 321,
    PROTECTED = 322,
    PRIVATE = 323,
    BREAK = 324,
    CASE = 325,
    CATCH = 326,
    BASE = 327,
    CLASS = 328,
    DINT_LITERAL = 329,
    HDINT_LITERAL = 330
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
#define FOREACH 266
#define GOTO 267
#define IF 268
#define IN 269
#define NAMESPACE 270
#define PARAMS 271
#define REF 272
#define RETURN 273
#define STRUCT 274
#define SWITCH 275
#define THROW 276
#define TRY 277
#define TYPEOF 278
#define USING 279
#define VOID 280
#define WHILE 281
#define SIMPLE_ESC_SEQ 282
#define CHAR_LITERAL 283
#define REG_STR_LITERAL 284
#define VER_STR_LITERAL 285
#define DQM 286
#define RAND 287
#define ROR 288
#define REQ 289
#define RNE 290
#define LE 291
#define GE 292
#define APLUS 293
#define AMINUS 294
#define AMULT 295
#define ADIV 296
#define AMOD 297
#define AAND 298
#define AOR 299
#define ACARET 300
#define LSHIFT 301
#define LSHIFTEQ 302
#define WHERE 303
#define TRUE 304
#define FALSE 305
#define DCLN 306
#define RSHIFT 307
#define RSHIFTEQ 308
#define INT 309
#define CHAR 310
#define LONG 311
#define OBJECT 312
#define STRING 313
#define BOOL 314
#define ID 315
#define NULL_LIT 316
#define THIS 317
#define INCR 318
#define DECR 319
#define NEW 320
#define PUBLIC 321
#define PROTECTED 322
#define PRIVATE 323
#define BREAK 324
#define CASE 325
#define CATCH 326
#define BASE 327
#define CLASS 328
#define DINT_LITERAL 329
#define HDINT_LITERAL 330

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 30 "src/parser.ypp" /* yacc.c:1909  */

	int iVal;
	char *sVal;
	struct genNode* node;	

#line 210 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
