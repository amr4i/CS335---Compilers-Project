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
#line 1 "parser.ypp" /* yacc.c:339  */

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
	#include "genTAC.cpp"
	#include "y.tab.h"
	using namespace std;

	extern "C" int yylex();
	// extern "C" int yyparse();
	extern "C" FILE *yyin;
	extern void yyerror(const char *c);
	
	//extern int lineNum;

	int lineNum = 1;
	// SymTable* ST = new SymTable();

#line 94 "y.tab.c" /* yacc.c:339  */

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
#line 31 "parser.ypp" /* yacc.c:355  */

	int iVal;
	char *sVal;
	struct genNode* node;	

#line 288 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 305 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  32
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3070

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  99
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  170
/* YYNRULES -- Number of rules.  */
#define YYNRULES  385
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  661

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
       0,    87,    87,    93,   110,   114,   118,   122,   126,   132,
     140,   150,   157,   166,   181,   189,   199,   210,   212,   216,
     218,   220,   221,   225,   226,   230,   233,   236,   240,   243,
     246,   253,   255,   261,   267,   274,   280,   284,   290,   300,
     304,   316,   329,   330,   332,   334,   335,   337,   338,   339,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   352,
     359,   359,   361,   362,   365,   372,   379,   386,   393,   394,
     397,   398,   399,   420,   449,   490,   528,   529,   531,   537,
     538,   540,   541,   544,   545,   546,   547,   549,   550,   552,
     553,   554,   556,   557,   559,   561,   562,   564,   565,   567,
     568,   570,   571,   573,   581,   596,   608,   609,   611,   613,
     614,   615,   616,   618,   619,   620,   629,   635,   641,   642,
     643,   644,   647,   648,   656,   664,   674,   675,   683,   693,
     694,   702,   711,   712,   720,   728,   736,   744,   745,   745,
     753,   762,   763,   772,   773,   782,   783,   792,   793,   802,
     803,   812,   813,   822,   823,   830,   874,   875,   876,   877,
     878,   879,   880,   881,   882,   883,   884,   886,   887,   889,
     891,   893,   897,   898,   899,   901,   902,   903,   904,   905,
     906,   907,   908,   910,   911,   913,   920,   921,   927,   929,
     931,   932,   934,   950,   952,   958,   975,   985,  1033,  1037,
    1042,  1044,  1046,  1047,  1048,  1049,  1050,  1052,  1053,  1055,
    1078,  1107,  1109,  1110,  1112,  1113,  1115,  1117,  1118,  1120,
    1121,  1123,  1124,  1125,  1127,  1167,  1201,  1231,  1260,  1304,
    1338,  1381,  1414,  1464,  1513,  1514,  1516,  1520,  1522,  1523,
    1529,  1530,  1531,  1532,  1533,  1535,  1545,  1555,  1556,  1557,
    1559,  1567,  1587,  1588,  1590,  1591,  1592,  1594,  1596,  1598,
    1600,  1602,  1603,  1607,  1608,  1609,  1610,  1612,  1620,  1629,
    1630,  1632,  1637,  1638,  1639,  1641,  1642,  1644,  1645,  1647,
    1649,  1651,  1652,  1658,  1659,  1660,  1662,  1666,  1675,  1684,
    1685,  1694,  1695,  1704,  1705,  1708,  1715,  1716,  1718,  1724,
    1730,  1736,  1743,  1745,  1750,  1756,  1757,  1763,  1764,  1765,
    1766,  1767,  1768,  1770,  1771,  1774,  1775,  1777,  1779,  1780,
    1783,  1784,  1786,  1787,  1789,  1790,  1792,  1804,  1810,  1816,
    1823,  1830,  1835,  1840,  1846,  1854,  1862,  1866,  1868,  1869,
    1874,  1876,  1877,  1883,  1899,  1915,  1943,  1972,  1974,  1975,
    1977,  1985,  1986,  1989,  1990,  1991,  1992,  1994,  1995,  1996,
    1997,  1999,  2000,  2002,  2004,  2005,  2009,  2010,  2011,  2012,
    2015,  2016,  2018,  2019,  2021,  2022,  2023,  2024,  2028,  2036,
    2038,  2045,  2050,  2056,  2081,  2110
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
  "embedded_statement", "block", "block_start", "statement_list",
  "empty_statement", "labeled_statement", "declaration_statement",
  "local_variable_declaration", "local_variable_type",
  "local_variable_declarators", "local_variable_declarator",
  "local_variable_initializer", "local_constant_declaration",
  "expression_statement", "statement_expression", "selection_statement",
  "if_statement", "switch_statement", "switch_block", "switch_sections",
  "switch_section", "switch_labels", "switch_label", "iteration_statement",
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
  "class_declaration", "class_init", "modifiers", "modifier", "class_base",
  "class_body", "class_member_declarations", "class_member_declaration",
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

#define YYPACT_NINF -537

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-537)))

