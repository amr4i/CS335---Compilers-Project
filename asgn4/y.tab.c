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

	extern "C" int yylex();
	// extern "C" int yyparse();
	extern "C" FILE *yyin;
	extern void yyerror(const char *c);
	//extern int 1234555;


	// SymTable* ST = new SymTable();

#line 93 "y.tab.c" /* yacc.c:339  */

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
#line 30 "src/parser.ypp" /* yacc.c:355  */

	int iVal;
	char *sVal;
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
#define YYFINAL  33
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3115

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  99
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  170
/* YYNRULES -- Number of rules.  */
#define YYNRULES  388
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  660

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   329

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    86,     2,     2,     2,    92,    95,     2,
      78,    79,    90,    88,    76,    89,    80,    91,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    77,    98,
      93,    85,    94,    75,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    81,     2,    82,    96,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    83,    97,    84,    87,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    83,    83,    87,   104,   108,   112,   116,   120,   126,
     134,   144,   151,   160,   175,   183,   193,   204,   206,   210,
     212,   214,   215,   219,   220,   224,   227,   230,   234,   237,
     240,   247,   249,   255,   261,   268,   274,   278,   284,   293,
     297,   298,   300,   301,   303,   305,   306,   308,   309,   310,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   323,
     330,   330,   332,   333,   336,   341,   342,   343,   344,   345,
     348,   349,   350,   351,   354,   357,   358,   360,   366,   367,
     369,   370,   373,   374,   375,   376,   378,   379,   381,   382,
     383,   385,   386,   388,   390,   391,   393,   394,   396,   397,
     399,   400,   402,   403,   404,   405,   406,   407,   410,   411,
     413,   415,   416,   417,   418,   420,   421,   422,   430,   436,
     442,   443,   444,   445,   448,   449,   457,   465,   475,   476,
     484,   494,   495,   503,   512,   513,   521,   529,   537,   545,
     546,   546,   554,   563,   564,   573,   574,   583,   584,   593,
     594,   603,   604,   613,   614,   623,   624,   631,   651,   652,
     653,   654,   655,   656,   657,   658,   659,   660,   661,   663,
     664,   666,   668,   670,   674,   675,   676,   678,   679,   680,
     681,   682,   683,   684,   685,   687,   688,   690,   692,   694,
     695,   701,   703,   705,   706,   708,   721,   723,   724,   730,
     735,   761,   762,   764,   766,   768,   769,   770,   771,   772,
     774,   775,   777,   796,   821,   823,   824,   826,   827,   829,
     831,   832,   834,   835,   837,   838,   839,   841,   877,   907,
     936,   964,  1003,  1036,  1074,  1106,  1150,  1194,  1195,  1197,
    1205,  1207,  1208,  1214,  1215,  1216,  1217,  1218,  1220,  1230,
    1240,  1241,  1242,  1244,  1245,  1247,  1248,  1250,  1251,  1252,
    1254,  1256,  1258,  1260,  1262,  1263,  1267,  1268,  1269,  1270,
    1272,  1278,  1285,  1286,  1288,  1293,  1294,  1295,  1297,  1298,
    1300,  1301,  1303,  1305,  1307,  1308,  1310,  1311,  1312,  1314,
    1318,  1324,  1330,  1331,  1337,  1338,  1344,  1345,  1348,  1349,
    1351,  1357,  1363,  1369,  1376,  1378,  1382,  1384,  1385,  1391,
    1392,  1393,  1394,  1395,  1396,  1398,  1399,  1402,  1403,  1405,
    1407,  1408,  1411,  1412,  1414,  1415,  1416,  1417,  1419,  1421,
    1422,  1423,  1424,  1425,  1426,  1427,  1428,  1431,  1433,  1434,
    1436,  1437,  1438,  1440,  1441,  1443,  1444,  1445,  1446,  1448,
    1450,  1451,  1453,  1455,  1456,  1459,  1460,  1461,  1462,  1464,
    1465,  1466,  1467,  1469,  1470,  1472,  1474,  1475,  1479,  1480,
    1481,  1482,  1485,  1486,  1488,  1489,  1491,  1492,  1493,  1494,
    1498,  1503,  1504,  1506,  1510,  1511,  1513,  1514,  1518
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IFX", "ELSE", "CONST", "CONTINUE",
  "DEFAULT", "DO", "FINALLY", "FOR", "GOTO", "IF", "IN", "NAMESPACE",
  "PARAMS", "REF", "RETURN", "STRUCT", "SWITCH", "THROW", "TRY", "TYPEOF",
  "USING", "VOID", "WHILE", "SIMPLE_ESC_SEQ", "CHAR_LITERAL",
  "REG_STR_LITERAL", "VER_STR_LITERAL", "DQM", "RAND", "ROR", "REQ", "RNE",
  "LE", "GE", "APLUS", "AMINUS", "AMULT", "ADIV", "AMOD", "AAND", "AOR",
  "ACARET", "LSHIFT", "LSHIFTEQ", "WHERE", "TRUE", "FALSE", "DCLN",
  "RSHIFT", "RSHIFTEQ", "INT", "CHAR", "LONG", "OBJECT", "STRING", "BOOL",
  "ID", "NULL_LIT", "THIS", "INCR", "DECR", "NEW", "PUBLIC", "PROTECTED",
  "PRIVATE", "BREAK", "CASE", "CATCH", "BASE", "CLASS", "DINT_LITERAL",
  "HDINT_LITERAL", "'?'", "','", "':'", "'('", "')'", "'.'", "'['", "']'",
  "'{'", "'}'", "'='", "'!'", "'~'", "'+'", "'-'", "'*'", "'/'", "'%'",
  "'<'", "'>'", "'&'", "'^'", "'|'", "';'", "$accept", "start",
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
  "embedded_statement", "block", "block_start", "block_end",
  "statement_list", "empty_statement", "labeled_statement",
  "declaration_statement", "local_variable_declaration",
  "local_variable_type", "local_variable_declarators",
  "local_variable_declarator", "local_variable_initializer",
  "local_constant_declaration", "expression_statement",
  "statement_expression", "selection_statement", "if_statement",
  "switch_statement", "switch_block", "switch_sections", "switch_section",
  "switch_labels", "switch_label", "iteration_statement",
  "while_statement", "do_statement", "for_statement", "for_initializer",
  "for_condition", "for_iterator", "statement_expression_list",
  "jump_statement", "break_statement", "continue_statement",
  "goto_statement", "return_statement", "throw_statement", "try_statement",
  "catch_clauses", "general_catch_clause", "finally_clause",
  "using_statement", "resource_acquisition", "compilation_unit",
  "namespace_declaration", "qualified_identifier", "namespace_body",
  "using_directives", "using_directive", "using_alias_directive",
  "using_namespace_directive", "namespace_member_declarations",
  "namespace_member_declaration", "qualified_alias_member",
  "class_declaration", "modifiers", "modifier", "class_base", "class_body",
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
     325,   326,   327,   328,   329,    63,    44,    58,    40,    41,
      46,    91,    93,   123,   125,    61,    33,   126,    43,    45,
      42,    47,    37,    60,    62,    38,    94,   124,    59
};
# endif

#define YYPACT_NINF -511

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-511)))

