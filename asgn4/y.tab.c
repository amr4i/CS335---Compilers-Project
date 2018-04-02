/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "src/parser.ypp" /* yacc.c:339  */

	#include <math.h>
	#include <cstdio> 
	#include <map>
	#include <utility>
	#include <vector>
	#include <string>
	#include <iostream>
	#include <algorithm>
	#include <iomanip>
	#include <stdarg.h>
	#include <cstdlib>
	#define YYDEBUG 1
	#include "src/genTAC.cpp"
	#include "y.tab.h"
	using namespace std;
	extern void yyerror(char *c);
	//extern int 1234555;

	int yylex(void);

	SymTable* ST = new SymTable();

#line 90 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
    USING = 298,
    VOID = 299,
    WHILE = 300,
    ID = 301,
    DINT_LITERAL = 302,
    HDINT_LITERAL = 303,
    SIMPLE_ESC_SEQ = 304,
    CHAR_LITERAL = 305,
    REG_STR_LITERAL = 306,
    VER_STR_LITERAL = 307,
    DQM = 308,
    DCLN = 309,
    INCR = 310,
    DECR = 311,
    RAND = 312,
    ROR = 313,
    REQ = 314,
    RNE = 315,
    LE = 316,
    GE = 317,
    APLUS = 318,
    AMINUS = 319,
    AMULT = 320,
    ADIV = 321,
    AMOD = 322,
    AAND = 323,
    AOR = 324,
    ACARET = 325,
    LSHIFT = 326,
    LSHIFTEQ = 327,
    RSHIFT = 328,
    WHERE = 329,
    RSHIFTEQ = 330
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
#define USING 298
#define VOID 299
#define WHILE 300
#define ID 301
#define DINT_LITERAL 302
#define HDINT_LITERAL 303
#define SIMPLE_ESC_SEQ 304
#define CHAR_LITERAL 305
#define REG_STR_LITERAL 306
#define VER_STR_LITERAL 307
#define DQM 308
#define DCLN 309
#define INCR 310
#define DECR 311
#define RAND 312
#define ROR 313
#define REQ 314
#define RNE 315
#define LE 316
#define GE 317
#define APLUS 318
#define AMINUS 319
#define AMULT 320
#define ADIV 321
#define AMOD 322
#define AAND 323
#define AOR 324
#define ACARET 325
#define LSHIFT 326
#define LSHIFTEQ 327
#define RSHIFT 328
#define WHERE 329
#define RSHIFTEQ 330

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 27 "src/parser.ypp" /* yacc.c:355  */

	int iVal;
	char *sVal;
	char cVal;
	struct genNode* node;	

#line 287 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 304 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  34
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3438

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  100
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  172
/* YYNRULES -- Number of rules.  */
#define YYNRULES  396
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  670

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   330

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    87,     2,     2,     2,    93,    96,     2,
      79,    80,    91,    89,    77,    90,    81,    92,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    78,    99,
      94,    86,    95,    76,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    82,     2,    83,    97,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    84,    98,    85,    88,     2,     2,     2,
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
      75
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    74,    74,    78,    90,    94,    98,   102,   106,   112,
     119,   128,   135,   144,   158,   165,   174,   184,   186,   190,
     192,   194,   195,   199,   200,   204,   207,   210,   214,   217,
     220,   227,   229,   235,   241,   248,   254,   258,   263,   271,
     275,   276,   278,   279,   281,   283,   284,   286,   287,   288,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   301,
     308,   308,   310,   311,   313,   314,   315,   316,   317,   318,
     320,   321,   322,   323,   325,   327,   328,   330,   336,   337,
     339,   340,   341,   342,   344,   346,   348,   349,   350,   351,
     353,   354,   356,   357,   358,   360,   361,   363,   365,   366,
     368,   369,   371,   372,   374,   375,   377,   378,   379,   380,
     381,   382,   385,   386,   388,   390,   391,   392,   393,   395,
     396,   397,   405,   411,   417,   418,   419,   420,   423,   424,
     432,   440,   450,   451,   459,   469,   470,   478,   487,   488,
     496,   504,   512,   520,   521,   521,   529,   538,   539,   548,
     549,   558,   559,   568,   569,   578,   579,   588,   589,   598,
     599,   606,   611,   612,   613,   614,   615,   616,   617,   618,
     619,   620,   621,   623,   624,   626,   628,   630,   634,   635,
     636,   638,   639,   640,   641,   642,   643,   644,   645,   647,
     651,   653,   654,   656,   658,   660,   661,   663,   665,   667,
     668,   670,   671,   673,   674,   676,   678,   680,   681,   682,
     683,   684,   685,   686,   688,   689,   691,   692,   694,   696,
     697,   699,   700,   702,   704,   705,   707,   708,   710,   711,
     712,   713,   715,   717,   719,   720,   721,   722,   723,   724,
     725,   726,   728,   729,   731,   733,   735,   736,   738,   740,
     741,   742,   743,   744,   746,   748,   750,   751,   752,   754,
     755,   757,   758,   760,   761,   762,   764,   766,   768,   770,
     772,   773,   777,   778,   779,   780,   782,   783,   785,   786,
     788,   789,   790,   791,   793,   794,   796,   797,   799,   801,
     803,   804,   806,   807,   809,   810,   812,   816,   817,   818,
     819,   820,   821,   822,   823,   825,   826,   828,   833,   838,
     843,   849,   851,   855,   857,   858,   860,   861,   862,   863,
     864,   865,   867,   868,   871,   872,   874,   876,   877,   880,
     881,   883,   884,   885,   886,   888,   890,   891,   892,   893,
     894,   895,   896,   897,   900,   902,   903,   905,   906,   907,
     909,   910,   912,   913,   914,   915,   917,   919,   920,   922,
     924,   925,   928,   929,   930,   931,   933,   934,   935,   936,
     938,   939,   941,   943,   944,   948,   949,   950,   951,   954,
     955,   957,   958,   960,   961,   962,   963,   964,   968,   973,
     974,   976,   977,   978,   980,   981,   985
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IFX", "ELSE", "BASE", "BOOL", "BREAK",
  "CASE", "CATCH", "CHAR", "CLASS", "CONST", "CONTINUE", "DEFAULT", "DO",
  "FALSE", "FINALLY", "FOR", "FOREACH", "GOTO", "IF", "IN", "INT", "LONG",
  "NAMESPACE", "NEW", "NULL_LIT", "OBJECT", "PARAMS", "PRIVATE",
  "PROTECTED", "PUBLIC", "REF", "RETURN", "STRING", "STRUCT", "SWITCH",
  "THIS", "THROW", "TRUE", "TRY", "TYPEOF", "USING", "VOID", "WHILE", "ID",
  "DINT_LITERAL", "HDINT_LITERAL", "SIMPLE_ESC_SEQ", "CHAR_LITERAL",
  "REG_STR_LITERAL", "VER_STR_LITERAL", "DQM", "DCLN", "INCR", "DECR",
  "RAND", "ROR", "REQ", "RNE", "LE", "GE", "APLUS", "AMINUS", "AMULT",
  "ADIV", "AMOD", "AAND", "AOR", "ACARET", "LSHIFT", "LSHIFTEQ", "RSHIFT",
  "WHERE", "RSHIFTEQ", "'?'", "','", "':'", "'('", "')'", "'.'", "'['",
  "']'", "'{'", "'}'", "'='", "'!'", "'~'", "'+'", "'-'", "'*'", "'/'",
  "'%'", "'<'", "'>'", "'&'", "'^'", "'|'", "';'", "$accept", "start",
  "identifier", "literal", "boolean_literal", "integer_literal",
  "character_literal", "string_literal", "null_literal", "right_shift",
  "right_shift_assignment", "namespace_name", "type_name",
  "namespace_or_type_name", "type", "non_array_type", "simple_type",
  "numeric_type", "integral_type", "nullable_type",
  "non_nullable_value_type", "class_type", "variable_reference",
  "argument_list", "argument", "argument_name", "argument_value",
  "primary_expression", "primary_no_array_creation_expression",
  "parenthesized_expression", "member_access", "$@1", "predefined_type",
  "invocation_expression", "element_access", "expression_list",
  "this_access", "base_access", "postfix_expression",
  "post_increment_expression", "post_decrement_expression",
  "object_creation_expression", "object_or_collection_initializer",
  "object_initializer", "member_initializer_list", "member_initializer",
  "initializer_value", "collection_initializer",
  "element_initializer_list", "element_initializer",
  "array_creation_expression", "typeof_expression",
  "default_value_expression", "unary_expression_not_plusminus",
  "unary_expression", "pre_increment_expression",
  "pre_decrement_expression", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "$@2", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "conditional_and_expression", "conditional_or_expression",
  "null_coalescing_expression", "conditional_expression", "assignment",
  "assignment_operator", "expression", "non_assignment_expression",
  "constant_expression", "boolean_expression", "statement",
  "embedded_statement", "block", "statement_list", "empty_statement",
  "labeled_statement", "declaration_statement",
  "local_variable_declaration", "local_variable_type",
  "local_variable_declarators", "local_variable_declarator",
  "local_variable_initializer", "local_constant_declaration",
  "expression_statement", "statement_expression", "selection_statement",
  "if_statement", "switch_statement", "switch_block", "switch_sections",
  "switch_section", "switch_labels", "switch_label", "iteration_statement",
  "while_statement", "do_statement", "for_statement", "for_initializer",
  "for_condition", "for_iterator", "statement_expression_list",
  "foreach_statement", "jump_statement", "break_statement",
  "continue_statement", "goto_statement", "return_statement",
  "throw_statement", "try_statement", "catch_clauses",
  "general_catch_clause", "finally_clause", "using_statement",
  "resource_acquisition", "compilation_unit", "namespace_declaration",
  "qualified_identifier", "namespace_body", "using_directives",
  "using_directive", "using_alias_directive", "using_namespace_directive",
  "namespace_member_declarations", "namespace_member_declaration",
  "type_declaration", "qualified_alias_member", "class_declaration",
  "modifiers", "modifier", "class_base", "class_body",
  "class_member_declarations", "class_member_declaration",
  "constant_declaration", "constant_declarators", "constant_declarator",
  "field_declaration", "variable_declarators", "variable_declarator",
  "variable_initializer", "method_declaration", "method_header",
  "member_name", "method_body", "formal_parameter_list",
  "fixed_parameters", "fixed_parameter", "default_argument",
  "parameter_modifier", "parameter_array", "constructor_declaration",
  "constructor_declarator", "constructor_initializer", "constructor_body",
  "destructor_declaration", "destructor_body", "struct_declaration",
  "struct_body", "struct_member_declarations", "struct_member_declaration",
  "array_type", "rank_specifier", "array_initializer",
  "variable_initializer_list", "epsilon", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,    63,    44,    58,    40,
      41,    46,    91,    93,   123,   125,    61,    33,   126,    43,
      45,    42,    47,    37,    60,    62,    38,    94,   124,    59
};
# endif

#define YYPACT_NINF -576

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-576)))