#define YYTABLE_NINF -386

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     700,    -4,    -4,  -537,  -537,  -537,  -537,  -537,    47,    93,
    -537,  -537,   633,  -537,  -537,  -537,   155,  -537,  -537,   142,
    -537,  -537,    74,  -537,    42,    85,    32,  -537,   118,  -537,
    -537,  -537,  -537,    -4,  -537,   155,  -537,    -4,  -537,  -537,
     389,   177,    -4,    -4,  -537,    -4,    -4,  -537,  -537,   -16,
      42,  -537,   332,    -4,  -537,  -537,  -537,  -537,  -537,  -537,
    -537,   -17,  -537,  -537,    -4,   251,   224,  -537,  -537,  -537,
     259,  -537,   532,  -537,  -537,  -537,   261,  -537,   264,  1905,
    -537,  -537,  -537,  -537,   305,   280,  -537,   -23,   205,   284,
     294,    -4,    -4,   118,   318,   745,   117,   114,  -537,   322,
     323,  -537,  -537,   332,    -4,    -4,   264,  -537,  -537,   325,
    -537,  -537,  -537,  -537,  -537,  -537,  -537,   110,   200,   331,
     317,  -537,   263,   286,  -537,  -537,   -23,   336,   137,  -537,
    2041,   332,  -537,  -537,   343,    -4,   348,   352,  -537,   332,
    -537,  2569,    -4,  -537,  2109,  -537,    -4,   354,   162,   355,
    -537,   987,  -537,  -537,    -4,  1054,   508,  -537,  -537,  -537,
    -537,  -537,  -537,  -537,   338,  -537,  -537,   345,  -537,   331,
     339,  2873,    -4,  -537,  -537,   351,   251,    -4,   -18,  -537,
     364,   343,   971,    -4,   362,   372,  -537,  -537,  -537,  -537,
    -537,  -537,  -537,  -537,  -537,  -537,  -537,  -537,  -537,   332,
     169,  -537,  -537,  2637,  1927,  2873,  2873,  2873,  2873,  -537,
    -537,  -537,  -537,  -537,  -537,   377,   167,  2983,  -537,   378,
    -537,  -537,  -537,  -537,  -537,  -537,  -537,  -537,  -537,  -537,
     740,  -537,   274,   236,   195,    21,   335,   365,   363,   366,
     430,   199,   390,  -537,  -537,  -537,  -537,   202,   388,  -537,
    -537,   384,  -537,  -537,   391,   218,  2177,  -537,  2246,   332,
     376,  1329,    14,   403,  1455,   417,  1510,  -537,   419,   420,
     421,   422,   425,   426,   428,   431,  2873,  2873,   401,  -537,
    -537,   -15,  -537,   212,   233,   740,  -537,  -537,  -537,  -537,
    -537,  -537,    10,  1075,  -537,  -537,  -537,   402,    -4,   412,
    -537,   414,  -537,  -537,  -537,  -537,  -537,  -537,  -537,  -537,
    -537,  -537,  -537,  -537,  -537,  -537,  -537,   215,   388,   436,
    -537,  -537,  -537,  -537,   418,  -537,  -537,  -537,  -537,  -537,
    -537,   439,   440,  2873,  -537,  -537,  -537,  -537,   364,   332,
     820,   442,   441,   438,    -4,  2873,   445,   449,   450,   268,
    -537,  -537,   -25,  -537,  -537,  -537,  -537,    -4,  1990,  2873,
    -537,    -4,  -537,  -537,  -537,  -537,  -537,  -537,  -537,  -537,
    -537,  -537,  -537,  -537,  2873,  2873,  2873,  2873,  2873,  2873,
    2873,  -537,  2873,  2873,  2873,  2873,  2873,  2873,  2873,  2873,
    2873,  2873,  2873,  2873,  2873,  2873,  2058,  2873,    -4,  -537,
    -537,  -537,   454,  -537,   455,    -4,  -537,   510,   443,  2873,
     444,  2873,  -537,   446,  2873,  -537,   447,    39,  2928,  2873,
    -537,  -537,  -537,  1245,   458,  -537,  -537,  -537,   461,   463,
    -537,  -537,  -537,   473,  -537,  2126,  2194,  -537,  -537,   478,
     480,   481,  2262,   244,  -537,  -537,   239,  -537,  2873,  2873,
    -537,  2692,   498,  2317,  -537,  -537,  2873,  -537,    87,   157,
    -537,  2755,  -537,  -537,   472,  -537,  -537,  -537,  -537,  -537,
    -537,   274,   274,   236,   236,   195,   195,   195,   195,    21,
      21,   335,   365,   363,   366,  -537,   430,   502,  -537,   197,
     499,  -537,  -537,  -537,   464,   504,  -537,   482,  -537,  -537,
     514,  -537,   515,  -537,  -537,  -537,   592,  -537,  -537,  -537,
    -537,   523,   524,  -537,  1392,  2569,    -4,   506,  -537,   222,
    -537,   257,  -537,  -537,  -537,   522,   262,   526,  2873,  -537,
    -537,  -537,  2873,  -537,  -537,  -537,  -537,  -537,  -537,  2755,
    -537,  -537,  -537,  -537,  2873,  -537,  -537,  2873,  -537,  1329,
     527,  -537,  -537,  -537,  1329,  1329,  1565,  -537,  -537,   511,
     530,  -537,  -537,  -537,  -537,  -537,  -537,  -537,  -537,  -537,
    2380,  -537,  -537,  -537,   522,   438,  -537,  -537,  -537,  -537,
     533,   607,    11,  -537,  -537,  -537,  1675,  -537,   519,  1620,
    2443,  2873,  -537,   111,    52,  -537,   101,  -537,  -537,  -537,
    -537,   525,  1329,   536,  2873,  -537,    17,  -537,  1160,  -537,
    1329,   541,   530,  1738,  1801,   529,  -537,   108,  2810,    60,
    -537,  2506,  -537,  -537,  -537,  -537,   544,  -537,  -537,   303,
     890,  -537,  -537,  1329,  1329,   543,  1329,   545,  1864,  -537,
    -537,  -537,  -537,  -537,   540,  -537,  -537,  -537,  -537,  -537,
    -537,  1329,  -537,  1329,  1329,   549,  -537,  -537,  -537,  1329,
    -537
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     385,     0,     0,   298,   299,   300,   301,   385,     0,     0,
       2,   283,   265,   275,   277,   278,   264,   281,   285,     0,
     296,   284,   185,     3,     0,   269,     0,    19,    21,    22,
     385,   185,     1,     0,   276,   263,   282,     0,   385,   297,
       0,   366,     0,     0,   280,     0,     0,   295,   269,     0,
       0,   385,     0,     0,    32,    34,    33,    37,    38,    30,
     370,   269,    25,    20,     0,    23,    26,    28,    31,    27,
       0,    29,     0,   374,   375,   376,   385,   377,   385,     0,
     372,    24,   368,   286,   269,     0,   270,     0,   385,   267,
     367,     0,     0,   335,     0,     0,   269,     0,   320,     0,
       0,   378,    35,     0,     0,     0,   385,   337,   336,     0,
     326,   362,   361,   351,   371,   373,   279,     0,     0,     0,
     287,   271,   385,   385,   268,   369,     0,     0,     0,   315,
       0,     0,   348,   349,   353,     0,     0,   338,   341,     0,
     340,     0,     0,   318,     0,   379,     0,     0,     0,     0,
     352,   385,   302,   303,     0,     0,     0,   305,   307,   308,
     309,   310,   311,   312,   289,   290,   273,   385,   272,     0,
     288,     0,     0,   313,   331,     0,     0,     0,     0,   354,
     343,   355,     0,     0,     0,     0,    13,    14,    15,     9,
      10,    66,    65,    67,    68,    69,    64,    16,    78,     0,
       0,    11,    12,     0,     0,     0,     0,     0,     0,    50,
       4,     5,     6,     7,     8,    81,    47,    49,    51,     0,
      52,    53,    54,    55,   109,    56,    48,    57,    58,   113,
     122,   112,   126,   129,   132,   137,   141,   143,   145,   147,
     149,   151,   153,   169,   168,   324,   167,    82,     0,   323,
     325,   322,   321,   327,     0,     0,     0,   319,     0,     0,
       0,   385,     0,     0,     0,     0,     0,   385,     0,     0,
      32,    34,    33,    37,    38,    30,     0,     0,     0,   183,
     188,   269,   193,    52,    56,     0,   205,   206,   204,   186,
     174,   175,     0,   385,   176,   172,   173,     0,     0,     0,
     177,     0,   178,   207,   208,   179,   221,   222,   223,   180,
     240,   241,   242,   243,   244,   181,   182,    82,    22,     0,
     304,   306,   293,   274,   291,   292,   170,   317,   316,   333,
     350,     0,     0,     0,   345,   356,   342,   339,   344,     0,
       0,     0,    23,    24,     0,     0,     0,     0,     0,    82,
     380,   383,     0,   110,   111,   114,   115,     0,     0,     0,
     118,     0,   157,   158,   159,   160,   161,   162,   163,   164,
     165,    18,   156,   166,     0,     0,     0,     0,     0,     0,
       0,    17,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   329,
     314,   332,     0,   328,     0,     0,   246,     0,     0,     0,
       0,     0,   250,     0,     0,   252,     0,     0,     0,     0,
     116,   117,   245,   385,     0,   184,   187,   190,   196,   192,
     194,   191,   201,     0,   294,     0,     0,   347,   346,     0,
       0,     0,     0,     0,   105,    79,     0,    76,     0,     0,
      59,     0,     0,     0,   381,    60,     0,    70,   269,     0,
      40,     0,    42,    45,     0,    62,   155,   123,   124,   125,
     122,   127,   128,   130,   131,   135,   136,   133,   134,   138,
     140,   142,   144,   146,   148,   152,   150,     0,    72,     0,
       0,    63,   334,   330,   200,     0,   249,     0,   247,   171,
       0,   251,     0,   253,   385,   385,   254,   257,   255,   262,
     261,     0,     0,   189,     0,     0,     0,   385,   359,     0,
     357,     0,   108,   107,   106,    83,     0,     0,     0,    80,
     121,   120,     0,   382,   384,    61,    46,    39,    44,     0,
      71,    43,    74,   139,     0,    73,    75,     0,   248,   385,
       0,   259,   258,   256,   385,   385,     0,   234,   238,     0,
     235,   198,   197,   199,   195,   365,   364,   363,   360,   358,
       0,    85,    87,    88,    84,   103,    77,   119,    41,   154,
       0,   209,     0,   211,   260,   224,     0,   236,     0,     0,
       0,     0,    89,   269,     0,    92,     0,    99,   101,    86,
     104,     0,   385,     0,     0,   212,     0,   214,   385,   217,
     385,     0,   237,     0,     0,     0,   239,     0,     0,     0,
      90,     0,    97,   225,   210,   220,     0,   213,   215,     0,
     216,   218,   226,   385,   385,     0,   385,     0,     0,   102,
      96,    94,    95,    91,     0,    93,    98,   100,   219,   229,
     228,   385,   227,   385,   385,     0,   232,   231,   230,   385,
     233
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -537,  -537,    -1,  -537,  -537,   187,  -537,  -537,  -537,  -537,
    -537,  -537,  -537,    27,   632,  -118,   432,  -537,  -537,  -537,
    -537,   516,  -537,  -324,    95,  -537,   175,  -537,  -537,  -537,
    -537,  -537,  -537,   -83,  -537,    49,  -537,  -537,  -537,    29,
    -508,  -537,  -537,    22,  -537,  -537,  -537,    23,  -537,  -537,
    -537,   433,   100,  -537,  -537,  -537,    24,   -69,   -12,    19,
     249,  -537,   255,   266,   256,   270,  -537,   260,  -537,   203,
    -537,   475,  -536,  -401,  -396,  -291,  -235,   -66,   156,    50,
    -537,  -537,  -537,  -409,  -537,  -537,   150,  -537,  -537,  -537,
    -492,  -537,  -537,  -537,  -537,  -537,    62,  -537,    61,  -537,
    -537,  -537,  -537,  -537,    82,  -427,   161,  -537,  -537,  -537,
    -537,  -537,  -537,  -537,  -537,  -537,   170,  -537,  -537,  -537,
    -537,    44,  -537,   589,     2,  -537,  -537,    18,   -10,    86,
    -537,   630,   -29,    -3,   559,   -77,  -537,   531,   -91,  -142,
     517,   -81,   586,   550,  -201,   -80,  -537,    38,  -537,  -125,
    -537,   513,   358,  -537,   521,   -36,   -55,   512,   595,  -537,
    -537,    41,   656,  -537,   628,  -100,   360,  -336,  -537,    28
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     8,    84,   209,   210,   211,   212,   213,   214,   382,
     373,    26,    62,    63,   282,    65,    66,    67,    68,    69,
      70,    71,   536,   459,   460,   461,   462,   215,   216,   217,
     218,   535,   219,   220,   221,   446,   222,   223,   224,   225,
     571,   572,   594,   595,   641,   573,   596,   597,   226,   227,
     228,   229,   230,   286,   287,   231,   232,   233,   234,   235,
     236,   543,   237,   238,   239,   240,   241,   242,   243,   244,
     374,   463,   246,   327,   587,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   429,   430,   562,   299,   300,
     301,   302,   303,   304,   583,   606,   607,   608,   609,   305,
     306,   307,   308,   559,   588,   611,   612,   309,   310,   311,
     312,   313,   314,   315,   506,   507,   508,   316,   511,    10,
      11,   247,    89,    12,    13,    14,    15,    16,    17,   248,
      18,    46,    19,    20,   119,   120,   156,   157,    73,   128,
     129,    74,    97,    98,   249,    75,    76,    94,   110,   136,
     137,   138,   334,   139,   140,    77,    78,   179,   113,   162,
     567,    21,    41,    79,    80,    81,   101,   250,   352,    31
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      24,    25,   426,   351,   255,   175,    36,   444,   497,   510,
     108,    72,   112,   176,    34,   500,    39,   106,   603,   254,
     424,   408,   558,   512,   603,    36,   407,   158,    22,    27,
      35,   177,    48,    42,   598,    42,    50,   159,   160,    61,
     112,    83,   164,   331,    86,    87,    28,    32,   504,   170,
      72,   453,    48,   332,   117,    23,   383,   384,    47,   454,
     118,    95,   423,    96,    45,   158,   599,    88,   283,    39,
      85,    61,   489,    23,  -266,   159,   160,    49,    61,    47,
     604,   342,   161,   409,    28,   598,   604,    28,    29,   155,
     126,   127,   324,   151,   558,   605,    28,    93,   616,   343,
     106,   627,    99,    48,    96,   557,   123,    33,    93,   505,
     640,   519,   521,    36,   385,   386,    28,    61,   526,    23,
     161,   558,   558,    28,    34,    40,    29,   155,   619,    29,
      44,   402,   513,   404,   180,    42,   620,    42,    29,    28,
     167,   251,   147,   149,   643,   127,   558,    28,    93,    93,
     281,   580,    39,   319,    61,    61,     9,    36,    29,   163,
      37,    42,    28,    30,   538,    29,    57,    58,     9,  -385,
      43,   127,     9,     1,    28,    28,   330,   621,   283,   563,
     284,    29,   338,    28,   528,   622,   635,   637,    28,    29,
     142,     9,   639,  -322,    51,   317,   618,   163,    45,    28,
      28,   417,   141,   626,    29,    52,     3,     4,     5,     6,
     283,   655,   143,   172,    38,  -322,    29,    29,     1,     3,
       4,     5,     6,     1,    53,    29,    28,     7,     2,   393,
      29,   394,   109,   539,   109,   173,   540,   318,   142,   600,
     380,    29,    29,    28,     9,   358,   381,   349,   359,   344,
     345,   285,   534,    54,    55,    56,    57,    58,    59,    23,
     257,   410,   109,   494,     3,     4,     5,     6,    29,     3,
       4,     5,     6,   539,   -21,    82,   545,     7,     9,     9,
     396,     1,    45,   397,   153,    29,     2,   154,  -202,   121,
     284,  -202,   281,   396,   172,    45,   397,   428,   539,   -36,
      28,   568,    28,    28,     1,   353,   354,   355,   356,  -203,
    -202,   473,  -203,   474,   581,   528,   400,   201,   202,   584,
     585,   529,   284,     9,   378,   379,   145,     3,     4,     5,
       6,  -203,   100,   539,   102,     7,   569,   317,   539,   426,
     283,   574,    29,   445,    29,    29,   396,   166,    45,   451,
       3,     4,     5,     6,   288,    42,   455,   458,     7,   107,
     465,   285,   111,     1,   375,   376,   377,   624,   387,   388,
     168,   475,   476,   477,   478,   632,   420,   421,   116,   318,
     625,   339,   124,    28,    28,    54,    55,    56,    57,    58,
      59,    23,   125,   285,    52,   458,   130,   491,   649,   650,
     144,   652,   471,   472,   127,   145,   479,   480,   151,     3,
       4,     5,     6,    53,   118,   165,   656,     7,   657,   658,
     178,   171,   281,   109,   660,    29,    29,   181,   182,   323,
     329,   283,   256,   258,   458,   458,   322,   325,   551,   552,
     339,   458,    54,    55,    56,    57,    58,    59,    23,   333,
     340,   566,   284,     3,     4,     5,     6,   357,   361,   390,
     389,   392,   317,   391,   288,   395,   283,   317,   398,   141,
     399,   283,   283,    60,   406,   467,   468,   469,   470,   470,
     470,   411,   470,   470,   470,   470,   470,   470,   470,   470,
     470,   470,   470,   470,   470,   414,   288,   418,   419,   422,
     427,   -66,   -65,   283,   318,   -67,   -68,   283,   -69,   318,
     431,   -64,   432,    52,   433,   428,   434,   435,   436,   283,
     442,   204,   443,   285,   448,   283,     1,   283,   449,   450,
     283,   283,    53,   492,   493,   495,   514,   103,   458,   516,
     172,   496,   498,   284,   501,   503,   515,   283,   530,   531,
     283,   283,   517,   283,   542,   283,   104,   522,   317,   523,
     524,    54,    55,    56,    57,    58,    59,    23,   283,   593,
     283,   283,     3,     4,     5,     6,   283,   532,   284,   544,
     548,   546,   547,   284,   284,    54,    55,    56,    57,    58,
      59,    23,   320,   549,   550,   154,     3,     4,     5,     6,
     318,   504,   554,   555,   565,   570,   590,   281,   575,   589,
     582,   602,   601,   625,   285,   284,   245,   613,   644,   284,
     633,   648,   651,   623,   653,   618,   288,   638,   659,   281,
     527,   284,   577,   152,   578,   347,   541,   284,   481,   284,
     617,   645,   284,   284,   647,   482,   326,  -385,   484,   285,
     360,     1,   317,   485,   285,   285,     2,   483,   630,   284,
     109,   109,   284,   284,   486,   284,   564,   284,   628,   631,
     470,   615,    64,   109,   317,   560,   553,   122,   348,   245,
     284,    91,   284,   284,    92,   169,   285,   321,   284,   328,
     285,   148,   252,   335,   318,   336,   438,     3,     4,     5,
       6,   150,   285,   337,   105,     7,    90,   115,   285,   452,
     285,    64,     0,   285,   285,     0,   318,   288,     1,     0,
       0,   470,     0,     2,     0,     0,     0,   135,     0,     0,
     285,     0,     0,   285,   285,   146,   285,     0,   285,   413,
       0,   416,     0,     0,     0,     0,     0,     0,     0,     0,
      64,   285,   288,   285,   285,     0,     0,   288,   288,   285,
     131,   132,   135,     0,     3,     4,     5,     6,     0,     0,
       0,   183,     7,     0,     0,     0,   135,   362,   363,   364,
     365,   366,   367,   368,   369,     0,   370,   105,    64,   288,
       0,     0,   371,   288,     0,     0,     0,     0,    54,    55,
      56,    57,    58,    59,    23,   288,   133,     0,   437,     0,
       0,   288,     0,   288,   135,     0,   288,   288,     0,     0,
     447,     0,     0,     0,   134,   372,     0,     0,     0,     0,
       0,   341,     0,   288,   464,     0,   288,   288,     0,   288,
       0,   288,     0,     0,   440,     0,     0,     0,     0,   466,
       0,     0,     0,     0,   288,     0,   288,   288,     0,     0,
       0,     0,   288,     0,     0,     0,     0,     0,     0,     0,
     487,     0,   490,    54,    55,    56,    57,    58,    59,    23,
       0,     0,     0,     0,   326,     0,   499,     0,   135,   502,
     135,   405,     0,   509,   499,   259,   260,   184,   261,     0,
    -385,   262,   263,     0,     0,     0,     0,   264,     0,   265,
     266,   267,   185,   268,     0,   269,     0,   186,   187,   188,
       0,     0,     0,     0,     0,     0,   490,     0,   245,     0,
       0,   537,     0,     0,     0,     0,     0,     0,   189,   190,
       0,     0,     0,   270,   271,   272,   273,   274,   275,    23,
     197,   198,   276,   277,   199,     0,     0,     0,   278,     0,
       0,   200,     0,   201,   202,     0,     0,     0,   203,     0,
       0,   439,   441,  -385,     0,     0,   205,   206,   207,   208,
       0,     0,     0,     0,     0,     0,   131,   132,   280,     0,
     561,     0,   259,   260,   184,   261,     0,     0,   262,   263,
       0,     0,     0,   576,   264,     0,   265,   266,   267,   185,
     268,     0,   269,     0,   186,   187,   188,     0,     0,   579,
       0,     0,   499,     0,    54,    55,    56,    57,    58,    59,
      23,   499,   133,     0,     0,   189,   190,     0,     0,     0,
     270,   271,   272,   273,   274,   275,    23,   197,   198,   276,
     277,   199,     0,     0,     0,   278,     0,     0,   200,   103,
     201,   202,     0,     0,   499,   203,   447,     0,     0,     0,
       0,   279,    37,   205,   206,   207,   208,     0,   104,   326,
     259,   260,   184,   261,     0,   280,   262,   263,     0,     0,
       0,     0,   264,   642,   265,   266,   267,   185,   268,     0,
     269,     0,   186,   187,   188,     0,     0,    54,    55,    56,
      57,    58,    59,    23,     0,     0,     0,     0,     3,     4,
       5,     6,     0,   189,   190,     0,     0,     0,   270,   271,
     272,   273,   274,   275,    23,   197,   198,   276,   277,   199,
       0,     0,     0,   278,     0,     0,   200,     0,   201,   202,
       0,     0,     0,   203,     0,     0,     0,     0,     0,   425,
       0,   205,   206,   207,   208,   259,   260,   629,   261,     0,
       0,   262,   263,   280,     0,     0,     0,   264,     0,   265,
     266,   267,   185,   268,     0,   269,     0,   186,   187,   188,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   189,   190,
       0,     0,     0,   270,   271,   272,   273,   274,   275,    23,
     197,   198,   276,   277,   199,     0,     0,     0,   278,   604,
       0,   200,     0,   201,   202,     0,     0,     0,   203,     0,
       0,     0,     0,     0,     0,     0,   205,   206,   207,   208,
     259,   260,   184,   261,     0,     0,   262,   263,   280,     0,
       0,     0,   264,     0,   265,   266,   267,   185,   268,     0,
     269,     0,   186,   187,   188,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   189,   190,     0,     0,     0,   270,   271,
     272,   273,   274,   275,    23,   197,   198,   276,   277,   199,
       0,     0,     0,   278,     0,     0,   200,     0,   201,   202,
       0,     0,     0,   203,     0,     0,     0,     0,     0,     0,
       0,   205,   206,   207,   208,   260,   184,   261,     0,     0,
     262,   263,     0,   280,     0,     0,   264,     0,   265,   266,
     267,   185,   268,     0,   269,     0,   186,   187,   188,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   189,   190,     0,
       0,     0,   191,   192,   193,   194,   195,   196,    23,   197,
     198,   276,   277,   199,     0,     0,     0,   278,     0,   184,
     200,     0,   201,   202,     0,     0,     0,   203,     0,     0,
       0,     0,     0,     0,   185,   205,   206,   207,   208,   186,
     187,   188,     0,     0,     0,     0,     0,   280,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     189,   190,     0,     0,     0,   270,   271,   272,   273,   274,
     275,    23,   197,   198,   276,   277,   199,     0,     0,     0,
       0,     0,   184,   200,     0,   201,   202,     0,     0,     0,
     203,     0,     0,     0,     0,     0,     0,   185,   205,   206,
     207,   208,   186,   187,   188,     0,     0,     0,     0,     0,
     556,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   189,   190,     0,     0,     0,   191,   192,
     193,   194,   195,   196,    23,   197,   198,   184,     0,   199,
       0,     0,     0,     0,     0,     0,   200,     0,   201,   202,
       0,     0,   185,   203,     0,     0,     0,   186,   187,   188,
       0,   205,   206,   207,   208,     0,     0,     0,     0,     0,
       0,     0,     0,   412,     0,     0,     0,     0,   189,   190,
       0,     0,     0,   191,   192,   193,   194,   195,   196,    23,
     197,   198,   184,     0,   199,     0,     0,     0,     0,     0,
       0,   200,     0,   201,   202,     0,     0,   185,   203,     0,
       0,     0,   186,   187,   188,     0,   205,   206,   207,   208,
       0,     0,     0,     0,     0,     0,     0,     0,   415,     0,
       0,     0,     0,   189,   190,     0,     0,     0,   191,   192,
     193,   194,   195,   196,    23,   197,   198,   184,     0,   199,
       0,     0,     0,     0,     0,     0,   200,     0,   201,   202,
       0,     0,   185,   203,     0,     0,     0,   186,   187,   188,
       0,   205,   206,   207,   208,     0,     0,     0,     0,     0,
       0,     0,     0,   586,     0,     0,     0,     0,   189,   190,
       0,     0,     0,   191,   192,   193,   194,   195,   196,    23,
     197,   198,   184,     0,   199,     0,     0,     0,     0,     0,
       0,   200,     0,   201,   202,     0,     0,   185,   203,     0,
       0,     0,   186,   187,   188,     0,   205,   206,   207,   208,
       0,     0,     0,     0,     0,     0,     0,     0,   614,     0,
       0,     0,     0,   189,   190,     0,     0,     0,   191,   192,
     193,   194,   195,   196,    23,   197,   198,   276,   277,   199,
       0,     0,     0,     0,     0,   184,   200,     0,   201,   202,
       0,     0,     0,   203,   610,     0,     0,     0,     0,     0,
     185,   205,   206,   207,   208,   186,   187,   188,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   189,   190,     0,     0,
       0,   191,   192,   193,   194,   195,   196,    23,   197,   198,
     276,   277,   199,     0,     0,     0,     0,     0,   184,   200,
       0,   201,   202,     0,     0,     0,   203,   634,     0,     0,
       0,     0,     0,   185,   205,   206,   207,   208,   186,   187,
     188,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   189,
     190,     0,     0,     0,   191,   192,   193,   194,   195,   196,
      23,   197,   198,   276,   277,   199,     0,     0,     0,     0,
       0,   184,   200,     0,   201,   202,     0,     0,     0,   203,
     636,     0,     0,     0,     0,     0,   185,   205,   206,   207,
     208,   186,   187,   188,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      52,     0,   189,   190,     0,     0,     0,   191,   192,   193,
     194,   195,   196,    23,   197,   198,   276,   277,   199,    53,
       0,     0,     0,     0,   184,   200,     0,   201,   202,     0,
       0,     0,   203,   654,     0,     0,     0,     0,     0,   185,
     205,   206,   207,   208,   186,   187,   188,     0,    54,    55,
      56,    57,    58,    59,    23,     0,     0,     0,     0,     3,
       4,     5,     6,     0,     0,   189,   190,     0,     0,     0,
     191,   192,   193,   194,   195,   196,    23,   197,   198,   114,
       0,   199,     0,     0,     0,     0,     0,   184,   200,     0,
     201,   202,     0,     0,     0,   203,   456,     0,     0,     0,
     204,   350,   185,   205,   206,   207,   208,   186,   187,   188,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   189,   190,
       0,     0,     0,   191,   192,   193,   194,   195,   196,    23,
     197,   198,     0,     0,   199,     0,   131,   132,     0,     0,
       0,   200,     0,   201,   202,   184,     0,     0,   203,   457,
       0,     0,     0,     0,   456,     0,   205,   206,   207,   208,
     185,     0,     0,     0,     0,   186,   187,   188,     0,     0,
       0,     0,     0,     0,    54,    55,    56,    57,    58,    59,
      23,     0,   133,     0,     0,     0,   189,   190,     0,     0,
       0,   191,   192,   193,   194,   195,   196,    23,   197,   198,
     174,     0,   199,     0,   131,   132,     0,     0,     0,   200,
       0,   201,   202,   184,     0,     0,   203,   488,     0,     0,
       0,     0,   456,     0,   205,   206,   207,   208,   185,     0,
       0,     0,     0,   186,   187,   188,     0,     0,     0,     0,
       0,     0,    54,    55,    56,    57,    58,    59,    23,     0,
     133,     0,     0,     0,   189,   190,     0,     0,     0,   191,
     192,   193,   194,   195,   196,    23,   197,   198,   253,     0,
     199,     0,   131,   132,     0,     0,     0,   200,     0,   201,
     202,   184,     0,     0,   203,   518,     0,     0,     0,     0,
     456,     0,   205,   206,   207,   208,   185,     0,     0,     0,
       0,   186,   187,   188,     0,     0,     0,     0,     0,     0,
      54,    55,    56,    57,    58,    59,    23,     0,   133,     0,
       0,     0,   189,   190,     0,     0,     0,   191,   192,   193,
     194,   195,   196,    23,   197,   198,   401,     0,   199,     0,
       0,   131,   132,     0,     0,   200,     0,   201,   202,   184,
       0,     0,   203,   520,     0,     0,     0,     0,   456,     0,
     205,   206,   207,   208,   185,     0,     0,     0,     0,   186,
     187,   188,     0,     0,     0,     0,     0,     0,     0,    54,
      55,    56,    57,    58,    59,    23,     0,   133,     0,     0,
     189,   190,     0,     0,     0,   191,   192,   193,   194,   195,
     196,    23,   197,   198,   184,   403,   199,     0,     0,     0,
       0,     0,     0,   200,     0,   201,   202,     0,     0,   185,
     203,   525,     0,     0,   186,   187,   188,     0,   205,   206,
     207,   208,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   189,   190,     0,     0,     0,
     191,   192,   193,   194,   195,   196,    23,   197,   198,     0,
       0,   199,     0,     0,     0,     0,     0,   184,   200,     0,
     201,   202,     0,     0,     0,   203,     0,     0,     0,     0,
     204,   533,   185,   205,   206,   207,   208,   186,   187,   188,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   189,   190,
       0,     0,     0,   191,   192,   193,   194,   195,   196,    23,
     197,   198,     0,     0,   199,     0,     0,     0,     0,     0,
     184,   200,     0,   201,   202,     0,     0,     0,   203,     0,
       0,     0,     0,   591,   592,   185,   205,   206,   207,   208,
     186,   187,   188,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   189,   190,     0,     0,     0,   191,   192,   193,   194,
     195,   196,    23,   197,   198,   276,   277,   199,     0,     0,
       0,     0,     0,   184,   200,     0,   201,   202,     0,     0,
       0,   203,     0,     0,     0,     0,     0,     0,   185,   205,
     206,   207,   208,   186,   187,   188,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   189,   190,     0,     0,     0,   191,
     192,   193,   194,   195,   196,    23,   197,   198,     0,     0,
     199,     0,     0,     0,     0,     0,   184,   200,     0,   201,
     202,     0,     0,     0,   203,     0,     0,     0,     0,   591,
     646,   185,   205,   206,   207,   208,   186,   187,   188,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   189,   190,     0,
       0,     0,   191,   192,   193,   194,   195,   196,    23,   197,
     198,     0,     0,   199,     0,     0,     0,     0,     0,     0,
     200,     0,   201,   202,   184,     0,     0,   203,     0,     0,
       0,     0,   204,     0,     0,   205,   206,   207,   208,   185,
       0,   346,     0,     0,   186,   187,   188,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   189,   190,     0,     0,     0,
     270,   271,   272,   273,   274,   275,    23,   197,   198,   184,
       0,   199,     0,     0,     0,     0,     0,     0,   200,     0,
     201,   202,     0,     0,   185,   203,     0,     0,     0,   186,
     187,   188,     0,   205,   206,   207,   208,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     189,   190,     0,     0,     0,   191,   192,   193,   194,   195,
     196,    23,   197,   198,     0,     0,   199,     0,     0,     0,
       0,     0,   184,   200,     0,   201,   202,     0,     0,     0,
     203,   456,     0,     0,   145,     0,     0,   185,   205,   206,
     207,   208,   186,   187,   188,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   189,   190,     0,     0,     0,   191,   192,
     193,   194,   195,   196,    23,   197,   198,   184,     0,   199,
       0,     0,     0,     0,     0,     0,   200,     0,   201,   202,
       0,     0,   185,   203,     0,     0,     0,   186,   187,   188,
       0,   205,   206,   207,   208,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   189,   190,
       0,     0,     0,   191,   192,   193,   194,   195,   196,    23,
     197,   198,     0,     0,   199,     0,     0,     0,     0,     0,
     184,   200,     0,   201,   202,     0,     0,     0,   203,     0,
       0,     0,     0,   570,     0,   185,   205,   206,   207,   208,
     186,   187,   188,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   189,   190,     0,     0,     0,   191,   192,   193,   194,
     195,   196,    23,   197,   198,   184,     0,   199,     0,     0,
       0,     0,     0,     0,   200,     0,   201,   202,     0,     0,
     185,   203,     0,     0,     0,   186,   187,   188,     0,   205,
     206,   207,   208,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   189,   190,     0,     0,
       0,   270,   271,   272,   273,   274,   275,    23,   197,   198,
     184,     0,   199,     0,     0,     0,     0,     0,     0,   200,
       0,   201,   202,     0,     0,   185,   203,     0,     0,     0,
     186,   187,   188,     0,   205,   206,   207,   208,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   189,   190,     0,     0,     0,   191,   192,   193,   194,
     195,   196,    23,   197,   198,     0,     0,   199,     0,     0,
       0,     0,     0,     0,   200,     0,   201,   202,     0,     0,
       0,   203,     0,     0,     0,     0,     0,     0,     0,   205,
     206
};