#define YYTABLE_NINF -389

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     327,   -30,   -30,   -30,  -511,  -511,  -511,  -511,   -30,    71,
    -511,  -511,   327,  -511,  -511,  -511,   154,  -511,  -511,   251,
    -511,  -511,  -511,  -511,  -511,   225,    66,   -28,   117,  -511,
       4,  -511,   129,  -511,  -511,   154,  -511,   -30,   -30,  -511,
     -30,   112,   124,   404,   131,   -30,   -30,  -511,   295,   757,
      81,   158,    66,   129,  -511,  -511,   144,   247,  -511,   419,
     -30,  -511,  -511,  -511,  -511,  -511,  -511,  -511,   -20,  -511,
    -511,   -30,   163,   185,  -511,  -511,  -511,   231,  -511,  1753,
    -511,  -511,  -511,   226,  -511,   234,  1942,  -511,  -511,  -511,
    -511,   272,   242,  -511,  -511,   -30,  1343,   857,  -511,  -511,
    -511,  -511,  -511,  -511,  -511,   244,  -511,   246,    81,   260,
    -511,   282,  -511,   -30,     4,   294,   224,   172,   149,  -511,
     303,   217,  -511,  -511,   419,   -30,   -30,   234,  -511,  -511,
     284,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,   326,
    -511,  -511,  -511,  -511,   308,  -511,  -511,   325,   186,  -511,
     470,   419,  -511,  -511,   353,   -30,   354,   364,  -511,   419,
    -511,  2669,   -30,  -511,   876,   359,  -511,   -30,   366,   192,
     367,  -511,  1027,   363,  -511,  2918,   -30,  -511,  -511,   368,
     163,   -30,    72,  -511,   361,   353,   619,   -30,   371,   373,
    -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,
    -511,  -511,  -511,   321,   320,  -511,  -511,  2737,  1964,  2918,
    2918,  2918,  2918,  -511,  -511,  -511,  -511,  -511,  -511,   370,
     177,  3028,  -511,   374,  -511,  -511,  -511,  -511,  -511,  -511,
    -511,  -511,  -511,  -511,   941,  -511,   328,   333,   256,    14,
     382,   357,   360,   356,   433,   106,   390,  -511,  -511,  -511,
    -511,   105,   386,  -511,  -511,   396,  -511,  -511,   388,  -511,
     222,  2078,  -511,  2146,   419,   384,  1366,    34,   405,  1492,
     406,  1547,  -511,   409,   411,   432,   435,   436,   438,   441,
     442,  2918,  2918,   415,  -511,  -511,   -12,  -511,   175,   188,
     941,  -511,  -511,  -511,  -511,  -511,  -511,     9,  1112,  -511,
    -511,  -511,   434,   -30,   437,  -511,   439,  -511,  -511,  -511,
    -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,
    -511,  -511,   155,   386,   443,  -511,  -511,  -511,  -511,  -511,
     452,   456,  2918,  -511,  -511,  -511,  -511,   361,   419,   685,
     458,   461,   462,   462,   -30,  2918,   471,   472,   474,   194,
    -511,  -511,   -21,  -511,  -511,  -511,  -511,   -30,  2027,  2918,
    -511,   -30,  -511,  -511,  -511,  -511,  -511,  -511,  -511,  -511,
    -511,  -511,  -511,  -511,  2918,  2918,  2918,  2918,  2918,  2918,
    2918,  -511,  2918,  2918,  2918,  2918,  2918,  2918,  2918,  2918,
    2918,  2918,  2918,  2918,  2918,  2918,  2095,   -30,  -511,  -511,
    -511,   476,  -511,   477,   -30,  -511,   532,   460,  2918,   463,
    2918,  -511,   464,  2918,  -511,   465,    19,  2973,  2918,  -511,
    -511,  -511,  -511,  -511,  1282,   481,  -511,  -511,  -511,   475,
     488,  -511,  -511,  -511,  -511,  -511,  -511,  2163,  2231,  -511,
    -511,   490,   493,   496,  2299,  2354,  -511,  -511,  -511,   500,
     502,  2918,  2918,  -511,   504,  2417,  -511,  -511,  2918,  -511,
     123,   254,  -511,  2800,  -511,  -511,   503,  -511,  -511,  -511,
    -511,  -511,  -511,   328,   328,   333,   333,   256,   256,   256,
     256,    14,    14,   382,   357,   360,   356,  -511,   433,   507,
    -511,   259,  -511,  -511,  -511,   510,   509,  -511,   491,  -511,
    -511,   511,  -511,   514,  -511,  -511,  -511,   586,  -511,  -511,
    -511,  -511,   517,   520,  -511,  1429,  -511,  2669,   -30,  -511,
     283,  -511,   285,  -511,  -511,  -511,   518,   289,   521,  -511,
    2918,  -511,  -511,  2918,  -511,  -511,  -511,  -511,  -511,  -511,
    2800,  -511,  -511,  -511,  -511,  2918,  -511,  2918,  -511,  1366,
     523,  -511,  -511,  -511,  1366,  1366,  1602,  -511,  -511,   515,
     531,  -511,  -511,  -511,  -511,  -511,  -511,  2480,  -511,  -511,
    -511,   518,   -17,  -511,  -511,  -511,  -511,   529,   608,    13,
    -511,  -511,  -511,  1712,  -511,   516,  1657,  2543,  2918,  -511,
     -25,   118,  -511,   165,  -511,  -511,  -511,   462,  -511,   522,
    1366,   544,  2918,  -511,    17,  -511,  1197,  -511,  1366,   543,
     531,  1775,  1838,   526,  -511,   541,  2855,   146,  -511,  2606,
    -511,  -511,  -511,  -511,  -511,   549,  -511,  -511,   347,   942,
    -511,  -511,  1366,  1366,   548,  1366,   550,  1901,  -511,  -511,
    -511,  -511,  -511,   545,  -511,  -511,  -511,  -511,  -511,  -511,
    1366,  -511,  1366,  1366,   553,  -511,  -511,  -511,  1366,  -511
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     388,     0,     0,     0,   300,   301,   302,   303,     0,     0,
       2,   286,   268,   278,   280,   281,   267,   284,   288,     0,
     298,   287,   269,     3,   272,     0,     0,   272,     0,    19,
      21,    22,     0,     1,   279,   266,   285,     0,     0,   299,
       0,     0,   270,     0,   368,     0,     0,   283,     0,     0,
       0,   290,     0,     0,   273,   274,     0,     0,   271,     0,
       0,    32,    34,    33,    37,    38,    30,   372,   272,    25,
      20,     0,    23,    26,    28,    31,    27,     0,    29,     0,
     376,   377,   378,   388,   379,   388,     0,   374,    24,   370,
     289,   272,     0,   304,   305,     0,     0,     0,   307,   309,
     310,   311,   312,   313,   314,   292,   293,   369,     0,   291,
     276,     0,   275,     0,   337,     0,     0,   272,     0,   322,
       0,     0,   380,    35,     0,     0,     0,   388,   339,   338,
       0,   328,   187,   364,   363,   353,   373,   375,   282,     0,
     306,   308,   296,   371,   294,   295,   277,     0,     0,   317,
       0,     0,   350,   351,   355,     0,     0,   340,   343,     0,
     342,     0,     0,   320,     0,     0,   381,     0,     0,     0,
       0,   354,   388,     0,   297,     0,     0,   315,   333,     0,
       0,     0,     0,   356,   345,   357,     0,     0,     0,     0,
      13,    14,    15,     9,    10,    66,    65,    67,    68,    69,
      64,    16,    77,     0,     0,    11,    12,     0,     0,     0,
       0,     0,     0,    50,     4,     5,     6,     7,     8,    80,
      47,    49,    51,     0,    52,    53,    54,    55,   111,    56,
      48,    57,    58,   115,   124,   114,   128,   131,   134,   139,
     143,   145,   147,   149,   151,   153,   155,   171,   170,   326,
     169,    81,     0,   325,   327,   324,   323,   329,     0,   382,
       0,     0,   321,     0,     0,     0,   388,     0,     0,     0,
       0,     0,   388,     0,     0,    32,    34,    33,    37,    38,
      30,     0,     0,     0,   388,   191,   272,   196,    52,    56,
       0,   208,   209,   207,   189,   176,   177,     0,   388,   178,
     174,   175,     0,     0,     0,   179,     0,   180,   210,   211,
     181,   224,   225,   226,   182,   243,   244,   245,   246,   247,
     183,   184,    81,    22,   388,   172,   319,   318,   335,   352,
       0,     0,     0,   347,   358,   344,   341,   346,     0,     0,
       0,    23,    24,     0,     0,     0,     0,     0,     0,    81,
     383,   386,     0,   112,   113,   116,   117,     0,     0,     0,
     120,     0,   159,   160,   161,   162,   163,   164,   165,   166,
     167,    18,   158,   168,     0,     0,     0,     0,     0,     0,
       0,    17,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   331,   316,
     334,     0,   330,     0,     0,   249,     0,     0,     0,     0,
       0,   253,     0,     0,   255,     0,     0,     0,     0,   118,
     119,   248,   185,   188,   388,     0,   388,   190,   193,   199,
     195,   197,   194,   204,   367,   366,   365,     0,     0,   349,
     348,     0,     0,     0,     0,     0,   106,   107,    78,     0,
      75,     0,     0,    59,     0,     0,   384,    60,     0,    70,
     272,     0,    40,     0,    42,    45,     0,    62,   157,   125,
     126,   127,   124,   129,   130,   132,   133,   137,   138,   135,
     136,   140,   142,   144,   146,   148,   150,   154,   152,     0,
      72,     0,    63,   336,   332,   203,     0,   252,     0,   250,
     173,     0,   254,     0,   256,   388,   388,   257,   260,   258,
     265,   264,     0,     0,   192,     0,   186,     0,     0,   361,
       0,   359,     0,   110,   109,   108,    82,     0,     0,    79,
       0,   123,   122,     0,   385,   387,    61,    46,    39,    44,
       0,    71,    43,    74,   141,     0,    73,     0,   251,   388,
       0,   262,   261,   259,   388,   388,     0,   237,   241,     0,
     238,   201,   200,   202,   198,   362,   360,     0,    84,    86,
      87,    83,   102,    76,   121,    41,   156,     0,   212,     0,
     214,   263,   227,     0,   239,     0,     0,     0,     0,    88,
     272,     0,    91,     0,    98,   100,    85,   103,   104,     0,
     388,     0,     0,   215,     0,   217,   388,   220,   388,     0,
     240,     0,     0,     0,   242,     0,     0,     0,    89,     0,
      96,   105,   228,   213,   223,     0,   216,   218,     0,   219,
     221,   229,   388,   388,     0,   388,     0,     0,   101,    95,
      93,    94,    90,     0,    92,    97,    99,   222,   232,   231,
     388,   230,   388,   388,     0,   235,   234,   233,   388,   236
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -511,  -511,    -1,  -511,  -511,  -511,  -511,  -511,  -511,  -511,
    -511,  -511,  -511,   128,   495,  -105,   426,  -511,  -511,  -511,
    -511,   588,  -511,  -296,    99,  -511,   181,  -511,  -511,  -511,
    -511,  -511,  -511,   -35,  -511,  -346,  -511,  -511,  -511,    55,
    -510,  -511,  -511,    23,  -511,  -511,  -511,    27,  -511,  -511,
    -511,   427,   116,  -511,  -511,  -511,    48,   -91,     0,    51,
     258,  -511,   261,   262,   264,   263,  -511,   257,  -511,   245,
    -511,   372,  -505,  -398,  -387,  -290,  -245,   -74,   -71,   232,
      46,  -511,  -511,  -511,  -402,  -511,  -511,   150,  -511,  -511,
    -511,  -472,  -511,  -511,  -511,  -511,  -511,    58,  -511,    76,
    -511,  -511,  -511,  -511,  -511,    78,  -424,   170,  -511,  -511,
    -511,  -511,  -511,  -511,  -511,  -511,  -511,   179,  -511,  -511,
    -511,  -511,    31,  -511,   648,    67,  -511,  -511,   151,    10,
      73,  -511,    32,     8,   638,     1,  -511,   596,   -14,  -161,
     519,    -9,   568,   534,  -203,    56,  -511,   -53,  -511,  -117,
    -511,   524,   369,  -511,   525,    96,   -27,   512,   573,  -511,
    -511,   102,   649,  -511,   626,   -83,  -199,  -326,  -511,     3
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,    91,   213,   214,   215,   216,   217,   218,   382,
     373,    28,    69,    70,   287,    72,    73,    74,    75,    76,
      77,    78,   537,   461,   462,   463,   464,   219,   220,   221,
     222,   536,   223,   224,   225,   449,   226,   227,   228,   229,
     568,   569,   591,   592,   640,   570,   593,   594,   230,   231,
     232,   233,   234,   291,   292,   235,   236,   237,   238,   239,
     240,   544,   241,   242,   243,   244,   245,   246,   247,   248,
     374,   465,   250,   326,   584,   294,   295,   296,   297,   422,
     298,   299,   300,   301,   302,   303,   430,   431,   562,   304,
     305,   306,   307,   308,   309,   580,   604,   605,   606,   607,
     310,   311,   312,   313,   559,   585,   609,   610,   314,   315,
     316,   317,   318,   319,   320,   507,   508,   509,   321,   512,
      10,    11,   251,    42,    12,    13,    14,    15,    16,    17,
     252,    18,    19,    20,    50,    51,    97,    98,    80,   148,
     149,    81,   118,   119,   253,    82,    83,   115,   131,   156,
     157,   158,   333,   159,   160,    84,    85,   183,   135,   103,
     436,    21,    44,    86,    87,    88,   122,   254,   352,   132
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      24,    26,    27,    22,   343,   351,   260,    32,   427,   129,
     498,   134,   130,   466,   130,   511,   446,   447,   120,   425,
     601,   406,    45,   501,   601,    45,    36,    39,   505,    23,
      45,   513,    25,   179,    30,    99,    52,    53,    45,    54,
     100,   407,    68,   558,    90,    36,   180,   258,    68,   383,
     384,   105,   127,   134,   109,   455,   130,    46,   116,    24,
     616,   596,   595,   456,   121,   424,   208,    36,   181,   127,
     117,    33,   168,   170,    30,    79,    31,    30,    68,    34,
      30,    96,   602,    99,    40,    68,   602,    39,   100,   506,
      30,   114,   172,    23,   139,    68,    68,   603,   341,   528,
     491,   626,   114,   408,    39,   101,   639,   385,   386,   144,
      30,   558,   147,   557,   595,   614,    31,    30,    79,    31,
     342,    36,    31,    34,    24,   117,     1,    30,    30,    96,
       2,    29,    31,   330,   514,     3,   393,   288,   394,   558,
     558,   520,   522,   331,   401,   102,   403,    30,   527,    43,
     454,   104,    31,   101,   184,    30,   114,   114,     1,    31,
     577,   255,     2,    35,    49,   558,   147,     3,     1,    31,
      31,   286,     2,    45,    92,   147,     4,     5,     6,     7,
     329,    30,    30,   396,     8,    40,   337,   634,   636,    31,
      30,   563,    57,   102,   617,    30,    55,    31,   416,   104,
     539,   130,   618,   322,   625,    23,    48,   111,     4,     5,
       6,     7,    49,   654,   -21,    47,     8,    30,     4,     5,
       6,     7,    58,    31,    31,   162,     8,   289,   110,    89,
     642,   288,    31,   396,    30,    40,   -21,    31,   349,   151,
     152,   619,   615,   495,   121,   323,   598,   163,  -324,   620,
     435,  -205,   535,   130,  -205,   358,   106,   161,   359,    31,
     -36,     1,   176,   288,  -206,     2,   409,  -206,   162,    37,
    -324,   621,   396,  -205,    40,   121,    31,    61,    62,    63,
      64,    65,    66,    23,   177,   153,  -206,   423,   290,   475,
     262,   476,    30,   165,    30,    30,     1,   286,   176,   166,
       2,   380,   429,   154,   578,    40,   123,   381,    41,   581,
     582,     4,     5,     6,     7,     4,     5,     6,     7,     8,
     399,   289,    45,    38,   128,   353,   354,   355,   356,   322,
     540,   112,   133,   541,    31,   540,    31,    31,   546,   427,
     138,     1,   142,   448,   143,     2,     4,     5,     6,     7,
       3,    64,    65,   289,     8,   623,   457,   460,   145,   540,
     467,   540,   565,   631,   566,   540,   146,   172,   571,    30,
      30,   323,   150,   597,    61,    62,    63,    64,    65,    66,
      23,   164,   290,   477,   478,   479,   480,   648,   649,   288,
     651,     4,     5,     6,     7,   460,   492,   419,   420,     8,
     344,   345,   121,   147,   173,   655,   174,   656,   657,    59,
     175,    31,    31,   659,   290,   387,   388,   293,   375,   376,
     377,   378,   379,   286,   624,   338,   473,   474,    60,   423,
     182,   551,   552,   185,   130,   130,   460,   460,   481,   482,
     186,   259,   324,   460,   261,   263,   332,   328,   322,   338,
     357,   339,   389,   391,   361,   322,   390,    61,    62,    63,
      64,    65,    66,    23,   392,   395,   397,   398,     4,     5,
       6,     7,    61,    62,    63,    64,    65,    66,    23,   289,
     288,   161,   405,   410,   413,   151,   152,   417,    67,   418,
     323,   469,   470,   471,   472,   472,   472,   323,   472,   472,
     472,   472,   472,   472,   472,   472,   472,   472,   472,   472,
     472,   293,   -66,   421,   288,   -65,   -67,   429,   -68,   288,
     288,   -69,   -64,    61,    62,    63,    64,    65,    66,    23,
     437,   153,   428,   249,   438,   432,   444,   433,    71,   460,
     290,   434,   445,   293,    71,   208,   322,   325,   288,   178,
     451,   452,   288,   453,   113,   493,   494,   496,   497,   515,
     517,   499,   502,   504,   518,   288,   590,   531,   532,   523,
     289,   288,   524,   288,   126,   525,   288,   288,   530,   348,
     249,    71,   529,   533,   545,   543,   176,   547,   323,   548,
     549,   126,    71,   550,   288,   505,   554,   288,   288,   555,
     288,   567,   288,   572,   289,   286,   579,   587,   599,   289,
     289,   155,   600,   586,   611,   288,   643,   288,   288,   167,
     622,   624,   632,   288,   637,   638,   647,   650,   286,   652,
     616,   290,   658,   347,   151,   152,    93,   322,   289,   575,
     644,   412,   289,   415,   542,   155,   646,   483,   360,   574,
     487,   484,   629,   485,   187,   289,   486,   488,   516,   155,
     322,   289,   627,   289,   613,   290,   289,   289,   564,   293,
     290,   290,    61,    62,    63,    64,    65,    66,    23,   323,
     153,   155,   630,   472,   289,   560,   553,   289,   289,    56,
     289,   108,   289,   141,   169,   327,   256,   334,   340,   290,
     171,   107,   323,   290,   439,   289,   440,   289,   289,   442,
     335,   336,   137,   289,     0,     0,   290,   450,     0,     0,
       0,     0,   290,     0,   290,     0,     0,   290,   290,     0,
       0,   450,     0,     0,     0,   472,     0,     0,    61,    62,
      63,    64,    65,    66,    23,   290,   468,     0,   290,   290,
       0,   290,     0,   290,     0,     0,   155,     0,   155,   404,
     293,     0,    59,     0,     0,     0,   290,   489,   290,   290,
       0,     0,     0,     0,   290,     2,     0,     0,     0,     0,
     325,    60,   500,     0,     0,   503,     0,     0,     0,   510,
     500,     0,     0,     0,   293,     0,     0,     0,     0,   293,
     293,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      61,    62,    63,    64,    65,    66,    23,   450,     0,     0,
       0,     4,     5,     6,     7,     0,     0,   249,   293,     0,
     538,     0,   293,   441,   443,     0,     0,     0,     0,     0,
       0,    94,     0,     0,    95,   293,     0,     0,     0,     0,
       0,   293,     0,   293,     0,     0,   293,   293,     0,     0,
       0,     0,    59,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   293,     2,     0,   293,   293,     0,
     293,    60,   293,     0,     0,     0,     0,     0,     0,   561,
       0,   151,   152,     0,     0,   293,     0,   293,   293,     0,
       0,     0,   573,   293,     0,     0,     0,     0,     0,     0,
      61,    62,    63,    64,    65,    66,    23,   576,     0,   500,
       0,     4,     5,     6,     7,     0,     0,     0,   500,    61,
      62,    63,    64,    65,    66,    23,     0,   153,     0,     0,
       0,   140,     0,     0,    95,     0,     0,   264,   265,   188,
     266,     0,  -388,   267,   268,   257,     0,     0,   500,   269,
     450,   270,   271,   272,   189,   273,     0,   274,     0,   190,
     191,   192,     0,     0,   325,     0,     0,     0,   362,   363,
     364,   365,   366,   367,   368,   369,     0,   370,   641,     0,
     193,   194,     0,   371,     0,   275,   276,   277,   278,   279,
     280,    23,   201,   202,   281,   282,   203,     0,     0,     0,
     283,     0,     0,   204,     0,   205,   206,     0,     0,     0,
     207,     0,     0,     0,     0,  -388,   372,     0,   209,   210,
     211,   212,   264,   265,   188,   266,     0,     0,   267,   268,
     285,     0,     0,     0,   269,     0,   270,   271,   272,   189,
     273,     0,   274,     0,   190,   191,   192,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   193,   194,     0,     0,     0,
     275,   276,   277,   278,   279,   280,    23,   201,   202,   281,
     282,   203,     0,     0,     0,   283,     0,     0,   204,     0,
     205,   206,     0,     0,     0,   207,     0,     0,     0,     0,
       0,   284,     0,   209,   210,   211,   212,   264,   265,   188,
     266,     0,     0,   267,   268,   285,     0,     0,     0,   269,
       0,   270,   271,   272,   189,   273,     0,   274,     0,   190,
     191,   192,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     193,   194,     0,     0,     0,   275,   276,   277,   278,   279,
     280,    23,   201,   202,   281,   282,   203,     0,     0,     0,
     283,     0,     0,   204,     0,   205,   206,     0,     0,     0,
     207,     0,     0,     0,     0,     0,   426,     0,   209,   210,
     211,   212,   264,   265,   628,   266,     0,     0,   267,   268,
     285,     0,     0,     0,   269,     0,   270,   271,   272,   189,
     273,     0,   274,     0,   190,   191,   192,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   193,   194,     0,     0,     0,
     275,   276,   277,   278,   279,   280,    23,   201,   202,   281,
     282,   203,     0,     0,     0,   283,   602,     0,   204,     0,
     205,   206,     0,     0,     0,   207,     0,     0,     0,     0,
       0,     0,     0,   209,   210,   211,   212,   264,   265,   188,
     266,     0,     0,   267,   268,   285,     0,     0,     0,   269,
       0,   270,   271,   272,   189,   273,     0,   274,     0,   190,
     191,   192,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     193,   194,     0,     0,     0,   275,   276,   277,   278,   279,
     280,    23,   201,   202,   281,   282,   203,     0,   124,     0,
     283,     0,     0,   204,     0,   205,   206,     0,     0,     0,
     207,    37,     0,     0,     0,     0,     0,   125,   209,   210,
     211,   212,   265,   188,   266,     0,     0,   267,   268,     0,
     285,     0,     0,   269,     0,   270,   271,   272,   189,   273,
       0,   274,     0,   190,   191,   192,    61,    62,    63,    64,
      65,    66,    23,     0,     0,     0,     0,     4,     5,     6,
       7,     0,     0,     0,   193,   194,     0,     0,     0,   195,
     196,   197,   198,   199,   200,    23,   201,   202,   281,   282,
     203,     0,     0,     0,   283,     0,   188,   204,     0,   205,
     206,     0,     0,     0,   207,     0,     0,     0,     0,     0,
       0,   189,   209,   210,   211,   212,   190,   191,   192,     0,
       0,     0,     0,     0,   285,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   193,   194,     0,
       0,     0,   275,   276,   277,   278,   279,   280,    23,   201,
     202,   281,   282,   203,     0,     0,     0,     0,     0,   188,
     204,     0,   205,   206,     0,     0,     0,   207,     0,     0,
       0,     0,     0,     0,   189,   209,   210,   211,   212,   190,
     191,   192,     0,     0,     0,     0,     0,   556,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     193,   194,     0,     0,     0,   195,   196,   197,   198,   199,
     200,    23,   201,   202,   188,     0,   203,     0,     0,     0,
       0,     0,     0,   204,     0,   205,   206,     0,     0,   189,
     207,     0,     0,     0,   190,   191,   192,     0,   209,   210,
     211,   212,     0,     0,     0,     0,     0,     0,     0,     0,
     411,     0,     0,     0,     0,   193,   194,     0,     0,     0,
     195,   196,   197,   198,   199,   200,    23,   201,   202,   188,
       0,   203,     0,     0,     0,     0,     0,     0,   204,     0,
     205,   206,     0,     0,   189,   207,     0,     0,     0,   190,
     191,   192,     0,   209,   210,   211,   212,     0,     0,     0,
       0,     0,     0,     0,     0,   414,     0,     0,     0,     0,
     193,   194,     0,     0,     0,   195,   196,   197,   198,   199,
     200,    23,   201,   202,   188,     0,   203,     0,     0,     0,
       0,     0,     0,   204,     0,   205,   206,     0,     0,   189,
     207,     0,     0,     0,   190,   191,   192,     0,   209,   210,
     211,   212,     0,     0,     0,     0,     0,     0,     0,     0,
     583,     0,     0,     0,     0,   193,   194,     0,     0,     0,
     195,   196,   197,   198,   199,   200,    23,   201,   202,   188,
       0,   203,     0,     0,     0,     0,     0,     0,   204,     0,
     205,   206,     0,     0,   189,   207,     0,     0,     0,   190,
     191,   192,     0,   209,   210,   211,   212,     0,     0,     0,
       0,     0,     0,     0,     0,   612,     0,     0,   124,     0,
     193,   194,     0,     0,     0,   195,   196,   197,   198,   199,
     200,    23,   201,   202,   281,   282,   203,   125,     0,     0,
       0,     0,   188,   204,     0,   205,   206,     0,     0,     0,
     207,   608,     0,     0,     0,     0,     0,   189,   209,   210,
     211,   212,   190,   191,   192,     0,    61,    62,    63,    64,
      65,    66,    23,     0,     0,     0,     0,     4,     5,     6,
       7,     0,     0,   193,   194,     0,     0,     0,   195,   196,
     197,   198,   199,   200,    23,   201,   202,   281,   282,   203,
       0,     0,     0,     0,     0,   188,   204,     0,   205,   206,
       0,     0,     0,   207,   633,     0,     0,     0,     0,     0,
     189,   209,   210,   211,   212,   190,   191,   192,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   193,   194,     0,     0,
       0,   195,   196,   197,   198,   199,   200,    23,   201,   202,
     281,   282,   203,     0,     0,     0,     0,     0,   188,   204,
       0,   205,   206,     0,     0,     0,   207,   635,     0,     0,
       0,     0,     0,   189,   209,   210,   211,   212,   190,   191,
     192,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    59,     0,   193,
     194,     0,     0,     0,   195,   196,   197,   198,   199,   200,
      23,   201,   202,   281,   282,   203,    60,     0,     0,     0,
       0,   188,   204,     0,   205,   206,     0,     0,     0,   207,
     653,     0,     0,     0,     0,     0,   189,   209,   210,   211,
     212,   190,   191,   192,     0,    61,    62,    63,    64,    65,
      66,    23,     0,     0,     0,     0,     4,     5,     6,     7,
       0,     0,   193,   194,     0,     0,     0,   195,   196,   197,
     198,   199,   200,    23,   201,   202,   136,     0,   203,     0,
       0,     0,     0,     0,   188,   204,     0,   205,   206,     0,
       0,     0,   207,   458,     0,     0,     0,   208,   350,   189,
     209,   210,   211,   212,   190,   191,   192,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   193,   194,     0,     0,     0,
     195,   196,   197,   198,   199,   200,    23,   201,   202,     0,
       0,   203,     0,   151,   152,     0,     0,     0,   204,     0,
     205,   206,   188,     0,     0,   207,   459,     0,     0,     0,
       0,   458,     0,   209,   210,   211,   212,   189,     0,     0,
       0,     0,   190,   191,   192,     0,     0,     0,     0,     0,
       0,    61,    62,    63,    64,    65,    66,    23,     0,   153,
       0,     0,     0,   193,   194,     0,     0,     0,   195,   196,
     197,   198,   199,   200,    23,   201,   202,   400,     0,   203,
       0,   151,   152,     0,     0,     0,   204,     0,   205,   206,
     188,     0,     0,   207,   490,     0,     0,     0,     0,   458,
       0,   209,   210,   211,   212,   189,     0,     0,     0,     0,
     190,   191,   192,     0,     0,     0,     0,     0,     0,    61,
      62,    63,    64,    65,    66,    23,     0,   153,     0,     0,
       0,   193,   194,     0,     0,     0,   195,   196,   197,   198,
     199,   200,    23,   201,   202,   402,     0,   203,     0,     0,
       0,     0,     0,     0,   204,     0,   205,   206,   188,     0,
       0,   207,   519,     0,     0,     0,     0,   458,     0,   209,
     210,   211,   212,   189,     0,     0,     0,     0,   190,   191,
     192,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   193,
     194,     0,     0,     0,   195,   196,   197,   198,   199,   200,
      23,   201,   202,     0,     0,   203,     0,     0,     0,     0,
       0,     0,   204,     0,   205,   206,   188,     0,     0,   207,
     521,     0,     0,     0,     0,   458,     0,   209,   210,   211,
     212,   189,     0,     0,     0,     0,   190,   191,   192,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   193,   194,     0,
       0,     0,   195,   196,   197,   198,   199,   200,    23,   201,
     202,   188,     0,   203,     0,     0,     0,     0,     0,     0,
     204,     0,   205,   206,     0,     0,   189,   207,   526,     0,
       0,   190,   191,   192,     0,   209,   210,   211,   212,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   193,   194,     0,     0,     0,   195,   196,   197,
     198,   199,   200,    23,   201,   202,     0,     0,   203,     0,
       0,     0,     0,     0,   188,   204,     0,   205,   206,     0,
     165,     0,   207,     0,     0,     0,   166,     0,     0,   189,
     209,   210,   211,   212,   190,   191,   192,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   193,   194,     0,     0,     0,
     195,   196,   197,   198,   199,   200,    23,   201,   202,     0,
       0,   203,     0,     0,     0,     0,     0,   188,   204,     0,
     205,   206,     0,     0,     0,   207,     0,     0,     0,     0,
     208,   534,   189,   209,   210,   211,   212,   190,   191,   192,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   193,   194,
       0,     0,     0,   195,   196,   197,   198,   199,   200,    23,
     201,   202,     0,     0,   203,     0,     0,     0,     0,     0,
     188,   204,     0,   205,   206,     0,     0,     0,   207,     0,
       0,     0,     0,   588,   589,   189,   209,   210,   211,   212,
     190,   191,   192,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   193,   194,     0,     0,     0,   195,   196,   197,   198,
     199,   200,    23,   201,   202,   281,   282,   203,     0,     0,
       0,     0,     0,   188,   204,     0,   205,   206,     0,     0,
       0,   207,     0,     0,     0,     0,     0,     0,   189,   209,
     210,   211,   212,   190,   191,   192,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   193,   194,     0,     0,     0,   195,
     196,   197,   198,   199,   200,    23,   201,   202,     0,     0,
     203,     0,     0,     0,     0,     0,   188,   204,     0,   205,
     206,     0,     0,     0,   207,     0,     0,     0,     0,   588,
     645,   189,   209,   210,   211,   212,   190,   191,   192,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   193,   194,     0,
       0,     0,   195,   196,   197,   198,   199,   200,    23,   201,
     202,     0,     0,   203,     0,     0,     0,     0,     0,     0,
     204,     0,   205,   206,   188,     0,     0,   207,     0,     0,
       0,     0,   208,     0,     0,   209,   210,   211,   212,   189,
       0,   346,     0,     0,   190,   191,   192,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   193,   194,     0,     0,     0,
     275,   276,   277,   278,   279,   280,    23,   201,   202,     0,
       0,   203,     0,     0,     0,     0,     0,   188,   204,     0,
     205,   206,     0,     0,     0,   207,   458,     0,     0,     0,
       0,     0,   189,   209,   210,   211,   212,   190,   191,   192,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   193,   194,
       0,     0,     0,   195,   196,   197,   198,   199,   200,    23,
     201,   202,   188,     0,   203,     0,     0,     0,     0,     0,
       0,   204,     0,   205,   206,     0,     0,   189,   207,     0,
       0,     0,   190,   191,   192,     0,   209,   210,   211,   212,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   193,   194,     0,     0,     0,   195,   196,
     197,   198,   199,   200,    23,   201,   202,     0,     0,   203,
       0,     0,     0,     0,     0,   188,   204,     0,   205,   206,
       0,     0,     0,   207,     0,     0,     0,     0,   567,     0,
     189,   209,   210,   211,   212,   190,   191,   192,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   193,   194,     0,     0,
       0,   195,   196,   197,   198,   199,   200,    23,   201,   202,
     188,     0,   203,     0,     0,     0,     0,     0,     0,   204,
       0,   205,   206,     0,     0,   189,   207,     0,     0,     0,
     190,   191,   192,     0,   209,   210,   211,   212,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   193,   194,     0,     0,     0,   275,   276,   277,   278,
     279,   280,    23,   201,   202,   188,     0,   203,     0,     0,
       0,     0,     0,     0,   204,     0,   205,   206,     0,     0,
     189,   207,     0,     0,     0,   190,   191,   192,     0,   209,
     210,   211,   212,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   193,   194,     0,     0,
       0,   195,   196,   197,   198,   199,   200,    23,   201,   202,
       0,     0,   203,     0,     0,     0,     0,     0,     0,   204,
       0,   205,   206,     0,     0,     0,   207,     0,     0,     0,
       0,     0,     0,     0,   209,   210
};