#define YYTABLE_NINF -332

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1036,    79,    79,  -576,  -576,  -576,  -576,    79,    79,   137,
    -576,  -576,  1036,  -576,  -576,  -576,   178,  -576,  -576,  -576,
     241,  -576,  -576,  -576,  -576,   181,  -576,    52,   106,   -12,
      82,  -576,   130,  -576,  -576,  -576,   178,  -576,    79,    79,
    -576,   164,   565,   139,   156,    79,   207,   159,  1115,   204,
      79,    79,  -576,   181,   106,  -576,  -576,  -576,  -576,  -576,
     298,  -576,  -576,    79,  -576,    79,    -6,  -576,  -576,    79,
     147,   233,  -576,  -576,  -576,   237,  -576,  -576,  3390,  1084,
    -576,  -576,  -576,  -576,    89,  -576,   132,  -576,  -576,   231,
    -576,  -576,  -576,   536,   456,  -576,  -576,  -576,  -576,  -576,
    -576,  -576,  3353,  -576,  -576,  -576,   295,   261,   139,   269,
     279,    79,   130,   317,   320,   374,    76,    58,  -576,   321,
     212,  -576,  -576,   298,    79,    79,   132,  -576,  -576,  1168,
    -576,  -576,  -576,  -576,  -576,  -576,  -576,  -576,   693,  -576,
    -576,  -576,  -576,   305,  -576,  -576,   325,    68,  -576,   474,
     326,   298,  -576,  -576,   337,    79,   336,   341,  -576,   298,
    -576,  2902,    79,  -576,   584,   338,  -576,    79,   343,    97,
     344,  -576,   -29,   345,   329,   348,   298,   331,   352,  1545,
    -576,   353,   355,    67,   358,   357,   359,   277,  -576,   360,
    1689,   364,   368,  -576,  1747,  -576,   335,   369,   370,   377,
    -576,  -576,  -576,  -576,  -576,  3189,  3189,  2988,  -576,  3189,
    3189,  3189,  3189,  -576,    63,  -576,  -576,  -576,  -576,  -576,
    -576,  -576,   379,   215,  3303,  -576,   381,   121,  -576,  -576,
    -576,   186,   145,   176,   219,  -576,  -576,  -576,  -576,   866,
    -576,  -576,  -576,  -576,  -576,  -576,  -576,  1282,  -576,  -576,
    -576,   356,    79,   366,  -576,   367,  -576,  -576,  -576,  -576,
    -576,  -576,  -576,  -576,  -576,  -576,  -576,  -576,  -576,  -576,
    -576,  -576,    37,   382,  -576,  -576,  3189,    79,  -576,  -576,
     378,   146,   147,    79,   127,  -576,   371,   337,   882,    79,
    -576,  -576,  -576,  -576,  -576,  -576,  2153,  -576,  -576,  -576,
    -576,   866,   271,   -24,   268,    90,   210,   328,   342,   372,
     411,   240,   400,  -576,  -576,  -576,  -576,   272,   382,  -576,
    -576,   392,  -576,  -576,   399,  -576,   103,   656,  -576,   765,
      79,  3189,  -576,    79,  -576,   298,   438,  1631,   298,  3189,
     386,   390,  3189,   412,   408,   409,   409,  -576,   395,  3189,
    -576,   402,    54,   296,  3246,  3189,  -576,  -576,   424,   426,
     428,   246,  -576,  -576,  -576,  -576,  1458,    79,  2239,  3189,
    -576,    79,  -576,  -576,  -576,  -576,  -576,  -576,  -576,  -576,
    -576,  -576,  -576,  -576,  -576,  -576,  3189,  -576,  -576,  -576,
     425,   433,  -576,  -576,  -576,  2297,    79,  -576,  -576,  -576,
    -576,  -576,  -576,  -576,  -576,   434,   435,  3189,  -576,  -576,
    -576,  -576,   371,  -576,  -576,   151,  3189,  3189,  3189,  3189,
    3189,  3189,  -576,  3189,  3189,  3189,  3189,  3189,  3189,  3189,
    3189,  3189,  3189,  3189,  3189,  3189,  3189,  -576,  -576,  -576,
     436,  -576,   437,  -576,   432,   441,   450,   462,   464,  1805,
    -576,  -576,   445,   468,    79,   447,  -576,  -576,  -576,   469,
    2355,  2413,  -576,  -576,  -576,   470,  -576,   335,   335,   531,
    -576,  -576,   472,   473,  -576,  -576,   476,   477,  3189,  3189,
    -576,   479,  -576,  -576,  3189,  -576,    77,    92,  -576,  3046,
    -576,  -576,   481,  -576,  -576,  2902,    79,  -576,   257,  -576,
    2471,  2529,  -576,  -576,  2587,  -576,  -576,  -576,  -576,  -576,
     271,   271,   -24,   -24,   268,   268,   268,   268,    90,    90,
     210,   328,   342,   372,  -576,   411,   482,  -576,  -576,  -576,
    3189,  -576,  3189,  1921,  -576,   466,  1863,  2673,   547,  -576,
    1545,   486,   258,   490,   497,  -576,  -576,  -576,  -576,  -576,
    1545,  1545,  -576,  -576,  3189,  -576,  -576,  -576,  -576,  3046,
    -576,  -576,  -576,  -576,  -576,  -576,  -576,  -576,  -576,   270,
    -576,   281,  -576,  -576,  -576,  3189,  -576,   494,  1545,   502,
     468,  1979,  2037,   499,  -576,  3189,   581,  2730,  -576,  -576,
    -576,   486,   287,    17,  -576,  -576,  -576,  -576,  -576,  -576,
    -576,  -576,   500,  -576,  1545,  1545,   522,  1545,   523,  2095,
     524,  1545,  3189,  -576,    61,   163,  -576,   183,  -576,  -576,
    -576,   409,  -576,  3189,   527,  -576,    26,  -576,  1370,  -576,
    -576,  -576,  -576,  1545,  -576,  1545,  1545,   526,  1545,  -576,
     525,  3103,   -13,  -576,  2816,  -576,  -576,   537,  -576,  -576,
    -576,   303,  1458,  -576,  -576,  -576,  -576,  1545,  -576,  -576,
    -576,  -576,  -576,  -576,   528,  -576,  -576,  -576,  -576,  -576
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     396,     0,     0,   307,   310,   309,   308,     0,     0,     0,
       2,   292,   274,   284,   286,   287,   273,   290,   293,   294,
       0,   305,   295,   275,     3,     0,   278,     0,     0,   278,
       0,    19,    21,    22,     1,   285,   272,   291,     0,     0,
     306,     0,     0,     0,   297,     0,     0,   276,     0,   375,
       0,     0,   289,     0,     0,    37,    38,   311,    30,    34,
       0,    32,    33,     0,   312,     0,   278,    25,    20,     0,
      23,    26,    28,    31,    27,     0,    29,   321,     0,     0,
     314,   316,   317,   318,     0,   319,     0,   320,    24,   299,
     300,   279,   280,     0,     0,   277,   379,   387,   383,   384,
     385,   386,     0,   381,   377,   296,   278,     0,     0,   298,
     376,     0,   344,     0,     0,     0,   278,     0,   329,     0,
       0,   388,    35,     0,     0,     0,     0,   313,   315,     0,
     346,   345,   335,   371,   370,   360,   303,   282,     0,   281,
     380,   382,   288,   301,   302,   378,     0,     0,   324,     0,
       0,     0,   357,   358,   362,     0,     0,   347,   350,     0,
     349,     0,     0,   327,     0,     0,   389,     0,     0,     0,
       0,   361,     0,    30,     0,    34,     0,     0,     0,     0,
      10,     0,     0,     0,     0,    32,    33,     0,    16,    37,
       0,    38,     0,    77,     0,     9,     0,     0,     0,     0,
      11,    12,    13,    14,    15,     0,     0,     0,   189,     0,
       0,     0,     0,   193,   278,    50,     4,     5,     6,     7,
       8,   198,    80,    47,    49,    51,     0,    52,    53,    54,
      55,   115,    82,    83,    56,    48,    57,    58,   119,     0,
     212,   213,   118,   209,   191,   180,   181,     0,   182,   178,
     179,     0,     0,     0,   183,     0,   184,   214,   215,   185,
     228,   229,   230,   231,   186,   249,   250,   251,   252,   253,
     187,   188,    81,    22,   283,   304,     0,     0,   322,   340,
       0,     0,     0,     0,     0,   363,   352,   364,     0,     0,
      64,    65,    66,    67,    68,    69,     0,    52,    82,    83,
      56,   128,   132,   135,   138,   143,   147,   149,   151,   153,
     155,   157,   159,   175,   174,   333,   173,    81,     0,   332,
     334,   331,   330,   336,     0,   390,     0,     0,   328,     0,
       0,     0,   254,     0,   255,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    23,    24,     0,   259,     0,     0,
     261,     0,     0,     0,     0,     0,   122,   123,     0,     0,
       0,    81,   116,   117,   120,   121,     0,     0,     0,     0,
     124,     0,    84,    85,   163,   164,   165,   166,   167,   168,
     169,   170,   171,    18,   162,   172,     0,   190,   192,   195,
     201,   197,   199,   196,   206,     0,     0,   176,   326,   325,
     342,   374,   373,   372,   359,     0,     0,     0,   354,   365,
     351,   348,   353,   391,   394,     0,     0,     0,     0,     0,
       0,     0,    17,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   338,   323,   341,
       0,   337,     0,    78,     0,    75,   205,     0,     0,     0,
     242,   246,     0,   243,     0,     0,   258,   256,   177,     0,
       0,     0,   110,   111,   260,     0,   262,     0,     0,   263,
     266,   264,     0,     0,   271,   270,     0,     0,     0,     0,
      59,     0,   194,    60,     0,    70,   278,     0,    40,     0,
      42,    45,     0,    62,   161,     0,     0,    72,     0,    63,
       0,     0,   356,   355,     0,   392,   129,   130,   131,   128,
     133,   134,   136,   137,   141,   142,   139,   140,   144,   146,
     148,   150,   152,   154,   158,   156,     0,   343,   339,    79,
       0,   114,     0,     0,   244,     0,     0,     0,     0,   257,
       0,    86,     0,     0,     0,   267,   268,   265,   113,   112,
       0,     0,   127,   126,     0,    61,    46,    39,    44,     0,
      71,    43,    74,   203,   202,   204,   200,    73,   366,     0,
     368,     0,   393,   395,   145,     0,    76,     0,     0,     0,
     245,     0,     0,     0,   247,     0,   216,     0,    88,    90,
      91,    87,   106,     0,   218,   269,   232,   125,    41,   367,
     369,   160,     0,   234,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,   278,     0,    95,     0,   102,   104,
      89,   107,   108,     0,     0,   219,     0,   221,     0,   224,
     233,   237,   236,     0,   235,     0,     0,     0,     0,   217,
       0,     0,     0,    93,     0,   100,   109,     0,   227,   220,
     222,     0,   223,   225,   240,   239,   238,     0,   248,   105,
      99,    97,    98,    94,     0,    96,   101,   103,   226,   241
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -576,  -576,    -1,  -576,  -576,  -576,  -576,  -576,  -576,  -576,
    -576,  -576,  -576,    35,    48,   -95,   413,  -576,  -576,  -576,
    -576,   575,  -576,  -371,    59,  -576,   135,  -576,  -576,  -576,
    -576,  -576,  -576,   214,  -576,  -358,  -576,  -576,  -576,   226,
     340,   376,  -561,  -576,  -576,   -17,  -576,  -576,  -576,   -18,
    -576,  -576,  -576,   405,   105,  -576,  -576,  -576,   -32,   -47,
    -146,   -15,   201,  -576,   202,   200,   203,   199,  -576,   205,
    -576,   449,  -576,   695,  -575,  -337,  -338,  -244,  -161,   -76,
       9,  -576,  -576,  -576,  -198,   297,  -576,   144,  -576,  -576,
    -576,  -318,  -576,  -576,  -576,  -576,  -576,    18,  -576,    20,
    -576,  -576,  -576,  -576,  -576,   107,  -422,   309,  -576,  -576,
    -576,  -576,  -576,  -576,  -576,  -576,  -576,  -576,   180,  -576,
    -576,  -576,  -576,    19,  -576,   606,    14,  -576,  -576,    11,
       0,    -3,    98,  -576,    12,    15,   601,   -21,  -576,   578,
      -2,  -147,   383,     3,   533,   501,  -287,     7,  -576,   -40,
    -576,  -136,  -576,   373,   253,  -576,   380,    10,   589,   385,
     543,  -576,  -576,  -576,   616,  -576,   571,   -92,  -182,  -331,
    -576,  -576
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,   106,   215,   216,   217,   218,   219,   220,   423,
     385,    30,    67,    68,   221,    70,    71,    72,    73,    74,
      75,    76,   556,   487,   488,   489,   490,   222,   223,   224,
     225,   555,   226,   297,   228,   444,   229,   230,   231,   298,
     299,   300,   588,   589,   615,   616,   661,   590,   617,   618,
     235,   236,   237,   238,   301,   240,   241,   242,   302,   303,
     304,   305,   306,   574,   307,   308,   309,   310,   311,   312,
     313,   314,   386,   491,   316,   398,   534,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   391,   392,   564,   253,
     254,   255,   256,   257,   258,   594,   626,   627,   628,   629,
     259,   260,   261,   262,   452,   535,   579,   580,   263,   264,
     265,   266,   267,   268,   269,   270,   469,   470,   471,   271,
     476,    10,    11,   317,    47,    12,    13,    14,    15,    16,
      17,    18,   318,    19,    20,    21,    43,    44,    79,    80,
      81,   147,   148,    82,   117,   118,   319,    83,    84,   113,
     132,   156,   157,   158,   408,   159,   160,    85,    86,   285,
     135,    87,   403,    22,    49,   102,   103,    88,   121,   320,
     415,    23
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      25,    26,   455,   388,   459,   346,    28,    29,   131,   414,
     134,   492,   619,   280,   462,   463,    37,   477,   336,   451,
     326,    27,    89,    36,   498,   623,    35,    32,   324,   119,
     620,   624,   109,    24,   623,    40,    37,    53,    54,    77,
     624,    66,    50,    31,    91,    97,    98,    66,    50,   105,
     134,    99,   330,   331,    78,   100,   282,    94,   101,   283,
      78,    32,    26,   467,   114,   419,   420,    32,   116,   619,
      32,   468,   663,   115,    51,   339,    77,    66,    66,    32,
     660,   340,   112,   -21,   168,   170,   107,   143,   112,   542,
      69,    78,   344,    40,    37,   345,    69,    32,    32,    97,
      98,    66,   625,   543,   138,    99,    33,    35,   111,   100,
     146,   649,   101,    24,    78,    50,   395,    50,    45,   -21,
     352,    32,   482,    26,   116,    24,   125,    69,   214,   569,
     571,    50,   405,    45,    32,   162,    46,    34,    37,   450,
      33,   366,    32,   112,   112,   277,    33,   641,   272,    33,
      69,   424,   425,  -331,   286,   558,   475,   163,    33,   606,
     608,   321,   161,   155,   565,   406,   146,   278,    32,   559,
      32,   167,   560,   129,   162,  -331,    33,    33,    32,   481,
     277,    52,   341,    32,   426,   427,   446,   637,   130,     1,
      48,   440,    55,   442,   577,    32,   328,   155,  -207,    56,
      33,  -207,   438,     2,     3,   402,    32,   289,     4,     5,
       6,    45,   155,    33,     7,   451,   129,   573,     1,   584,
    -207,    33,  -210,    42,   333,  -210,   361,   273,   504,   120,
     129,   133,     2,     3,   239,   343,   505,     4,     5,     6,
     642,   372,   373,     7,  -210,   401,   214,    33,   643,    33,
       8,   390,    38,  -211,   640,    90,  -211,    33,    95,    41,
     644,   622,    33,   451,   451,    42,   272,     3,   645,   428,
     429,     4,     5,     6,    33,  -211,   146,    39,   514,   515,
     516,   517,   404,    58,   239,    33,   647,    59,   412,   165,
     646,   451,    92,   434,   368,   166,  -208,   369,   435,  -208,
      61,    62,    58,   104,    58,    55,    59,    32,    59,   -36,
     356,   357,    56,   122,   362,   363,   364,   365,  -208,    61,
      62,    61,    62,    24,    55,   395,    55,    45,   120,   443,
     136,    56,   146,    56,   559,   559,   155,   567,   591,   421,
     472,   422,    24,   227,    24,   273,    32,   559,    32,    50,
     599,   395,   239,    45,    32,   232,   272,    32,   559,   120,
     142,   600,   416,   417,   418,   214,   483,   486,   144,   120,
     493,   296,    32,   272,   512,   155,   513,   155,   145,   586,
      58,   648,   335,   447,    59,   272,    33,   510,   511,   595,
     596,   545,   546,   227,   486,   499,   149,    61,    62,   150,
     164,   473,    55,   151,   275,   232,   281,   152,   388,    56,
     621,   276,   153,   518,   519,   284,   287,   603,   288,   129,
      24,   325,   327,   329,   430,    33,   -64,    33,   332,   -65,
     334,   335,   337,    33,   338,   273,    33,   342,   -66,   431,
     -67,   -68,   239,   631,   632,   -69,   634,   349,   353,   354,
     639,    33,   273,   538,   154,   389,   355,   407,   400,   486,
     367,   227,   371,   396,   273,   393,   394,     1,   433,   233,
     432,   239,   654,   232,   655,   656,   436,   658,   161,   437,
      58,     2,     3,   448,    59,   456,     4,     5,     6,   457,
     461,   460,     7,   296,   464,   390,   669,    61,    62,   486,
     486,   466,    55,   151,   478,   234,   479,   152,   480,    56,
     496,   495,   153,   500,   501,   529,   527,   528,   530,   233,
      24,   506,   507,   508,   509,   509,   509,   277,   509,   509,
     509,   509,   509,   509,   509,   509,   509,   509,   509,   509,
     509,   139,   531,   532,   536,   537,   539,     1,   468,   540,
     544,   227,   548,   549,   279,   234,   550,   551,   486,   554,
     575,     2,     3,   232,   562,   581,     4,     5,     6,   585,
     587,    58,     7,   592,   602,    59,     1,    60,   243,     8,
     227,   593,   604,   552,   553,   611,   614,   233,    61,    62,
      58,     3,   232,    55,    59,     4,     5,     6,   609,   630,
      56,     7,   633,   635,   638,   648,   657,    61,    62,    63,
     659,    24,    55,   151,   641,   668,    57,   152,   598,    56,
     359,   137,   153,   234,   561,   665,   667,   214,   243,   370,
      24,   520,   522,   521,   525,   454,   523,   652,   239,   524,
     566,   664,   239,   583,   650,   239,   453,   272,   653,   547,
      64,   214,    93,    65,   108,   239,   239,   128,   169,   597,
     399,   410,    58,   322,   323,   503,    59,   126,   411,   171,
     110,   272,   409,   141,     0,     0,     0,   233,     0,    61,
      62,     0,     0,   239,    55,   151,   239,   239,     0,   152,
       0,    56,   509,     0,   153,     0,   243,     0,     0,     0,
       0,     0,    24,     0,     1,     0,   233,     0,     0,   239,
     239,     0,   239,   234,   239,     0,   239,     0,     2,     3,
       0,     0,     0,     4,     5,     6,   273,     0,     0,     7,
       0,     0,     0,   239,     0,     0,   439,     0,   239,     0,
     239,   239,   234,   239,     0,     0,     0,   227,     0,   509,
     273,   227,     0,     0,   227,     0,     0,   239,     0,   232,
       0,     0,   239,   232,   227,   227,   232,     0,     0,     0,
       0,    58,     0,     0,     0,    59,   232,   232,   274,     0,
       0,     0,     0,     0,     0,     0,   243,     0,    61,    62,
       0,     0,   227,    55,   151,   227,   227,     0,   152,     0,
      56,     0,     0,   153,   232,     0,     0,   232,   232,     0,
       0,    24,     0,     0,     0,   243,     0,     0,   227,   227,
       0,   227,     0,   227,     0,   227,     0,     0,     0,     0,
     232,   232,     0,   232,     0,   232,     0,   232,     0,     0,
       0,     0,   227,     0,     0,   441,     0,   227,     0,   227,
     227,     0,   227,     0,   232,     0,   315,     0,     0,   232,
       0,   232,   232,     0,   232,     0,   227,     0,     0,     0,
       0,   227,     0,   233,     0,     0,     0,   233,   232,     0,
     233,     0,     0,   232,     0,   348,     0,     0,    58,   351,
     233,   233,    59,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   360,     0,     0,    61,    62,     0,     0,   234,
      55,   151,     0,   234,     0,   152,   234,    56,   233,     0,
     153,   233,   233,     0,     0,     0,   234,   234,    24,   374,
     375,   376,   377,   378,   379,   380,   381,     0,   382,     0,
       0,   383,     0,     0,   233,   233,     0,   233,     0,   233,
       0,   233,   384,     0,   234,     0,     0,   234,   234,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   233,     0,
       0,   397,     0,   233,     0,   233,   233,     0,   233,     0,
     234,   234,   243,   234,     0,   234,   243,   234,     0,   243,
       0,   315,   233,     0,     0,     0,     0,   233,     0,   243,
     243,     0,     0,     0,   234,     0,     0,     0,     0,   234,
       0,   234,   234,     0,   234,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   445,   243,   234,     0,
     243,   243,     0,   234,   397,     0,     0,   458,     0,     0,
       0,     0,     0,     0,   465,     0,     0,     1,     0,   474,
     458,     0,     0,   243,   243,     0,   243,     0,   243,     0,
     243,     2,     3,     0,   445,     0,     4,     5,     6,     0,
       0,     0,     7,     0,     0,     0,     0,   243,     0,     8,
       0,   494,   243,     0,   243,   243,     0,   243,     0,     0,
      58,     0,     0,     0,    59,     1,    60,     0,     0,     0,
       0,   243,   502,     0,     0,     0,   243,    61,    62,     0,
       3,     0,    55,     0,     4,     5,     6,     0,     0,    56,
       7,    58,     0,     0,     0,    59,     1,    60,    63,     0,
      24,   526,     0,     0,     0,     0,     0,     0,    61,    62,
       0,     3,     0,    55,   458,     4,     5,     6,     0,     0,
      56,     7,     0,     0,     0,     0,   445,     0,     0,    63,
       0,    24,     0,     0,     0,     0,     0,     0,     0,   127,
       0,     0,    65,   172,   173,   174,     0,     0,   175,   557,
     176,   177,   178,   179,   180,     0,   181,   182,   183,   184,
     563,   185,   186,     0,   187,   188,   189,     0,     0,   315,
      96,     0,   190,   191,     0,   192,   193,   194,   195,   196,
     197,   198,     0,   199,    24,   200,   201,     0,   202,   203,
     204,     0,     0,   205,   206,   576,     0,   458,     0,     0,
       0,   458,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   207,     0,     0,
       0,     0,   129,   208,     0,   209,   210,   211,   212,     0,
       0,     0,     0,     0,     0,     0,     0,   213,     0,     0,
     601,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     610,     0,     0,     0,     0,     0,     0,   172,   173,   174,
       0,     0,   175,     0,   176,   177,   178,   179,   180,     0,
     181,   182,   183,   184,     0,   185,   186,   445,   187,   188,
     189,     0,     0,     0,     0,     0,   190,   191,   397,   192,
     193,   194,   195,   196,   197,   198,     0,   199,    24,   200,
     201,     0,   202,   203,   204,     0,   662,   205,   206,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   207,     0,     0,     0,     0,   129,   387,     0,   209,
     210,   211,   212,     0,     0,   172,   173,   174,   623,     0,
     175,   213,   176,   177,   651,   179,   180,     0,   181,   182,
     183,   184,     0,   185,   186,     0,   187,   188,   189,     0,
       0,     0,     0,     0,   190,   191,     0,   192,   193,   194,
     195,   196,   197,   198,     0,   199,    24,   200,   201,     0,
     202,   203,   204,     0,     0,   205,   206,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   207,
       0,     0,     0,     0,   129,     0,     0,   209,   210,   211,
     212,     0,     0,   172,   173,   174,     0,     0,   175,   213,
     176,   177,   178,   179,   180,     0,   181,   182,   183,   184,
       0,   185,   186,     0,   187,   188,   189,     0,     0,     0,
       0,     0,   190,   191,     0,   192,   193,   194,   195,   196,
     197,   198,     0,   199,    24,   200,   201,     0,   202,   203,
     204,     0,     0,   205,   206,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   207,     0,     0,
       0,     0,   129,     0,     0,   209,   210,   211,   212,     0,
     172,   290,   174,     0,     0,   291,     0,   213,   177,   178,
     179,   180,     0,   181,   182,   183,   184,     0,   292,   293,
       0,   187,   188,   294,     0,     0,     0,     0,     0,   190,
     295,     0,   192,   193,   194,   195,   196,   197,   198,     0,
     199,    24,   200,   201,     0,   202,   203,   204,     0,     0,
     205,   206,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   207,     0,     0,     0,     0,   129,
       0,     0,   209,   210,   211,   212,   172,   173,     0,     0,
       0,   175,     0,     0,   213,   178,     0,   180,     0,     0,
       0,     0,     0,     0,   185,   186,     0,   187,   188,   189,
       0,     0,     0,     0,     0,     0,   191,     0,     0,   193,
       0,   195,     0,   197,     0,     0,     0,    24,   200,   201,
       0,   202,   203,   204,     0,     0,   205,   206,     0,     0,
       0,     0,     0,     0,   172,   290,     0,     0,     0,   291,
       0,     0,     0,   178,     0,   180,     0,     0,     0,     0,
     207,     0,   292,   293,     0,   187,   188,   294,   209,   210,
     211,   212,     0,     0,   295,     0,     0,   193,     0,   195,
     449,   197,     0,     0,     0,    24,   200,   201,     0,   202,
     203,   204,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   172,   290,     0,     0,     0,   291,     0,     0,
       0,   178,     0,   180,     0,     0,     0,     0,   207,     0,
     292,   293,     0,   187,   188,   294,   209,   210,   211,   212,
       0,     0,   295,     0,     0,   193,     0,   195,   347,   197,
       0,     0,     0,    24,   200,   201,     0,   202,   203,   204,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     172,   290,     0,     0,     0,   291,     0,     0,     0,   178,
       0,   180,     0,     0,     0,     0,   207,     0,   292,   293,
       0,   187,   188,   294,   209,   210,   211,   212,     0,     0,
     295,     0,     0,   193,     0,   195,   350,   197,     0,     0,
       0,    24,   200,   201,     0,   202,   203,   204,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   172,   290,
       0,     0,     0,   291,     0,     0,     0,   178,     0,   180,
       0,     0,     0,     0,   207,     0,   292,   293,     0,   187,
     188,   294,   209,   210,   211,   212,     0,     0,   295,     0,
       0,   193,     0,   195,   533,   197,     0,     0,     0,    24,
     200,   201,     0,   202,   203,   204,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   172,   290,     0,     0,
       0,   291,     0,     0,     0,   178,     0,   180,     0,     0,
       0,     0,   207,     0,   292,   293,     0,   187,   188,   294,
     209,   210,   211,   212,     0,     0,   295,     0,     0,   193,
       0,   195,   582,   197,     0,     0,     0,    24,   200,   201,
       0,   202,   203,   204,     0,     0,   205,   206,     0,     0,
       0,     0,     0,     0,   172,   290,     0,     0,     0,   291,
       0,     0,     0,   178,     0,   180,     0,     0,     0,     0,
     207,   578,   292,   293,     0,   187,   188,   294,   209,   210,
     211,   212,     0,     0,   295,     0,     0,   193,     0,   195,
       0,   197,     0,     0,     0,    24,   200,   201,     0,   202,
     203,   204,     0,     0,   205,   206,     0,     0,     0,     0,
       0,     0,   172,   290,     0,     0,     0,   291,     0,     0,
       0,   178,     0,   180,     0,     0,     0,     0,   207,   605,
     292,   293,     0,   187,   188,   294,   209,   210,   211,   212,
       0,     0,   295,     0,     0,   193,     0,   195,     0,   197,
       0,     0,     0,    24,   200,   201,     0,   202,   203,   204,
       0,     0,   205,   206,     0,     0,     0,     0,     0,     0,
     172,   290,     0,     0,     0,   291,     0,     0,     0,   178,
       0,   180,     0,     0,     0,     0,   207,   607,   292,   293,
       0,   187,   188,   294,   209,   210,   211,   212,     0,     0,
     295,     0,     0,   193,     0,   195,     0,   197,     0,     0,
       0,    24,   200,   201,     0,   202,   203,   204,     0,     0,
     205,   206,     0,     0,     0,     0,     0,     0,   172,   290,
       0,     0,     0,   291,     0,     0,     0,   178,     0,   180,
       0,     0,     0,     0,   207,   636,   292,   293,     0,   187,
     188,   294,   209,   210,   211,   212,     0,     0,   295,     0,
       0,   193,     0,   195,     0,   197,     0,     0,     0,    24,
     200,   201,     0,   202,   203,   204,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   207,     0,     0,     0,     0,   296,   413,     0,
     209,   210,   211,   212,   172,   290,     0,     0,     0,   291,
       0,     0,     0,   178,     0,   180,     0,     0,     0,     0,
       0,     0,   292,   293,     0,   187,   188,   294,     0,     0,
       0,     0,   484,     0,   295,     0,     0,   193,     0,   195,
       0,   197,     0,     0,     0,    24,   200,   201,     0,   202,
     203,   204,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   172,   290,     0,     0,     0,   291,     0,     0,
       0,   178,     0,   180,     0,     0,     0,     0,   207,   485,
     292,   293,     0,   187,   188,   294,   209,   210,   211,   212,
     484,     0,   295,     0,     0,   193,     0,   195,     0,   197,
       0,     0,     0,    24,   200,   201,     0,   202,   203,   204,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     172,   290,     0,     0,     0,   291,     0,     0,     0,   178,
       0,   180,     0,     0,     0,     0,   207,   497,   292,   293,
       0,   187,   188,   294,   209,   210,   211,   212,   484,     0,
     295,     0,     0,   193,     0,   195,     0,   197,     0,     0,
       0,    24,   200,   201,     0,   202,   203,   204,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   172,   290,
       0,     0,     0,   291,     0,     0,     0,   178,     0,   180,
       0,     0,     0,     0,   207,   541,   292,   293,     0,   187,
     188,   294,   209,   210,   211,   212,     0,     0,   295,     0,
       0,   193,     0,   195,     0,   197,     0,     0,     0,    24,
     200,   201,     0,   202,   203,   204,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   172,   290,     0,     0,
       0,   291,     0,     0,     0,   178,     0,   180,     0,     0,
     165,     0,   207,     0,   292,   293,   166,   187,   188,   294,
     209,   210,   211,   212,   484,     0,   295,     0,     0,   193,
       0,   195,     0,   197,     0,     0,     0,    24,   200,   201,
       0,   202,   203,   204,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   172,   290,     0,     0,     0,   291,
       0,     0,     0,   178,     0,   180,     0,     0,     0,     0,
     207,   568,   292,   293,     0,   187,   188,   294,   209,   210,
     211,   212,   484,     0,   295,     0,     0,   193,     0,   195,
       0,   197,     0,     0,     0,    24,   200,   201,     0,   202,
     203,   204,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   172,   290,     0,     0,     0,   291,     0,     0,
       0,   178,     0,   180,     0,     0,     0,     0,   207,   570,
     292,   293,     0,   187,   188,   294,   209,   210,   211,   212,
       0,     0,   295,     0,     0,   193,     0,   195,     0,   197,
       0,     0,     0,    24,   200,   201,     0,   202,   203,   204,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   207,     0,     0,     0,
       0,   296,   572,     0,   209,   210,   211,   212,   172,   290,
       0,     0,     0,   291,     0,     0,     0,   178,     0,   180,
       0,     0,     0,     0,     0,     0,   292,   293,     0,   187,
     188,   294,     0,     0,     0,     0,     0,     0,   295,     0,
       0,   193,     0,   195,     0,   197,     0,     0,     0,    24,
     200,   201,     0,   202,   203,   204,     0,     0,   205,   206,
       0,     0,     0,     0,     0,   172,   290,     0,     0,     0,
     291,     0,     0,     0,   178,     0,   180,     0,     0,     0,
       0,     0,   207,   292,   293,     0,   187,   188,   294,     0,
     209,   210,   211,   212,     0,   295,     0,     0,   193,     0,
     195,     0,   197,     0,     0,     0,    24,   200,   201,     0,
     202,   203,   204,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   207,
       0,     0,     0,     0,   612,   613,     0,   209,   210,   211,
     212,   172,   290,     0,     0,     0,   291,     0,     0,     0,
     178,     0,   180,     0,     0,     0,     0,     0,     0,   292,
     293,     0,   187,   188,   294,     0,     0,     0,     0,     0,
       0,   295,     0,     0,   193,     0,   195,     0,   197,     0,
       0,     0,    24,   200,   201,     0,   202,   203,   204,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   207,     0,     0,     0,     0,
     612,   666,     0,   209,   210,   211,   212,   172,   290,     0,
       0,     0,   291,     0,     0,     0,   178,     0,   180,     0,
       0,     0,     0,     0,     0,   292,   293,     0,   187,   188,
     294,     0,     0,     0,     0,     0,     0,   295,     0,     0,
     193,     0,   195,     0,   197,     0,     0,     0,    24,   200,
     201,     0,   202,   203,   204,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   207,     0,     0,     0,     0,   296,     0,     0,   209,
     210,   211,   212,   172,   173,     0,     0,     0,   175,     0,
       0,     0,   178,     0,   180,     0,     0,     0,     0,     0,
       0,   185,   186,     0,   187,   188,   189,     0,     0,     0,
       0,     0,     0,   191,     0,     0,   193,     0,   195,     0,
     197,     0,   358,     0,    24,   200,   201,     0,   202,   203,
     204,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   172,   290,     0,     0,     0,   291,     0,     0,     0,
     178,     0,   180,     0,     0,     0,     0,   207,     0,   292,
     293,     0,   187,   188,   294,   209,   210,   211,   212,   484,
       0,   295,     0,     0,   193,     0,   195,     0,   197,     0,
       0,     0,    24,   200,   201,     0,   202,   203,   204,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   172,   290,
       0,     0,     0,   291,     0,     0,     0,   178,     0,   180,
       0,     0,     0,     0,     0,   207,   292,   293,     0,   187,
     188,   294,     0,   209,   210,   211,   212,     0,   295,     0,
       0,   193,     0,   195,     0,   197,     0,     0,     0,    24,
     200,   201,     0,   202,   203,   204,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   207,     0,     0,     0,     0,   587,     0,     0,
     209,   210,   211,   212,   172,   290,     0,     0,     0,   291,
       0,     0,     0,   178,     0,   180,     0,     0,     0,     0,
       0,     0,   292,   293,     0,   187,   188,   294,     0,     0,
       0,     0,     0,     0,   295,     0,     0,   193,     0,   195,
       0,   197,     0,     0,     0,    24,   200,   201,     0,   202,
     203,   204,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   172,   173,     0,     0,     0,   175,     0,     0,     0,
     178,     0,   180,     0,     0,     0,     0,     0,   207,   185,
     186,     0,   187,   188,   189,     0,   209,   210,   211,   212,
       0,   191,     0,     0,   193,     0,   195,     0,   197,     0,
       0,     0,    24,   200,   201,     0,   202,   203,   204,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   172,   290,
       0,     0,     0,   291,     0,     0,     0,   178,     0,   180,
       0,     0,     0,     0,     0,   207,   292,   293,     0,   187,
     188,   294,     0,   209,   210,   211,   212,     0,   295,     0,
       0,   193,     0,   195,     0,   197,     0,     0,     0,    24,
     200,   201,     0,   202,   203,   204,     0,     0,     0,    58,
       0,     0,     0,    59,     1,    60,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    61,    62,     0,     3,
       0,    55,   207,     4,     5,     6,     0,     0,    56,     7,
     209,   210,     0,     0,     0,     0,    58,    63,     0,    24,
      59,    38,   123,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    61,    62,     0,     3,     0,    55,     0,
       4,     5,     6,     0,     0,    56,    39,     0,     0,     0,
       0,     0,     0,     0,   124,     0,    24,     0,   140
};