static const yytype_int16 yycheck[] =
{
       1,     2,   293,   204,   146,   130,    16,   343,   409,   418,
      76,    40,    78,   131,    12,   411,    19,    72,     7,   144,
      10,     7,   514,   419,     7,    35,   261,   118,     0,     2,
      12,   131,    33,    50,   570,    50,    37,   118,   118,    40,
     106,    42,   119,    61,    45,    46,     2,     0,     9,   126,
      79,    76,    53,    71,    77,    59,    35,    36,    30,    84,
      83,    78,    77,    64,    80,   156,   574,    83,   151,    72,
      43,    72,   396,    59,     0,   156,   156,    33,    79,    51,
      69,   199,   118,    69,    40,   621,    69,    43,     2,   118,
      91,    92,   169,    83,   586,    84,    52,    53,   590,   199,
     155,    84,    64,   104,   105,   514,    88,    14,    64,    70,
     618,   435,   436,   123,    93,    94,    72,   118,   442,    59,
     156,   613,   614,    79,   122,    83,    40,   156,    76,    43,
      98,   256,   423,   258,   135,    50,    84,    50,    52,    95,
     122,   142,   104,   105,    84,   146,   638,   103,   104,   105,
     151,   547,   155,   154,   155,   156,     0,   167,    72,   118,
      18,    50,   118,     7,    77,    79,    56,    57,    12,    14,
      85,   172,    16,    18,   130,   131,   177,    76,   261,   515,
     151,    95,   183,   139,    76,    84,   613,   614,   144,   103,
      76,    35,    84,    76,    38,   151,    85,   156,    80,   155,
     156,   267,    85,   604,   118,     5,    64,    65,    66,    67,
     293,   638,    98,    76,    72,    98,   130,   131,    18,    64,
      65,    66,    67,    18,    24,   139,   182,    72,    23,    30,
     144,    32,    76,    76,    78,    98,    79,   151,    76,   575,
      45,   155,   156,   199,    88,    78,    51,   203,    81,    80,
      81,   151,   453,    53,    54,    55,    56,    57,    58,    59,
      98,   262,   106,   405,    64,    65,    66,    67,   182,    64,
      65,    66,    67,    76,    59,    98,    79,    72,   122,   123,
      78,    18,    80,    81,    84,   199,    23,    87,    76,    84,
     261,    79,   293,    78,    76,    80,    81,   298,    76,    75,
     256,    79,   258,   259,    18,   205,   206,   207,   208,    76,
      98,   380,    79,   382,   549,    76,    98,    73,    74,   554,
     555,    82,   293,   167,    88,    89,    82,    64,    65,    66,
      67,    98,    81,    76,    75,    72,    79,   293,    76,   630,
     423,    79,   256,   344,   258,   259,    78,    84,    80,    81,
      64,    65,    66,    67,   151,    50,   357,   358,    72,    98,
     361,   261,    98,    18,    90,    91,    92,   602,    33,    34,
      84,   383,   384,   385,   386,   610,   276,   277,    98,   293,
      77,    78,    98,   339,   340,    53,    54,    55,    56,    57,
      58,    59,    98,   293,     5,   396,    78,   398,   633,   634,
      78,   636,   378,   379,   405,    82,   387,   388,    83,    64,
      65,    66,    67,    24,    83,    98,   651,    72,   653,   654,
      77,    85,   423,   267,   659,   339,   340,    79,    76,    84,
      79,   514,    78,    78,   435,   436,    98,    98,   504,   505,
      78,   442,    53,    54,    55,    56,    57,    58,    59,    85,
      78,   517,   423,    64,    65,    66,    67,    80,    80,    96,
      95,    31,   418,    97,   261,    75,   549,   423,    80,    85,
      79,   554,   555,    84,    98,   375,   376,   377,   378,   379,
     380,    78,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,    78,   293,    78,    78,    98,
      98,    80,    80,   586,   418,    80,    80,   590,    80,   423,
      98,    80,    98,     5,    78,   516,    98,    78,    78,   602,
      78,    83,    81,   423,    79,   608,    18,   610,    79,    79,
     613,   614,    24,    79,    79,    25,    78,     5,   539,    76,
      76,    98,    98,   514,    98,    98,    85,   630,   448,   449,
     633,   634,    79,   636,    82,   638,    24,    79,   514,    79,
      79,    53,    54,    55,    56,    57,    58,    59,   651,   570,
     653,   654,    64,    65,    66,    67,   659,    79,   549,    77,
      98,    82,    78,   554,   555,    53,    54,    55,    56,    57,
      58,    59,    84,    79,    79,    87,    64,    65,    66,    67,
     514,     9,    79,    79,    98,    83,    76,   608,    82,    98,
      83,     4,    79,    77,   514,   586,   141,    98,   619,   590,
      79,    77,    79,    98,    79,    85,   423,    98,    79,   630,
     443,   602,   532,   117,   539,   203,   461,   608,   389,   610,
     591,   619,   613,   614,   621,   390,   171,    14,   392,   549,
     217,    18,   608,   393,   554,   555,    23,   391,   608,   630,
     504,   505,   633,   634,   394,   636,   516,   638,   606,   608,
     570,   589,    40,   517,   630,   514,   506,    88,   203,   204,
     651,    51,   653,   654,    52,   126,   586,   156,   659,   172,
     590,   105,   142,   181,   608,   182,   338,    64,    65,    66,
      67,   106,   602,   182,    72,    72,    50,    79,   608,   349,
     610,    79,    -1,   613,   614,    -1,   630,   514,    18,    -1,
      -1,   621,    -1,    23,    -1,    -1,    -1,    95,    -1,    -1,
     630,    -1,    -1,   633,   634,   103,   636,    -1,   638,   264,
      -1,   266,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     118,   651,   549,   653,   654,    -1,    -1,   554,   555,   659,
      15,    16,   130,    -1,    64,    65,    66,    67,    -1,    -1,
      -1,   139,    72,    -1,    -1,    -1,   144,    37,    38,    39,
      40,    41,    42,    43,    44,    -1,    46,   155,   156,   586,
      -1,    -1,    52,   590,    -1,    -1,    -1,    -1,    53,    54,
      55,    56,    57,    58,    59,   602,    61,    -1,   333,    -1,
      -1,   608,    -1,   610,   182,    -1,   613,   614,    -1,    -1,
     345,    -1,    -1,    -1,    79,    85,    -1,    -1,    -1,    -1,
      -1,   199,    -1,   630,   359,    -1,   633,   634,    -1,   636,
      -1,   638,    -1,    -1,    24,    -1,    -1,    -1,    -1,   374,
      -1,    -1,    -1,    -1,   651,    -1,   653,   654,    -1,    -1,
      -1,    -1,   659,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     395,    -1,   397,    53,    54,    55,    56,    57,    58,    59,
      -1,    -1,    -1,    -1,   409,    -1,   411,    -1,   256,   414,
     258,   259,    -1,   418,   419,     5,     6,     7,     8,    -1,
      10,    11,    12,    -1,    -1,    -1,    -1,    17,    -1,    19,
      20,    21,    22,    23,    -1,    25,    -1,    27,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,   451,    -1,   453,    -1,
      -1,   456,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      -1,    -1,    -1,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    -1,    -1,    -1,    68,    -1,
      -1,    71,    -1,    73,    74,    -1,    -1,    -1,    78,    -1,
      -1,   339,   340,    83,    -1,    -1,    86,    87,    88,    89,
      -1,    -1,    -1,    -1,    -1,    -1,    15,    16,    98,    -1,
     515,    -1,     5,     6,     7,     8,    -1,    -1,    11,    12,
      -1,    -1,    -1,   528,    17,    -1,    19,    20,    21,    22,
      23,    -1,    25,    -1,    27,    28,    29,    -1,    -1,   544,
      -1,    -1,   547,    -1,    53,    54,    55,    56,    57,    58,
      59,   556,    61,    -1,    -1,    48,    49,    -1,    -1,    -1,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    -1,    -1,    -1,    68,    -1,    -1,    71,     5,
      73,    74,    -1,    -1,   589,    78,   591,    -1,    -1,    -1,
      -1,    84,    18,    86,    87,    88,    89,    -1,    24,   604,
       5,     6,     7,     8,    -1,    98,    11,    12,    -1,    -1,
      -1,    -1,    17,   618,    19,    20,    21,    22,    23,    -1,
      25,    -1,    27,    28,    29,    -1,    -1,    53,    54,    55,
      56,    57,    58,    59,    -1,    -1,    -1,    -1,    64,    65,
      66,    67,    -1,    48,    49,    -1,    -1,    -1,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      -1,    -1,    -1,    68,    -1,    -1,    71,    -1,    73,    74,
      -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    84,
      -1,    86,    87,    88,    89,     5,     6,     7,     8,    -1,
      -1,    11,    12,    98,    -1,    -1,    -1,    17,    -1,    19,
      20,    21,    22,    23,    -1,    25,    -1,    27,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      -1,    -1,    -1,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    -1,    -1,    -1,    68,    69,
      -1,    71,    -1,    73,    74,    -1,    -1,    -1,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
       5,     6,     7,     8,    -1,    -1,    11,    12,    98,    -1,
      -1,    -1,    17,    -1,    19,    20,    21,    22,    23,    -1,
      25,    -1,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      -1,    -1,    -1,    68,    -1,    -1,    71,    -1,    73,    74,
      -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,     6,     7,     8,    -1,    -1,
      11,    12,    -1,    98,    -1,    -1,    17,    -1,    19,    20,
      21,    22,    23,    -1,    25,    -1,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,
      -1,    -1,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    -1,    -1,    -1,    68,    -1,     7,
      71,    -1,    73,    74,    -1,    -1,    -1,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    86,    87,    88,    89,    27,
      28,    29,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    -1,    -1,    -1,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,    -1,    -1,
      -1,    -1,     7,    71,    -1,    73,    74,    -1,    -1,    -1,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    22,    86,    87,
      88,    89,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    53,    54,
      55,    56,    57,    58,    59,    60,    61,     7,    -1,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    73,    74,
      -1,    -1,    22,    78,    -1,    -1,    -1,    27,    28,    29,
      -1,    86,    87,    88,    89,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    48,    49,
      -1,    -1,    -1,    53,    54,    55,    56,    57,    58,    59,
      60,    61,     7,    -1,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    -1,    73,    74,    -1,    -1,    22,    78,    -1,
      -1,    -1,    27,    28,    29,    -1,    86,    87,    88,    89,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,
      -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    53,    54,
      55,    56,    57,    58,    59,    60,    61,     7,    -1,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    73,    74,
      -1,    -1,    22,    78,    -1,    -1,    -1,    27,    28,    29,
      -1,    86,    87,    88,    89,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    48,    49,
      -1,    -1,    -1,    53,    54,    55,    56,    57,    58,    59,
      60,    61,     7,    -1,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    -1,    73,    74,    -1,    -1,    22,    78,    -1,
      -1,    -1,    27,    28,    29,    -1,    86,    87,    88,    89,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,
      -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    53,    54,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    -1,    -1,    -1,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,
      -1,     7,    71,    -1,    73,    74,    -1,    -1,    -1,    78,
      79,    -1,    -1,    -1,    -1,    -1,    22,    86,    87,    88,
      89,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       5,    -1,    48,    49,    -1,    -1,    -1,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    24,
      -1,    -1,    -1,    -1,     7,    71,    -1,    73,    74,    -1,
      -1,    -1,    78,    79,    -1,    -1,    -1,    -1,    -1,    22,
      86,    87,    88,    89,    27,    28,    29,    -1,    53,    54,
      55,    56,    57,    58,    59,    -1,    -1,    -1,    -1,    64,
      65,    66,    67,    -1,    -1,    48,    49,    -1,    -1,    -1,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    84,
      -1,    64,    -1,    -1,    -1,    -1,    -1,     7,    71,    -1,
      73,    74,    -1,    -1,    -1,    78,    16,    -1,    -1,    -1,
      83,    84,    22,    86,    87,    88,    89,    27,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      -1,    -1,    -1,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    -1,    -1,    64,    -1,    15,    16,    -1,    -1,
      -1,    71,    -1,    73,    74,     7,    -1,    -1,    78,    79,
      -1,    -1,    -1,    -1,    16,    -1,    86,    87,    88,    89,
      22,    -1,    -1,    -1,    -1,    27,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    54,    55,    56,    57,    58,
      59,    -1,    61,    -1,    -1,    -1,    48,    49,    -1,    -1,
      -1,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      79,    -1,    64,    -1,    15,    16,    -1,    -1,    -1,    71,
      -1,    73,    74,     7,    -1,    -1,    78,    79,    -1,    -1,
      -1,    -1,    16,    -1,    86,    87,    88,    89,    22,    -1,
      -1,    -1,    -1,    27,    28,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    54,    55,    56,    57,    58,    59,    -1,
      61,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    79,    -1,
      64,    -1,    15,    16,    -1,    -1,    -1,    71,    -1,    73,
      74,     7,    -1,    -1,    78,    79,    -1,    -1,    -1,    -1,
      16,    -1,    86,    87,    88,    89,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    54,    55,    56,    57,    58,    59,    -1,    61,    -1,
      -1,    -1,    48,    49,    -1,    -1,    -1,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    79,    -1,    64,    -1,
      -1,    15,    16,    -1,    -1,    71,    -1,    73,    74,     7,
      -1,    -1,    78,    79,    -1,    -1,    -1,    -1,    16,    -1,
      86,    87,    88,    89,    22,    -1,    -1,    -1,    -1,    27,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      54,    55,    56,    57,    58,    59,    -1,    61,    -1,    -1,
      48,    49,    -1,    -1,    -1,    53,    54,    55,    56,    57,
      58,    59,    60,    61,     7,    79,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    -1,    73,    74,    -1,    -1,    22,
      78,    79,    -1,    -1,    27,    28,    29,    -1,    86,    87,
      88,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      53,    54,    55,    56,    57,    58,    59,    60,    61,     7,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,
      73,    74,    -1,    -1,    22,    78,    -1,    -1,    -1,    27,
      28,    29,    -1,    86,    87,    88,    89,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    -1,    -1,    -1,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    -1,     7,    71,    -1,    73,    74,    -1,    -1,    -1,
      78,    16,    -1,    -1,    82,    -1,    -1,    22,    86,    87,
      88,    89,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    53,    54,
      55,    56,    57,    58,    59,    60,    61,     7,    -1,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    73,    74,
      -1,    -1,    22,    78,    -1,    -1,    -1,    27,    28,    29,
      -1,    86,    87,    88,    89,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      -1,    -1,    -1,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,
       7,    71,    -1,    73,    74,    -1,    -1,    -1,    78,    -1,
      -1,    -1,    -1,    83,    -1,    22,    86,    87,    88,    89,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    49,    -1,    -1,    -1,    53,    54,    55,    56,
      57,    58,    59,    60,    61,     7,    -1,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    73,    74,    -1,    -1,
      22,    78,    -1,    -1,    -1,    27,    28,    29,    -1,    86,
      87,    88,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,
      -1,    53,    54,    55,    56,    57,    58,    59,    60,    61,
       7,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    73,    74,    -1,    -1,    22,    78,    -1,    -1,    -1,
      27,    28,    29,    -1,    86,    87,    88,    89,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    49,    -1,    -1,    -1,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    -1,    -1,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    73,    74,    -1,    -1,
      -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    18,    23,    64,    65,    66,    67,    72,   100,   177,
     218,   219,   222,   223,   224,   225,   226,   227,   229,   231,
     232,   260,   268,    59,   101,   101,   110,   112,   220,   228,
     177,   268,     0,    14,   223,   226,   227,    18,    72,   232,
      83,   261,    50,    85,    98,    80,   230,   268,   101,   220,
     101,   177,     5,    24,    53,    54,    55,    56,    57,    58,
      84,   101,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   231,   237,   240,   244,   245,   254,   255,   262,
     263,   264,    98,   101,   101,   112,   101,   101,    83,   221,
     261,   230,   113,   220,   246,    78,   101,   241,   242,   246,
      81,   265,    75,     5,    24,   113,   255,    98,   176,   177,
     247,    98,   176,   257,    84,   263,    98,    77,    83,   233,
     234,    84,   222,   226,    98,    98,   101,   101,   238,   239,
      78,    15,    16,    61,    79,   113,   248,   249,   250,   252,
     253,    85,    76,    98,    78,    82,   113,   246,   241,   246,
     257,    83,   120,    84,    87,   231,   235,   236,   237,   240,
     244,   254,   258,   260,   234,    98,    84,   226,    84,   233,
     234,    85,    76,    98,    79,   248,   114,   264,    77,   256,
     101,    79,    76,   113,     7,    22,    27,    28,    29,    48,
      49,    53,    54,    55,    56,    57,    58,    60,    61,    64,
      71,    73,    74,    78,    83,    86,    87,    88,    89,   102,
     103,   104,   105,   106,   107,   126,   127,   128,   129,   131,
     132,   133,   135,   136,   137,   138,   147,   148,   149,   150,
     151,   154,   155,   156,   157,   158,   159,   161,   162,   163,
     164,   165,   166,   167,   168,   170,   171,   220,   228,   243,
     266,   101,   242,    79,   248,   238,    78,    98,    78,     5,
       6,     8,    11,    12,    17,    19,    20,    21,    23,    25,
      53,    54,    55,    56,    57,    58,    62,    63,    68,    84,
      98,   101,   113,   132,   138,   151,   152,   153,   168,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   187,
     188,   189,   190,   191,   192,   198,   199,   200,   201,   206,
     207,   208,   209,   210,   211,   212,   216,   220,   228,   101,
      84,   236,    98,    84,   234,    98,   170,   172,   239,    79,
     101,    61,    71,    85,   251,   256,   250,   253,   101,    78,
      78,   113,   114,   264,    80,    81,    24,   115,   170,   220,
      84,   243,   267,   151,   151,   151,   151,    80,    78,    81,
     150,    80,    37,    38,    39,    40,    41,    42,    43,    44,
      46,    52,    85,   109,   169,    90,    91,    92,    88,    89,
      45,    51,   108,    35,    36,    93,    94,    33,    34,    95,
      96,    97,    31,    30,    32,    75,    78,    81,    80,    79,
      98,    79,   248,    79,   248,   113,    98,   175,     7,    69,
     101,    78,    98,   170,    78,    98,   170,   176,    78,    78,
     151,   151,    98,    77,    10,    84,   174,    98,   101,   184,
     185,    98,    98,    78,    98,    78,    78,   170,   251,   113,
      24,   113,    78,    81,   266,   101,   134,   170,    79,    79,
      79,    81,   265,    76,    84,   101,    16,    79,   101,   122,
     123,   124,   125,   170,   170,   101,   170,   151,   151,   151,
     151,   155,   155,   156,   156,   157,   157,   157,   157,   158,
     158,   159,   161,   162,   163,   166,   164,   170,    79,   122,
     170,   101,    79,    79,   238,    25,    98,   172,    98,   170,
     173,    98,   170,    98,     9,    70,   213,   214,   215,   170,
     182,   217,   173,   174,    78,    85,    76,    79,    79,   122,
      79,   122,    79,    79,    79,    79,   122,   104,    76,    82,
     151,   151,    79,    84,   243,   130,   121,   170,    77,    76,
      79,   125,    82,   160,    77,    79,    82,    78,    98,    79,
      79,   176,   176,   215,    79,    79,    98,   182,   189,   202,
     205,   170,   186,   266,   185,    98,   176,   259,    79,    79,
      83,   139,   140,   144,    79,    82,   170,   151,   123,   170,
     173,   175,    83,   193,   175,   175,    98,   173,   203,    98,
      76,    83,    84,   101,   141,   142,   145,   146,   171,   139,
     266,    79,     4,     7,    69,    84,   194,   195,   196,   197,
      79,   204,   205,    98,    98,   203,   189,   134,    85,    76,
      84,    76,    84,    98,   175,    77,   172,    84,   195,     7,
     178,   197,   175,    79,    79,   204,    79,   204,    98,    84,
     139,   143,   170,    84,   101,   142,    84,   146,    77,   175,
     175,    79,   175,    79,    79,   204,   175,   175,   175,    79,
     175
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
     132,   132,   132,   132,   133,   133,   134,   134,   135,   136,
     136,   137,   137,   138,   138,   138,   138,   139,   139,   140,
     140,   140,   141,   141,   142,   143,   143,   144,   144,   145,
     145,   146,   146,   147,   147,   147,   148,   148,   149,   150,
     150,   150,   150,   151,   151,   151,   152,   153,   154,   154,
     154,   154,   155,   155,   155,   155,   156,   156,   156,   157,
     157,   157,   158,   158,   158,   158,   158,   159,   160,   159,
     159,   161,   161,   162,   162,   163,   163,   164,   164,   165,
     165,   166,   166,   167,   167,   168,   169,   169,   169,   169,
     169,   169,   169,   169,   169,   169,   169,   170,   170,   171,
     172,   173,   174,   174,   174,   175,   175,   175,   175,   175,
     175,   175,   175,   176,   176,   177,   178,   178,   179,   180,
     181,   181,   182,   183,   184,   184,   185,   185,   186,   186,
     187,   188,   189,   189,   189,   189,   189,   190,   190,   191,
     191,   192,   193,   193,   194,   194,   195,   196,   196,   197,
     197,   198,   198,   198,   199,   200,   201,   201,   201,   201,
     201,   201,   201,   201,   202,   202,   203,   204,   205,   205,
     206,   206,   206,   206,   206,   207,   208,   209,   209,   209,
     210,   210,   211,   211,   212,   212,   212,   213,   214,   215,
     216,   217,   217,   218,   218,   218,   218,   219,   219,   220,
     220,   221,   221,   221,   221,   222,   222,   223,   223,   224,
     225,   226,   226,   227,   227,   227,   228,   229,   229,   229,
     229,   229,   229,   229,   229,   230,   231,   231,   232,   232,
     232,   232,   233,   234,   234,   235,   235,   236,   236,   236,
     236,   236,   236,   237,   237,   238,   238,   239,   240,   240,
     241,   241,   242,   242,   243,   243,   244,   245,   245,   245,
     245,   245,   245,   245,   245,   246,   247,   247,   248,   248,
     248,   249,   249,   250,   250,   250,   250,   251,   252,   252,
     253,   254,   254,   255,   255,   255,   255,   256,   256,   256,
     256,   257,   257,   258,   259,   259,   260,   260,   260,   260,
     261,   261,   262,   262,   263,   263,   263,   263,   264,   265,
     266,   266,   266,   267,   267,   268
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
       3,     4,     3,     4,     4,     4,     1,     3,     1,     3,
       4,     1,     1,     4,     5,     5,     6,     1,     1,     2,
       3,     4,     1,     3,     3,     1,     1,     3,     4,     1,
       3,     1,     3,     5,     6,     3,     4,     4,     4,     1,
       2,     2,     1,     1,     2,     2,     2,     2,     2,     5,
       4,     4,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     0,     4,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     5,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     4,     1,     1,     2,     1,     3,
       2,     2,     2,     1,     1,     3,     1,     3,     1,     1,
       3,     2,     1,     1,     1,     1,     1,     1,     1,     5,
       7,     5,     2,     3,     1,     2,     2,     1,     2,     3,
       2,     1,     1,     1,     5,     7,     7,     8,     8,     8,
       9,     9,     9,    10,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     2,     2,     3,     4,     3,
       2,     3,     2,     3,     3,     3,     4,     1,     2,     2,
       5,     1,     1,     2,     1,     1,     1,     4,     5,     1,
       3,     2,     3,     3,     4,     1,     2,     1,     1,     5,
       3,     1,     2,     1,     1,     1,     3,     5,     6,     6,
       6,     7,     7,     7,     8,     1,     1,     2,     1,     1,
       1,     1,     2,     2,     3,     1,     2,     1,     1,     1,
       1,     1,     1,     4,     5,     1,     3,     3,     3,     4,
       1,     3,     1,     3,     1,     1,     2,     4,     5,     5,
       6,     4,     5,     5,     6,     1,     1,     1,     1,     3,
       1,     1,     3,     2,     3,     3,     4,     2,     1,     1,
       3,     2,     3,     3,     4,     4,     5,     4,     5,     4,
       5,     1,     1,     5,     1,     1,     3,     4,     4,     5,
       2,     3,     1,     2,     1,     1,     1,     1,     2,     2,
       2,     3,     4,     1,     3,     0
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
#line 87 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); /*cerr << "Completed Parsing." << endl; */ IR = (yyval.node)->code; printTAC((yyval.node));}
#line 2412 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 94 "parser.ypp" /* yacc.c:1646  */
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
#line 2430 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 111 "parser.ypp" /* yacc.c:1646  */
    {  
			(yyval.node) = (yyvsp[0].node);
		}
#line 2438 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 115 "parser.ypp" /* yacc.c:1646  */
    {  
			(yyval.node) = (yyvsp[0].node);
		}
#line 2446 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 119 "parser.ypp" /* yacc.c:1646  */
    {  
			(yyval.node) = (yyvsp[0].node);
		}
#line 2454 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 123 "parser.ypp" /* yacc.c:1646  */
    {  
			(yyval.node) = (yyvsp[0].node);
		}
#line 2462 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 127 "parser.ypp" /* yacc.c:1646  */
    {  
			(yyval.node) = (yyvsp[0].node);
		}
#line 2470 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 132 "parser.ypp" /* yacc.c:1646  */
    {	
			string s1((yyvsp[0].sVal));
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->type = "bool";
			(yyval.node)->place = s1;
			(yyval.node)->isLit = true;	
		}
#line 2483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 140 "parser.ypp" /* yacc.c:1646  */
    { 	
			string s1((yyvsp[0].sVal));
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->type = "bool";
			(yyval.node)->place = s1;
			(yyval.node)->isLit = true;
		}
#line 2496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 150 "parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->type = "int";
			(yyval.node)->place = to_string((yyvsp[0].iVal));
			(yyval.node)->isLit = true;
		}