static const yytype_int16 yycheck[] =
{
       1,     2,     3,     0,   203,   208,   167,     8,   298,    83,
     408,    85,    83,   359,    85,   417,   342,   343,    71,    10,
       7,   266,    50,   410,     7,    50,    16,    19,     9,    59,
      50,   418,     1,   150,     3,    49,    37,    38,    50,    40,
      49,     7,    43,   515,    45,    35,   151,   164,    49,    35,
      36,    50,    79,   127,    53,    76,   127,    85,    78,    60,
      85,   571,   567,    84,    81,    77,    83,    57,   151,    96,
      71,     0,   125,   126,    43,    43,     3,    46,    79,    12,
      49,    49,    69,    97,    80,    86,    69,    79,    97,    70,
      59,    60,    83,    59,    95,    96,    97,    84,   203,   445,
     396,    84,    71,    69,    96,    49,   616,    93,    94,   108,
      79,   583,   113,   515,   619,   587,    43,    86,    86,    46,
     203,   111,    49,    56,   125,   126,    14,    96,    97,    97,
      18,     3,    59,    61,   424,    23,    30,   172,    32,   611,
     612,   437,   438,    71,   261,    49,   263,   116,   444,    83,
     349,    49,    79,    97,   155,   124,   125,   126,    14,    86,
     547,   162,    18,    12,    83,   637,   167,    23,    14,    96,
      97,   172,    18,    50,    46,   176,    64,    65,    66,    67,
     181,   150,   151,    78,    72,    80,   187,   611,   612,   116,
     159,   517,    41,    97,    76,   164,    84,   124,   272,    97,
      77,   272,    84,   172,   602,    59,    77,    56,    64,    65,
      66,    67,    83,   637,    59,    98,    72,   186,    64,    65,
      66,    67,    98,   150,   151,    76,    72,   172,    84,    98,
      84,   266,   159,    78,   203,    80,    81,   164,   207,    15,
      16,    76,   588,   404,    81,   172,   572,    98,    76,    84,
     324,    76,   455,   324,    79,    78,    98,    85,    81,   186,
      75,    14,    76,   298,    76,    18,   267,    79,    76,    18,
      98,   597,    78,    98,    80,    81,   203,    53,    54,    55,
      56,    57,    58,    59,    98,    61,    98,   284,   172,   380,
      98,   382,   261,    76,   263,   264,    14,   298,    76,    82,
      18,    45,   303,    79,   549,    80,    75,    51,    83,   554,
     555,    64,    65,    66,    67,    64,    65,    66,    67,    72,
      98,   266,    50,    72,    98,   209,   210,   211,   212,   298,
      76,    84,    98,    79,   261,    76,   263,   264,    79,   629,
      98,    14,    98,   344,    98,    18,    64,    65,    66,    67,
      23,    56,    57,   298,    72,   600,   357,   358,    98,    76,
     361,    76,    79,   608,    79,    76,    84,    83,    79,   338,
     339,   298,    78,   572,    53,    54,    55,    56,    57,    58,
      59,    78,   266,   383,   384,   385,   386,   632,   633,   424,
     635,    64,    65,    66,    67,   396,   397,   281,   282,    72,
      80,    81,    81,   404,    78,   650,    98,   652,   653,     5,
      85,   338,   339,   658,   298,    33,    34,   172,    90,    91,
      92,    88,    89,   424,    77,    78,   378,   379,    24,   426,
      77,   505,   506,    79,   505,   506,   437,   438,   387,   388,
      76,    82,    79,   444,    78,    78,    85,    79,   417,    78,
      80,    78,    95,    97,    80,   424,    96,    53,    54,    55,
      56,    57,    58,    59,    31,    75,    80,    79,    64,    65,
      66,    67,    53,    54,    55,    56,    57,    58,    59,   424,
     515,    85,    98,    78,    78,    15,    16,    78,    84,    78,
     417,   375,   376,   377,   378,   379,   380,   424,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   266,    80,    98,   549,    80,    80,   518,    80,   554,
     555,    80,    80,    53,    54,    55,    56,    57,    58,    59,
      78,    61,    98,   161,    78,    98,    78,    98,    43,   540,
     424,    98,    81,   298,    49,    83,   515,   175,   583,    79,
      79,    79,   587,    79,    59,    79,    79,    25,    98,    78,
      85,    98,    98,    98,    76,   600,   567,   451,   452,    79,
     515,   606,    79,   608,    79,    79,   611,   612,    76,   207,
     208,    86,    82,    79,    77,    82,    76,    78,   515,    98,
      79,    96,    97,    79,   629,     9,    79,   632,   633,    79,
     635,    83,   637,    82,   549,   606,    83,    76,    79,   554,
     555,   116,     4,    98,    98,   650,   617,   652,   653,   124,
      98,    77,    79,   658,    98,    84,    77,    79,   629,    79,
      85,   515,    79,   207,    15,    16,    48,   606,   583,   540,
     617,   269,   587,   271,   463,   150,   619,   389,   221,   533,
     393,   390,   606,   391,   159,   600,   392,   394,   426,   164,
     629,   606,   604,   608,   586,   549,   611,   612,   518,   424,
     554,   555,    53,    54,    55,    56,    57,    58,    59,   606,
      61,   186,   606,   567,   629,   515,   507,   632,   633,    41,
     635,    53,   637,    97,   126,   176,   162,   185,   203,   583,
     127,    52,   629,   587,   332,   650,   337,   652,   653,    24,
     186,   186,    86,   658,    -1,    -1,   600,   345,    -1,    -1,
      -1,    -1,   606,    -1,   608,    -1,    -1,   611,   612,    -1,
      -1,   359,    -1,    -1,    -1,   619,    -1,    -1,    53,    54,
      55,    56,    57,    58,    59,   629,   374,    -1,   632,   633,
      -1,   635,    -1,   637,    -1,    -1,   261,    -1,   263,   264,
     515,    -1,     5,    -1,    -1,    -1,   650,   395,   652,   653,
      -1,    -1,    -1,    -1,   658,    18,    -1,    -1,    -1,    -1,
     408,    24,   410,    -1,    -1,   413,    -1,    -1,    -1,   417,
     418,    -1,    -1,    -1,   549,    -1,    -1,    -1,    -1,   554,
     555,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    54,    55,    56,    57,    58,    59,   445,    -1,    -1,
      -1,    64,    65,    66,    67,    -1,    -1,   455,   583,    -1,
     458,    -1,   587,   338,   339,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    -1,    -1,    87,   600,    -1,    -1,    -1,    -1,
      -1,   606,    -1,   608,    -1,    -1,   611,   612,    -1,    -1,
      -1,    -1,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   629,    18,    -1,   632,   633,    -1,
     635,    24,   637,    -1,    -1,    -1,    -1,    -1,    -1,   517,
      -1,    15,    16,    -1,    -1,   650,    -1,   652,   653,    -1,
      -1,    -1,   530,   658,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    54,    55,    56,    57,    58,    59,   545,    -1,   547,
      -1,    64,    65,    66,    67,    -1,    -1,    -1,   556,    53,
      54,    55,    56,    57,    58,    59,    -1,    61,    -1,    -1,
      -1,    84,    -1,    -1,    87,    -1,    -1,     5,     6,     7,
       8,    -1,    10,    11,    12,    79,    -1,    -1,   586,    17,
     588,    19,    20,    21,    22,    23,    -1,    25,    -1,    27,
      28,    29,    -1,    -1,   602,    -1,    -1,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    -1,    46,   616,    -1,
      48,    49,    -1,    52,    -1,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,    -1,    -1,
      68,    -1,    -1,    71,    -1,    73,    74,    -1,    -1,    -1,
      78,    -1,    -1,    -1,    -1,    83,    85,    -1,    86,    87,
      88,    89,     5,     6,     7,     8,    -1,    -1,    11,    12,
      98,    -1,    -1,    -1,    17,    -1,    19,    20,    21,    22,
      23,    -1,    25,    -1,    27,    28,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    -1,    -1,    -1,    68,    -1,    -1,    71,    -1,
      73,    74,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,
      -1,    84,    -1,    86,    87,    88,    89,     5,     6,     7,
       8,    -1,    -1,    11,    12,    98,    -1,    -1,    -1,    17,
      -1,    19,    20,    21,    22,    23,    -1,    25,    -1,    27,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    -1,    -1,    -1,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,    -1,    -1,
      68,    -1,    -1,    71,    -1,    73,    74,    -1,    -1,    -1,
      78,    -1,    -1,    -1,    -1,    -1,    84,    -1,    86,    87,
      88,    89,     5,     6,     7,     8,    -1,    -1,    11,    12,
      98,    -1,    -1,    -1,    17,    -1,    19,    20,    21,    22,
      23,    -1,    25,    -1,    27,    28,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    -1,    -1,    -1,    68,    69,    -1,    71,    -1,
      73,    74,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,     5,     6,     7,
       8,    -1,    -1,    11,    12,    98,    -1,    -1,    -1,    17,
      -1,    19,    20,    21,    22,    23,    -1,    25,    -1,    27,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    -1,    -1,    -1,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,     5,    -1,
      68,    -1,    -1,    71,    -1,    73,    74,    -1,    -1,    -1,
      78,    18,    -1,    -1,    -1,    -1,    -1,    24,    86,    87,
      88,    89,     6,     7,     8,    -1,    -1,    11,    12,    -1,
      98,    -1,    -1,    17,    -1,    19,    20,    21,    22,    23,
      -1,    25,    -1,    27,    28,    29,    53,    54,    55,    56,
      57,    58,    59,    -1,    -1,    -1,    -1,    64,    65,    66,
      67,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    -1,    -1,    -1,    68,    -1,     7,    71,    -1,    73,
      74,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    86,    87,    88,    89,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,
      -1,    -1,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,     7,
      71,    -1,    73,    74,    -1,    -1,    -1,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    86,    87,    88,    89,    27,
      28,    29,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    -1,    -1,    -1,    53,    54,    55,    56,    57,
      58,    59,    60,    61,     7,    -1,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    -1,    73,    74,    -1,    -1,    22,
      78,    -1,    -1,    -1,    27,    28,    29,    -1,    86,    87,
      88,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      98,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,
      53,    54,    55,    56,    57,    58,    59,    60,    61,     7,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,
      73,    74,    -1,    -1,    22,    78,    -1,    -1,    -1,    27,
      28,    29,    -1,    86,    87,    88,    89,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,
      48,    49,    -1,    -1,    -1,    53,    54,    55,    56,    57,
      58,    59,    60,    61,     7,    -1,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    -1,    73,    74,    -1,    -1,    22,
      78,    -1,    -1,    -1,    27,    28,    29,    -1,    86,    87,
      88,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      98,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,
      53,    54,    55,    56,    57,    58,    59,    60,    61,     7,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,
      73,    74,    -1,    -1,    22,    78,    -1,    -1,    -1,    27,
      28,    29,    -1,    86,    87,    88,    89,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,     5,    -1,
      48,    49,    -1,    -1,    -1,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    24,    -1,    -1,
      -1,    -1,     7,    71,    -1,    73,    74,    -1,    -1,    -1,
      78,    79,    -1,    -1,    -1,    -1,    -1,    22,    86,    87,
      88,    89,    27,    28,    29,    -1,    53,    54,    55,    56,
      57,    58,    59,    -1,    -1,    -1,    -1,    64,    65,    66,
      67,    -1,    -1,    48,    49,    -1,    -1,    -1,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      -1,    -1,    -1,    -1,    -1,     7,    71,    -1,    73,    74,
      -1,    -1,    -1,    78,    79,    -1,    -1,    -1,    -1,    -1,
      22,    86,    87,    88,    89,    27,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,
      -1,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,     7,    71,
      -1,    73,    74,    -1,    -1,    -1,    78,    79,    -1,    -1,
      -1,    -1,    -1,    22,    86,    87,    88,    89,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,    48,
      49,    -1,    -1,    -1,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    24,    -1,    -1,    -1,
      -1,     7,    71,    -1,    73,    74,    -1,    -1,    -1,    78,
      79,    -1,    -1,    -1,    -1,    -1,    22,    86,    87,    88,
      89,    27,    28,    29,    -1,    53,    54,    55,    56,    57,
      58,    59,    -1,    -1,    -1,    -1,    64,    65,    66,    67,
      -1,    -1,    48,    49,    -1,    -1,    -1,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    84,    -1,    64,    -1,
      -1,    -1,    -1,    -1,     7,    71,    -1,    73,    74,    -1,
      -1,    -1,    78,    16,    -1,    -1,    -1,    83,    84,    22,
      86,    87,    88,    89,    27,    28,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    -1,
      -1,    64,    -1,    15,    16,    -1,    -1,    -1,    71,    -1,
      73,    74,     7,    -1,    -1,    78,    79,    -1,    -1,    -1,
      -1,    16,    -1,    86,    87,    88,    89,    22,    -1,    -1,
      -1,    -1,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    54,    55,    56,    57,    58,    59,    -1,    61,
      -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    79,    -1,    64,
      -1,    15,    16,    -1,    -1,    -1,    71,    -1,    73,    74,
       7,    -1,    -1,    78,    79,    -1,    -1,    -1,    -1,    16,
      -1,    86,    87,    88,    89,    22,    -1,    -1,    -1,    -1,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      54,    55,    56,    57,    58,    59,    -1,    61,    -1,    -1,
      -1,    48,    49,    -1,    -1,    -1,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    79,    -1,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    73,    74,     7,    -1,
      -1,    78,    79,    -1,    -1,    -1,    -1,    16,    -1,    86,
      87,    88,    89,    22,    -1,    -1,    -1,    -1,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    -1,    -1,    -1,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    -1,    -1,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    -1,    73,    74,     7,    -1,    -1,    78,
      79,    -1,    -1,    -1,    -1,    16,    -1,    86,    87,    88,
      89,    22,    -1,    -1,    -1,    -1,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,
      -1,    -1,    53,    54,    55,    56,    57,    58,    59,    60,
      61,     7,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    73,    74,    -1,    -1,    22,    78,    79,    -1,
      -1,    27,    28,    29,    -1,    86,    87,    88,    89,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,    -1,    -1,    -1,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    -1,    -1,    64,    -1,
      -1,    -1,    -1,    -1,     7,    71,    -1,    73,    74,    -1,
      76,    -1,    78,    -1,    -1,    -1,    82,    -1,    -1,    22,
      86,    87,    88,    89,    27,    28,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    -1,     7,    71,    -1,
      73,    74,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,
      83,    84,    22,    86,    87,    88,    89,    27,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      -1,    -1,    -1,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,
       7,    71,    -1,    73,    74,    -1,    -1,    -1,    78,    -1,
      -1,    -1,    -1,    83,    84,    22,    86,    87,    88,    89,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    49,    -1,    -1,    -1,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    -1,    -1,
      -1,    -1,    -1,     7,    71,    -1,    73,    74,    -1,    -1,
      -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    22,    86,
      87,    88,    89,    27,    28,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    -1,    -1,
      64,    -1,    -1,    -1,    -1,    -1,     7,    71,    -1,    73,
      74,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    83,
      84,    22,    86,    87,    88,    89,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,
      -1,    -1,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    73,    74,     7,    -1,    -1,    78,    -1,    -1,
      -1,    -1,    83,    -1,    -1,    86,    87,    88,    89,    22,
      -1,    24,    -1,    -1,    27,    28,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    -1,     7,    71,    -1,
      73,    74,    -1,    -1,    -1,    78,    16,    -1,    -1,    -1,
      -1,    -1,    22,    86,    87,    88,    89,    27,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      -1,    -1,    -1,    53,    54,    55,    56,    57,    58,    59,
      60,    61,     7,    -1,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    -1,    73,    74,    -1,    -1,    22,    78,    -1,
      -1,    -1,    27,    28,    29,    -1,    86,    87,    88,    89,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    -1,    -1,    64,
      -1,    -1,    -1,    -1,    -1,     7,    71,    -1,    73,    74,
      -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    83,    -1,
      22,    86,    87,    88,    89,    27,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,
      -1,    53,    54,    55,    56,    57,    58,    59,    60,    61,
       7,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    73,    74,    -1,    -1,    22,    78,    -1,    -1,    -1,
      27,    28,    29,    -1,    86,    87,    88,    89,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    49,    -1,    -1,    -1,    53,    54,    55,    56,
      57,    58,    59,    60,    61,     7,    -1,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    73,    74,    -1,    -1,
      22,    78,    -1,    -1,    -1,    27,    28,    29,    -1,    86,
      87,    88,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,
      -1,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    73,    74,    -1,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    14,    18,    23,    64,    65,    66,    67,    72,   100,
     219,   220,   223,   224,   225,   226,   227,   228,   230,   231,
     232,   260,   268,    59,   101,   221,   101,   101,   110,   112,
     221,   229,   101,     0,   224,   227,   228,    18,    72,   232,
      80,    83,   222,    83,   261,    50,    85,    98,    77,    83,
     233,   234,   101,   101,   101,    84,   223,   227,    98,     5,
      24,    53,    54,    55,    56,    57,    58,    84,   101,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   231,
     237,   240,   244,   245,   254,   255,   262,   263,   264,    98,
     101,   101,   112,   120,    84,    87,   231,   235,   236,   237,
     240,   244,   254,   258,   260,   234,    98,   261,   233,   234,
      84,   227,    84,   113,   221,   246,    78,   101,   241,   242,
     246,    81,   265,    75,     5,    24,   113,   255,    98,   176,
     177,   247,   268,    98,   176,   257,    84,   263,    98,   101,
      84,   236,    98,    98,   234,    98,    84,   101,   238,   239,
      78,    15,    16,    61,    79,   113,   248,   249,   250,   252,
     253,    85,    76,    98,    78,    76,    82,   113,   246,   241,
     246,   257,    83,    78,    98,    85,    76,    98,    79,   248,
     114,   264,    77,   256,   101,    79,    76,   113,     7,    22,
      27,    28,    29,    48,    49,    53,    54,    55,    56,    57,
      58,    60,    61,    64,    71,    73,    74,    78,    83,    86,
      87,    88,    89,   102,   103,   104,   105,   106,   107,   126,
     127,   128,   129,   131,   132,   133,   135,   136,   137,   138,
     147,   148,   149,   150,   151,   154,   155,   156,   157,   158,
     159,   161,   162,   163,   164,   165,   166,   167,   168,   170,
     171,   221,   229,   243,   266,   101,   242,    79,   248,    82,
     238,    78,    98,    78,     5,     6,     8,    11,    12,    17,
      19,    20,    21,    23,    25,    53,    54,    55,    56,    57,
      58,    62,    63,    68,    84,    98,   101,   113,   132,   138,
     151,   152,   153,   168,   174,   175,   176,   177,   179,   180,
     181,   182,   183,   184,   188,   189,   190,   191,   192,   193,
     199,   200,   201,   202,   207,   208,   209,   210,   211,   212,
     213,   217,   221,   229,    79,   170,   172,   239,    79,   101,
      61,    71,    85,   251,   256,   250,   253,   101,    78,    78,
     113,   114,   264,   265,    80,    81,    24,   115,   170,   221,
      84,   243,   267,   151,   151,   151,   151,    80,    78,    81,
     150,    80,    37,    38,    39,    40,    41,    42,    43,    44,
      46,    52,    85,   109,   169,    90,    91,    92,    88,    89,
      45,    51,   108,    35,    36,    93,    94,    33,    34,    95,
      96,    97,    31,    30,    32,    75,    78,    80,    79,    98,
      79,   248,    79,   248,   113,    98,   175,     7,    69,   101,
      78,    98,   170,    78,    98,   170,   176,    78,    78,   151,
     151,    98,   178,   268,    77,    10,    84,   174,    98,   101,
     185,   186,    98,    98,    98,   176,   259,    78,    78,   170,
     251,   113,    24,   113,    78,    81,   266,   266,   101,   134,
     170,    79,    79,    79,   265,    76,    84,   101,    16,    79,
     101,   122,   123,   124,   125,   170,   134,   101,   170,   151,
     151,   151,   151,   155,   155,   156,   156,   157,   157,   157,
     157,   158,   158,   159,   161,   162,   163,   166,   164,   170,
      79,   122,   101,    79,    79,   238,    25,    98,   172,    98,
     170,   173,    98,   170,    98,     9,    70,   214,   215,   216,
     170,   183,   218,   173,   174,    78,   178,    85,    76,    79,
     122,    79,   122,    79,    79,    79,    79,   122,   134,    82,
      76,   151,   151,    79,    84,   243,   130,   121,   170,    77,
      76,    79,   125,    82,   160,    77,    79,    78,    98,    79,
      79,   176,   176,   216,    79,    79,    98,   183,   190,   203,
     206,   170,   187,   266,   186,    79,    79,    83,   139,   140,
     144,    79,    82,   170,   151,   123,   170,   173,   175,    83,
     194,   175,   175,    98,   173,   204,    98,    76,    83,    84,
     101,   141,   142,   145,   146,   171,   139,   265,   266,    79,
       4,     7,    69,    84,   195,   196,   197,   198,    79,   205,
     206,    98,    98,   204,   190,   134,    85,    76,    84,    76,
      84,   266,    98,   175,    77,   172,    84,   196,     7,   179,
     198,   175,    79,    79,   205,    79,   205,    98,    84,   139,
     143,   170,    84,   101,   142,    84,   146,    77,   175,   175,
      79,   175,    79,    79,   205,   175,   175,   175,    79,   175
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,    99,   100,   101,   102,   102,   102,   102,   102,   103,
     103,   104,   104,   105,   106,   106,   107,   108,   109,   110,
     111,   112,   112,   113,   113,   114,   114,   114,   115,   115,
     115,   116,   117,   117,   117,   118,   119,   120,   120,   121,
     122,   122,   123,   123,   124,   125,   125,   126,   126,   126,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   128,
     130,   129,   129,   129,   131,   131,   131,   131,   131,   131,
     132,   132,   132,   132,   133,   134,   134,   135,   136,   136,
     137,   137,   138,   138,   138,   138,   139,   139,   140,   140,
     140,   141,   141,   142,   143,   143,   144,   144,   145,   145,
     146,   146,   147,   147,   147,   147,   147,   147,   148,   148,
     149,   150,   150,   150,   150,   151,   151,   151,   152,   153,
     154,   154,   154,   154,   155,   155,   155,   155,   156,   156,
     156,   157,   157,   157,   158,   158,   158,   158,   158,   159,
     160,   159,   159,   161,   161,   162,   162,   163,   163,   164,
     164,   165,   165,   166,   166,   167,   167,   168,   169,   169,
     169,   169,   169,   169,   169,   169,   169,   169,   169,   170,
     170,   171,   172,   173,   174,   174,   174,   175,   175,   175,
     175,   175,   175,   175,   175,   176,   176,   177,   178,   179,
     179,   180,   181,   182,   182,   183,   184,   185,   185,   186,
     186,   187,   187,   188,   189,   190,   190,   190,   190,   190,
     191,   191,   192,   192,   193,   194,   194,   195,   195,   196,
     197,   197,   198,   198,   199,   199,   199,   200,   201,   202,
     202,   202,   202,   202,   202,   202,   202,   203,   203,   204,
     205,   206,   206,   207,   207,   207,   207,   207,   208,   209,
     210,   210,   210,   211,   211,   212,   212,   213,   213,   213,
     214,   215,   216,   217,   218,   218,   219,   219,   219,   219,
     220,   220,   221,   221,   222,   222,   222,   222,   223,   223,
     224,   224,   225,   226,   227,   227,   228,   228,   228,   229,
     230,   230,   230,   230,   230,   230,   230,   230,   231,   231,
     232,   232,   232,   232,   233,   234,   234,   235,   235,   236,
     236,   236,   236,   236,   236,   237,   237,   238,   238,   239,
     240,   240,   241,   241,   242,   242,   243,   243,   244,   245,
     245,   245,   245,   245,   245,   245,   245,   246,   247,   247,
     248,   248,   248,   249,   249,   250,   250,   250,   250,   251,
     252,   252,   253,   254,   254,   255,   255,   255,   255,   256,
     256,   256,   256,   257,   257,   258,   259,   259,   260,   260,
     260,   260,   261,   261,   262,   262,   263,   263,   263,   263,
     264,   265,   265,   266,   266,   266,   267,   267,   268
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
       1,     1,     4,     5,     5,     6,     1,     1,     2,     3,
       4,     1,     3,     3,     1,     1,     3,     4,     1,     3,
       1,     3,     5,     6,     6,     7,     3,     3,     4,     4,
       4,     1,     2,     2,     1,     1,     2,     2,     2,     2,
       2,     5,     4,     4,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       0,     4,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     5,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     5,     1,     1,     1,
       2,     1,     3,     2,     2,     2,     1,     1,     3,     1,
       3,     1,     1,     3,     2,     1,     1,     1,     1,     1,
       1,     1,     5,     7,     5,     2,     3,     1,     2,     2,
       1,     2,     3,     2,     1,     1,     1,     5,     7,     7,
       8,     8,     8,     9,     9,     9,    10,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     2,     2,
       3,     4,     3,     2,     3,     2,     3,     3,     3,     4,
       1,     2,     2,     5,     1,     1,     2,     1,     1,     1,
       3,     4,     1,     3,     2,     3,     3,     4,     1,     2,
       1,     1,     5,     3,     1,     2,     1,     1,     1,     3,
       3,     4,     4,     4,     5,     5,     5,     6,     1,     2,
       1,     1,     1,     1,     2,     2,     3,     1,     2,     1,
       1,     1,     1,     1,     1,     4,     5,     1,     3,     3,
       3,     4,     1,     3,     1,     3,     1,     1,     2,     4,
       5,     5,     6,     4,     5,     5,     6,     1,     1,     1,
       1,     3,     1,     1,     3,     2,     3,     3,     4,     2,
       1,     1,     3,     2,     3,     3,     4,     4,     5,     4,
       5,     4,     5,     1,     1,     5,     1,     1,     3,     4,
       4,     5,     2,     3,     1,     2,     1,     1,     1,     1,
       2,     2,     3,     2,     3,     4,     1,     3,     0
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
#line 83 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); cerr << "Completed Parsing." << endl; printTAC((yyval.node));}
#line 2417 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 88 "src/parser.ypp" /* yacc.c:1646  */
    {
					string s1((yyvsp[0].sVal));
					Symbol* sym = ST->GetVar("_" + s1);
					
					if(sym == NULL){
						sym = ST->AddVar(s1);
					}

					genNode* newNode = new genNode();
					newNode->place = sym->name;
					(yyval.node) = newNode;
					(yyval.node)->type = sym->type;
				}
#line 2435 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 105 "src/parser.ypp" /* yacc.c:1646  */
    {  
			(yyval.node) = (yyvsp[0].node);
		}
#line 2443 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 109 "src/parser.ypp" /* yacc.c:1646  */
    {  
			(yyval.node) = (yyvsp[0].node);
		}
#line 2451 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 113 "src/parser.ypp" /* yacc.c:1646  */
    {  
			(yyval.node) = (yyvsp[0].node);
		}
#line 2459 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 117 "src/parser.ypp" /* yacc.c:1646  */
    {  
			(yyval.node) = (yyvsp[0].node);
		}
#line 2467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 121 "src/parser.ypp" /* yacc.c:1646  */
    {  
			(yyval.node) = (yyvsp[0].node);
		}
#line 2475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 126 "src/parser.ypp" /* yacc.c:1646  */
    {	
			string s1((yyvsp[0].sVal));
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->type = "bool";
			(yyval.node)->place = s1;
			(yyval.node)->isLit = true;	
		}
#line 2488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 134 "src/parser.ypp" /* yacc.c:1646  */
    { 	
			string s1((yyvsp[0].sVal));
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->type = "bool";
			(yyval.node)->place = s1;
			(yyval.node)->isLit = true;
		}
#line 2501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 144 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->type = "int";
			(yyval.node)->place = to_string((yyvsp[0].iVal));
			(yyval.node)->isLit = true;
		}
