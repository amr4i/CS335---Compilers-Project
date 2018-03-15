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
    BASE = 258,
    BOOL = 259,
    BREAK = 260,
    CASE = 261,
    CATCH = 262,
    CHAR = 263,
    CLASS = 264,
    CONST = 265,
    CONTINUE = 266,
    DEFAULT = 267,
    DO = 268,
    ELSE = 269,
    FALSE = 270,
    FINALLY = 271,
    FOR = 272,
    FOREACH = 273,
    GOTO = 274,
    IF = 275,
    IN = 276,
    INT = 277,
    LONG = 278,
    NAMESPACE = 279,
    NEW = 280,
    NULL_LIT = 281,
    OBJECT = 282,
    PARAMS = 283,
    PRIVATE = 284,
    PROTECTED = 285,
    PUBLIC = 286,
    REF = 287,
    RETURN = 288,
    STRING = 289,
    STRUCT = 290,
    SWITCH = 291,
    THIS = 292,
    THROW = 293,
    TRUE = 294,
    TRY = 295,
    TYPEOF = 296,
    UINT = 297,
    ULONG = 298,
    USING = 299,
    VOID = 300,
    WHILE = 301,
    ID = 302,
    DINT_LITERAL = 303,
    HDINT_LITERAL = 304,
    SIMPLE_ESC_SEQ = 305,
    CHAR_LITERAL = 306,
    REG_STR_LITERAL = 307,
    VER_STR_LITERAL = 308,
    DQM = 309,
    DCLN = 310,
    INCR = 311,
    DECR = 312,
    RAND = 313,
    ROR = 314,
    REQ = 315,
    RNE = 316,
    LE = 317,
    GE = 318,
    APLUS = 319,
    AMINUS = 320,
    AMULT = 321,
    ADIV = 322,
    AMOD = 323,
    AAND = 324,
    AOR = 325,
    ACARET = 326,
    LSHIFT = 327,
    LSHIFTEQ = 328,
    RSHIFT = 329,
    RSHIFTEQ = 330,
    NEWLINE = 331,
    COMMENT = 332,
    WHERE = 333
  };
#endif
/* Tokens.  */
#define BASE 258
#define BOOL 259
#define BREAK 260
#define CASE 261
#define CATCH 262
#define CHAR 263
#define CLASS 264
#define CONST 265
#define CONTINUE 266
#define DEFAULT 267
#define DO 268
#define ELSE 269
#define FALSE 270
#define FINALLY 271
#define FOR 272
#define FOREACH 273
#define GOTO 274
#define IF 275
#define IN 276
#define INT 277
#define LONG 278
#define NAMESPACE 279
#define NEW 280
#define NULL_LIT 281
#define OBJECT 282
#define PARAMS 283
#define PRIVATE 284
#define PROTECTED 285
#define PUBLIC 286
#define REF 287
#define RETURN 288
#define STRING 289
#define STRUCT 290
#define SWITCH 291
#define THIS 292
#define THROW 293
#define TRUE 294
#define TRY 295
#define TYPEOF 296
#define UINT 297
#define ULONG 298
#define USING 299
#define VOID 300
#define WHILE 301
#define ID 302
#define DINT_LITERAL 303
#define HDINT_LITERAL 304
#define SIMPLE_ESC_SEQ 305
#define CHAR_LITERAL 306
#define REG_STR_LITERAL 307
#define VER_STR_LITERAL 308
#define DQM 309
#define DCLN 310
#define INCR 311
#define DECR 312
#define RAND 313
#define ROR 314
#define REQ 315
#define RNE 316
#define LE 317
#define GE 318
#define APLUS 319
#define AMINUS 320
#define AMULT 321
#define ADIV 322
#define AMOD 323
#define AAND 324
#define AOR 325
#define ACARET 326
#define LSHIFT 327
#define LSHIFTEQ 328
#define RSHIFT 329
#define RSHIFTEQ 330
#define NEWLINE 331
#define COMMENT 332
#define WHERE 333

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 23 "src/asgn3.ypp" /* yacc.c:1909  */

	int iVal;
	char* sVal;
	char cVal;	

#line 216 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