#line 2508 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 157 "parser.ypp" /* yacc.c:1646  */
    {
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->type = "int";
			(yyval.node)->place = to_string((yyvsp[0].iVal));
			(yyval.node)->isLit = true;
		}
#line 2520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 166 "parser.ypp" /* yacc.c:1646  */
    {
			string s1((yyvsp[0].sVal));
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->type = "char";
			(yyval.node)->place = s1;
			(yyval.node)->isLit = true;
		}
#line 2533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 181 "parser.ypp" /* yacc.c:1646  */
    {
			string s1((yyvsp[0].sVal));
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->type = "string";
			(yyval.node)->place = s1;
			(yyval.node)->isLit = true;
		}
#line 2546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 189 "parser.ypp" /* yacc.c:1646  */
    {
			string s1((yyvsp[0].sVal));
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->type = "string";
			(yyval.node)->place = s1;
			(yyval.node)->isLit = true;
		}
#line 2559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 199 "parser.ypp" /* yacc.c:1646  */
    {
			string s1((yyvsp[0].sVal));
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->type = "null";
			(yyval.node)->place = s1;
			(yyval.node)->isLit = true;
		}
#line 2572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 210 "parser.ypp" /* yacc.c:1646  */
    {}
#line 2578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 212 "parser.ypp" /* yacc.c:1646  */
    {}