#line 2513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 151 "src/parser.ypp" /* yacc.c:1646  */
    {
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->type = "int";
			(yyval.node)->place = to_string((yyvsp[0].iVal));
			(yyval.node)->isLit = true;
		}
#line 2525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 160 "src/parser.ypp" /* yacc.c:1646  */
    {
			string s1((yyvsp[0].sVal));
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->type = "char";
			(yyval.node)->place = s1;
			(yyval.node)->isLit = true;
		}
#line 2538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 175 "src/parser.ypp" /* yacc.c:1646  */
    {
			string s1((yyvsp[0].sVal));
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->type = "string";
			(yyval.node)->place = s1;
			(yyval.node)->isLit = true;
		}
#line 2551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 183 "src/parser.ypp" /* yacc.c:1646  */
    {
			string s1((yyvsp[0].sVal));
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->type = "string";
			(yyval.node)->place = s1;
			(yyval.node)->isLit = true;
		}
#line 2564 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 193 "src/parser.ypp" /* yacc.c:1646  */
    {
			string s1((yyvsp[0].sVal));
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->type = "null";
			(yyval.node)->place = s1;
			(yyval.node)->isLit = true;
		}
#line 2577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 204 "src/parser.ypp" /* yacc.c:1646  */
    {}
#line 2583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 206 "src/parser.ypp" /* yacc.c:1646  */
    {}