static const yytype_int16 yycheck[] =
{
       1,     2,   339,   247,   342,   187,     7,     8,    84,   296,
      86,   369,   587,   149,   345,   346,    16,   355,   179,   337,
     167,     2,    43,    12,   395,     8,    12,     8,   164,    69,
     591,    14,    53,    46,     8,    20,    36,    38,    39,    42,
      14,    42,    54,     8,    45,    48,    48,    48,    54,    50,
     126,    48,    81,    82,    42,    48,   151,    46,    48,   151,
      48,    42,    63,     9,    65,    89,    90,    48,    69,   644,
      51,    17,    85,    79,    86,     8,    79,    78,    79,    60,
     641,    14,    63,    46,   124,   125,    51,   108,    69,   460,
      42,    79,   187,    78,    94,   187,    48,    78,    79,   102,
     102,   102,    85,   461,    93,   102,     8,    93,    60,   102,
     111,    85,   102,    46,   102,    54,    79,    54,    81,    82,
     196,   102,   366,   124,   125,    46,    78,    79,   129,   500,
     501,    54,     5,    81,   115,    77,    84,     0,   138,   337,
      42,    78,   123,   124,   125,    77,    48,    86,   129,    51,
     102,    61,    62,    77,   155,    78,   354,    99,    60,   581,
     582,   162,    86,   115,   495,    38,   167,    99,   149,    77,
     151,   123,    80,    84,    77,    99,    78,    79,   159,   361,
      77,    99,   183,   164,    94,    95,   333,   609,    99,    11,
      84,   327,    28,   329,   532,   176,    99,   149,    77,    35,
     102,    80,    99,    25,    26,   281,   187,   159,    30,    31,
      32,    81,   164,   115,    36,   533,    84,   504,    11,   537,
      99,   123,    77,    84,   176,    80,   207,   129,    77,    82,
      84,    99,    25,    26,   129,   187,    85,    30,    31,    32,
      77,    55,    56,    36,    99,    99,   247,   149,    85,   151,
      43,   252,    11,    77,   612,    99,    80,   159,    99,    78,
      77,   592,   164,   581,   582,    84,   247,    26,    85,    59,
      60,    30,    31,    32,   176,    99,   277,    36,   424,   425,
     426,   427,   283,     6,   179,   187,   623,    10,   289,    77,
     621,   609,    85,    53,    79,    83,    77,    82,    58,    80,
      23,    24,     6,    99,     6,    28,    10,   288,    10,    76,
     205,   206,    35,    76,   209,   210,   211,   212,    99,    23,
      24,    23,    24,    46,    28,    79,    28,    81,    82,   330,
      99,    35,   333,    35,    77,    77,   288,    80,    80,    71,
      44,    73,    46,   129,    46,   247,   327,    77,   329,    54,
      80,    79,   247,    81,   335,   129,   337,   338,    77,    82,
      99,    80,    91,    92,    93,   366,   367,   368,    99,    82,
     371,    84,   353,   354,   421,   327,   423,   329,    99,   540,
       6,    78,    79,   335,    10,   366,   288,   419,   420,   550,
     551,   467,   468,   179,   395,   396,    79,    23,    24,    79,
      79,   353,    28,    29,    99,   179,    80,    33,   652,    35,
     592,    86,    38,   428,   429,    78,    80,   578,    77,    84,
      46,    83,    79,    79,    96,   327,    81,   329,    99,    81,
      99,    79,    79,   335,    79,   337,   338,    79,    81,    97,
      81,    81,   337,   604,   605,    81,   607,    79,    79,    79,
     611,   353,   354,   454,    80,    99,    79,    86,    80,   460,
      81,   247,    81,    81,   366,    99,    99,    11,    57,   129,
      98,   366,   633,   247,   635,   636,    76,   638,    86,    80,
       6,    25,    26,    45,    10,    99,    30,    31,    32,    99,
      82,    79,    36,    84,    99,   496,   657,    23,    24,   500,
     501,    99,    28,    29,    80,   129,    80,    33,    80,    35,
      77,    86,    38,    79,    79,    83,    80,    80,    77,   179,
      46,   416,   417,   418,   419,   420,   421,    77,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,    85,    80,    79,    99,    77,    99,    11,    17,    80,
      80,   337,    80,    80,    80,   179,    80,    80,   559,    80,
      78,    25,    26,   337,    83,    99,    30,    31,    32,    22,
      84,     6,    36,    83,    80,    10,    11,    12,   129,    43,
     366,    84,    80,   478,   479,     4,   587,   247,    23,    24,
       6,    26,   366,    28,    10,    30,    31,    32,    99,    99,
      35,    36,    80,    80,    80,    78,    80,    23,    24,    44,
      85,    46,    28,    29,    86,    78,    41,    33,   559,    35,
     207,    85,    38,   247,   489,   642,   644,   628,   179,   224,
      46,   430,   432,   431,   435,   338,   433,   628,   533,   434,
     496,   642,   537,   536,   626,   540,   337,   628,   628,   469,
      85,   652,    46,    88,    53,   550,   551,    79,   125,   554,
     277,   288,     6,   162,    80,   412,    10,    78,   288,   126,
      54,   652,   287,   102,    -1,    -1,    -1,   337,    -1,    23,
      24,    -1,    -1,   578,    28,    29,   581,   582,    -1,    33,
      -1,    35,   587,    -1,    38,    -1,   247,    -1,    -1,    -1,
      -1,    -1,    46,    -1,    11,    -1,   366,    -1,    -1,   604,
     605,    -1,   607,   337,   609,    -1,   611,    -1,    25,    26,
      -1,    -1,    -1,    30,    31,    32,   628,    -1,    -1,    36,
      -1,    -1,    -1,   628,    -1,    -1,    80,    -1,   633,    -1,
     635,   636,   366,   638,    -1,    -1,    -1,   533,    -1,   644,
     652,   537,    -1,    -1,   540,    -1,    -1,   652,    -1,   533,
      -1,    -1,   657,   537,   550,   551,   540,    -1,    -1,    -1,
      -1,     6,    -1,    -1,    -1,    10,   550,   551,    85,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   337,    -1,    23,    24,
      -1,    -1,   578,    28,    29,   581,   582,    -1,    33,    -1,
      35,    -1,    -1,    38,   578,    -1,    -1,   581,   582,    -1,
      -1,    46,    -1,    -1,    -1,   366,    -1,    -1,   604,   605,
      -1,   607,    -1,   609,    -1,   611,    -1,    -1,    -1,    -1,
     604,   605,    -1,   607,    -1,   609,    -1,   611,    -1,    -1,
      -1,    -1,   628,    -1,    -1,    80,    -1,   633,    -1,   635,
     636,    -1,   638,    -1,   628,    -1,   161,    -1,    -1,   633,
      -1,   635,   636,    -1,   638,    -1,   652,    -1,    -1,    -1,
      -1,   657,    -1,   533,    -1,    -1,    -1,   537,   652,    -1,
     540,    -1,    -1,   657,    -1,   190,    -1,    -1,     6,   194,
     550,   551,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   207,    -1,    -1,    23,    24,    -1,    -1,   533,
      28,    29,    -1,   537,    -1,    33,   540,    35,   578,    -1,
      38,   581,   582,    -1,    -1,    -1,   550,   551,    46,    63,
      64,    65,    66,    67,    68,    69,    70,    -1,    72,    -1,
      -1,    75,    -1,    -1,   604,   605,    -1,   607,    -1,   609,
      -1,   611,    86,    -1,   578,    -1,    -1,   581,   582,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   628,    -1,
      -1,   276,    -1,   633,    -1,   635,   636,    -1,   638,    -1,
     604,   605,   533,   607,    -1,   609,   537,   611,    -1,   540,
      -1,   296,   652,    -1,    -1,    -1,    -1,   657,    -1,   550,
     551,    -1,    -1,    -1,   628,    -1,    -1,    -1,    -1,   633,
      -1,   635,   636,    -1,   638,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   331,   578,   652,    -1,
     581,   582,    -1,   657,   339,    -1,    -1,   342,    -1,    -1,
      -1,    -1,    -1,    -1,   349,    -1,    -1,    11,    -1,   354,
     355,    -1,    -1,   604,   605,    -1,   607,    -1,   609,    -1,
     611,    25,    26,    -1,   369,    -1,    30,    31,    32,    -1,
      -1,    -1,    36,    -1,    -1,    -1,    -1,   628,    -1,    43,
      -1,   386,   633,    -1,   635,   636,    -1,   638,    -1,    -1,
       6,    -1,    -1,    -1,    10,    11,    12,    -1,    -1,    -1,
      -1,   652,   407,    -1,    -1,    -1,   657,    23,    24,    -1,
      26,    -1,    28,    -1,    30,    31,    32,    -1,    -1,    35,
      36,     6,    -1,    -1,    -1,    10,    11,    12,    44,    -1,
      46,   436,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      -1,    26,    -1,    28,   449,    30,    31,    32,    -1,    -1,
      35,    36,    -1,    -1,    -1,    -1,   461,    -1,    -1,    44,
      -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      -1,    -1,    88,     5,     6,     7,    -1,    -1,    10,   484,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
     495,    23,    24,    -1,    26,    27,    28,    -1,    -1,   504,
      85,    -1,    34,    35,    -1,    37,    38,    39,    40,    41,
      42,    43,    -1,    45,    46,    47,    48,    -1,    50,    51,
      52,    -1,    -1,    55,    56,   530,    -1,   532,    -1,    -1,
      -1,   536,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,
      -1,    -1,    84,    85,    -1,    87,    88,    89,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,
     575,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     585,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,     7,
      -1,    -1,    10,    -1,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    -1,    23,    24,   612,    26,    27,
      28,    -1,    -1,    -1,    -1,    -1,    34,    35,   623,    37,
      38,    39,    40,    41,    42,    43,    -1,    45,    46,    47,
      48,    -1,    50,    51,    52,    -1,   641,    55,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    -1,    -1,    -1,    84,    85,    -1,    87,
      88,    89,    90,    -1,    -1,     5,     6,     7,     8,    -1,
      10,    99,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    -1,    23,    24,    -1,    26,    27,    28,    -1,
      -1,    -1,    -1,    -1,    34,    35,    -1,    37,    38,    39,
      40,    41,    42,    43,    -1,    45,    46,    47,    48,    -1,
      50,    51,    52,    -1,    -1,    55,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    -1,    -1,    -1,    84,    -1,    -1,    87,    88,    89,
      90,    -1,    -1,     5,     6,     7,    -1,    -1,    10,    99,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      -1,    23,    24,    -1,    26,    27,    28,    -1,    -1,    -1,
      -1,    -1,    34,    35,    -1,    37,    38,    39,    40,    41,
      42,    43,    -1,    45,    46,    47,    48,    -1,    50,    51,
      52,    -1,    -1,    55,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,
      -1,    -1,    84,    -1,    -1,    87,    88,    89,    90,    -1,
       5,     6,     7,    -1,    -1,    10,    -1,    99,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    -1,    23,    24,
      -1,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,    34,
      35,    -1,    37,    38,    39,    40,    41,    42,    43,    -1,
      45,    46,    47,    48,    -1,    50,    51,    52,    -1,    -1,
      55,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    84,
      -1,    -1,    87,    88,    89,    90,     5,     6,    -1,    -1,
      -1,    10,    -1,    -1,    99,    14,    -1,    16,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    -1,    26,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,    38,
      -1,    40,    -1,    42,    -1,    -1,    -1,    46,    47,    48,
      -1,    50,    51,    52,    -1,    -1,    55,    56,    -1,    -1,
      -1,    -1,    -1,    -1,     5,     6,    -1,    -1,    -1,    10,
      -1,    -1,    -1,    14,    -1,    16,    -1,    -1,    -1,    -1,
      79,    -1,    23,    24,    -1,    26,    27,    28,    87,    88,
      89,    90,    -1,    -1,    35,    -1,    -1,    38,    -1,    40,
      99,    42,    -1,    -1,    -1,    46,    47,    48,    -1,    50,
      51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     5,     6,    -1,    -1,    -1,    10,    -1,    -1,
      -1,    14,    -1,    16,    -1,    -1,    -1,    -1,    79,    -1,
      23,    24,    -1,    26,    27,    28,    87,    88,    89,    90,
      -1,    -1,    35,    -1,    -1,    38,    -1,    40,    99,    42,
      -1,    -1,    -1,    46,    47,    48,    -1,    50,    51,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       5,     6,    -1,    -1,    -1,    10,    -1,    -1,    -1,    14,
      -1,    16,    -1,    -1,    -1,    -1,    79,    -1,    23,    24,
      -1,    26,    27,    28,    87,    88,    89,    90,    -1,    -1,
      35,    -1,    -1,    38,    -1,    40,    99,    42,    -1,    -1,
      -1,    46,    47,    48,    -1,    50,    51,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,
      -1,    -1,    -1,    10,    -1,    -1,    -1,    14,    -1,    16,
      -1,    -1,    -1,    -1,    79,    -1,    23,    24,    -1,    26,
      27,    28,    87,    88,    89,    90,    -1,    -1,    35,    -1,
      -1,    38,    -1,    40,    99,    42,    -1,    -1,    -1,    46,
      47,    48,    -1,    50,    51,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     5,     6,    -1,    -1,
      -1,    10,    -1,    -1,    -1,    14,    -1,    16,    -1,    -1,
      -1,    -1,    79,    -1,    23,    24,    -1,    26,    27,    28,
      87,    88,    89,    90,    -1,    -1,    35,    -1,    -1,    38,
      -1,    40,    99,    42,    -1,    -1,    -1,    46,    47,    48,
      -1,    50,    51,    52,    -1,    -1,    55,    56,    -1,    -1,
      -1,    -1,    -1,    -1,     5,     6,    -1,    -1,    -1,    10,
      -1,    -1,    -1,    14,    -1,    16,    -1,    -1,    -1,    -1,
      79,    80,    23,    24,    -1,    26,    27,    28,    87,    88,
      89,    90,    -1,    -1,    35,    -1,    -1,    38,    -1,    40,
      -1,    42,    -1,    -1,    -1,    46,    47,    48,    -1,    50,
      51,    52,    -1,    -1,    55,    56,    -1,    -1,    -1,    -1,
      -1,    -1,     5,     6,    -1,    -1,    -1,    10,    -1,    -1,
      -1,    14,    -1,    16,    -1,    -1,    -1,    -1,    79,    80,
      23,    24,    -1,    26,    27,    28,    87,    88,    89,    90,
      -1,    -1,    35,    -1,    -1,    38,    -1,    40,    -1,    42,
      -1,    -1,    -1,    46,    47,    48,    -1,    50,    51,    52,
      -1,    -1,    55,    56,    -1,    -1,    -1,    -1,    -1,    -1,
       5,     6,    -1,    -1,    -1,    10,    -1,    -1,    -1,    14,
      -1,    16,    -1,    -1,    -1,    -1,    79,    80,    23,    24,
      -1,    26,    27,    28,    87,    88,    89,    90,    -1,    -1,
      35,    -1,    -1,    38,    -1,    40,    -1,    42,    -1,    -1,
      -1,    46,    47,    48,    -1,    50,    51,    52,    -1,    -1,
      55,    56,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,
      -1,    -1,    -1,    10,    -1,    -1,    -1,    14,    -1,    16,
      -1,    -1,    -1,    -1,    79,    80,    23,    24,    -1,    26,
      27,    28,    87,    88,    89,    90,    -1,    -1,    35,    -1,
      -1,    38,    -1,    40,    -1,    42,    -1,    -1,    -1,    46,
      47,    48,    -1,    50,    51,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    -1,    -1,    84,    85,    -1,
      87,    88,    89,    90,     5,     6,    -1,    -1,    -1,    10,
      -1,    -1,    -1,    14,    -1,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    -1,    26,    27,    28,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    38,    -1,    40,
      -1,    42,    -1,    -1,    -1,    46,    47,    48,    -1,    50,
      51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     5,     6,    -1,    -1,    -1,    10,    -1,    -1,
      -1,    14,    -1,    16,    -1,    -1,    -1,    -1,    79,    80,
      23,    24,    -1,    26,    27,    28,    87,    88,    89,    90,
      33,    -1,    35,    -1,    -1,    38,    -1,    40,    -1,    42,
      -1,    -1,    -1,    46,    47,    48,    -1,    50,    51,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       5,     6,    -1,    -1,    -1,    10,    -1,    -1,    -1,    14,
      -1,    16,    -1,    -1,    -1,    -1,    79,    80,    23,    24,
      -1,    26,    27,    28,    87,    88,    89,    90,    33,    -1,
      35,    -1,    -1,    38,    -1,    40,    -1,    42,    -1,    -1,
      -1,    46,    47,    48,    -1,    50,    51,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,
      -1,    -1,    -1,    10,    -1,    -1,    -1,    14,    -1,    16,
      -1,    -1,    -1,    -1,    79,    80,    23,    24,    -1,    26,
      27,    28,    87,    88,    89,    90,    -1,    -1,    35,    -1,
      -1,    38,    -1,    40,    -1,    42,    -1,    -1,    -1,    46,
      47,    48,    -1,    50,    51,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     5,     6,    -1,    -1,
      -1,    10,    -1,    -1,    -1,    14,    -1,    16,    -1,    -1,
      77,    -1,    79,    -1,    23,    24,    83,    26,    27,    28,
      87,    88,    89,    90,    33,    -1,    35,    -1,    -1,    38,
      -1,    40,    -1,    42,    -1,    -1,    -1,    46,    47,    48,
      -1,    50,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     5,     6,    -1,    -1,    -1,    10,
      -1,    -1,    -1,    14,    -1,    16,    -1,    -1,    -1,    -1,
      79,    80,    23,    24,    -1,    26,    27,    28,    87,    88,
      89,    90,    33,    -1,    35,    -1,    -1,    38,    -1,    40,
      -1,    42,    -1,    -1,    -1,    46,    47,    48,    -1,    50,
      51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     5,     6,    -1,    -1,    -1,    10,    -1,    -1,
      -1,    14,    -1,    16,    -1,    -1,    -1,    -1,    79,    80,
      23,    24,    -1,    26,    27,    28,    87,    88,    89,    90,
      -1,    -1,    35,    -1,    -1,    38,    -1,    40,    -1,    42,
      -1,    -1,    -1,    46,    47,    48,    -1,    50,    51,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,
      -1,    84,    85,    -1,    87,    88,    89,    90,     5,     6,
      -1,    -1,    -1,    10,    -1,    -1,    -1,    14,    -1,    16,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    -1,    26,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,
      -1,    38,    -1,    40,    -1,    42,    -1,    -1,    -1,    46,
      47,    48,    -1,    50,    51,    52,    -1,    -1,    55,    56,
      -1,    -1,    -1,    -1,    -1,     5,     6,    -1,    -1,    -1,
      10,    -1,    -1,    -1,    14,    -1,    16,    -1,    -1,    -1,
      -1,    -1,    79,    23,    24,    -1,    26,    27,    28,    -1,
      87,    88,    89,    90,    -1,    35,    -1,    -1,    38,    -1,
      40,    -1,    42,    -1,    -1,    -1,    46,    47,    48,    -1,
      50,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    -1,    -1,    -1,    84,    85,    -1,    87,    88,    89,
      90,     5,     6,    -1,    -1,    -1,    10,    -1,    -1,    -1,
      14,    -1,    16,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    -1,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    -1,    -1,    38,    -1,    40,    -1,    42,    -1,
      -1,    -1,    46,    47,    48,    -1,    50,    51,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,
      84,    85,    -1,    87,    88,    89,    90,     5,     6,    -1,
      -1,    -1,    10,    -1,    -1,    -1,    14,    -1,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    -1,    26,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,
      38,    -1,    40,    -1,    42,    -1,    -1,    -1,    46,    47,
      48,    -1,    50,    51,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    -1,    -1,    -1,    84,    -1,    -1,    87,
      88,    89,    90,     5,     6,    -1,    -1,    -1,    10,    -1,
      -1,    -1,    14,    -1,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    -1,    26,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    -1,    -1,    38,    -1,    40,    -1,
      42,    -1,    44,    -1,    46,    47,    48,    -1,    50,    51,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     5,     6,    -1,    -1,    -1,    10,    -1,    -1,    -1,
      14,    -1,    16,    -1,    -1,    -1,    -1,    79,    -1,    23,
      24,    -1,    26,    27,    28,    87,    88,    89,    90,    33,
      -1,    35,    -1,    -1,    38,    -1,    40,    -1,    42,    -1,
      -1,    -1,    46,    47,    48,    -1,    50,    51,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,
      -1,    -1,    -1,    10,    -1,    -1,    -1,    14,    -1,    16,
      -1,    -1,    -1,    -1,    -1,    79,    23,    24,    -1,    26,
      27,    28,    -1,    87,    88,    89,    90,    -1,    35,    -1,
      -1,    38,    -1,    40,    -1,    42,    -1,    -1,    -1,    46,
      47,    48,    -1,    50,    51,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    -1,    -1,    84,    -1,    -1,
      87,    88,    89,    90,     5,     6,    -1,    -1,    -1,    10,
      -1,    -1,    -1,    14,    -1,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    -1,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    -1,    -1,    38,    -1,    40,
      -1,    42,    -1,    -1,    -1,    46,    47,    48,    -1,    50,
      51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     5,     6,    -1,    -1,    -1,    10,    -1,    -1,    -1,
      14,    -1,    16,    -1,    -1,    -1,    -1,    -1,    79,    23,
      24,    -1,    26,    27,    28,    -1,    87,    88,    89,    90,
      -1,    35,    -1,    -1,    38,    -1,    40,    -1,    42,    -1,
      -1,    -1,    46,    47,    48,    -1,    50,    51,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,
      -1,    -1,    -1,    10,    -1,    -1,    -1,    14,    -1,    16,
      -1,    -1,    -1,    -1,    -1,    79,    23,    24,    -1,    26,
      27,    28,    -1,    87,    88,    89,    90,    -1,    35,    -1,
      -1,    38,    -1,    40,    -1,    42,    -1,    -1,    -1,    46,
      47,    48,    -1,    50,    51,    52,    -1,    -1,    -1,     6,
      -1,    -1,    -1,    10,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    -1,    26,
      -1,    28,    79,    30,    31,    32,    -1,    -1,    35,    36,
      87,    88,    -1,    -1,    -1,    -1,     6,    44,    -1,    46,
      10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    -1,    26,    -1,    28,    -1,
      30,    31,    32,    -1,    -1,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    -1,    46,    -1,    85
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    11,    25,    26,    30,    31,    32,    36,    43,   101,
     221,   222,   225,   226,   227,   228,   229,   230,   231,   233,
     234,   235,   263,   271,    46,   102,   102,   223,   102,   102,
     111,   113,   223,   232,     0,   226,   229,   230,    11,    36,
     235,    78,    84,   236,   237,    81,    84,   224,    84,   264,
      54,    86,    99,   102,   102,    28,    35,   121,     6,    10,
      12,    23,    24,    44,    85,    88,   102,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   231,   234,   238,
     239,   240,   243,   247,   248,   257,   258,   261,   267,   237,
      99,   102,    85,   225,   229,    99,    85,   231,   240,   243,
     247,   257,   265,   266,    99,   102,   102,   113,   236,   237,
     264,   114,   223,   249,   102,    79,   102,   244,   245,   249,
      82,   268,    76,    12,    44,   114,   258,    85,   239,    84,
      99,   179,   250,    99,   179,   260,    99,    85,   229,    85,
      85,   266,    99,   237,    99,    99,   102,   241,   242,    79,
      79,    29,    33,    38,    80,   114,   251,   252,   253,   255,
     256,    86,    77,    99,    79,    77,    83,   114,   249,   244,
     249,   260,     5,     6,     7,    10,    12,    13,    14,    15,
      16,    18,    19,    20,    21,    23,    24,    26,    27,    28,
      34,    35,    37,    38,    39,    40,    41,    42,    43,    45,
      47,    48,    50,    51,    52,    55,    56,    79,    85,    87,
      88,    89,    90,    99,   102,   103,   104,   105,   106,   107,
     108,   114,   127,   128,   129,   130,   132,   133,   134,   136,
     137,   138,   139,   140,   141,   150,   151,   152,   153,   154,
     155,   156,   157,   171,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   189,   190,   191,   192,   193,   194,   200,
     201,   202,   203,   208,   209,   210,   211,   212,   213,   214,
     215,   219,   223,   232,    85,    99,    86,    77,    99,    80,
     251,    80,   115,   267,    78,   259,   102,    80,    77,   114,
       6,    10,    23,    24,    28,    35,    84,   133,   139,   140,
     141,   154,   158,   159,   160,   161,   162,   164,   165,   166,
     167,   168,   169,   170,   171,   173,   174,   223,   232,   246,
     269,   102,   245,    80,   251,    83,   241,    79,    99,    79,
      81,    82,    99,   114,    99,    79,   178,    79,    79,     8,
      14,   102,    79,   114,   115,   267,   268,    99,   173,    79,
      99,   173,   179,    79,    79,    79,   154,   154,    44,   116,
     173,   223,   154,   154,   154,   154,    78,    81,    79,    82,
     153,    81,    55,    56,    63,    64,    65,    66,    67,    68,
      69,    70,    72,    75,    86,   110,   172,    85,   177,    99,
     102,   186,   187,    99,    99,    79,    81,   173,   175,   242,
      80,    99,   179,   262,   102,     5,    38,    86,   254,   259,
     253,   256,   102,    85,   246,   270,    91,    92,    93,    89,
      90,    71,    73,   109,    61,    62,    94,    95,    59,    60,
      96,    97,    98,    57,    53,    58,    76,    80,    99,    80,
     251,    80,   251,   102,   135,   173,   241,   114,    45,    99,
     184,   191,   204,   207,   185,   175,    99,    99,   173,   176,
      79,    82,   269,   269,    99,   173,    99,     9,    17,   216,
     217,   218,    44,   114,   173,   184,   220,   176,    80,    80,
      80,   268,   177,   102,    33,    80,   102,   123,   124,   125,
     126,   173,   135,   102,   173,    86,    77,    80,   123,   102,
      79,    79,   173,   254,    77,    85,   154,   154,   154,   154,
     158,   158,   159,   159,   160,   160,   160,   160,   161,   161,
     162,   164,   165,   166,   169,   167,   173,    80,    80,    83,
      77,    80,    79,    99,   176,   205,    99,    77,   102,    99,
      80,    80,   123,   135,    80,   179,   179,   218,    80,    80,
      80,    80,   154,   154,    80,   131,   122,   173,    78,    77,
      80,   126,    83,   173,   188,   269,   187,    80,    80,   123,
      80,   123,    85,   246,   163,    78,   173,   176,    80,   206,
     207,    99,    99,   205,   191,    22,   178,    84,   142,   143,
     147,    80,    83,    84,   195,   178,   178,   154,   124,    80,
      80,   173,    80,   178,    80,    80,   206,    80,   206,    99,
     173,     4,    84,    85,   102,   144,   145,   148,   149,   174,
     142,   268,   269,     8,    14,    85,   196,   197,   198,   199,
      99,   178,   178,    80,   178,    80,    80,   206,    80,   178,
     135,    86,    77,    85,    77,    85,   269,   175,    78,    85,
     197,    14,   180,   199,   178,   178,   178,    80,   178,    85,
     142,   146,   173,    85,   102,   145,    85,   149,    78,   178
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   100,   101,   102,   103,   103,   103,   103,   103,   104,
     104,   105,   105,   106,   107,   107,   108,   109,   110,   111,
     112,   113,   113,   114,   114,   115,   115,   115,   116,   116,
     116,   117,   118,   118,   118,   119,   120,   121,   121,   122,
     123,   123,   124,   124,   125,   126,   126,   127,   127,   127,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   129,
     131,   130,   130,   130,   132,   132,   132,   132,   132,   132,
     133,   133,   133,   133,   134,   135,   135,   136,   137,   137,
     138,   138,   138,   138,   139,   140,   141,   141,   141,   141,
     142,   142,   143,   143,   143,   144,   144,   145,   146,   146,
     147,   147,   148,   148,   149,   149,   150,   150,   150,   150,
     150,   150,   151,   151,   152,   153,   153,   153,   153,   154,
     154,   154,   155,   156,   157,   157,   157,   157,   158,   158,
     158,   158,   159,   159,   159,   160,   160,   160,   161,   161,
     161,   161,   161,   162,   163,   162,   162,   164,   164,   165,
     165,   166,   166,   167,   167,   168,   168,   169,   169,   170,
     170,   171,   172,   172,   172,   172,   172,   172,   172,   172,
     172,   172,   172,   173,   173,   174,   175,   176,   177,   177,
     177,   178,   178,   178,   178,   178,   178,   178,   178,   179,
     179,   180,   180,   181,   182,   183,   183,   184,   185,   186,
     186,   187,   187,   188,   188,   189,   190,   191,   191,   191,
     191,   191,   191,   191,   192,   192,   193,   193,   194,   195,
     195,   196,   196,   197,   198,   198,   199,   199,   200,   200,
     200,   200,   201,   202,   203,   203,   203,   203,   203,   203,
     203,   203,   204,   204,   205,   206,   207,   207,   208,   209,
     209,   209,   209,   209,   210,   211,   212,   212,   212,   213,
     213,   214,   214,   215,   215,   215,   216,   217,   218,   219,
     220,   220,   221,   221,   221,   221,   222,   222,   223,   223,
     224,   224,   224,   224,   225,   225,   226,   226,   227,   228,
     229,   229,   230,   230,   231,   231,   232,   233,   233,   233,
     233,   233,   233,   233,   233,   234,   234,   235,   235,   235,
     235,   236,   237,   237,   238,   238,   239,   239,   239,   239,
     239,   239,   240,   240,   241,   241,   242,   243,   243,   244,
     244,   245,   245,   246,   246,   247,   248,   248,   248,   248,
     248,   248,   248,   248,   249,   250,   250,   251,   251,   251,
     252,   252,   253,   253,   253,   253,   254,   255,   255,   256,
     257,   257,   258,   258,   258,   258,   259,   259,   259,   259,
     260,   260,   261,   262,   262,   263,   263,   263,   263,   264,
     264,   265,   265,   266,   266,   266,   266,   266,   267,   268,
     268,   269,   269,   269,   270,   270,   271
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     1,     1,
       1,     3,     1,     2,     2,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       0,     4,     3,     3,     1,     1,     1,     1,     1,     1,
       3,     4,     3,     4,     4,     1,     3,     1,     3,     4,
       1,     1,     1,     1,     2,     2,     4,     5,     5,     6,
       1,     1,     2,     3,     4,     1,     3,     3,     1,     1,
       3,     4,     1,     3,     1,     3,     5,     6,     6,     7,
       3,     3,     4,     4,     4,     1,     2,     2,     1,     1,
       2,     2,     2,     2,     2,     5,     4,     4,     1,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     0,     4,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       5,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       3,     1,     2,     1,     3,     2,     2,     2,     1,     1,
       3,     1,     3,     1,     1,     3,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     7,     5,     2,
       3,     1,     2,     2,     1,     2,     3,     2,     1,     1,
       1,     1,     5,     7,     6,     7,     7,     7,     8,     8,
       8,     9,     1,     1,     1,     1,     1,     3,     8,     1,
       1,     1,     1,     1,     2,     2,     3,     4,     3,     2,
       3,     2,     3,     3,     3,     4,     1,     2,     2,     5,
       1,     1,     2,     1,     1,     1,     3,     4,     1,     3,
       2,     3,     3,     4,     1,     2,     1,     1,     5,     3,
       1,     2,     1,     1,     1,     1,     3,     3,     4,     4,
       4,     5,     5,     5,     6,     1,     2,     1,     1,     1,
       1,     2,     2,     3,     1,     2,     1,     1,     1,     1,
       1,     1,     4,     5,     1,     3,     3,     3,     4,     1,
       3,     1,     3,     1,     1,     2,     4,     5,     5,     6,
       4,     5,     5,     6,     1,     1,     1,     1,     3,     1,
       1,     3,     2,     3,     3,     4,     2,     1,     1,     3,
       2,     3,     3,     4,     4,     5,     4,     5,     4,     5,
       1,     1,     5,     1,     1,     3,     4,     4,     5,     2,
       3,     1,     2,     1,     1,     1,     1,     1,     2,     2,
       3,     2,     3,     4,     1,     3,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
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
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

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
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
          yyp++;
          yyformat++;
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

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
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
#line 74 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 79 "src/parser.ypp" /* yacc.c:1646  */
    {
					if((curEnv->extras).find(string((yyvsp[0].sVal))) == (curEnv->extras).end()){
						(curEnv->extras)[string((yyvsp[0].sVal))] = new Symbol(string((yyvsp[0].sVal)), "None");
					}
					genNode* newNode = new genNode();
					newNode->place = string((yyvsp[0].sVal));
					(yyval.node) = newNode;
				}
#line 2504 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 91 "src/parser.ypp" /* yacc.c:1646  */
    {  
			(yyval.node) = (yyvsp[0].node);
		}
#line 2512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 95 "src/parser.ypp" /* yacc.c:1646  */
    {  
			(yyval.node) = (yyvsp[0].node);
		}
#line 2520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 99 "src/parser.ypp" /* yacc.c:1646  */
    {  
			(yyval.node) = (yyvsp[0].node);
		}
#line 2528 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 103 "src/parser.ypp" /* yacc.c:1646  */
    {  
			(yyval.node) = (yyvsp[0].node);
		}
#line 2536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 107 "src/parser.ypp" /* yacc.c:1646  */
    {  
			(yyval.node) = (yyvsp[0].node);
		}
#line 2544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 112 "src/parser.ypp" /* yacc.c:1646  */
    {	
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->type = "bool";
			(yyval.node)->place = string((yyvsp[0].sVal));
			(yyval.node)->isLit = true;	
		}
#line 2556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 119 "src/parser.ypp" /* yacc.c:1646  */
    { 	
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->type = "bool";
			(yyval.node)->place = string((yyvsp[0].sVal));
			(yyval.node)->isLit = true;
		}
#line 2568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 128 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->type = "int";
			(yyval.node)->place = to_string((yyvsp[0].iVal));
			(yyval.node)->isLit = true;
		}