#line 2584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 216 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 218 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 220 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 221 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 225 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node);}
#line 2614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 226 "parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[0].node);
		}
#line 2622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 230 "parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[0].node); 
		}
#line 2630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 233 "parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[0].node); 
		}
#line 2638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 236 "parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[0].node); 
		}
#line 2646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 240 "parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[0].node); 
		}
#line 2654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 243 "parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[0].node); 
		}
#line 2662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 246 "parser.ypp" /* yacc.c:1646  */
    {
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->place = "bool"; 
			(yyval.node)->type = "bool";
		}
#line 2673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 253 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 255 "parser.ypp" /* yacc.c:1646  */
    {
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->place = "int"; 
			(yyval.node)->type = "int";
		}
#line 2690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 261 "parser.ypp" /* yacc.c:1646  */
    {
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->place = "long"; 
			(yyval.node)->type = "long";
		}
#line 2701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 267 "parser.ypp" /* yacc.c:1646  */
    {
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->place = "char"; 
			(yyval.node)->type = "char";
		}
#line 2712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 274 "parser.ypp" /* yacc.c:1646  */
    {
			(yyval.node) = (yyvsp[-1].node);
			(yyval.node)->place += " ?"; 
			// Consider the type of this node
		}
#line 2722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 280 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 284 "parser.ypp" /* yacc.c:1646  */
    { 
			string s1((yyvsp[0].sVal));
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->place = s1;
		}
#line 2739 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 290 "parser.ypp" /* yacc.c:1646  */
    { 
			string s1((yyvsp[0].sVal));
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->place = s1;
			(yyval.node)->type = "string";
		}
#line 2751 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 300 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2757 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 305 "parser.ypp" /* yacc.c:1646  */
    { 
			if(!((yyvsp[0].node)->isLit) && ST->GetVar((yyvsp[0].node)->place)->type == "None"){
				cerr << "Symbol " << (yyvsp[0].node)->place << " not defined, at line: " <<lineNum;
				exit(1);
			}
			(yyval.node) = (yyvsp[0].node); 
			TAC* tac = new TAC();
			tac->op = "param";
			tac->target = (yyvsp[0].node)->place;
			(yyval.node)->code.pb(tac);
		}
#line 2773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 317 "parser.ypp" /* yacc.c:1646  */
    { 
			if(!((yyvsp[0].node)->isLit) && ST->GetVar((yyvsp[0].node)->place)->type == "None"){
				cerr << "Symbol " << (yyvsp[0].node)->place << " not defined, at line: " <<lineNum;
				exit(1);
			}
			(yyval.node) = (yyvsp[-2].node);
			TAC* tac = new TAC();
			tac->op = "param";
			tac->target = (yyvsp[0].node)->place;
			(yyval.node)->code.pb(tac);
		}
#line 2789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 329 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 330 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 332 "parser.ypp" /* yacc.c:1646  */
    { }
#line 2807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 334 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 335 "parser.ypp" /* yacc.c:1646  */
    { }
#line 2819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 337 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 338 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 339 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 341 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 342 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 343 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 344 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 345 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 346 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 347 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 348 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 349 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 352 "parser.ypp" /* yacc.c:1646  */
    { 
			// string tmpVar = symTable->GenTemp($2->type, "simple", -1);
			(yyval.node) = (yyvsp[-1].node);
			// $$ -> place = tmpVar;
			// gen2OpCode($$, "=", $2);
		}
#line 2902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 359 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 2908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 360 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 2914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 361 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 2920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 362 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 2926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 366 "parser.ypp" /* yacc.c:1646  */
    {
			genNode* newNode = new genNode();
			(yyval.node)=newNode;
			(yyval.node)->place = "bool";
			(yyval.node)->type = "bool";
  		}
#line 2937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 373 "parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node)=newNode;
			(yyval.node)->place = "char";
			(yyval.node)->type = "char"; 
		}
#line 2948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 380 "parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node)=newNode;
			(yyval.node)->place = "int";
			(yyval.node)->type = "int";
		}
#line 2959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 387 "parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node)=newNode;
			(yyval.node)->place = "long";
			(yyval.node)->type = "long";
		}
#line 2970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 393 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 2976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 394 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 2982 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 397 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 2988 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 398 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 2994 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 400 "parser.ypp" /* yacc.c:1646  */
    {  
			TAC* tac = new TAC();
			tac->op = "call";
			Env* methodEnv = ST->GetMethod((yyvsp[-2].node)->place);
			if(!methodEnv){
				cerr<<"Error: Method "<<(yyvsp[-2].node)->place<<" not defined in the scope, at line: "<<lineNum<<endl;
				exit(1);
			}
			tac->target = methodEnv->name;
			tac->isInt1 = true;
			tac->l1 = convertNumToString(methodEnv->argNum);
			string str1 = ST->GenTemp();
			Symbol* sym = ST->GetVar(str1);
			sym->type = methodEnv->returnType;
			tac->dest = sym;
			(yyval.node) = (yyvsp[-2].node);
			(yyval.node)->place = str1;
			(yyval.node)->type = methodEnv->returnType;
			(yyval.node)->code.pb(tac);
		}
#line 3019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 421 "parser.ypp" /* yacc.c:1646  */
    {  
			TAC* tac = new TAC();
			tac->op = "call";
			tac->isInt1 = true;

			Env* methodEnv = ST->GetMethod((yyvsp[-3].node)->place);
			if(!methodEnv){
				cerr<<"Error: Method "<<(yyvsp[-3].node)->place<<" not defined in the scope, at line: "<<lineNum<<endl;
				exit(1);
			}
			tac->target = methodEnv->name;


			tac->l1 = convertNumToString(methodEnv->argNum);
			string str1 = ST->GenTemp();


			Symbol* sym = ST->GetVar(str1);
			sym->type = methodEnv->returnType;
			tac->dest = sym;
			(yyval.node) = (yyvsp[-3].node);
			if((yyvsp[-1].node)->code.size() > 0)	(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[-1].node)->code.begin(), (yyvsp[-1].node)->code.end());
			(yyval.node)->place = str1;
			(yyval.node)->type = methodEnv->returnType;
			(yyval.node)->code.pb(tac);
		}