#line 2589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 210 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 212 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 214 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 215 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 219 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node);}
#line 2619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 220 "src/parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[0].node);
		}
#line 2627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 224 "src/parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[0].node); 
		}
#line 2635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 227 "src/parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[0].node); 
		}
#line 2643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 230 "src/parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[0].node); 
		}
#line 2651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 234 "src/parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[0].node); 
		}
#line 2659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 237 "src/parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[0].node); 
		}
#line 2667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 240 "src/parser.ypp" /* yacc.c:1646  */
    {
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->place = "bool"; 
			(yyval.node)->type = "bool";
		}
#line 2678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 247 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 249 "src/parser.ypp" /* yacc.c:1646  */
    {
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->place = "int"; 
			(yyval.node)->type = "int";
		}
#line 2695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 255 "src/parser.ypp" /* yacc.c:1646  */
    {
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->place = "long"; 
			(yyval.node)->type = "long";
		}
#line 2706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 261 "src/parser.ypp" /* yacc.c:1646  */
    {
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->place = "char"; 
			(yyval.node)->type = "char";
		}
#line 2717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 268 "src/parser.ypp" /* yacc.c:1646  */
    {
			(yyval.node) = (yyvsp[-1].node);
			(yyval.node)->place += " ?"; 
			// Consider the type of this node
		}