#line 2580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 135 "src/parser.ypp" /* yacc.c:1646  */
    {
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->type = "int";
			(yyval.node)->place = to_string((yyvsp[0].iVal));
			(yyval.node)->isLit = true;
		}
#line 2592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 144 "src/parser.ypp" /* yacc.c:1646  */
    {
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->type = "char";
			(yyval.node)->place = string((yyvsp[0].sVal));
			(yyval.node)->isLit = true;
		}
#line 2604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 158 "src/parser.ypp" /* yacc.c:1646  */
    {
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->type = "string";
			(yyval.node)->place = string((yyvsp[0].sVal));
			(yyval.node)->isLit = true;
		}
#line 2616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 165 "src/parser.ypp" /* yacc.c:1646  */
    {
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->type = "string";
			(yyval.node)->place = string((yyvsp[0].sVal));
			(yyval.node)->isLit = true;
		}
#line 2628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 174 "src/parser.ypp" /* yacc.c:1646  */
    {
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->type = "null";
			(yyval.node)->place = string((yyvsp[0].sVal));
			(yyval.node)->isLit = true;
		}
#line 2640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 184 "src/parser.ypp" /* yacc.c:1646  */
    {}
#line 2646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 186 "src/parser.ypp" /* yacc.c:1646  */
    {}