#line 3050 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 450 "parser.ypp" /* yacc.c:1646  */
    {  
			genNode* newNode = new genNode;
			(yyval.node) = newNode;
			if((yyvsp[-3].node)->isLit){
				cerr<<"Error: invalid array name at line: "<<lineNum<<endl;
				exit(1);
			}
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[-3].node)->code.begin(), (yyvsp[-3].node)->code.end());
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[-1].node)->code.begin(), (yyvsp[-1].node)->code.end());
			Symbol* temp = ST->GetVar(ST->GenTemp());
			temp->type = ST->GetVar((yyvsp[-3].node)->place)->type;
			if(!((yyvsp[-3].node)->isLit) && ST->GetVar((yyvsp[-3].node)->place)->type == "None"){
				cerr << "Symbol " << (yyvsp[-3].node)->place << " not defined, at line: " <<lineNum;
				exit(1);
			}
			(yyval.node)->place = temp->name;
			(yyval.node)->type = ST->GetVar((yyvsp[-3].node)->place)->type;
			TAC* tac = new TAC();
			tac->op = "getarr";
			tac->dest = temp;
			tac->array_name = (yyvsp[-3].node)->place;
			(yyval.node)->isArray = true;
			if((yyvsp[-1].node)->isLit){
				tac->isInt2 = true;
				tac->l2 = (yyvsp[-1].node)->place;
				(yyval.node)->isLit=true;
			}
			else{
				tac->opd2 = ST->GetVar((yyvsp[-1].node)->place);
				if(!((yyvsp[-1].node)->isLit) && ST->GetVar((yyvsp[-1].node)->place)->type == "None"){
					cerr << "Symbol " << (yyvsp[-1].node)->place << " not defined, at line: " <<lineNum;
					exit(1);
				}
				(yyval.node)->isLit = false;

			}
			(yyval.node)->arrayName = (yyvsp[-3].node)->place;
			(yyval.node)->arrayIndex = (yyvsp[-1].node)->place;
			(yyval.node)->code.pb(tac);
		}
#line 3095 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 491 "parser.ypp" /* yacc.c:1646  */
    {  
			genNode* newNode = new genNode;
			(yyval.node) = newNode;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[-1].node)->code.begin(), (yyvsp[-1].node)->code.end());
			Symbol* temp = ST->GetVar(ST->GenTemp());
			temp->type = ST->GetVar((yyvsp[-3].node)->place)->type;
			(yyval.node)->place = temp->name;
			(yyval.node)->type = ST->GetVar((yyvsp[-3].node)->place)->type;
			if(!((yyvsp[-3].node)->isLit) && ST->GetVar((yyvsp[-3].node)->place)->type == "None"){
				cerr << "Symbol " << (yyvsp[-3].node)->place << " not defined, at line: " <<lineNum;
				exit(1);
			}
			TAC* tac = new TAC();
			tac->op = "getarr";
			tac->dest = temp;
			tac->array_name = (yyvsp[-3].node)->place;
			(yyval.node)->isArray = true;
			if((yyvsp[-1].node)->isLit){
				tac->isInt2 = true;
				tac->l2 = (yyvsp[-1].node)->place;
				(yyval.node)->isLit=true;
			}
			else{
				tac->opd2 = ST->GetVar((yyvsp[-1].node)->place);
				if(!((yyvsp[-1].node)->isLit) && ST->GetVar((yyvsp[-1].node)->place)->type == "None"){
					cerr << "Symbol " << (yyvsp[-1].node)->place << " not defined, at line: " <<lineNum;
					exit(1);
				}
				(yyval.node)->isLit = false;

			}
			(yyval.node)->arrayName = (yyvsp[-3].node)->place;
			(yyval.node)->arrayIndex = (yyvsp[-1].node)->place;
			(yyval.node)->code.pb(tac);
		}
#line 3135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 528 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 3141 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 529 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 3147 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 531 "parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->place = (yyvsp[0].sVal); 
		}
#line 3157 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 537 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 3163 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 538 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 3169 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 540 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3175 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 541 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3181 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 544 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 3187 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 545 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 3193 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 546 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 3199 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 547 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 3205 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 549 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 3211 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 550 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 3217 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 552 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 3223 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 553 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 3229 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 554 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 3235 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 556 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 3241 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 557 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 3247 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 559 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 3253 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 561 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 3259 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 562 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 3265 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 564 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 3271 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 565 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 3277 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 567 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 3283 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 568 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 3289 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 570 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 3295 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 571 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 3301 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 574 "parser.ypp" /* yacc.c:1646  */
    {  
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->isArray = true;
			(yyval.node)->type = (yyvsp[-3].node)->type;
			(yyval.node)->nodeLen = stoi((yyvsp[-1].node)->place);
		}
#line 3313 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 582 "parser.ypp" /* yacc.c:1646  */
    {  
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->isArray = true;
			(yyval.node)->type = (yyvsp[-4].node)->type;
			(yyval.node)->code = (yyvsp[0].node)->code;
			if(stoi((yyvsp[-2].node)->place) != (yyvsp[0].node)->varDecs.size()){
				cerr << "Incompatible array lengths at line: " << lineNum << endl;
				exit(1);
			}
			else 
				(yyval.node)->nodeLen = stoi((yyvsp[-2].node)->place);
			(yyval.node)->varDecs = (yyvsp[0].node)->varDecs;
		}
#line 3332 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 597 "parser.ypp" /* yacc.c:1646  */
    {  
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->isArray = true;
			(yyval.node)->type = (yyvsp[-1].node)->type;
			(yyval.node)->code = (yyvsp[0].node)->code;
			(yyval.node)->varDecs = (yyvsp[0].node)->varDecs;
			(yyval.node)->nodeLen = (yyvsp[0].node)->varDecs.size();
		}
#line 3346 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 608 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 3352 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 609 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 3358 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 611 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 3364 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 613 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3370 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 614 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 3376 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 615 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 3382 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 616 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 3388 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 618 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3394 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 619 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3400 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 621 "parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			genNode* zeroNode = new genNode();
			zeroNode->isLit = true; zeroNode->place = "0"; zeroNode->type = "int";
			gen2OpCode((yyval.node), "-", zeroNode, (yyvsp[0].node), lineNum);
		}
#line 3412 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 630 "parser.ypp" /* yacc.c:1646  */
    {  
			(yyval.node) = (yyvsp[0].node);
			getPreUnaryOpCode("++", (yyval.node), (yyvsp[0].node), lineNum);
		}
#line 3421 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 636 "parser.ypp" /* yacc.c:1646  */
    {  
			(yyval.node) = (yyvsp[0].node);
			getPreUnaryOpCode("--", (yyval.node), (yyvsp[0].node), lineNum);
		}
#line 3430 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 641 "parser.ypp" /* yacc.c:1646  */
    { }
#line 3436 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 642 "parser.ypp" /* yacc.c:1646  */
    { }
#line 3442 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 643 "parser.ypp" /* yacc.c:1646  */
    { }
#line 3448 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 644 "parser.ypp" /* yacc.c:1646  */
    { }
#line 3454 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 647 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3460 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 649 "parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			gen2OpCode((yyval.node), "*", (yyvsp[-2].node), (yyvsp[0].node), lineNum);
			//$$->code.pb($$->code.end(), $3->code.begin(), $3->code.end());
		}
#line 3472 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 657 "parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), "/", (yyvsp[-2].node), (yyvsp[0].node), lineNum);
		}
#line 3484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 665 "parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), "%", (yyvsp[-2].node), (yyvsp[0].node), lineNum);
		}
#line 3496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 674 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 676 "parser.ypp" /* yacc.c:1646  */
    {  
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), "+", (yyvsp[-2].node), (yyvsp[0].node), lineNum);
		}
#line 3514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 684 "parser.ypp" /* yacc.c:1646  */
    {  
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), "-", (yyvsp[-2].node), (yyvsp[0].node), lineNum);
		}
#line 3526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 693 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 695 "parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), "<<", (yyvsp[-2].node), (yyvsp[0].node), lineNum);
		}
#line 3544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 703 "parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), ">>", (yyvsp[-2].node), (yyvsp[0].node), lineNum);
		}
#line 3556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 711 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 713 "parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), "<", (yyvsp[-2].node), (yyvsp[0].node), lineNum);
		}
#line 3574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 721 "parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), ">", (yyvsp[-2].node), (yyvsp[0].node), lineNum);
		}
#line 3586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 729 "parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), "<=", (yyvsp[-2].node), (yyvsp[0].node), lineNum);
		}
#line 3598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 737 "parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), ">=", (yyvsp[-2].node), (yyvsp[0].node), lineNum);
		}
#line 3610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 744 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 745 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 3622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 746 "parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-3].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[-1].node)->code.begin(), (yyvsp[-1].node)->code.end());
			gen2OpCode((yyval.node), "==", (yyvsp[-3].node), (yyvsp[-1].node), lineNum);
		}
#line 3634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 754 "parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), "!=", (yyvsp[-2].node), (yyvsp[0].node), lineNum);
		}
#line 3646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 762 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 764 "parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), "&", (yyvsp[-2].node), (yyvsp[0].node), lineNum);
		}
#line 3664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 772 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 774 "parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), "^", (yyvsp[-2].node), (yyvsp[0].node), lineNum);
		}
#line 3682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 782 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 784 "parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), "|", (yyvsp[-2].node), (yyvsp[0].node), lineNum);
		}
#line 3700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 792 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node);  }
#line 3706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 794 "parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), "&&", (yyvsp[-2].node), (yyvsp[0].node), lineNum);
		}
#line 3718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 802 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 804 "parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), "||", (yyvsp[-2].node), (yyvsp[0].node), lineNum);
		}
#line 3736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 812 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 814 "parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), "??", (yyvsp[-2].node), (yyvsp[0].node), lineNum);
		}
#line 3754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 822 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 824 "parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			getCECode((yyval.node), (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node), lineNum);
		}
#line 3770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 830 "parser.ypp" /* yacc.c:1646  */
    {  
			// assignment_operator is a string
			(yyval.node) = (yyvsp[-2].node);	
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			// TAC* tac = new TAC();
			
			Symbol* sym1 = ST->GetVar((yyvsp[-2].node)->place);
			if(sym1->type == "None"){
				cerr << "Error: Symbol " <<  (yyvsp[-2].node)->place << " not defined, at line num: " << endl;
				exit(1);
			}
			if((yyvsp[0].node)->isLit==false){		
				Symbol* sym2 = ST->GetVar((yyvsp[0].node)->place);
				if(sym2->type == "None"){
					cerr << "Error: Symbol "<< (yyvsp[0].node)->place << " not defined, at line num: " << endl;
					exit(1);
				}
				if(sym1->baseType != sym2->baseType){
					cerr << "Error: Incompatible types at line num: " << endl;
					exit(1);
				}
				if(sym1->baseType == "ARRAYTYPE" || sym2->baseType == "ARRAYTYPE"){	
					cerr << "Error: Incompatible types at line num: " << endl;
					exit(1);
				}
			}
			gen2OpCode((yyval.node), (yyvsp[-1].sVal), (yyvsp[-2].node), (yyvsp[0].node), lineNum);
			if((yyvsp[-2].node)->isArray == true){
				TAC* tac = new TAC();
				tac->op = "setarr";
				tac->array_name = (yyvsp[-2].node)->arrayName;
				if((yyvsp[-2].node)->isLit){
					tac->isInt1 = true;
					tac->l1 = (yyvsp[-2].node)->arrayIndex;
				}
				else{
					tac->opd1 = ST->GetVar((yyvsp[-2].node)->arrayIndex);
				}
				tac->opd2 = sym1;
				(yyval.node)->code.pb(tac);
			}			

		}
#line 3818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 874 "parser.ypp" /* yacc.c:1646  */
    { (yyval.sVal) = "="; }
#line 3824 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 875 "parser.ypp" /* yacc.c:1646  */
    { (yyval.sVal) = "+="; }
#line 3830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 876 "parser.ypp" /* yacc.c:1646  */
    { (yyval.sVal) = "-="; }
#line 3836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 877 "parser.ypp" /* yacc.c:1646  */
    { (yyval.sVal) = "*="; }
#line 3842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 878 "parser.ypp" /* yacc.c:1646  */
    { (yyval.sVal) = "/="; }
#line 3848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 879 "parser.ypp" /* yacc.c:1646  */
    { (yyval.sVal) = "%="; }
#line 3854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 880 "parser.ypp" /* yacc.c:1646  */
    { (yyval.sVal) = "&="; }
#line 3860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 881 "parser.ypp" /* yacc.c:1646  */
    { (yyval.sVal) = "|="; }
#line 3866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 882 "parser.ypp" /* yacc.c:1646  */
    { (yyval.sVal) = "^="; }
#line 3872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 883 "parser.ypp" /* yacc.c:1646  */
    { (yyval.sVal) = "<<="; }
#line 3878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 884 "parser.ypp" /* yacc.c:1646  */
    { (yyval.sVal) = ">>="; }
#line 3884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 886 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node);}
#line 3890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 887 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 889 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 891 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 893 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 897 "parser.ypp" /* yacc.c:1646  */
    {  (yyval.node) = (yyvsp[0].node);  }
#line 3920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 898 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 899 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 901 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 902 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 903 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 904 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 905 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 906 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 907 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 908 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3980 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 910 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = NULL; ST->EndScope();	}
#line 3986 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 911 "parser.ypp" /* yacc.c:1646  */
    {  (yyval.node) = (yyvsp[-1].node); ST->EndScope(); }
#line 3992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 914 "parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = NULL; 
			ST->BeginScope();	
		}
#line 4001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 920 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 922 "parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[-1].node);
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		}
#line 4016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 927 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 4022 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 929 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 4028 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 931 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 4034 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 932 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 4040 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 935 "parser.ypp" /* yacc.c:1646  */
    { 
			if((yyvsp[0].node)->type != "None" && equal_compatible((yyvsp[0].node)->type, (yyvsp[-1].node)->type) == "None"){
				cerr << "Incompatible types in declaration at line: " << lineNum << endl;
				exit(1);
			}
			(yyval.node) = (yyvsp[0].node);
			string typeName = (yyvsp[-1].node)->place;
			int siz = (yyval.node)->varDecs.size();
			fori(0, siz){
				((yyval.node)->varDecs)[i]->type = typeName;
			}

			(yyval.node)->type = typeName;
		}
#line 4059 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 950 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 953 "parser.ypp" /* yacc.c:1646  */
    { 	
			(yyval.node) = (yyvsp[0].node); 
			Symbol* sym = ST->GetVar((yyvsp[0].node)->place);
			(yyval.node)->varDecs.pb(sym);
		}