#line 2727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 274 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 278 "src/parser.ypp" /* yacc.c:1646  */
    { 
			string s1((yyvsp[0].sVal));
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->place = s1;
		}
#line 2744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 284 "src/parser.ypp" /* yacc.c:1646  */
    { 
			string s1((yyvsp[0].sVal));
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->place = s1;
		}
#line 2755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 293 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 297 "src/parser.ypp" /* yacc.c:1646  */
    { }
#line 2767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 298 "src/parser.ypp" /* yacc.c:1646  */
    { }
#line 2773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 300 "src/parser.ypp" /* yacc.c:1646  */
    { }
#line 2779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 301 "src/parser.ypp" /* yacc.c:1646  */
    { }
#line 2785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 303 "src/parser.ypp" /* yacc.c:1646  */
    { }
#line 2791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 305 "src/parser.ypp" /* yacc.c:1646  */
    { }
#line 2797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 306 "src/parser.ypp" /* yacc.c:1646  */
    { }
#line 2803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 308 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 309 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 310 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 312 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 313 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 314 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 315 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 316 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 317 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 318 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 319 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 320 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 323 "src/parser.ypp" /* yacc.c:1646  */
    { 
			// string tmpVar = symTable->GenTemp($2->type, "simple", -1);
			(yyval.node) = (yyvsp[-1].node);
			// $$ -> place = tmpVar;
			// gen2OpCode($$, "=", $2);
		}
#line 2886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 330 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 2892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 331 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 2898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 332 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 2904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 333 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 2910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 337 "src/parser.ypp" /* yacc.c:1646  */
    {
			genNode* newNode = new genNode();
			
  		}
#line 2919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 341 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 2925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 342 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 2931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 343 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 2937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 344 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 2943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 345 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 2949 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 348 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 2955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 349 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 2961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 350 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 2967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 351 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 2973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 354 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 2979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 357 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 2985 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 358 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 2991 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 360 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->place = (yyvsp[0].sVal); 
		}
#line 3001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 366 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 367 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 369 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 370 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 373 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 374 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 375 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3043 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 376 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 378 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 379 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3061 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 381 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3067 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 382 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3073 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 383 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3079 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 385 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3085 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 386 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3091 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 388 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3097 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 390 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3103 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 391 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3109 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 393 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3115 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 394 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3121 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 396 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3127 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 397 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3133 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 399 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3139 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 400 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3145 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 402 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 403 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3157 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 404 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3163 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 405 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3169 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 406 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3175 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 407 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3181 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 410 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3187 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 411 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3193 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 413 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3199 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 415 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3205 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 416 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3211 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 417 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3217 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 418 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3223 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 420 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3229 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 421 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3235 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 422 "src/parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[0].node);
			//string tmpVar = GenTemp($2->type, "simple", curEnv->addTable[$2->place]->width);
			//$$->place = tmpVar;
			////////////////// I guess this function will carry out the above mentioned statements ////////////////////////////
			getPreUnaryOpCode("-", (yyval.node), (yyvsp[0].node), 1234555);
		}
#line 3247 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 431 "src/parser.ypp" /* yacc.c:1646  */
    {  
			(yyval.node) = (yyvsp[0].node);
			getPreUnaryOpCode("++", (yyval.node), (yyvsp[0].node), 1234555);
		}
#line 3256 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 437 "src/parser.ypp" /* yacc.c:1646  */
    {  
			(yyval.node) = (yyvsp[0].node);
			getPreUnaryOpCode("--", (yyval.node), (yyvsp[0].node), 1234555);
		}
#line 3265 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 442 "src/parser.ypp" /* yacc.c:1646  */
    { }
#line 3271 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 443 "src/parser.ypp" /* yacc.c:1646  */
    { }
#line 3277 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 444 "src/parser.ypp" /* yacc.c:1646  */
    { }
#line 3283 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 445 "src/parser.ypp" /* yacc.c:1646  */
    { }
#line 3289 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 448 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3295 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 450 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			gen2OpCode((yyval.node), "*", (yyvsp[-2].node), (yyvsp[0].node), 1234555);
			//$$->code.pb($$->code.end(), $3->code.begin(), $3->code.end());
		}
#line 3307 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 458 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), "/", (yyvsp[-2].node), (yyvsp[0].node), 1234555);
		}
#line 3319 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 466 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), "%", (yyvsp[-2].node), (yyvsp[0].node), 1234555);
		}
#line 3331 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 475 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3337 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 477 "src/parser.ypp" /* yacc.c:1646  */
    {  
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), "+", (yyvsp[-2].node), (yyvsp[0].node), 1234555);
		}
#line 3349 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 485 "src/parser.ypp" /* yacc.c:1646  */
    {  
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), "-", (yyvsp[-2].node), (yyvsp[0].node), 1234555);
		}
#line 3361 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 494 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3367 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 496 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), "<<", (yyvsp[-2].node), (yyvsp[0].node), 1234555);
		}
#line 3379 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 504 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), ">>", (yyvsp[-2].node), (yyvsp[0].node), 1234555);
		}
#line 3391 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 512 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3397 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 514 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), "<", (yyvsp[-2].node), (yyvsp[0].node), 1234555);
		}
#line 3409 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 522 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), ">", (yyvsp[-2].node), (yyvsp[0].node), 1234555);
		}
#line 3421 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 530 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), "<=", (yyvsp[-2].node), (yyvsp[0].node), 1234555);
		}
#line 3433 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 538 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), ">=", (yyvsp[-2].node), (yyvsp[0].node), 1234555);
		}
#line 3445 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 545 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3451 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 546 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3457 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 547 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-3].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[-1].node)->code.begin(), (yyvsp[-1].node)->code.end());
			gen2OpCode((yyval.node), "==", (yyvsp[-3].node), (yyvsp[-1].node), 1234555);
		}
#line 3469 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 555 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), "!=", (yyvsp[-2].node), (yyvsp[0].node), 1234555);
		}
#line 3481 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 563 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3487 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 565 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), "&", (yyvsp[-2].node), (yyvsp[0].node), 1234555);
		}
#line 3499 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 573 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3505 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 575 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), "^", (yyvsp[-2].node), (yyvsp[0].node), 1234555);
		}
#line 3517 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 583 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3523 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 585 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), "|", (yyvsp[-2].node), (yyvsp[0].node), 1234555);
		}
#line 3535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 593 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node);  }
#line 3541 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 595 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), "&&", (yyvsp[-2].node), (yyvsp[0].node), 1234555);
		}
#line 3553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 603 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 605 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), "||", (yyvsp[-2].node), (yyvsp[0].node), 1234555);
		}
#line 3571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 613 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 615 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), "??", (yyvsp[-2].node), (yyvsp[0].node), 1234555);
		}
#line 3589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 623 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 625 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			getCECode((yyval.node), (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node), 1234555);
		}
#line 3605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 631 "src/parser.ypp" /* yacc.c:1646  */
    {  
			// assignment_operator is a string
			(yyval.node) = (yyvsp[-2].node);	
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			// TAC* tac = new TAC();
			Symbol* sym1 = ST->GetVar((yyvsp[-2].node)->place);
			if((yyvsp[0].node)->isLit==false){		
				Symbol* sym2 = ST->GetVar((yyvsp[0].node)->place);
				if(sym1->baseType != sym2->baseType){
					cout << "Error: Incompatible types at line num: " << endl;
					exit(1);
				}
				if(sym1->baseType == "ARRAYTYPE" || sym2->baseType == "ARRAYTYPE"){	
					cout << "Error: Incompatible types at line num: " << endl;
					exit(1);
				}
			}
			gen2OpCode((yyval.node), (yyvsp[-1].sVal), (yyvsp[-2].node), (yyvsp[0].node), 1234555);				
		}
#line 3629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 651 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.sVal) = "="; }
#line 3635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 652 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.sVal) = "+="; }
#line 3641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 653 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.sVal) = "-="; }
#line 3647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 654 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.sVal) = "*="; }
#line 3653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 655 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.sVal) = "/="; }
#line 3659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 656 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.sVal) = "%="; }
#line 3665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 657 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.sVal) = "&="; }
#line 3671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 658 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.sVal) = "|="; }
#line 3677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 659 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.sVal) = "^="; }
#line 3683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 660 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.sVal) = "<<="; }
#line 3689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 661 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.sVal) = ">>="; }
#line 3695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 663 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 664 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 666 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 668 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 670 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 674 "src/parser.ypp" /* yacc.c:1646  */
    {  (yyval.node) = (yyvsp[0].node);  }
#line 3731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 675 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 676 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 678 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 679 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 680 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 681 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 682 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 683 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 684 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 685 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 687 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = NULL;	}
#line 3797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 688 "src/parser.ypp" /* yacc.c:1646  */
    {  (yyval.node) = (yyvsp[-2].node);   }
#line 3803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 690 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = NULL; ST->BeginScope();	}
#line 3809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 692 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = NULL; ST->EndScope();	}
#line 3815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 694 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 696 "src/parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[-1].node);
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		}
#line 3830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 701 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 703 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 705 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 3848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 706 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 3854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 709 "src/parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[0].node);
			string typeName = (yyvsp[-1].node)->place;
			cerr << "\t" << typeName << "\n";
			int siz = (yyval.node)->varDecs.size();
			fori(0, siz){
				((yyval.node)->varDecs)[i]->type = typeName;
				cerr << "Name: " << ((yyval.node)->varDecs)[i]->name << ((yyval.node)->varDecs)[i]->type << "\n" ;
			}
			(yyval.node)->type = typeName;
		}
#line 3870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 721 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 723 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 725 "src/parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[-2].node);
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		}
#line 3891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 731 "src/parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[0].node); 
			(yyval.node)->varDecs.pb(ST->GetVar((yyvsp[0].node)->place));
		}