#line 2652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 190 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 192 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 194 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 195 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 199 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node);}
#line 2682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 200 "src/parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[0].node);
		}
#line 2690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 204 "src/parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[0].node); 
		}
#line 2698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 207 "src/parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[0].node); 
		}
#line 2706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 210 "src/parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[0].node); 
		}
#line 2714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 214 "src/parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[0].node); 
		}
#line 2722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 217 "src/parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[0].node); 
		}
#line 2730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 220 "src/parser.ypp" /* yacc.c:1646  */
    {
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->place = "bool"; 
			(yyval.node)->type = "bool";
		}
#line 2741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 227 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 229 "src/parser.ypp" /* yacc.c:1646  */
    {
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->place = "int"; 
			(yyval.node)->type = "int";
		}
#line 2758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 235 "src/parser.ypp" /* yacc.c:1646  */
    {
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->place = "long"; 
			(yyval.node)->type = "long";
		}
#line 2769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 241 "src/parser.ypp" /* yacc.c:1646  */
    {
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->place = "char"; 
			(yyval.node)->type = "char";
		}
#line 2780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 248 "src/parser.ypp" /* yacc.c:1646  */
    {
			(yyval.node) = (yyvsp[-1].node);
			(yyval.node)->place += " ?"; 
			// Consider the type of this node
		}