#line 4075 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 959 "parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[-2].node);
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			if((yyvsp[0].node)->isArray){
				if((yyvsp[-2].node)->type == "None")
					(yyval.node)->type = (yyvsp[0].node)->type;
				else 
					if((yyvsp[-2].node)->type != (yyvsp[0].node)->type){
						cerr << "Incompatible types in declaration at line: " << lineNum << endl;
						exit(1);
					}
			}
			Symbol* sym = ST->GetVar((yyvsp[0].node)->place);
			(yyval.node)->varDecs.pb(sym);
		}
#line 4095 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 976 "parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[0].node); 
			Symbol* sym = ST->GetVar((yyvsp[0].node)->place);
			if(sym->type != "None"){
				cerr << "Error: Symbol "<< (yyvsp[0].node)->place <<" is already defined. Redefinition at line num: " << lineNum << endl;
				exit(1);
			}
			
		}
#line 4109 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 986 "parser.ypp" /* yacc.c:1646  */
    {
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->place = (yyvsp[-2].node)->place;
			(yyval.node)->type = (yyvsp[0].node)->type;
			
			TAC* tac1 = new TAC();
			Symbol* sym;
			
			sym = ST->GetVar((yyvsp[-2].node)->place);
			if(sym->type != "None"){
				cerr << "Error: Symbol "<< (yyvsp[-2].node)->place <<" is already defined. Redefinition at line num: " << lineNum << endl;
				exit(1);
			}
			tac1->dest = sym;
			tac1->op = "=";

			if((yyvsp[0].node)->isLit == true){
				tac1->isInt1 = true;
				tac1->l1 = (yyvsp[0].node)->place;
				(yyval.node)->code.pb(tac1);
			}
			else if((yyvsp[0].node)->isArray){

				sym->baseType = "array";
				sym->type = (yyvsp[0].node)->type;
				(yyval.node)->isArray = true;
				for(int i=0; i<(yyvsp[0].node)->varDecs.size(); i++){
					TAC* tac = new TAC();
					tac->op = "setarr";
					tac->array_name = (yyvsp[-2].node)->place;
					tac->opd2 = (yyvsp[0].node)->varDecs[i];
					tac->isInt1 = true;
					tac->l1 = convertNumToString(i);
					(yyval.node)->code.pb(tac);
				}
				(yyval.node)->varDecs.clear();
			}
			else{
				Symbol* sym_ = ST->GetVar((yyvsp[0].node)->place);
				tac1->opd1 = sym_;
				sym -> baseType = sym_->baseType;
				(yyval.node)->code.pb(tac1);
			}

		}
#line 4160 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1034 "parser.ypp" /* yacc.c:1646  */
    {	 	
			(yyval.node) = (yyvsp[0].node); 
		}
#line 4168 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1038 "parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[0].node); 
		}
#line 4176 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1042 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 4182 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1044 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 4188 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1046 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 4194 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1047 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 4200 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1048 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4206 "y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1049 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 4212 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1050 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 4218 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1052 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4224 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1053 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4230 "y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1056 "parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[-2].node);
			string trueLabel = getNewLabel();			
			string ifEndLabel = getNewLabel();
			TAC* tac1 = new TAC();
			tac1->op = "label"; tac1->target = trueLabel;
			TAC* tac2 = new TAC();
			tac2->op = "ifgoto"; tac2->dest = ST->GetVar((yyvsp[-2].node)->place); tac2->target = trueLabel;
			if(!((yyvsp[-2].node)->isLit) && ST->GetVar((yyvsp[-2].node)->place)->type == "None"){
				cerr << "Symbol " << (yyvsp[-2].node)->place << " not defined, at line: " <<lineNum;
				exit(1);
			}
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
#line 4257 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1079 "parser.ypp" /* yacc.c:1646  */
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
			if(!((yyvsp[-4].node)->isLit) && ST->GetVar((yyvsp[-4].node)->place)->type == "None"){
				cerr << "Symbol " << (yyvsp[-4].node)->place << " not defined, at line: " <<lineNum;
				exit(1);
			}
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
#line 4289 "y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1107 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 4295 "y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1109 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 4301 "y.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1110 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 4307 "y.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1112 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 4313 "y.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1113 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 4319 "y.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1115 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 4325 "y.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1117 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 4331 "y.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1118 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 4337 "y.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1120 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 4343 "y.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1121 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 4349 "y.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1123 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4355 "y.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1124 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4361 "y.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1125 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4367 "y.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1128 "parser.ypp" /* yacc.c:1646  */
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
			if(!((yyvsp[-2].node)->isLit) && ST->GetVar((yyvsp[-2].node)->place)->type == "None"){
				cerr << "Symbol " << (yyvsp[-2].node)->place << " not defined, at line: " <<lineNum;
				exit(1);
			}

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
#line 4410 "y.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1168 "parser.ypp" /* yacc.c:1646  */
    {  
			genNode* newNode = new genNode();
			(yyval.node) = newNode;

			string inLoopLabel = getNewLabel();			
			string endLoopLabel = getNewLabel();
			string conditionLabel = getNewLabel();
			TAC* tac = new TAC(); 	tac->op = "label";	tac->target = conditionLabel;

			TAC* tac1 = new TAC();	tac1->op = "label"; tac1->target = inLoopLabel;

			TAC* tac2 = new TAC();	tac2->op = "ifgoto"; tac2->dest = ST->GetVar((yyvsp[-2].node)->place); tac2->target = inLoopLabel;
			if(!((yyvsp[-2].node)->isLit) && ST->GetVar((yyvsp[-2].node)->place)->type == "None"){
				cerr << "Symbol " << (yyvsp[-2].node)->place << " not defined, at line: " <<lineNum;
				exit(1);
			}

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
#line 4447 "y.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1202 "parser.ypp" /* yacc.c:1646  */
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
			if((yyvsp[0].node)->code.size() > 0)
				(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());

			(yyval.node)->code.pb(tac2);
			(yyval.node)->code.pb(tac1);

			updateBreak((yyval.node), endLoopLabel);
			updateContinue((yyval.node), conditionLabel);

			////////////////////////////////// BLOCK END ////////////////////////////////////////////////////
			ST->curEnv = ST->curEnv->prevEnv;
			/////////////////////////////////////////////////////////////////////////////////////////////////
		}
#line 4481 "y.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1232 "parser.ypp" /* yacc.c:1646  */
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
			if((yyvsp[0].node)->code.size() > 0)
				(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());

			(yyval.node)->code.pb(tac2);
			(yyval.node)->code.pb(tac1);

			updateBreak((yyval.node), endLoopLabel);
			updateContinue((yyval.node), conditionLabel);

			////////////////////////////////// BLOCK END ////////////////////////////////////////////////////
			ST->curEnv = ST->curEnv->prevEnv;
			/////////////////////////////////////////////////////////////////////////////////////////////////
		}
#line 4514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1261 "parser.ypp" /* yacc.c:1646  */
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
			if(!((yyvsp[-3].node)->isLit) && ST->GetVar((yyvsp[-3].node)->place)->type == "None"){
				cerr << "Symbol " << (yyvsp[-3].node)->place << " not defined, at line: " <<lineNum;
				exit(1);
			}

			TAC* tac3 = new TAC();	tac3->op = "goto"; tac3->target = endLoopLabel;

			TAC* tac4 = new TAC();	tac4->op = "label"; tac4->target = endLoopLabel;

			TAC* tac5 = new TAC();	tac5->op = "goto"; 	tac5->target = conditionLabel;

			(yyval.node)->code.pb(tac);

			(yyval.node)->code.pb(tac2);
			(yyval.node)->code.pb(tac3);
			(yyval.node)->code.pb(tac1);
			if((yyvsp[0].node)->code.size() > 0)
				(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			(yyval.node)->code.pb(tac5);
			(yyval.node)->code.pb(tac4);

			updateBreak((yyval.node), endLoopLabel);
			updateContinue((yyval.node), conditionLabel);

			////////////////////////////////// BLOCK END ////////////////////////////////////////////////////
			ST->curEnv = ST->curEnv->prevEnv;
			/////////////////////////////////////////////////////////////////////////////////////////////////
		}
#line 4562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1305 "parser.ypp" /* yacc.c:1646  */
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
			if((yyvsp[0].node)->code.size() > 0)
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
#line 4600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1339 "parser.ypp" /* yacc.c:1646  */
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
			if(!((yyvsp[-3].node)->isLit) && ST->GetVar((yyvsp[-3].node)->place)->type == "None"){
				cerr << "Symbol " << (yyvsp[-3].node)->place << " not defined, at line: " <<lineNum;
				exit(1);
			}

			TAC* tac3 = new TAC();	tac3->op = "goto"; tac3->target = endLoopLabel;

			TAC* tac4 = new TAC();	tac4->op = "label"; tac4->target = endLoopLabel;

			TAC* tac5 = new TAC();	tac5->op = "goto"; 	tac5->target = conditionLabel;

			(yyval.node)->code.pb(tac);
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[-3].node)->code.begin(), (yyvsp[-3].node)->code.end());

			(yyval.node)->code.pb(tac2);
			(yyval.node)->code.pb(tac3);
			(yyval.node)->code.pb(tac1);
			if((yyvsp[0].node)->code.size() > 0)
				(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			(yyval.node)->code.pb(tac5);
			(yyval.node)->code.pb(tac4);

			updateBreak((yyval.node), endLoopLabel);
			updateContinue((yyval.node), conditionLabel);

			////////////////////////////////// BLOCK END ////////////////////////////////////////////////////
			ST->curEnv = ST->curEnv->prevEnv;
			/////////////////////////////////////////////////////////////////////////////////////////////////
		}
#line 4647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1382 "parser.ypp" /* yacc.c:1646  */
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
			if((yyvsp[0].node)->code.size() > 0)
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
#line 4684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1415 "parser.ypp" /* yacc.c:1646  */
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
			if(!((yyvsp[-4].node)->isLit) && ST->GetVar((yyvsp[-4].node)->place)->type == "None"){
				cerr << "Symbol " << (yyvsp[-4].node)->place << " not defined, at line: " <<lineNum;
				exit(1);
			}

			TAC* tac3 = new TAC();	tac3->op = "goto"; tac3->target = endLoopLabel;

			TAC* tac4 = new TAC();	tac4->op = "label"; tac4->target = endLoopLabel;

			TAC* tac5 = new TAC();	tac5->op = "goto"; 	tac5->target = conditionLabel;

			string updateLabel = getNewLabel();
			TAC* tac_ = new TAC();	tac_->op = "label";	tac_->target = updateLabel;

			(yyval.node)->code.pb(tac);

			(yyval.node)->code.pb(tac2);
			(yyval.node)->code.pb(tac3);
			(yyval.node)->code.pb(tac1);
			if((yyvsp[0].node)->code.empty()){
				(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			}
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
#line 4738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1465 "parser.ypp" /* yacc.c:1646  */
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
			if(!((yyvsp[-4].node)->isLit) && ST->GetVar((yyvsp[-4].node)->place)->type == "None"){
				cerr << "Symbol " << (yyvsp[-4].node)->place << " not defined, at line: " <<lineNum;
				exit(1);
			}

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
			if((yyvsp[0].node)->code.size() > 0)
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
#line 4790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1513 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 1514 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1516 "parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[0].node);
		}
#line 4810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 1520 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 1522 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 1524 "parser.ypp" /* yacc.c:1646  */
    {  
			(yyval.node) = (yyvsp[-2].node);
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		}
#line 4831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 1529 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 1530 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 4843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 1531 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 4849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 1532 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 4855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 1533 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 4861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 1536 "parser.ypp" /* yacc.c:1646  */
    {  
			genNode* newNode = new genNode();
			(yyval.node) = newNode;

			TAC* tac = new TAC();	tac -> op = "goto";	tac -> isBreak = true;

			newNode->code.pb(tac);
		}
#line 4874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 1546 "parser.ypp" /* yacc.c:1646  */
    {  
			genNode* newNode = new genNode();
			(yyval.node) = newNode;

			TAC* tac = new TAC();	tac -> op = "goto";	tac -> isContinue = true;

			newNode->code.pb(tac);
		}
#line 4887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 1555 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 4893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 1556 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 4899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 1557 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 4905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 1560 "parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			TAC* tac = new TAC();
			tac->op = "ret";
			(yyval.node)->code.pb(tac);
		}
#line 4917 "y.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 1568 "parser.ypp" /* yacc.c:1646  */
    {  
			(yyval.node) = (yyvsp[-1].node);
			TAC* tac = new TAC();
			tac->op = "retint";
			if((yyvsp[-1].node)->isLit){
				tac->l1=(yyvsp[-1].node)->place;
				tac->isInt1 = true;
			}
			else
				tac->dest = ST->GetVar((yyvsp[-1].node)->place);
			if(!((yyvsp[-1].node)->isLit) && ST->GetVar((yyvsp[-1].node)->place)->type == "None"){
				cerr << "Symbol " << (yyvsp[-1].node)->place << " not defined, at line: " <<lineNum;
				exit(1);
			}
			vector <TAC*> tmp;
			tmp.pb(tac);
			(yyval.node)->code.insert((yyval.node)->code.begin(), tmp.begin(), tmp.end());
		}
#line 4940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 1587 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 4946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 1588 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 4952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 1590 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 4958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 1591 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 4964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 1592 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 4970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 1594 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 4976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 1596 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 4982 "y.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 1598 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 4988 "y.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 1600 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 4994 "y.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 1602 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 5000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 1603 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 5006 "y.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 1607 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 5012 "y.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 1608 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 5018 "y.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 1609 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 5024 "y.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 1610 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 5030 "y.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 1613 "parser.ypp" /* yacc.c:1646  */
    {
			(yyval.node) = (yyvsp[-1].node); 
			(yyval.node)->code.pb(genLabelTAC((yyvsp[-1].node)->place));
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			ST->curEnv->name = (yyvsp[-1].node)->place;
			ST->EndScope();
		}
#line 5042 "y.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 1621 "parser.ypp" /* yacc.c:1646  */
    {
			(yyval.node) = (yyvsp[-2].node); 
			(yyval.node)->code.pb(genLabelTAC((yyvsp[-2].node)->place));
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[-1].node)->code.begin(), (yyvsp[-1].node)->code.end());
			ST->curEnv->name = (yyvsp[-2].node)->place;
			ST->EndScope();
		}
#line 5054 "y.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 1629 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 5060 "y.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 1630 "parser.ypp" /* yacc.c:1646  */
    { }
#line 5066 "y.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 1633 "parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
		}