#line 3900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 736 "src/parser.ypp" /* yacc.c:1646  */
    {
			(yyval.node) = (yyvsp[0].node);
			
			TAC* tac = new TAC();
			Symbol* sym;
			
			sym = ST->GetVar((yyvsp[-2].node)->place);
			tac->dest = sym;
			tac->op = "=";

			if((yyvsp[0].node)->isLit == true){
				tac->isInt1 = true;
				tac->l1 = (yyvsp[0].node)->place;
			}
			else{
				Symbol* sym_ = ST->GetVar((yyvsp[0].node)->place);
				tac->opd1 = sym_;
				sym -> baseType = sym_->baseType;
			}

			(yyval.node)->code.pb(tac);
			(yyval.node)->varDecs.pb(ST->GetVar((yyvsp[-2].node)->place));
				
		}
#line 3929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 761 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 762 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 764 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 766 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 3953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 768 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 769 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 770 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3971 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 771 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 772 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 774 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 775 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 778 "src/parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[-2].node);
			string trueLabel = getNewLabel();			
			string ifEndLabel = getNewLabel();
			TAC* tac1 = new TAC();
			tac1->op = "label"; tac1->target = trueLabel;
			TAC* tac2 = new TAC();
			tac2->op = "ifgoto"; tac2->dest = ST->GetVar((yyvsp[-2].node)->place); tac2->target = trueLabel;
			TAC* tac3 = new TAC();
			tac3->op = "goto"; tac3->target = ifEndLabel;
			TAC* tac4 = new TAC();
			tac4->op = "label"; tac4->target = ifEndLabel;
			(yyval.node)->code.pb(tac2);
			(yyval.node)->code.pb(tac3);
			(yyval.node)->code.pb(tac1);
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			(yyval.node)->code.pb(tac4);
		}
#line 4018 "y.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 797 "src/parser.ypp" /* yacc.c:1646  */
    {  
			(yyval.node) = (yyvsp[-4].node);
			TAC* tac1 = new TAC();	TAC* tac2 = new TAC();
			TAC* tac3 = new TAC();	TAC* tac4 = new TAC();
			TAC* tac5 = new TAC();	TAC* tac6 = new TAC();
			string trueLabel = getNewLabel();			
			string falseLabel = getNewLabel();
			string endLabel = getNewLabel();
			tac1->op = "label"; tac1->target = trueLabel;
			tac2->op = "label"; tac2->target = falseLabel;
			tac3->op = "ifgoto"; tac3->dest = ST->GetVar((yyvsp[-4].node)->place); tac3->target = trueLabel;
			tac4->op = "goto"; tac4->target = falseLabel;
			tac5->op = "goto"; tac5->target = endLabel;
			tac6->op = "label"; tac6->target = endLabel;

			(yyval.node)->code.pb(tac3); (yyval.node)->code.pb(tac4);
			(yyval.node)->code.pb(tac1);
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[-2].node)->code.begin(), (yyvsp[-2].node)->code.end());
			(yyval.node)->code.pb(tac5);
			(yyval.node)->code.pb(tac2);
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			(yyval.node)->code.pb(tac6);
		}
#line 4046 "y.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 821 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4052 "y.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 823 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4058 "y.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 824 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4064 "y.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 826 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4070 "y.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 827 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4076 "y.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 829 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4082 "y.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 831 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4088 "y.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 832 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4094 "y.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 834 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4100 "y.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 835 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4106 "y.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 837 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4112 "y.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 838 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4118 "y.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 839 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4124 "y.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 842 "src/parser.ypp" /* yacc.c:1646  */
    {  
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			string conditionLabel = getNewLabel();
			TAC* tac = new TAC();
			tac->op = "label";
			tac->target = conditionLabel;

			string inLoopLabel = getNewLabel();			
			string endLoopLabel = getNewLabel();

			TAC* tac1 = new TAC();	tac1->op = "label"; tac1->target = inLoopLabel;

			TAC* tac2 = new TAC();	tac2->op = "ifgoto"; tac2->dest = ST->GetVar((yyvsp[-2].node)->place); tac2->target = inLoopLabel;

			TAC* tac3 = new TAC();	tac3->op = "goto"; tac3->target = endLoopLabel;

			TAC* tac4 = new TAC();	tac4->op = "label"; tac4->target = endLoopLabel;

			TAC* tac5 = new TAC();	tac5->op = "goto"; 	tac5->target = conditionLabel;

			(yyval.node)->code.pb(tac);
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[-2].node)->code.begin(), (yyvsp[-2].node)->code.end());
			(yyval.node)->code.pb(tac2);
			(yyval.node)->code.pb(tac3);
			(yyval.node)->code.pb(tac1);
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			(yyval.node)->code.pb(tac5);
			(yyval.node)->code.pb(tac4);

			updateBreak((yyval.node), endLoopLabel);
			updateContinue((yyval.node), conditionLabel);

		}
#line 4163 "y.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 878 "src/parser.ypp" /* yacc.c:1646  */
    {  
			genNode* newNode = new genNode();
			(yyval.node) = newNode;

			string inLoopLabel = getNewLabel();			
			string endLoopLabel = getNewLabel();
			string conditionLabel = getNewLabel();
			TAC* tac = new TAC(); 	tac->op = "label";	tac->target = conditionLabel;

			TAC* tac1 = new TAC();	tac1->op = "label"; tac1->target = inLoopLabel;

			TAC* tac2 = new TAC();	tac2->op = "ifgoto"; tac2->dest = ST->GetVar((yyvsp[-2].node)->place); tac2->target = inLoopLabel;

			TAC* tac4 = new TAC();	tac4->op = "label"; tac4->target = endLoopLabel;



			(yyval.node)->code.pb(tac1);
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[-5].node)->code.begin(), (yyvsp[-5].node)->code.end());
			(yyval.node)->code.pb(tac);
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[-2].node)->code.begin(), (yyvsp[-2].node)->code.end());
			(yyval.node)->code.pb(tac2);
			(yyval.node)->code.pb(tac4);

			updateBreak((yyval.node), endLoopLabel);
			updateContinue((yyval.node), conditionLabel);

		}
#line 4196 "y.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 908 "src/parser.ypp" /* yacc.c:1646  */
    {  
			genNode* newNode = new genNode();
			(yyval.node) = newNode;

			string conditionLabel = getNewLabel();
			TAC* tac = new TAC();
			tac->op = "label";
			tac->target = conditionLabel;

			string endLoopLabel = getNewLabel();
			
			TAC* tac1 = new TAC();	tac1->op = "label"; tac1->target = endLoopLabel;

			TAC* tac2 = new TAC();	tac2->op = "goto"; 	tac2->target = conditionLabel;

			(yyval.node)->code.pb(tac);
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());

			(yyval.node)->code.pb(tac2);
			(yyval.node)->code.pb(tac1);

			updateBreak((yyval.node), endLoopLabel);
			updateContinue((yyval.node), conditionLabel);

			////////////////////////////////// BLOCK END ////////////////////////////////////////////////////
			ST->curEnv = ST->curEnv->prevEnv;
			/////////////////////////////////////////////////////////////////////////////////////////////////
		}
#line 4229 "y.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 937 "src/parser.ypp" /* yacc.c:1646  */
    {  
			(yyval.node) = (yyvsp[-4].node);

			string conditionLabel = getNewLabel();
			TAC* tac = new TAC();
			tac->op = "label";
			tac->target = conditionLabel;

			string endLoopLabel = getNewLabel();
			
			TAC* tac1 = new TAC();	tac1->op = "label"; tac1->target = endLoopLabel;

			TAC* tac2 = new TAC();	tac2->op = "goto"; 	tac2->target = conditionLabel;

			(yyval.node)->code.pb(tac);
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());

			(yyval.node)->code.pb(tac2);
			(yyval.node)->code.pb(tac1);

			updateBreak((yyval.node), endLoopLabel);
			updateContinue((yyval.node), conditionLabel);

			////////////////////////////////// BLOCK END ////////////////////////////////////////////////////
			ST->curEnv = ST->curEnv->prevEnv;
			/////////////////////////////////////////////////////////////////////////////////////////////////
		}
#line 4261 "y.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 965 "src/parser.ypp" /* yacc.c:1646  */
    {
			genNode* newNode = new genNode();
			(yyval.node) = newNode;

			string conditionLabel = getNewLabel();
			TAC* tac = new TAC();
			tac->op = "label";
			tac->target = conditionLabel;

			string inLoopLabel = getNewLabel();			
			string endLoopLabel = getNewLabel();
			
			TAC* tac1 = new TAC();	tac1->op = "label"; tac1->target = inLoopLabel;

			TAC* tac2 = new TAC();	tac2->op = "ifgoto"; tac2->dest = ST->GetVar((yyvsp[-3].node)->place); tac2->target = inLoopLabel;

			TAC* tac3 = new TAC();	tac3->op = "goto"; tac3->target = endLoopLabel;

			TAC* tac4 = new TAC();	tac4->op = "label"; tac4->target = endLoopLabel;

			TAC* tac5 = new TAC();	tac5->op = "goto"; 	tac5->target = conditionLabel;

			(yyval.node)->code.pb(tac);

			(yyval.node)->code.pb(tac2);
			(yyval.node)->code.pb(tac3);
			(yyval.node)->code.pb(tac1);
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			(yyval.node)->code.pb(tac5);
			(yyval.node)->code.pb(tac4);

			updateBreak((yyval.node), endLoopLabel);
			updateContinue((yyval.node), conditionLabel);

			////////////////////////////////// BLOCK END ////////////////////////////////////////////////////
			ST->curEnv = ST->curEnv->prevEnv;
			/////////////////////////////////////////////////////////////////////////////////////////////////
		}
#line 4304 "y.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1004 "src/parser.ypp" /* yacc.c:1646  */
    {  
			genNode* newNode = new genNode();
			(yyval.node) = newNode;

			string conditionLabel = getNewLabel();
			TAC* tac = new TAC();
			tac->op = "label";
			tac->target = conditionLabel;

			string endLoopLabel = getNewLabel();
			
			TAC* tac1 = new TAC();	tac1->op = "label"; tac1->target = endLoopLabel;

			TAC* tac2 = new TAC();	tac2->op = "goto"; 	tac2->target = conditionLabel;

			string updateLabel = getNewLabel();
			TAC* tac_ = new TAC();	tac_->op = "label";	tac_->target = updateLabel;

			(yyval.node)->code.pb(tac);
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			(yyval.node)->code.pb(tac_);
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[-2].node)->code.begin(), (yyvsp[-2].node)->code.end());
			(yyval.node)->code.pb(tac2);
			(yyval.node)->code.pb(tac1);

			updateBreak((yyval.node), endLoopLabel);
			updateContinue((yyval.node), updateLabel);

			////////////////////////////////// BLOCK END ////////////////////////////////////////////////////
			ST->curEnv = ST->curEnv->prevEnv;
			/////////////////////////////////////////////////////////////////////////////////////////////////
		}
#line 4341 "y.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1037 "src/parser.ypp" /* yacc.c:1646  */
    {
			(yyval.node) = (yyvsp[-5].node);
			string conditionLabel = getNewLabel();
			TAC* tac = new TAC();
			tac->op = "label";
			tac->target = conditionLabel;

			string inLoopLabel = getNewLabel();			
			string endLoopLabel = getNewLabel();
			
			TAC* tac1 = new TAC();	tac1->op = "label"; tac1->target = inLoopLabel;

			TAC* tac2 = new TAC();	tac2->op = "ifgoto"; tac2->dest = ST->GetVar((yyvsp[-3].node)->place); tac2->target = inLoopLabel;

			TAC* tac3 = new TAC();	tac3->op = "goto"; tac3->target = endLoopLabel;

			TAC* tac4 = new TAC();	tac4->op = "label"; tac4->target = endLoopLabel;

			TAC* tac5 = new TAC();	tac5->op = "goto"; 	tac5->target = conditionLabel;

			(yyval.node)->code.pb(tac);
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[-3].node)->code.begin(), (yyvsp[-3].node)->code.end());

			(yyval.node)->code.pb(tac2);
			(yyval.node)->code.pb(tac3);
			(yyval.node)->code.pb(tac1);
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			(yyval.node)->code.pb(tac5);
			(yyval.node)->code.pb(tac4);

			updateBreak((yyval.node), endLoopLabel);
			updateContinue((yyval.node), conditionLabel);

			////////////////////////////////// BLOCK END ////////////////////////////////////////////////////
			ST->curEnv = ST->curEnv->prevEnv;
			/////////////////////////////////////////////////////////////////////////////////////////////////
		}
#line 4383 "y.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1075 "src/parser.ypp" /* yacc.c:1646  */
    {  
			(yyval.node) = (yyvsp[-5].node);

			string conditionLabel = getNewLabel();
			TAC* tac = new TAC();
			tac->op = "label";
			tac->target = conditionLabel;

			string endLoopLabel = getNewLabel();
			
			TAC* tac1 = new TAC();	tac1->op = "label"; tac1->target = endLoopLabel;

			TAC* tac2 = new TAC();	tac2->op = "goto"; 	tac2->target = conditionLabel;

			string updateLabel = getNewLabel();
			TAC* tac_ = new TAC();	tac_->op = "label";	tac_->target = updateLabel;

			(yyval.node)->code.pb(tac);
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			(yyval.node)->code.pb(tac_);
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[-2].node)->code.begin(), (yyvsp[-2].node)->code.end());
			(yyval.node)->code.pb(tac2);
			(yyval.node)->code.pb(tac1);

			updateBreak((yyval.node), endLoopLabel);
			updateContinue((yyval.node), updateLabel);

			////////////////////////////////// BLOCK END ////////////////////////////////////////////////////
			ST->curEnv = ST->curEnv->prevEnv;
			/////////////////////////////////////////////////////////////////////////////////////////////////
		}