#line 2790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 254 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 258 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->place = string((yyvsp[0].sVal));
		}
#line 2806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 263 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->place = string((yyvsp[0].sVal));
		}
#line 2816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 271 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 275 "src/parser.ypp" /* yacc.c:1646  */
    { }
#line 2828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 276 "src/parser.ypp" /* yacc.c:1646  */
    { }
#line 2834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 278 "src/parser.ypp" /* yacc.c:1646  */
    { }
#line 2840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 279 "src/parser.ypp" /* yacc.c:1646  */
    { }
#line 2846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 281 "src/parser.ypp" /* yacc.c:1646  */
    { }
#line 2852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 283 "src/parser.ypp" /* yacc.c:1646  */
    { }
#line 2858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 284 "src/parser.ypp" /* yacc.c:1646  */
    { }
#line 2864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 286 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 287 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 288 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 290 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 291 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 292 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 293 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 294 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 295 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 296 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 297 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 298 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2936 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 301 "src/parser.ypp" /* yacc.c:1646  */
    { 
			string tmpVar = symTable->GenTemp((yyvsp[-1].node)->type, "simple", -1);
			(yyval.node) = (yyvsp[-1].node);
			(yyval.node) -> place = tmpVar;
			gen2OpCode((yyval.node), "=", (yyvsp[-1].node));
		}