#line 5075 "y.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 1637 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 5081 "y.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 1638 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 5087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 1639 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 5093 "y.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 1641 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 5099 "y.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 1642 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 5105 "y.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 1644 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 5111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 1645 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 5117 "y.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 1647 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-3].node); }
#line 5123 "y.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 1649 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 5129 "y.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 1651 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 5135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 1653 "parser.ypp" /* yacc.c:1646  */
    {  
			(yyval.node) = (yyvsp[-1].node);
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		}
#line 5144 "y.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 1658 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 5150 "y.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 1659 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 5156 "y.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 1660 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 5162 "y.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 1662 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-2].node); }
#line 5168 "y.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 1667 "parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[-1].node);
			(yyval.node)->type = "class";
			(yyval.node)->code.pb(genLabelTAC((yyvsp[-1].node)->place));
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			ST->curEnv->name = (yyvsp[-1].node)->place;
			ST->EndScope();
		}
#line 5181 "y.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 1676 "parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[-1].node);
			(yyval.node)->type = "class";
			(yyval.node)->code.pb(genLabelTAC((yyvsp[-1].node)->place));
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			ST->curEnv->name = (yyvsp[-1].node)->place;
			ST->EndScope();
		}
#line 5194 "y.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 1684 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 5200 "y.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 1686 "parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[-2].node);
			(yyval.node)->type = "class";
			(yyval.node)->code.pb(genLabelTAC((yyvsp[-2].node)->place));
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[-1].node)->code.begin(), (yyvsp[-1].node)->code.end());
			ST->curEnv->name = (yyvsp[-2].node)->place;
			ST->EndScope();
		}
#line 5213 "y.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 1694 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 5219 "y.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 1696 "parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[-2].node);
			(yyval.node)->type = "class";
			(yyval.node)->code.pb(genLabelTAC((yyvsp[-2].node)->place));
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[-1].node)->code.begin(), (yyvsp[-1].node)->code.end());
			ST->curEnv->name = (yyvsp[-2].node)->place;
			ST->EndScope();
		}
#line 5232 "y.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 1704 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 5238 "y.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 1705 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 5244 "y.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 1709 "parser.ypp" /* yacc.c:1646  */
    { 
			ST->curEnv->type = "CLASSTYPE";
			(yyval.node) = NULL;
		}
#line 5253 "y.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 1715 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 5259 "y.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 1716 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 5265 "y.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 1718 "parser.ypp" /* yacc.c:1646  */
    { 
			string s1((yyvsp[0].sVal));
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->place = s1;
		}
#line 5276 "y.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 1724 "parser.ypp" /* yacc.c:1646  */
    { 
			string s1((yyvsp[0].sVal));
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->place = s1;
		}
#line 5287 "y.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 1730 "parser.ypp" /* yacc.c:1646  */
    { 
			string s1((yyvsp[0].sVal));
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->place = s1;
		}
#line 5298 "y.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 1736 "parser.ypp" /* yacc.c:1646  */
    { 
			string s1((yyvsp[0].sVal));
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->place = s1;
		}
#line 5309 "y.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 1743 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 5315 "y.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 1745 "parser.ypp" /* yacc.c:1646  */
    { 
			ST->curEnv->type = "CLASSTYPE";
			genNode* newNode = new genNode();
			(yyval.node) = newNode; 
		}
#line 5325 "y.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 1751 "parser.ypp" /* yacc.c:1646  */
    { 
			ST->curEnv->type = "CLASSTYPE";
			(yyval.node) = (yyvsp[-1].node); 
		}
#line 5334 "y.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 1756 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 5340 "y.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 1758 "parser.ypp" /* yacc.c:1646  */
    {  
			(yyval.node) = (yyvsp[-1].node);
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		}
#line 5349 "y.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 1763 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 5355 "y.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 1764 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 5361 "y.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 1765 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 5367 "y.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 1766 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 5373 "y.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 1767 "parser.ypp" /* yacc.c:1646  */
    {  (yyval.node) = (yyvsp[0].node);  }
#line 5379 "y.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 1768 "parser.ypp" /* yacc.c:1646  */
    {  (yyval.node) = (yyvsp[0].node);  }
#line 5385 "y.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 1770 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 5391 "y.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 1771 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 5397 "y.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 1774 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 5403 "y.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 1775 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 5409 "y.tab.c" /* yacc.c:1646  */
    break;

  case 317:
#line 1777 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 5415 "y.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 1779 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 5421 "y.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 1780 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 5427 "y.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 1783 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 5433 "y.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 1784 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 5439 "y.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 1786 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 5445 "y.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 1787 "parser.ypp" /* yacc.c:1646  */
    {	}
#line 5451 "y.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 1789 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 5457 "y.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 1790 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 5463 "y.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 1793 "parser.ypp" /* yacc.c:1646  */
    {
			(yyval.node) = (yyvsp[-1].node);
			vector <TAC*> tmp;
			tmp.pb(genLabelTAC(ST->curEnv->name));
			(yyval.node)->code.insert((yyval.node)->code.begin(), tmp.begin(), tmp.end());
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());		


			ST->EndScope();
		}
#line 5478 "y.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 1805 "parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[-2].node);
			ST->curEnv->returnType = (yyvsp[-3].node)->place;
			ST->curEnv->name = (yyvsp[-2].node)->place;
		}
#line 5488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 1811 "parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[-3].node);
			ST->curEnv->returnType = (yyvsp[-3].node)->place;
			ST->curEnv->name = (yyvsp[-2].node)->place;
		}
#line 5498 "y.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 1817 "parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[-3].node);
			ST->curEnv->returnType = (yyvsp[-4].node)->place;
			ST->curEnv->name = (yyvsp[-3].node)->place;
			(yyval.node)->code = (yyvsp[-1].node)->code;
		}
#line 5509 "y.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 1824 "parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[-3].node);
			ST->curEnv->returnType = (yyvsp[-4].node)->place;
			ST->curEnv->name = (yyvsp[-3].node)->place;
			(yyval.node)->code = (yyvsp[-1].node)->code;
		}
#line 5520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 1831 "parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[-2].node);
			ST->curEnv->name = (yyvsp[-2].node)->place;
		}
#line 5529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 1836 "parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[-2].node);
			ST->curEnv->name = (yyvsp[-2].node)->place;
		}
#line 5538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 1841 "parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[-3].node);
			ST->curEnv->name = (yyvsp[-3].node)->place;
			(yyval.node)->code = (yyvsp[-1].node)->code;
		}
#line 5548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 1847 "parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[-3].node);
			ST->curEnv->name = (yyvsp[-3].node)->place;
			(yyval.node)->code = (yyvsp[-1].node)->code;
		}
#line 5558 "y.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 1855 "parser.ypp" /* yacc.c:1646  */
    { 
			ST->BeginScope();
			ST->curEnv->type = "METHODTYPE";

			(yyval.node) = (yyvsp[0].node); 
		}
#line 5569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 1863 "parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[0].node); 
		}
#line 5577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 337:
#line 1866 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 5583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 338:
#line 1868 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 5589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 339:
#line 1870 "parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[-2].node); 
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		}
#line 5598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 340:
#line 1874 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 5604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 341:
#line 1876 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 5610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 1878 "parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[0].node);
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[-2].node)->code.begin(), (yyvsp[-2].node)->code.end());
		}
#line 5619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 343:
#line 1884 "parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[0].node); 
			Symbol* sym = ST->GetVar((yyvsp[0].node)->place);
			sym->type = (yyvsp[-1].node)->place;
			(yyval.node)->type = (yyvsp[-1].node)->place;
			ST->curEnv->argNum ++;

			TAC* tac = new TAC();
			tac->op = "readParam";
			tac->target = (yyvsp[0].node)->place;

			(yyval.node)->code.clear();
			(yyval.node)->code.pb(tac);

		}
#line 5639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 1900 "parser.ypp" /* yacc.c:1646  */
    {
			(yyval.node) = (yyvsp[0].node); 

			ST->curEnv->argTypeList.pb((yyvsp[-1].node)->place);
			ST->curEnv->argNum ++;

			(yyval.node)->type = (yyvsp[-1].node)->place;

			TAC* tac = new TAC();
			tac->op = "readParam";
			tac->target = (yyvsp[0].node)->place;

			(yyval.node)->code.clear();
			(yyval.node)->code.pb(tac);
		}
#line 5659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 1916 "parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[0].node); 

			TAC* tac = new TAC();
			tac->op = "=";
			if((yyvsp[0].node)->isLit == true){
				tac->isInt1 = true;
				tac->l1 = (yyvsp[0].node)->place;
			}
			else{
				tac->opd1 = ST->GetVar((yyvsp[0].node)->place);
			}

			tac -> dest = ST->GetVar((yyvsp[0].node)->place);
			(yyval.node)->code.pb(tac);

			ST->curEnv->argTypeList.pb((yyvsp[-2].node)->place);
			ST->curEnv->argNum ++;

			(yyval.node)->type = (yyvsp[-2].node)->place;

			TAC* tac1 = new TAC();
			tac1->op = "readParam";
			tac1->target = (yyvsp[-1].node)->place;

			(yyval.node)->code.pb(tac1);
		}
#line 5691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 346:
#line 1944 "parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[0].node); 

			TAC* tac = new TAC();
			tac->op = "=";
			if((yyvsp[0].node)->isLit == true){
				tac->isInt1 = true;
				tac->l1 = (yyvsp[0].node)->place;
			}
			else{
				tac->opd1 = ST->GetVar((yyvsp[0].node)->place);
			}

			tac -> dest = ST->GetVar((yyvsp[-1].node)->place);
			(yyval.node)->code.pb(tac);

			ST->curEnv->argTypeList.pb((yyvsp[-2].node)->place);
			ST->curEnv->argNum ++;

			(yyval.node)->type = (yyvsp[-2].node)->place;

			TAC* tac1 = new TAC();
			tac1->op = "readParam";
			tac1->target = (yyvsp[-1].node)->place;

			(yyval.node)->code.pb(tac1);
		}
#line 5723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 347:
#line 1972 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 5729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 348:
#line 1974 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 5735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 1975 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 5741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 350:
#line 1978 "parser.ypp" /* yacc.c:1646  */
    { 
// -			// Not sure about this
// 			$$ = $3; 
// 			ST->curEnv->argNum++;
// 			ST->curEnv->argTypeList.pb($2->place);
		}
#line 5752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 351:
#line 1985 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 5758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 352:
#line 1986 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 5764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 353:
#line 1989 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 5770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 354:
#line 1990 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 5776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 355:
#line 1991 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 5782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 356:
#line 1992 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 5788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 357:
#line 1994 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 5794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 1995 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 5800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 1996 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 5806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 1997 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 5812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 1999 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 5818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 362:
#line 2000 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 5824 "y.tab.c" /* yacc.c:1646  */
    break;

  case 363:
#line 2002 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 5830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 2004 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 5836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 365:
#line 2005 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 5842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 366:
#line 2009 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 5848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 367:
#line 2010 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 5854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 368:
#line 2011 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 5860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 369:
#line 2012 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 5866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 370:
#line 2015 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 5872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 371:
#line 2016 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 5878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 372:
#line 2018 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 5884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 373:
#line 2019 "parser.ypp" /* yacc.c:1646  */
    {  }
#line 5890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 374:
#line 2021 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 5896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 375:
#line 2022 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 5902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 376:
#line 2023 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 5908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 377:
#line 2024 "parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 5914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 378:
#line 2028 "parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->type=(yyvsp[-1].node)->type;
			(yyval.node)->place=(yyvsp[-1].node)->place;
			(yyval.node)->isArray = true;
		}
#line 5926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 379:
#line 2036 "parser.ypp" /* yacc.c:1646  */
    {   }
#line 5932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 380:
#line 2039 "parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->isArray = true;
			(yyval.node)->nodeLen = 0;
		}
#line 5943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 381:
#line 2046 "parser.ypp" /* yacc.c:1646  */
    {  
			(yyval.node) = (yyvsp[-1].node);
			(yyval.node)->isArray = true;
		}
#line 5952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 382:
#line 2051 "parser.ypp" /* yacc.c:1646  */
    {  
			(yyval.node) = (yyvsp[-2].node);
			(yyval.node)->isArray = true;
		}
#line 5961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 383:
#line 2057 "parser.ypp" /* yacc.c:1646  */
    {  
			if((yyvsp[0].node)->isArray){
				cerr << "Incorrect array initialisation at line: " << lineNum;
				exit(1);
			}
			Symbol* temp =  ST->GetVar(ST->GenTemp());
			TAC* tac = new TAC();
			tac->op = "=";
			tac->dest = temp;
			(yyval.node)->code = (yyvsp[0].node)->code;
			if((yyvsp[0].node)->isLit){
				tac->isInt1 = true;
				tac->l1 = (yyvsp[0].node)->place;
			}
			else{
				if(!((yyvsp[0].node)->isLit) && ST->GetVar((yyvsp[0].node)->place)->type == "None"){
					cerr << "Symbol " << (yyvsp[0].node)->place << " not defined, at line: " <<lineNum;
					exit(1);
				}
				tac->opd1 = ST->GetVar((yyvsp[0].node)->place);
			}
			(yyval.node)->varDecs.pb(tac->dest);
			(yyval.node)->code.pb(tac);
		}
#line 5990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 384:
#line 2082 "parser.ypp" /* yacc.c:1646  */
    {  
			if((yyvsp[0].node)->isArray){
				cerr << "Incorrect array initialisation at line: " << lineNum;
				exit(1);
			}
			(yyval.node) = (yyvsp[-2].node);
			Symbol* temp =  ST->GetVar(ST->GenTemp());
			TAC* tac = new TAC();
			tac->op = "=";
			tac->dest = temp;
			if((yyvsp[0].node)->isLit){
				tac->isInt1 = true;
				tac->l1 = (yyvsp[0].node)->place;
			}
			else{
				if(!((yyvsp[0].node)->isLit) && ST->GetVar((yyvsp[0].node)->place)->type == "None"){
					cerr << "Symbol " << (yyvsp[0].node)->place << " not defined, at line: " <<lineNum;
					exit(1);
				}
				tac->opd1 = ST->GetVar((yyvsp[0].node)->place);
			}
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			(yyval.node)->varDecs.pb(tac->dest);
			(yyval.node)->code.pb(tac);
		}
#line 6020 "y.tab.c" /* yacc.c:1646  */
    break;

  case 385:
#line 2110 "parser.ypp" /* yacc.c:1646  */
    {}
#line 6026 "y.tab.c" /* yacc.c:1646  */
    break;


#line 6030 "y.tab.c" /* yacc.c:1646  */
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
#line 2113 "parser.ypp" /* yacc.c:1906  */
	

extern void yyerror(const char *c){
		string str(c);
		cerr << "Error at line: " << lineNum << "\n"<< str << endl;
		exit(1);	
	}