#line 4419 "y.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 1107 "src/parser.ypp" /* yacc.c:1646  */
    {
			genNode* newNode = new genNode();
			(yyval.node) = newNode;

			string conditionLabel = getNewLabel();
			TAC* tac = new TAC();
			tac->op = "label";
			tac->target = conditionLabel;

			string inLoopLabel = getNewLabel();			
			string endLoopLabel = getNewLabel();
			
			TAC* tac1 = new TAC();	tac1->op = "label"; tac1->target = inLoopLabel;

			TAC* tac2 = new TAC();	tac2->op = "ifgoto"; tac2->dest = ST->GetVar((yyvsp[-4].node)->place); tac2->target = inLoopLabel;

			TAC* tac3 = new TAC();	tac3->op = "goto"; tac3->target = endLoopLabel;

			TAC* tac4 = new TAC();	tac4->op = "label"; tac4->target = endLoopLabel;

			TAC* tac5 = new TAC();	tac5->op = "goto"; 	tac5->target = conditionLabel;

			string updateLabel = getNewLabel();
			TAC* tac_ = new TAC();	tac_->op = "label";	tac_->target = updateLabel;

			(yyval.node)->code.pb(tac);

			(yyval.node)->code.pb(tac2);
			(yyval.node)->code.pb(tac3);
			(yyval.node)->code.pb(tac1);
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			(yyval.node)->code.pb(tac_);
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[-2].node)->code.begin(), (yyvsp[-2].node)->code.end());
			(yyval.node)->code.pb(tac5);
			(yyval.node)->code.pb(tac4);

			updateBreak((yyval.node), endLoopLabel);
			updateContinue((yyval.node), updateLabel);

			////////////////////////////////// BLOCK END ////////////////////////////////////////////////////
			ST->curEnv = ST->curEnv->prevEnv;
			/////////////////////////////////////////////////////////////////////////////////////////////////
		}
#line 4467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1151 "src/parser.ypp" /* yacc.c:1646  */
    {
			(yyval.node) = (yyvsp[-6].node);
			string conditionLabel = getNewLabel();
			TAC* tac = new TAC();
			tac->op = "label";
			tac->target = conditionLabel;

			string inLoopLabel = getNewLabel();			
			string endLoopLabel = getNewLabel();
			
			TAC* tac1 = new TAC();	tac1->op = "label"; tac1->target = inLoopLabel;

			TAC* tac2 = new TAC();	tac2->op = "ifgoto"; tac2->dest = ST->GetVar((yyvsp[-4].node)->place); tac2->target = inLoopLabel;

			TAC* tac3 = new TAC();	tac3->op = "goto"; tac3->target = endLoopLabel;

			TAC* tac4 = new TAC();	tac4->op = "label"; tac4->target = endLoopLabel;

			TAC* tac5 = new TAC();	tac5->op = "goto"; 	tac5->target = conditionLabel;

			string updateLabel = getNewLabel();
			TAC* tac_ = new TAC();	tac_->op = "label";	tac_->target = updateLabel;

			(yyval.node)->code.pb(tac);
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[-4].node)->code.begin(), (yyvsp[-4].node)->code.end());

			(yyval.node)->code.pb(tac2);
			(yyval.node)->code.pb(tac3);
			(yyval.node)->code.pb(tac1);
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			(yyval.node)->code.pb(tac_);
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[-2].node)->code.begin(), (yyvsp[-2].node)->code.end());
			(yyval.node)->code.pb(tac5);
			(yyval.node)->code.pb(tac4);

			updateBreak((yyval.node), endLoopLabel);
			updateContinue((yyval.node), updateLabel);

			////////////////////////////////// BLOCK END ////////////////////////////////////////////////////
			ST->curEnv = ST->curEnv->prevEnv;
			/////////////////////////////////////////////////////////////////////////////////////////////////
		}
#line 4514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 1194 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 1195 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 1197 "src/parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[0].node);
			cerr << "Debug\n";
			for(map <string, Symbol*> :: iterator it = ST->curEnv->addTable.begin() ; it != ST->curEnv->addTable.end() ; it++){
				cerr << (*it).fi << " " << (*it).se->name << "\n" ;
			}
		}
#line 4538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 1205 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 1207 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 1209 "src/parser.ypp" /* yacc.c:1646  */
    {  
			(yyval.node) = (yyvsp[-2].node);
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		}
#line 4559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 1214 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 1215 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 1216 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 1217 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 1218 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 1221 "src/parser.ypp" /* yacc.c:1646  */
    {  
			genNode* newNode = new genNode();
			(yyval.node) = newNode;

			TAC* tac = new TAC();	tac -> op = "goto";	tac -> isBreak = true;

			newNode->code.pb(tac);
		}
#line 4602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 1231 "src/parser.ypp" /* yacc.c:1646  */
    {  
			genNode* newNode = new genNode();
			(yyval.node) = newNode;

			TAC* tac = new TAC();	tac -> op = "goto";	tac -> isContinue = true;

			newNode->code.pb(tac);
		}
#line 4615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 1240 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 1241 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 1242 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 1244 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 1245 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 1247 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 1248 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 1250 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 1251 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 1252 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 1254 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 1256 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 1258 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 1260 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 1262 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 1263 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 1267 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 1268 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 1269 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 1270 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 1273 "src/parser.ypp" /* yacc.c:1646  */
    {
			(yyval.node) = (yyvsp[-1].node); 
			(yyval.node)->code.pb(genLabelTAC((yyvsp[-1].node)->place));
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		}
#line 4745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 1279 "src/parser.ypp" /* yacc.c:1646  */
    {
			(yyval.node) = (yyvsp[-2].node); 
			(yyval.node)->code.pb(genLabelTAC((yyvsp[-2].node)->place));
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[-1].node)->code.begin(), (yyvsp[-1].node)->code.end());
		}
#line 4755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 1285 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 1286 "src/parser.ypp" /* yacc.c:1646  */
    { }
#line 4767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 1289 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
		}
#line 4776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 1293 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 4782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 1294 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 4788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 1295 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 4794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 1297 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 1298 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 4806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 1300 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 1301 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 1303 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-3].node); }
#line 4824 "y.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 1305 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 4830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 1307 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 1308 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 1310 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 1311 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 1312 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 1314 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-2].node); }
#line 4866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 1319 "src/parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[-1].node);
			(yyval.node)->type = "class";
			(yyval.node)->code = (yyvsp[0].node)->code;
		}
#line 4876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 1325 "src/parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[-1].node);
			(yyval.node)->type = "class";
			(yyval.node)->code = (yyvsp[0].node)->code;
		}
#line 4886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 1330 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 1332 "src/parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[-2].node);
			(yyval.node)->type = "class";
			(yyval.node)->code = (yyvsp[-1].node)->code;
		}
#line 4902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 1337 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 1339 "src/parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[-2].node);
			(yyval.node)->type = "class";
			(yyval.node)->code = (yyvsp[-1].node)->code;
		}
#line 4918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 1344 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 1345 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 1348 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4936 "y.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 1349 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4942 "y.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 1351 "src/parser.ypp" /* yacc.c:1646  */
    { 
			string s1((yyvsp[0].sVal));
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->place = s1;
		}
#line 4953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 1357 "src/parser.ypp" /* yacc.c:1646  */
    { 
			string s1((yyvsp[0].sVal));
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->place = s1;
		}
#line 4964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 1363 "src/parser.ypp" /* yacc.c:1646  */
    { 
			string s1((yyvsp[0].sVal));
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->place = s1;
		}
#line 4975 "y.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 1369 "src/parser.ypp" /* yacc.c:1646  */
    { 
			string s1((yyvsp[0].sVal));
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->place = s1;
		}
#line 4986 "y.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 1376 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 1378 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode; 
		}
#line 5001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 1382 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 5007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 1384 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 5013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 1386 "src/parser.ypp" /* yacc.c:1646  */
    {  
			(yyval.node) = (yyvsp[-1].node);
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		}
#line 5022 "y.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 1391 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 5028 "y.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 1392 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 5034 "y.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 1393 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 5040 "y.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 1394 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 5046 "y.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 1395 "src/parser.ypp" /* yacc.c:1646  */
    {  (yyval.node) = (yyvsp[0].node);  }
#line 5052 "y.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 1396 "src/parser.ypp" /* yacc.c:1646  */
    {  (yyval.node) = (yyvsp[0].node);  }
#line 5058 "y.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 1398 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5064 "y.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 1399 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5070 "y.tab.c" /* yacc.c:1646  */
    break;

  case 317:
#line 1402 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5076 "y.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 1403 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5082 "y.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 1405 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5088 "y.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 1407 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5094 "y.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 1408 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5100 "y.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 1411 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5106 "y.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 1412 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5112 "y.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 1414 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5118 "y.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 1416 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5124 "y.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 1417 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5130 "y.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 1419 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 5136 "y.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 1421 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5142 "y.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 1422 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5148 "y.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 1423 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5154 "y.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 1424 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-4].node); }
#line 5160 "y.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 1425 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5166 "y.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 1426 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5172 "y.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 1427 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5178 "y.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 1428 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5184 "y.tab.c" /* yacc.c:1646  */
    break;

  case 337:
#line 1431 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 5190 "y.tab.c" /* yacc.c:1646  */
    break;

  case 338:
#line 1433 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 5196 "y.tab.c" /* yacc.c:1646  */
    break;

  case 339:
#line 1434 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 5202 "y.tab.c" /* yacc.c:1646  */
    break;

  case 340:
#line 1436 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 5208 "y.tab.c" /* yacc.c:1646  */
    break;

  case 341:
#line 1437 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5214 "y.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 1438 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5220 "y.tab.c" /* yacc.c:1646  */
    break;

  case 343:
#line 1440 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 5226 "y.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 1441 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5232 "y.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 1443 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 5238 "y.tab.c" /* yacc.c:1646  */
    break;

  case 346:
#line 1444 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5244 "y.tab.c" /* yacc.c:1646  */
    break;

  case 347:
#line 1445 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5250 "y.tab.c" /* yacc.c:1646  */
    break;

  case 348:
#line 1446 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5256 "y.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 1448 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5262 "y.tab.c" /* yacc.c:1646  */
    break;

  case 350:
#line 1450 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5268 "y.tab.c" /* yacc.c:1646  */
    break;

  case 351:
#line 1451 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5274 "y.tab.c" /* yacc.c:1646  */
    break;

  case 352:
#line 1453 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5280 "y.tab.c" /* yacc.c:1646  */
    break;

  case 353:
#line 1455 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5286 "y.tab.c" /* yacc.c:1646  */
    break;

  case 354:
#line 1456 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5292 "y.tab.c" /* yacc.c:1646  */
    break;

  case 355:
#line 1459 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5298 "y.tab.c" /* yacc.c:1646  */
    break;

  case 356:
#line 1460 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5304 "y.tab.c" /* yacc.c:1646  */
    break;

  case 357:
#line 1461 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5310 "y.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 1462 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5316 "y.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 1464 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5322 "y.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 1465 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5328 "y.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 1466 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5334 "y.tab.c" /* yacc.c:1646  */
    break;

  case 362:
#line 1467 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5340 "y.tab.c" /* yacc.c:1646  */
    break;

  case 363:
#line 1469 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5346 "y.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 1470 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5352 "y.tab.c" /* yacc.c:1646  */
    break;

  case 365:
#line 1472 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5358 "y.tab.c" /* yacc.c:1646  */
    break;

  case 366:
#line 1474 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5364 "y.tab.c" /* yacc.c:1646  */
    break;

  case 367:
#line 1475 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5370 "y.tab.c" /* yacc.c:1646  */
    break;

  case 368:
#line 1479 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5376 "y.tab.c" /* yacc.c:1646  */
    break;

  case 369:
#line 1480 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5382 "y.tab.c" /* yacc.c:1646  */
    break;

  case 370:
#line 1481 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5388 "y.tab.c" /* yacc.c:1646  */
    break;

  case 371:
#line 1482 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5394 "y.tab.c" /* yacc.c:1646  */
    break;

  case 372:
#line 1485 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5400 "y.tab.c" /* yacc.c:1646  */
    break;

  case 373:
#line 1486 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5406 "y.tab.c" /* yacc.c:1646  */
    break;

  case 374:
#line 1488 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5412 "y.tab.c" /* yacc.c:1646  */
    break;

  case 375:
#line 1489 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5418 "y.tab.c" /* yacc.c:1646  */
    break;

  case 376:
#line 1491 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5424 "y.tab.c" /* yacc.c:1646  */
    break;

  case 377:
#line 1492 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5430 "y.tab.c" /* yacc.c:1646  */
    break;

  case 378:
#line 1493 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5436 "y.tab.c" /* yacc.c:1646  */
    break;

  case 379:
#line 1494 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5442 "y.tab.c" /* yacc.c:1646  */
    break;

  case 380:
#line 1498 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
		}
#line 5451 "y.tab.c" /* yacc.c:1646  */
    break;

  case 381:
#line 1503 "src/parser.ypp" /* yacc.c:1646  */
    {   }
#line 5457 "y.tab.c" /* yacc.c:1646  */
    break;

  case 382:
#line 1504 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5463 "y.tab.c" /* yacc.c:1646  */
    break;

  case 383:
#line 1507 "src/parser.ypp" /* yacc.c:1646  */
    { 

		}
#line 5471 "y.tab.c" /* yacc.c:1646  */
    break;

  case 384:
#line 1510 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 385:
#line 1511 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 386:
#line 1513 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5489 "y.tab.c" /* yacc.c:1646  */
    break;

  case 387:
#line 1514 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 388:
#line 1518 "src/parser.ypp" /* yacc.c:1646  */
    {}
#line 5501 "y.tab.c" /* yacc.c:1646  */
    break;


#line 5505 "y.tab.c" /* yacc.c:1646  */
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
#line 1521 "src/parser.ypp" /* yacc.c:1906  */
	

extern void yyerror(const char *c){
		string str(c);
		cout << "Error at line: " << 1234555 << "\n" << str << endl;
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