#line 2947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 308 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 2953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 309 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 2959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 310 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 2965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 311 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 2971 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 313 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 2977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 314 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 2983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 315 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 2989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 316 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 2995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 317 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 318 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 320 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 321 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 322 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 323 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 325 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 327 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3043 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 328 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 330 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->place = (yyvsp[0].sVal); 
		}
#line 3059 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 336 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 337 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 339 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3077 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 340 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3083 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 341 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3089 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 342 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3095 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 344 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3101 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 346 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3107 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 348 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3113 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 349 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3119 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 350 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3125 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 351 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3131 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 353 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3137 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 354 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 356 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3149 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 357 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3155 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 358 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3161 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 360 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3167 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 361 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3173 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 363 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3179 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 365 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3185 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 366 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3191 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 368 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3197 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 369 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3203 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 371 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3209 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 372 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3215 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 374 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3221 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 375 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3227 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 377 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3233 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 378 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3239 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 379 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3245 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 380 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3251 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 381 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3257 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 382 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3263 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 385 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3269 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 386 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3275 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 388 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3281 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 390 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3287 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 391 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3293 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 392 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3299 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 393 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3305 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 395 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3311 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 396 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3317 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 397 "src/parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[0].node);
			//string tmpVar = GenTemp($2->type, "simple", curEnv->addTable[$2->place]->width);
			//$$->place = tmpVar;
			////////////////// I guess this function will carry out the above mentioned statements ////////////////////////////
			getPreUnaryOpCode("-", (yyval.node), (yyvsp[0].node), 1234555);
		}
#line 3329 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 406 "src/parser.ypp" /* yacc.c:1646  */
    {  
			(yyval.node) = (yyvsp[0].node);
			getPreUnaryOpCode("++", (yyval.node), (yyvsp[0].node), 1234555);
		}
#line 3338 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 412 "src/parser.ypp" /* yacc.c:1646  */
    {  
			(yyval.node) = (yyvsp[0].node);
			getPreUnaryOpCode("--", (yyval.node), (yyvsp[0].node), 1234555);
		}
#line 3347 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 417 "src/parser.ypp" /* yacc.c:1646  */
    { }
#line 3353 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 418 "src/parser.ypp" /* yacc.c:1646  */
    { }
#line 3359 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 419 "src/parser.ypp" /* yacc.c:1646  */
    { }
#line 3365 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 420 "src/parser.ypp" /* yacc.c:1646  */
    { }
#line 3371 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 423 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3377 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 425 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			gen2OpCode((yyval.node), "*", (yyvsp[-2].node), (yyvsp[0].node), 1234555);
			//$$->code.pb($$->code.end(), $3->code.begin(), $3->code.end());
		}
#line 3389 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 433 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), "/", (yyvsp[-2].node), (yyvsp[0].node), 1234555);
		}
#line 3401 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 441 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), "%", (yyvsp[-2].node), (yyvsp[0].node), 1234555);
		}
#line 3413 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 450 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3419 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 452 "src/parser.ypp" /* yacc.c:1646  */
    {  
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), "+", (yyvsp[-2].node), (yyvsp[0].node), 1234555);
		}
#line 3431 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 460 "src/parser.ypp" /* yacc.c:1646  */
    {  
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), "-", (yyvsp[-2].node), (yyvsp[0].node), 1234555);
		}
#line 3443 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 469 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3449 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 471 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), "<<", (yyvsp[-2].node), (yyvsp[0].node), 1234555);
		}
#line 3461 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 479 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), ">>", (yyvsp[-2].node), (yyvsp[0].node), 1234555);
		}
#line 3473 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 487 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3479 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 489 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), "<", (yyvsp[-2].node), (yyvsp[0].node), 1234555);
		}
#line 3491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 497 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), ">", (yyvsp[-2].node), (yyvsp[0].node), 1234555);
		}
#line 3503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 505 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), "<=", (yyvsp[-2].node), (yyvsp[0].node), 1234555);
		}
#line 3515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 513 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), ">=", (yyvsp[-2].node), (yyvsp[0].node), 1234555);
		}
#line 3527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 520 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 521 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 522 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-3].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[-1].node)->code.begin(), (yyvsp[-1].node)->code.end());
			gen2OpCode((yyval.node), "==", (yyvsp[-3].node), (yyvsp[-1].node), 1234555);
		}
#line 3551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 530 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), "!=", (yyvsp[-2].node), (yyvsp[0].node), 1234555);
		}
#line 3563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 538 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 540 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), "&", (yyvsp[-2].node), (yyvsp[0].node), 1234555);
		}
#line 3581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 548 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 550 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), "^", (yyvsp[-2].node), (yyvsp[0].node), 1234555);
		}
#line 3599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 558 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 560 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), "|", (yyvsp[-2].node), (yyvsp[0].node), 1234555);
		}
#line 3617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 568 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node);  }
#line 3623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 570 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), "&&", (yyvsp[-2].node), (yyvsp[0].node), 1234555);
		}
#line 3635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 578 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 580 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), "||", (yyvsp[-2].node), (yyvsp[0].node), 1234555);
		}
#line 3653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 588 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 590 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), "??", (yyvsp[-2].node), (yyvsp[0].node), 1234555);
		}
#line 3671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 598 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 600 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			getCECode((yyval.node), (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node), 1234555);
		}
#line 3687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 606 "src/parser.ypp" /* yacc.c:1646  */
    {  
			// assignment_operator is a string
			(yyval.node) = (yyvsp[-2].node);	
		}
#line 3696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 611 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.sVal) = "="; }
#line 3702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 612 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.sVal) = "+="; }
#line 3708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 613 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.sVal) = "-="; }
#line 3714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 614 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.sVal) = "*="; }
#line 3720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 615 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.sVal) = "/="; }
#line 3726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 616 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.sVal) = "%="; }
#line 3732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 617 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.sVal) = "&="; }
#line 3738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 618 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.sVal) = "|="; }
#line 3744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 619 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.sVal) = "^="; }
#line 3750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 620 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.sVal) = "<<="; }
#line 3756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 621 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.sVal) = ">>="; }
#line 3762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 623 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 624 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 626 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 628 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 630 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 634 "src/parser.ypp" /* yacc.c:1646  */
    {  (yyval.node) = (yyvsp[0].node);  }
#line 3798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 635 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 636 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 638 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 639 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 640 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 641 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 642 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 643 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 644 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 645 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 647 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode; 
		}
#line 3867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 651 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 3873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 653 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 654 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 3885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 656 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 658 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 660 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 3903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 661 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 663 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 3915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 665 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 667 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 668 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3933 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 670 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 671 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-2].node); }
#line 3945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 673 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3951 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 674 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3957 "y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 676 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3963 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 678 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3969 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 680 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3975 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 681 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3981 "y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 682 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 683 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3993 "y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 684 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3999 "y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 685 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4005 "y.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 686 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4011 "y.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 688 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4017 "y.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 689 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4023 "y.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 691 "src/parser.ypp" /* yacc.c:1646  */
    { }
#line 4029 "y.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 692 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4035 "y.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 694 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4041 "y.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 696 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 697 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4053 "y.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 699 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4059 "y.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 700 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 702 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 704 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4077 "y.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 705 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4083 "y.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 707 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4089 "y.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 708 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4095 "y.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 710 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4101 "y.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 711 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4107 "y.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 712 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4113 "y.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 713 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4119 "y.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 715 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4125 "y.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 717 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4131 "y.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 719 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4137 "y.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 720 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 721 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4149 "y.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 722 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4155 "y.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 723 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4161 "y.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 724 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4167 "y.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 725 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4173 "y.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 726 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4179 "y.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 728 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4185 "y.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 729 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4191 "y.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 731 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4197 "y.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 733 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4203 "y.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 735 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4209 "y.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 736 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4215 "y.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 738 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4221 "y.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 740 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4227 "y.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 741 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4233 "y.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 742 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4239 "y.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 743 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4245 "y.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 744 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4251 "y.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 746 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4257 "y.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 748 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4263 "y.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 750 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4269 "y.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 751 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4275 "y.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 752 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4281 "y.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 754 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4287 "y.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 755 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4293 "y.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 757 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4299 "y.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 758 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4305 "y.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 760 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4311 "y.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 761 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4317 "y.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 762 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4323 "y.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 764 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4329 "y.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 766 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4335 "y.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 768 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4341 "y.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 770 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4347 "y.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 772 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4353 "y.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 773 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4359 "y.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 777 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4365 "y.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 778 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4371 "y.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 779 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4377 "y.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 780 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4383 "y.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 782 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 4389 "y.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 783 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-2].node); }
#line 4395 "y.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 785 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4401 "y.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 786 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4407 "y.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 788 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4413 "y.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 789 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4419 "y.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 790 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 4425 "y.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 791 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4431 "y.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 793 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4437 "y.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 794 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4443 "y.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 796 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4449 "y.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 797 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4455 "y.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 799 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4461 "y.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 801 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 4467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 803 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4473 "y.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 804 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4479 "y.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 806 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 807 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 809 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4497 "y.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 810 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 812 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-2].node); }
#line 4509 "y.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 816 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 4515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 817 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 818 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 819 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 820 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 821 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 822 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 823 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 825 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 826 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 828 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->place = string((yyvsp[0].sVal));
		}
#line 4579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 833 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->place = string((yyvsp[0].sVal));
		}
#line 4589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 838 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->place = string((yyvsp[0].sVal));
		}
#line 4599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 843 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->place = string((yyvsp[0].sVal));
		}
#line 4609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 849 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 851 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode; 
		}
#line 4624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 855 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 4630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 857 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 858 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 860 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 317:
#line 861 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 862 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 863 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 864 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 865 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 867 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 868 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 871 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 872 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 874 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 876 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 877 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 880 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 881 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 883 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 885 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 886 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 888 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 890 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 337:
#line 891 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 338:
#line 892 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 339:
#line 893 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-4].node); }
#line 4780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 340:
#line 894 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 341:
#line 895 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 896 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 343:
#line 897 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 900 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 902 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 346:
#line 903 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 4822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 347:
#line 905 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 348:
#line 906 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 907 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 350:
#line 909 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 351:
#line 910 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 352:
#line 912 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 4858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 353:
#line 913 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 354:
#line 914 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 355:
#line 915 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 356:
#line 917 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 357:
#line 919 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 920 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 922 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 924 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 925 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 362:
#line 928 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 363:
#line 929 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 930 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 365:
#line 931 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4936 "y.tab.c" /* yacc.c:1646  */
    break;

  case 366:
#line 933 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4942 "y.tab.c" /* yacc.c:1646  */
    break;

  case 367:
#line 934 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 368:
#line 935 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 369:
#line 936 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4960 "y.tab.c" /* yacc.c:1646  */
    break;

  case 370:
#line 938 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4966 "y.tab.c" /* yacc.c:1646  */
    break;

  case 371:
#line 939 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4972 "y.tab.c" /* yacc.c:1646  */
    break;

  case 372:
#line 941 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4978 "y.tab.c" /* yacc.c:1646  */
    break;

  case 373:
#line 943 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4984 "y.tab.c" /* yacc.c:1646  */
    break;

  case 374:
#line 944 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 375:
#line 948 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4996 "y.tab.c" /* yacc.c:1646  */
    break;

  case 376:
#line 949 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 377:
#line 950 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 378:
#line 951 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5014 "y.tab.c" /* yacc.c:1646  */
    break;

  case 379:
#line 954 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5020 "y.tab.c" /* yacc.c:1646  */
    break;

  case 380:
#line 955 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5026 "y.tab.c" /* yacc.c:1646  */
    break;

  case 381:
#line 957 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5032 "y.tab.c" /* yacc.c:1646  */
    break;

  case 382:
#line 958 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5038 "y.tab.c" /* yacc.c:1646  */
    break;

  case 383:
#line 960 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5044 "y.tab.c" /* yacc.c:1646  */
    break;

  case 384:
#line 961 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5050 "y.tab.c" /* yacc.c:1646  */
    break;

  case 385:
#line 962 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5056 "y.tab.c" /* yacc.c:1646  */
    break;

  case 386:
#line 963 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5062 "y.tab.c" /* yacc.c:1646  */
    break;

  case 387:
#line 964 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5068 "y.tab.c" /* yacc.c:1646  */
    break;

  case 388:
#line 968 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
		}
#line 5077 "y.tab.c" /* yacc.c:1646  */
    break;

  case 389:
#line 973 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.sVal) = "[]";  }
#line 5083 "y.tab.c" /* yacc.c:1646  */
    break;

  case 390:
#line 974 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.sVal) = "[,]" ;}
#line 5089 "y.tab.c" /* yacc.c:1646  */
    break;

  case 391:
#line 976 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5095 "y.tab.c" /* yacc.c:1646  */
    break;

  case 392:
#line 977 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5101 "y.tab.c" /* yacc.c:1646  */
    break;

  case 393:
#line 978 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5107 "y.tab.c" /* yacc.c:1646  */
    break;

  case 394:
#line 980 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5113 "y.tab.c" /* yacc.c:1646  */
    break;

  case 395:
#line 981 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5119 "y.tab.c" /* yacc.c:1646  */
    break;

  case 396:
#line 985 "src/parser.ypp" /* yacc.c:1646  */
    {}
#line 5125 "y.tab.c" /* yacc.c:1646  */
    break;


#line 5129 "y.tab.c" /* yacc.c:1646  */
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

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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
                  yystos[*yyssp], yyvsp);
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
#line 988 "src/parser.ypp" /* yacc.c:1906  */
	

extern FILE *yyin;

extern void yyerror(char *c){
		cout << "Error at line: " << 1234555 << "\n" << c << endl;
		exit(1);	
	}


int main(int argc, char* argv[]){
	FILE *file;
	if (argc==2 &&(file=fopen(argv[1],"r")))
		yyin = file;
	else if (argc!=2){
		cerr<< "Exactly one file has to be passed as argument!\n";
		exit(1);
	}
	else{
		cerr<< "Please specify correct file name\n";
		exit(1);
	}
	yydebug = 0;
	yyparse();
	/*
	cerr << "==================================================\n";
	cerr << "                 PARSING COMPLETE\n";
	cerr << "==================================================\n";
	*/
	fclose(file);
	return 0;
}
