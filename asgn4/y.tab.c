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
#line 30 "src/parser.ypp" /* yacc.c:355  */

	int iVal;
	char *sVal;
	struct genNode* node;	

#line 289 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 306 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   3256

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  100
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  171
/* YYNRULES -- Number of rules.  */
#define YYNRULES  390
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  668

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
       0,    76,    76,    80,    97,   101,   105,   109,   113,   119,
     127,   137,   144,   153,   168,   176,   186,   197,   199,   203,
     205,   207,   208,   212,   213,   217,   220,   223,   227,   230,
     233,   240,   242,   248,   254,   261,   267,   271,   277,   286,
     290,   291,   293,   294,   296,   298,   299,   301,   302,   303,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   316,
     323,   323,   325,   326,   329,   334,   335,   336,   337,   338,
     341,   342,   343,   344,   347,   350,   351,   353,   359,   360,
     362,   363,   366,   367,   368,   369,   371,   372,   374,   375,
     376,   378,   379,   381,   383,   384,   386,   387,   389,   390,
     392,   393,   395,   396,   397,   398,   399,   400,   403,   404,
     406,   408,   409,   410,   411,   413,   414,   415,   423,   429,
     435,   436,   437,   438,   441,   442,   450,   458,   468,   469,
     478,   488,   489,   497,   506,   507,   515,   523,   531,   539,
     540,   540,   548,   557,   558,   567,   568,   577,   578,   587,
     588,   597,   598,   607,   608,   617,   618,   625,   652,   653,
     654,   655,   656,   657,   658,   659,   660,   661,   662,   664,
     667,   669,   671,   673,   677,   678,   679,   681,   682,   683,
     684,   685,   686,   687,   688,   690,   691,   693,   695,   697,
     698,   700,   702,   704,   705,   707,   720,   722,   723,   729,
     734,   760,   761,   763,   765,   767,   768,   769,   770,   771,
     773,   774,   776,   777,   779,   781,   782,   784,   785,   787,
     789,   790,   792,   793,   795,   796,   797,   798,   800,   802,
     804,   805,   806,   807,   808,   809,   810,   811,   813,   814,
     816,   818,   820,   821,   823,   825,   826,   827,   828,   829,
     831,   833,   835,   836,   837,   839,   840,   842,   843,   845,
     846,   847,   849,   851,   853,   855,   857,   858,   862,   863,
     864,   865,   867,   868,   870,   871,   873,   874,   875,   876,
     878,   879,   881,   882,   884,   886,   888,   889,   891,   892,
     893,   895,   899,   900,   901,   902,   903,   904,   905,   906,
     908,   909,   911,   917,   923,   929,   936,   938,   942,   944,
     945,   947,   948,   949,   950,   951,   952,   954,   955,   958,
     959,   961,   963,   964,   967,   968,   970,   971,   972,   973,
     975,   977,   978,   979,   980,   981,   982,   983,   984,   987,
     989,   990,   992,   993,   994,   996,   997,   999,  1000,  1001,
    1002,  1004,  1006,  1007,  1009,  1011,  1012,  1015,  1016,  1017,
    1018,  1020,  1021,  1022,  1023,  1025,  1026,  1028,  1030,  1031,
    1035,  1036,  1037,  1038,  1041,  1042,  1044,  1045,  1047,  1048,
    1049,  1050,  1054,  1059,  1060,  1062,  1066,  1067,  1069,  1070,
    1074
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IFX", "ELSE", "CONST", "CONTINUE",
  "DEFAULT", "DO", "FINALLY", "FOR", "FOREACH", "GOTO", "IF", "IN",
  "NAMESPACE", "PARAMS", "REF", "RETURN", "STRUCT", "SWITCH", "THROW",
  "TRY", "TYPEOF", "USING", "VOID", "WHILE", "SIMPLE_ESC_SEQ",
  "CHAR_LITERAL", "REG_STR_LITERAL", "VER_STR_LITERAL", "DQM", "RAND",
  "ROR", "REQ", "RNE", "LE", "GE", "APLUS", "AMINUS", "AMULT", "ADIV",
  "AMOD", "AAND", "AOR", "ACARET", "LSHIFT", "LSHIFTEQ", "WHERE", "TRUE",
  "FALSE", "DCLN", "RSHIFT", "RSHIFTEQ", "INT", "CHAR", "LONG", "OBJECT",
  "STRING", "BOOL", "ID", "NULL_LIT", "THIS", "INCR", "DECR", "NEW",
  "PUBLIC", "PROTECTED", "PRIVATE", "BREAK", "CASE", "CATCH", "BASE",
  "CLASS", "DINT_LITERAL", "HDINT_LITERAL", "'?'", "','", "':'", "'('",
  "')'", "'.'", "'['", "']'", "'{'", "'}'", "'='", "'!'", "'~'", "'+'",
  "'-'", "'*'", "'/'", "'%'", "'<'", "'>'", "'&'", "'^'", "'|'", "';'",
  "$accept", "start", "identifier", "literal", "boolean_literal",
  "integer_literal", "character_literal", "string_literal", "null_literal",
  "right_shift", "right_shift_assignment", "namespace_name", "type_name",
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
  "foreach_statement", "jump_statement", "break_statement",
  "continue_statement", "goto_statement", "return_statement",
  "throw_statement", "try_statement", "catch_clauses",
  "general_catch_clause", "finally_clause", "using_statement",
  "resource_acquisition", "compilation_unit", "namespace_declaration",
  "qualified_identifier", "namespace_body", "using_directives",
  "using_directive", "using_alias_directive", "using_namespace_directive",
  "namespace_member_declarations", "namespace_member_declaration",
  "qualified_alias_member", "class_declaration", "modifiers", "modifier",
  "class_base", "class_body", "class_member_declarations",
  "class_member_declaration", "constant_declaration",
  "constant_declarators", "constant_declarator", "field_declaration",
  "variable_declarators", "variable_declarator", "variable_initializer",
  "method_declaration", "method_header", "member_name", "method_body",
  "formal_parameter_list", "fixed_parameters", "fixed_parameter",
  "default_argument", "parameter_modifier", "parameter_array",
  "constructor_declaration", "constructor_declarator",
  "constructor_initializer", "constructor_body", "destructor_declaration",
  "destructor_body", "struct_declaration", "struct_body",
  "struct_member_declarations", "struct_member_declaration", "array_type",
  "rank_specifier", "array_initializer", "variable_initializer_list",
  "epsilon", YY_NULLPTR
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

#define YYPACT_NINF -552

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-552)))

#define YYTABLE_NINF -391

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     169,   -33,   -33,   -33,  -552,  -552,  -552,  -552,   -33,    53,
    -552,  -552,   169,  -552,  -552,  -552,   229,  -552,  -552,   155,
    -552,  -552,  -552,  -552,  -552,    66,   -20,    70,    33,  -552,
      37,  -552,   147,  -552,  -552,   229,  -552,   -33,   -33,  -552,
     -33,     7,    68,   871,    79,   -33,   -33,  -552,   200,   266,
      59,    84,   -20,   147,  -552,  -552,   214,   245,  -552,   577,
     -33,  -552,  -552,  -552,  -552,  -552,  -552,  -552,   -16,  -552,
    -552,   -33,   115,   116,  -552,  -552,  -552,   134,  -552,  1198,
    -552,  -552,  -552,   102,  -552,   127,  2045,  -552,  -552,  -552,
    -552,   190,   146,  -552,  -552,   -33,   401,  2178,  -552,  -552,
    -552,  -552,  -552,  -552,  -552,   164,  -552,   185,    59,   201,
    -552,   350,  -552,   -33,    37,   230,   461,    56,    86,  -552,
     240,   166,  -552,  -552,   577,   -33,   -33,   127,  -552,  -552,
     258,  -552,  -552,  -552,  -552,  -552,  -552,  -552,  -552,   274,
    -552,  -552,  -552,  -552,   262,  -552,  -552,   282,    99,  -552,
     511,   577,  -552,  -552,   302,   -33,   316,   324,  -552,   577,
    -552,  2784,   -33,  -552,   628,   320,  -552,   -33,   330,   110,
     331,  -552,   954,   332,  -552,  3042,   -33,  -552,  -552,   333,
     115,   -33,    65,  -552,   328,   302,   717,   -33,   340,   342,
    -552,  -552,  -552,  -552,  -552,  -552,  -552,  -552,  -552,  -552,
    -552,  -552,  -552,   281,   211,  -552,  -552,  2853,  2067,  3042,
    3042,  3042,  3042,  -552,  -552,  -552,  -552,  -552,  -552,   341,
     204,  3168,  -552,   343,  -552,  -552,  -552,  -552,  -552,  -552,
    -552,  -552,  -552,  -552,  1029,  -552,   299,   297,   209,    13,
     294,   329,   334,   336,   396,   184,   353,  -552,  -552,  -552,
    -552,   197,   349,  -552,  -552,   346,  -552,  -552,   356,  -552,
     114,  1004,  -552,  1158,   577,   338,  1437,   362,   363,    16,
     366,  1563,   370,  1626,  -552,   371,   372,   381,   382,   383,
     389,   392,   393,  3042,  3042,   376,  -552,  -552,   -13,  -552,
     125,   189,  1029,  -552,  -552,  -552,  -552,  -552,  -552,  1082,
    -552,  -552,  -552,   377,   -33,   380,  -552,   403,  -552,  -552,
    -552,  -552,  -552,  -552,  -552,  -552,  -552,  -552,  -552,  -552,
    -552,  -552,  -552,  -552,   267,   349,   404,  -552,  -552,  -552,
    -552,  -552,   373,   402,  3042,  -552,  -552,  -552,  -552,   328,
     577,   564,   409,   398,   422,   422,   -33,  3042,   427,   428,
     429,   191,  -552,  -552,   -19,  -552,  -552,  -552,  -552,   -33,
    2130,  3042,  -552,   -33,  -552,  -552,  -552,  -552,  -552,  -552,
    -552,  -552,  -552,  -552,  -552,  -552,  3042,  3042,  3042,  3042,
    3042,  3042,  3042,  -552,  3042,  3042,  3042,  3042,  3042,  3042,
    3042,  3042,  3042,  3042,  3042,  3042,  3042,  3042,  2199,   -33,
    -552,  -552,  -552,   430,  -552,   431,   -33,  -552,   504,  1500,
     577,   433,  3042,   437,  3042,  -552,   440,  3042,  -552,   441,
       8,  3105,  3042,  -552,  -552,  -552,  -552,  -552,  1352,  -552,
    -552,  -552,   458,   468,  -552,  -552,  -552,  -552,  -552,  -552,
    2268,  2337,  -552,  -552,   466,   469,   470,  2406,  2469,  -552,
    -552,  -552,   465,   474,  3042,  3042,  -552,   472,  2532,  -552,
    -552,  3042,  -552,   -10,   224,  -552,  2916,  -552,  -552,   471,
    -552,  -552,  -552,  -552,  -552,  -552,   299,   299,   297,   297,
     209,   209,   209,   209,    13,    13,   294,   329,   334,   336,
    -552,   396,   477,  -552,   270,  -552,  -552,  -552,   481,   483,
    1689,  -552,  -552,   464,   487,   -33,  -552,   473,  -552,  -552,
     494,  -552,   496,  -552,  -552,  -552,   568,  -552,  -552,  -552,
    -552,   498,   503,  -552,  -552,  2784,   -33,  -552,   275,  -552,
     280,  -552,  -552,  -552,   501,   293,   510,  -552,  3042,  -552,
    -552,  3042,  -552,  -552,  -552,  -552,  -552,  -552,  2916,  -552,
    -552,  -552,  -552,  3042,  -552,  3042,  1815,  -552,   499,  1752,
    2595,   581,  -552,  1437,   512,  -552,  -552,  -552,  1437,  1437,
    -552,  -552,  -552,  -552,  -552,  -552,  2658,  -552,  -552,  -552,
     501,   290,  -552,  -552,  -552,  -552,   517,  1437,   519,   487,
    1878,  1941,   502,  -552,  3042,   598,    12,  -552,  -552,  -552,
    3042,  -552,    71,   119,  -552,   129,  -552,  -552,  -552,   422,
    -552,   506,  -552,  1437,  1437,   523,  1437,   528,  2004,   530,
    1437,   533,  3042,  -552,    14,  -552,  1172,  -552,   541,  2979,
     -28,  -552,  2721,  -552,  -552,  -552,  -552,  -552,  1437,  -552,
    1437,  1437,   547,  1437,  -552,  -552,   535,  -552,  -552,   304,
    1262,  -552,  -552,  -552,  -552,  -552,  -552,   542,  -552,  -552,
    -552,  -552,  -552,  -552,  1437,  -552,  -552,  -552
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     390,     0,     0,     0,   302,   303,   304,   305,     0,     0,
       2,   288,   270,   280,   282,   283,   269,   286,   290,     0,
     300,   289,   271,     3,   274,     0,     0,   274,     0,    19,
      21,    22,     0,     1,   281,   268,   287,     0,     0,   301,
       0,     0,   272,     0,   370,     0,     0,   285,     0,     0,
       0,   292,     0,     0,   275,   276,     0,     0,   273,     0,
       0,    32,    34,    33,    37,    38,    30,   374,   274,    25,
      20,     0,    23,    26,    28,    31,    27,     0,    29,     0,
     378,   379,   380,   390,   381,   390,     0,   376,    24,   372,
     291,   274,     0,   306,   307,     0,     0,     0,   309,   311,
     312,   313,   314,   315,   316,   294,   295,   371,     0,   293,
     278,     0,   277,     0,   339,     0,     0,   274,     0,   324,
       0,     0,   382,    35,     0,     0,     0,   390,   341,   340,
       0,   330,   187,   366,   365,   355,   375,   377,   284,     0,
     308,   310,   298,   373,   296,   297,   279,     0,     0,   319,
       0,     0,   352,   353,   357,     0,     0,   342,   345,     0,
     344,     0,     0,   322,     0,     0,   383,     0,     0,     0,
       0,   356,   390,     0,   299,     0,     0,   317,   335,     0,
       0,     0,     0,   358,   347,   359,     0,     0,     0,     0,
      13,    14,    15,     9,    10,    66,    65,    67,    68,    69,
      64,    16,    77,     0,     0,    11,    12,     0,     0,     0,
       0,     0,     0,    50,     4,     5,     6,     7,     8,    80,
      47,    49,    51,     0,    52,    53,    54,    55,   111,    56,
      48,    57,    58,   115,   124,   114,   128,   131,   134,   139,
     143,   145,   147,   149,   151,   153,   155,   171,   170,   328,
     169,    81,     0,   327,   329,   326,   325,   331,     0,   384,
       0,     0,   323,     0,     0,     0,   390,     0,     0,     0,
       0,     0,     0,     0,   390,     0,     0,    32,    34,    33,
      37,    38,    30,     0,     0,     0,   390,   191,   274,   196,
      52,    56,     0,   208,   209,   207,   189,   176,   177,   390,
     178,   174,   175,     0,     0,     0,   179,     0,   180,   210,
     211,   181,   224,   225,   226,   227,   182,   245,   246,   247,
     248,   249,   183,   184,    81,    22,   390,   172,   321,   320,
     337,   354,     0,     0,     0,   349,   360,   346,   343,   348,
       0,     0,     0,    23,    24,     0,     0,     0,     0,     0,
       0,    81,   385,   388,     0,   112,   113,   116,   117,     0,
       0,     0,   120,     0,   159,   160,   161,   162,   163,   164,
     165,   166,   167,    18,   158,   168,     0,     0,     0,     0,
       0,     0,     0,    17,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     333,   318,   336,     0,   332,     0,     0,   251,     0,     0,
       0,     0,     0,     0,     0,   255,     0,     0,   257,     0,
       0,     0,     0,   118,   119,   250,   185,   188,   390,   390,
     190,   193,   199,   195,   197,   194,   204,   369,   368,   367,
       0,     0,   351,   350,     0,     0,     0,     0,     0,   106,
     107,    78,     0,    75,     0,     0,    59,     0,     0,   386,
      60,     0,    70,   274,     0,    40,     0,    42,    45,     0,
      62,   157,   125,   126,   127,   124,   129,   130,   132,   133,
     137,   138,   135,   136,   140,   142,   144,   146,   148,   150,
     154,   152,     0,    72,     0,    63,   338,   334,   203,     0,
       0,   238,   242,     0,   239,     0,   254,     0,   252,   173,
       0,   256,     0,   258,   390,   390,   259,   262,   260,   267,
     266,     0,     0,   192,   186,     0,     0,   363,     0,   361,
       0,   110,   109,   108,    82,     0,     0,    79,     0,   123,
     122,     0,   387,   389,    61,    46,    39,    44,     0,    71,
      43,    74,   141,     0,    73,     0,     0,   240,     0,     0,
       0,     0,   253,   390,     0,   264,   263,   261,   390,   390,
     201,   200,   202,   198,   364,   362,     0,    84,    86,    87,
      83,   102,    76,   121,    41,   156,     0,   390,     0,   241,
       0,     0,     0,   243,     0,   212,     0,   214,   265,   228,
       0,    88,   274,     0,    91,     0,    98,   100,    85,   103,
     104,     0,   230,   390,   390,     0,   390,     0,     0,     0,
     390,     0,     0,   215,     0,   217,   390,   220,     0,     0,
       0,    89,     0,    96,   105,   229,   233,   232,   390,   231,
     390,   390,     0,   390,   213,   223,     0,   216,   218,     0,
     219,   221,   101,    95,    93,    94,    90,     0,    92,    97,
      99,   236,   235,   234,   390,   244,   222,   237
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -552,  -552,    -1,  -552,  -552,  -552,  -552,  -552,  -552,  -552,
    -552,  -552,  -552,    21,   738,   -90,   432,  -552,  -552,  -552,
    -552,   592,  -552,  -282,    93,  -552,   176,  -552,  -552,  -552,
    -552,  -552,  -552,   -34,  -552,  -350,  -552,  -552,  -552,   172,
    -540,  -552,  -552,    17,  -552,  -552,  -552,    23,  -552,  -552,
    -552,   435,   105,  -552,  -552,  -552,    19,    11,    -9,    18,
     252,  -552,   259,   257,   260,   256,  -552,   264,  -552,   239,
    -552,   497,  -551,  -404,  -402,  -294,   -26,   -67,  -552,   228,
      27,  -552,  -552,  -552,  -273,   250,  -552,   136,  -552,  -552,
    -552,  -379,  -552,  -552,  -552,  -552,  -552,    39,  -552,    38,
    -552,  -552,  -552,  -552,  -552,   107,  -446,   268,  -552,  -552,
    -552,  -552,  -552,  -552,  -552,  -552,  -552,  -552,   153,  -552,
    -552,  -552,  -552,    44,  -552,   630,   117,  -552,  -552,   123,
      -2,   103,  -552,    34,     9,   622,    -7,  -552,   579,     3,
    -154,   513,     5,   552,   518,  -202,    20,  -552,   -15,  -552,
    -135,  -552,   493,   352,  -552,   507,    22,   -45,   514,   570,
    -552,  -552,    42,   646,  -552,   614,   -89,  -200,  -335,  -552,
       4
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,    91,   213,   214,   215,   216,   217,   218,   384,
     375,    28,    69,    70,   289,    72,    73,    74,    75,    76,
      77,    78,   545,   464,   465,   466,   467,   219,   220,   221,
     222,   544,   223,   224,   225,   452,   226,   227,   228,   229,
     577,   578,   603,   604,   654,   579,   605,   606,   230,   231,
     232,   233,   234,   293,   294,   235,   236,   237,   238,   239,
     240,   552,   241,   242,   243,   244,   245,   246,   247,   248,
     376,   468,   250,   328,   557,   296,   297,   298,   130,   426,
     299,   300,   301,   302,   303,   304,   433,   434,   571,   305,
     306,   307,   308,   309,   310,   597,   624,   625,   626,   627,
     311,   312,   313,   314,   503,   558,   588,   589,   315,   316,
     317,   318,   319,   320,   321,   322,   516,   517,   518,   323,
     521,    10,    11,   251,    42,    12,    13,    14,    15,    16,
      17,   252,    18,    19,    20,    50,    51,    97,    98,    80,
     148,   149,    81,   118,   119,   253,    82,    83,   115,   131,
     156,   157,   158,   335,   159,   160,    84,    85,   183,   135,
     103,   439,    21,    44,    86,    87,    88,   122,   254,   354,
     132
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      24,    26,    27,   345,    22,   430,   353,    32,   507,   449,
     450,   469,   510,   260,    36,   179,   129,   514,   134,   621,
     522,   621,     1,   411,    29,   607,     2,    23,    39,   258,
     502,     3,    23,    36,   127,    45,    52,    53,    45,    54,
     608,    45,    68,   105,    90,    25,   109,    30,    68,   385,
     386,   127,    99,    33,   100,    36,   120,   656,   458,    24,
     134,   180,   181,   116,    43,   428,   459,    92,   547,   101,
     117,   102,     4,     5,     6,     7,    23,    79,    68,   515,
       8,   607,   622,    96,   622,    68,   412,    30,    39,   653,
      30,   104,    55,    30,   139,    68,    68,   623,   536,   647,
      99,   144,   100,    30,   114,    39,    31,   387,   388,    36,
     168,   170,   147,   343,   344,   114,   494,   101,    40,   102,
      79,    45,    45,    30,    24,   117,   403,   332,   405,    34,
      30,    96,    47,  -326,   523,    35,   501,   333,   290,   104,
      30,    30,   161,    49,   615,   617,    31,    40,   520,    31,
      41,   457,    31,   586,   184,  -326,    46,   629,   528,   530,
      30,   255,    31,   162,    57,   535,   147,    58,    30,   114,
     114,   288,   642,    34,    37,   147,   176,   502,    89,   111,
     331,   593,    31,   106,     1,   163,   339,   162,     2,    31,
     572,   176,   -36,     3,    30,    30,   630,   121,   177,    31,
      31,   128,  -205,    30,   631,  -205,   632,   420,    30,   262,
     123,   502,   502,   401,   633,   395,   324,   396,   646,    31,
       4,     5,     6,     7,  -205,    48,   133,    31,    38,     1,
      30,    49,   290,     2,     4,     5,     6,     7,     3,   502,
     408,    45,     8,   165,     1,   138,   610,    30,     2,   166,
     628,   351,   498,    31,    31,   382,   543,    64,    65,   438,
       1,   383,    31,   142,     2,   290,  -206,    31,   413,  -206,
     398,    59,    40,   121,   634,   325,   398,   292,    40,     4,
       5,     6,     7,   360,   143,     2,   361,     8,  -206,    31,
     427,    60,   346,   347,     4,     5,     6,     7,   288,   110,
     145,   548,     8,   432,   549,    30,    31,    30,    30,   150,
       4,     5,     6,     7,   355,   356,   357,   358,     8,   164,
      61,    62,    63,    64,    65,    66,    23,   -21,   389,   390,
     112,     4,     5,     6,     7,    61,    62,    63,    64,    65,
      66,    23,   172,   324,   291,   451,   398,   548,    40,   -21,
     554,    94,   548,   173,    95,   574,   430,   548,   460,   463,
     575,   174,   470,   121,    31,     1,    31,    31,   175,     2,
     548,   292,   121,   580,   208,   290,   480,   481,   482,   483,
     182,   609,   645,   340,    30,    30,   380,   381,   423,   424,
     377,   378,   379,   478,   290,   479,   185,   463,   495,   476,
     477,   186,   325,   259,   292,   147,   124,   484,   485,   261,
     263,   295,   326,   330,   334,     4,     5,     6,     7,   340,
      37,   341,   359,     8,   363,   391,   125,   288,   394,   397,
     399,   392,   161,   427,   393,   146,   400,   407,   291,   463,
     463,   409,   410,    31,    31,   414,   463,   565,   566,   417,
     421,   422,   440,   324,    30,    61,    62,    63,    64,    65,
      66,    23,   -66,   -65,   -67,   324,     4,     5,     6,     7,
     -68,   291,   324,   -69,   -64,   425,   431,   151,   152,   435,
     448,   441,   472,   473,   474,   475,   475,   475,   447,   475,
     475,   475,   475,   475,   475,   475,   475,   475,   475,   475,
     475,   475,   436,   437,   561,   295,   208,   454,   455,   456,
     496,   497,   325,    31,   292,    61,    62,    63,    64,    65,
      66,    23,   290,   153,   325,   432,   290,   151,   152,   290,
     499,   325,   506,   292,   290,   290,   508,   595,   295,   511,
     513,   154,   598,   599,   525,   526,   531,   463,   537,   532,
     533,   538,   541,   290,   551,   553,   290,   290,   176,   539,
     540,   612,   555,   559,   560,    61,    62,    63,    64,    65,
      66,    23,   562,   153,   563,   602,   564,   514,   568,   290,
     290,   291,   290,   569,   290,   576,   290,   636,   637,   445,
     639,   178,   290,   581,   644,   594,   596,   611,   590,   613,
     291,   618,   620,   638,   290,   635,   290,   290,   640,   290,
     643,   645,   661,   666,   662,   663,   290,   665,    61,    62,
      63,    64,    65,    66,    23,   288,   652,   664,   629,   657,
     290,    61,    62,    63,    64,    65,    66,    23,   667,   349,
      93,   584,   550,   486,   151,   152,   583,   658,   295,   288,
     488,   487,   491,   650,   489,   660,   362,   524,   249,   490,
     505,   292,   573,   648,   651,   292,   592,   295,   292,   567,
     324,    56,   327,   292,   292,   108,   141,   504,   169,   337,
     256,   475,    61,    62,    63,    64,    65,    66,    23,   329,
     153,   443,   292,   338,   324,   292,   292,   171,   107,   336,
     137,     0,     0,     0,   350,   249,     0,     0,   257,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   292,   292,
       0,   292,     0,   292,     0,   292,     0,     0,   291,   325,
       0,   292,   291,   151,   152,   291,     0,   475,     0,     0,
     291,   291,     0,   292,     0,   292,   292,     0,   292,     0,
       0,     0,     0,   325,     0,   292,     0,     0,     0,   291,
       0,     0,   291,   291,     0,     0,     0,     0,   416,   292,
     419,    61,    62,    63,    64,    65,    66,    23,     0,   153,
       0,    71,     0,     0,     0,   291,   291,    71,   291,     0,
     291,     0,   291,     0,     0,   295,     0,   113,   291,   295,
       0,     0,   295,     0,     0,     0,     0,   295,   295,     0,
     291,     0,   291,   291,     0,   291,     0,   126,     0,     0,
       0,     0,   291,     0,    71,     0,   295,     0,     0,   295,
     295,   442,     0,     0,   126,    71,   291,     0,     0,     0,
       0,     0,     0,     0,   453,     0,     0,     0,     0,     0,
       0,     0,   295,   295,   155,   295,     0,   295,   453,   295,
       0,     0,   167,     0,     0,   295,     0,     0,     0,     0,
       0,     0,     0,   471,     0,     0,    59,   295,     0,   295,
     295,     0,   295,     0,     0,     0,     0,     0,   155,   295,
       0,     0,     0,     0,   492,     0,    60,   187,     0,     0,
       0,     0,   155,   295,     0,     0,     0,     0,     0,   327,
       0,   509,     0,     0,   512,     0,     0,     0,   519,   509,
       0,     0,     0,     0,   155,    61,    62,    63,    64,    65,
      66,    23,     0,     0,     0,     0,     4,     5,     6,     7,
       0,   342,     0,     0,     0,   453,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   249,    67,     0,   546,   264,
     265,   188,   266,     0,   267,   268,   269,   270,     0,     0,
       0,     0,   271,     0,   272,   273,   274,   189,   275,     0,
     276,     0,   190,   191,   192,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   509,     0,   155,
       0,   155,   406,   193,   194,     0,     0,     0,   277,   278,
     279,   280,   281,   282,    23,   201,   202,   283,   284,   203,
     151,   152,   570,   285,     0,     0,   204,     0,   205,   206,
       0,     0,     0,   207,     0,   582,     0,     0,     0,   286,
       0,   209,   210,   211,   212,     0,     0,     0,     0,     0,
     585,     0,   509,   287,     0,     0,   509,     0,    61,    62,
      63,    64,    65,    66,    23,     0,   153,   364,   365,   366,
     367,   368,   369,   370,   371,     0,   372,     0,   444,   446,
       0,     0,   373,     0,   402,     0,     0,   264,   265,   188,
     266,   619,   267,   268,   269,   270,     0,   453,     0,     0,
     271,     0,   272,   273,   274,   189,   275,     0,   276,     0,
     190,   191,   192,     0,     0,   374,     0,     0,     0,   327,
       0,     0,     0,     0,     0,     0,   655,     0,     0,     0,
       0,   193,   194,     0,     0,     0,   277,   278,   279,   280,
     281,   282,    23,   201,   202,   283,   284,   203,     0,     0,
       0,   285,     0,     0,   204,     0,   205,   206,     0,     0,
       0,   207,     0,     0,     0,     0,     0,   429,     0,   209,
     210,   211,   212,     0,   151,   152,     0,   264,   265,   649,
     266,   287,   267,   268,   269,   270,     0,     0,     0,     0,
     271,     0,   272,   273,   274,   189,   275,     0,   276,     0,
     190,   191,   192,   124,     0,     0,     0,     0,     0,     0,
       0,     0,    61,    62,    63,    64,    65,    66,    23,     0,
     153,   193,   194,   125,     0,     0,   277,   278,   279,   280,
     281,   282,    23,   201,   202,   283,   284,   203,   404,     0,
       0,   285,   622,     0,   204,     0,   205,   206,     0,     0,
       0,   207,    61,    62,    63,    64,    65,    66,    23,   209,
     210,   211,   212,     4,     5,     6,     7,   264,   265,   188,
     266,   287,   267,   268,   269,   270,     0,     0,     0,     0,
     271,     0,   272,   273,   274,   189,   275,     0,   276,     0,
     190,   191,   192,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   193,   194,     0,     0,     0,   277,   278,   279,   280,
     281,   282,    23,   201,   202,   283,   284,   203,     0,     0,
       0,   285,     0,     0,   204,     0,   205,   206,     0,     0,
       0,   207,     0,     0,     0,     0,  -390,     0,     0,   209,
     210,   211,   212,     0,     0,     0,     0,   264,   265,   188,
     266,   287,   267,   268,   269,   270,     0,     0,     0,     0,
     271,     0,   272,   273,   274,   189,   275,     0,   276,     0,
     190,   191,   192,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   193,   194,     0,     0,     0,   277,   278,   279,   280,
     281,   282,    23,   201,   202,   283,   284,   203,     0,     0,
       0,   285,     0,     0,   204,     0,   205,   206,     0,     0,
       0,   207,     0,     0,     0,     0,     0,     0,     0,   209,
     210,   211,   212,   265,   188,   266,     0,   267,   268,   269,
     270,   287,     0,     0,     0,   271,     0,   272,   273,   274,
     189,   275,     0,   276,     0,   190,   191,   192,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   193,   194,     0,     0,
       0,   195,   196,   197,   198,   199,   200,    23,   201,   202,
     283,   284,   203,     0,     0,     0,   285,   188,     0,   204,
       0,   205,   206,     0,     0,     0,   207,     0,     0,     0,
       0,     0,     0,   189,   209,   210,   211,   212,   190,   191,
     192,     0,     0,     0,     0,     0,   287,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   193,
     194,     0,     0,     0,   277,   278,   279,   280,   281,   282,
      23,   201,   202,   283,   284,   203,     0,     0,     0,     0,
     188,     0,   204,     0,   205,   206,     0,     0,     0,   207,
       0,     0,     0,     0,     0,     0,   189,   209,   210,   211,
     212,   190,   191,   192,     0,     0,     0,     0,     0,   500,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   193,   194,     0,     0,     0,   195,   196,   197,
     198,   199,   200,    23,   201,   202,     0,     0,   203,     0,
       0,     0,     0,   188,     0,   204,     0,   205,   206,     0,
       0,     0,   207,     0,     0,     0,     0,     0,     0,   189,
     209,   210,   211,   212,   190,   191,   192,     0,     0,     0,
       0,     0,   415,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   193,   194,     0,     0,     0,
     195,   196,   197,   198,   199,   200,    23,   201,   202,     0,
       0,   203,     0,     0,     0,     0,   188,     0,   204,     0,
     205,   206,     0,     0,     0,   207,     0,     0,     0,     0,
       0,     0,   189,   209,   210,   211,   212,   190,   191,   192,
       0,     0,     0,     0,     0,   418,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   193,   194,
       0,     0,     0,   195,   196,   197,   198,   199,   200,    23,
     201,   202,     0,     0,   203,     0,     0,     0,     0,   188,
       0,   204,     0,   205,   206,     0,     0,     0,   207,     0,
       0,     0,     0,     0,     0,   189,   209,   210,   211,   212,
     190,   191,   192,     0,     0,     0,     0,     0,   556,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   193,   194,     0,     0,     0,   195,   196,   197,   198,
     199,   200,    23,   201,   202,     0,     0,   203,     0,     0,
       0,     0,   188,     0,   204,     0,   205,   206,     0,     0,
       0,   207,     0,     0,     0,     0,     0,     0,   189,   209,
     210,   211,   212,   190,   191,   192,     0,     0,     0,     0,
       0,   591,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   193,   194,     0,     0,     0,   195,
     196,   197,   198,   199,   200,    23,   201,   202,   283,   284,
     203,     0,     0,     0,     0,   188,     0,   204,     0,   205,
     206,     0,     0,     0,   207,   587,     0,     0,     0,     0,
       0,   189,   209,   210,   211,   212,   190,   191,   192,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   193,   194,     0,
       0,     0,   195,   196,   197,   198,   199,   200,    23,   201,
     202,   283,   284,   203,     0,     0,     0,     0,   188,     0,
     204,     0,   205,   206,     0,     0,     0,   207,   614,     0,
       0,     0,     0,     0,   189,   209,   210,   211,   212,   190,
     191,   192,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     193,   194,     0,     0,     0,   195,   196,   197,   198,   199,
     200,    23,   201,   202,   283,   284,   203,     0,     0,     0,
       0,   188,     0,   204,     0,   205,   206,     0,     0,     0,
     207,   616,     0,     0,     0,     0,     0,   189,   209,   210,
     211,   212,   190,   191,   192,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      59,     0,     0,   193,   194,     0,     0,     0,   195,   196,
     197,   198,   199,   200,    23,   201,   202,   283,   284,   203,
      60,     0,     0,     0,   188,     0,   204,     0,   205,   206,
       0,     0,     0,   207,   641,     0,     0,     0,     0,     0,
     189,   209,   210,   211,   212,   190,   191,   192,     0,    61,
      62,    63,    64,    65,    66,    23,     0,     0,     0,     0,
       4,     5,     6,     7,     0,     0,   193,   194,     0,     0,
       0,   195,   196,   197,   198,   199,   200,    23,   201,   202,
     136,     0,   203,     0,     0,     0,     0,   188,     0,   204,
       0,   205,   206,     0,     0,     0,   207,   461,     0,     0,
       0,   208,   352,   189,   209,   210,   211,   212,   190,   191,
     192,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   193,
     194,     0,     0,    59,   195,   196,   197,   198,   199,   200,
      23,   201,   202,     0,     0,   203,     0,     2,     0,     0,
       0,     0,   204,    60,   205,   206,   188,     0,     0,   207,
     462,     0,     0,     0,     0,     0,   461,   209,   210,   211,
     212,     0,   189,     0,     0,     0,     0,   190,   191,   192,
       0,     0,    61,    62,    63,    64,    65,    66,    23,     0,
       0,     0,     0,     4,     5,     6,     7,     0,   193,   194,
       0,     0,     0,   195,   196,   197,   198,   199,   200,    23,
     201,   202,     0,   140,   203,     0,    95,     0,     0,     0,
       0,   204,     0,   205,   206,   188,     0,     0,   207,   493,
       0,     0,     0,     0,     0,   461,   209,   210,   211,   212,
       0,   189,     0,     0,     0,     0,   190,   191,   192,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   193,   194,     0,
       0,     0,   195,   196,   197,   198,   199,   200,    23,   201,
     202,     0,     0,   203,     0,     0,     0,     0,     0,     0,
     204,     0,   205,   206,   188,     0,     0,   207,   527,     0,
       0,     0,     0,     0,   461,   209,   210,   211,   212,     0,
     189,     0,     0,     0,     0,   190,   191,   192,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   193,   194,     0,     0,
       0,   195,   196,   197,   198,   199,   200,    23,   201,   202,
       0,     0,   203,     0,     0,     0,     0,     0,     0,   204,
       0,   205,   206,   188,     0,     0,   207,   529,     0,     0,
       0,     0,     0,   461,   209,   210,   211,   212,     0,   189,
       0,     0,     0,     0,   190,   191,   192,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   193,   194,     0,     0,     0,
     195,   196,   197,   198,   199,   200,    23,   201,   202,     0,
       0,   203,     0,     0,     0,     0,   188,     0,   204,     0,
     205,   206,     0,     0,     0,   207,   534,     0,     0,     0,
       0,     0,   189,   209,   210,   211,   212,   190,   191,   192,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   193,   194,
       0,     0,     0,   195,   196,   197,   198,   199,   200,    23,
     201,   202,     0,     0,   203,     0,     0,     0,     0,   188,
       0,   204,     0,   205,   206,     0,   165,     0,   207,     0,
       0,     0,   166,     0,     0,   189,   209,   210,   211,   212,
     190,   191,   192,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   193,   194,     0,     0,     0,   195,   196,   197,   198,
     199,   200,    23,   201,   202,     0,     0,   203,     0,     0,
       0,     0,   188,     0,   204,     0,   205,   206,     0,     0,
       0,   207,     0,     0,     0,     0,   208,   542,   189,   209,
     210,   211,   212,   190,   191,   192,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   193,   194,     0,     0,     0,   195,
     196,   197,   198,   199,   200,    23,   201,   202,   283,   284,
     203,     0,     0,     0,     0,   188,     0,   204,     0,   205,
     206,     0,     0,     0,   207,     0,     0,     0,     0,     0,
       0,   189,   209,   210,   211,   212,   190,   191,   192,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   193,   194,     0,
       0,     0,   195,   196,   197,   198,   199,   200,    23,   201,
     202,     0,     0,   203,     0,     0,     0,     0,   188,     0,
     204,     0,   205,   206,     0,     0,     0,   207,     0,     0,
       0,     0,   600,   601,   189,   209,   210,   211,   212,   190,
     191,   192,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     193,   194,     0,     0,     0,   195,   196,   197,   198,   199,
     200,    23,   201,   202,     0,     0,   203,     0,     0,     0,
       0,   188,     0,   204,     0,   205,   206,     0,     0,     0,
     207,     0,     0,     0,     0,   600,   659,   189,   209,   210,
     211,   212,   190,   191,   192,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   193,   194,     0,     0,     0,   195,   196,
     197,   198,   199,   200,    23,   201,   202,     0,     0,   203,
       0,     0,     0,     0,     0,     0,   204,     0,   205,   206,
     188,     0,     0,   207,     0,     0,     0,     0,   208,     0,
       0,   209,   210,   211,   212,     0,   189,     0,   348,     0,
       0,   190,   191,   192,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   193,   194,     0,     0,     0,   277,   278,   279,
     280,   281,   282,    23,   201,   202,     0,     0,   203,     0,
       0,     0,     0,   188,     0,   204,     0,   205,   206,     0,
       0,     0,   207,   461,     0,     0,     0,     0,     0,   189,
     209,   210,   211,   212,   190,   191,   192,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   193,   194,     0,     0,     0,
     195,   196,   197,   198,   199,   200,    23,   201,   202,     0,
       0,   203,     0,     0,     0,     0,   188,     0,   204,     0,
     205,   206,     0,     0,     0,   207,     0,     0,     0,     0,
       0,     0,   189,   209,   210,   211,   212,   190,   191,   192,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   193,   194,
       0,     0,     0,   195,   196,   197,   198,   199,   200,    23,
     201,   202,     0,     0,   203,     0,     0,     0,     0,   188,
       0,   204,     0,   205,   206,     0,     0,     0,   207,     0,
       0,     0,     0,   576,     0,   189,   209,   210,   211,   212,
     190,   191,   192,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   193,   194,     0,     0,     0,   195,   196,   197,   198,
     199,   200,    23,   201,   202,     0,     0,   203,     0,     0,
       0,     0,   188,     0,   204,     0,   205,   206,     0,     0,
       0,   207,     0,     0,     0,     0,     0,     0,   189,   209,
     210,   211,   212,   190,   191,   192,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   193,   194,     0,     0,     0,   277,
     278,   279,   280,   281,   282,    23,   201,   202,     0,     0,
     203,     0,     0,     0,     0,   188,     0,   204,     0,   205,
     206,     0,     0,     0,   207,     0,     0,     0,     0,     0,
       0,   189,   209,   210,   211,   212,   190,   191,   192,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   193,   194,     0,
       0,     0,   195,   196,   197,   198,   199,   200,    23,   201,
     202,     0,     0,   203,     0,     0,     0,     0,     0,     0,
     204,     0,   205,   206,     0,     0,     0,   207,     0,     0,
       0,     0,     0,     0,     0,   209,   210
};

static const yytype_int16 yycheck[] =
{
       1,     2,     3,   203,     0,   299,   208,     8,   412,   344,
     345,   361,   414,   167,    16,   150,    83,     9,    85,     7,
     422,     7,    15,     7,     3,   576,    19,    60,    19,   164,
     409,    24,    60,    35,    79,    51,    37,    38,    51,    40,
     580,    51,    43,    50,    45,     1,    53,     3,    49,    36,
      37,    96,    49,     0,    49,    57,    71,    85,    77,    60,
     127,   151,   151,    79,    84,    78,    85,    46,    78,    49,
      71,    49,    65,    66,    67,    68,    60,    43,    79,    71,
      73,   632,    70,    49,    70,    86,    70,    43,    79,   629,
      46,    49,    85,    49,    95,    96,    97,    85,   448,    85,
      97,   108,    97,    59,    60,    96,     3,    94,    95,   111,
     125,   126,   113,   203,   203,    71,   398,    97,    81,    97,
      86,    51,    51,    79,   125,   126,   261,    62,   263,    12,
      86,    97,    99,    77,   428,    12,   409,    72,   172,    97,
      96,    97,    86,    84,   590,   591,    43,    81,   421,    46,
      84,   351,    49,   555,   155,    99,    86,    86,   440,   441,
     116,   162,    59,    77,    41,   447,   167,    99,   124,   125,
     126,   172,   618,    56,    19,   176,    77,   556,    99,    56,
     181,   560,    79,    99,    15,    99,   187,    77,    19,    86,
     525,    77,    76,    24,   150,   151,    77,    82,    99,    96,
      97,    99,    77,   159,    85,    80,    77,   274,   164,    99,
      76,   590,   591,    99,    85,    31,   172,    33,   622,   116,
      65,    66,    67,    68,    99,    78,    99,   124,    73,    15,
     186,    84,   266,    19,    65,    66,    67,    68,    24,   618,
     266,    51,    73,    77,    15,    99,   581,   203,    19,    83,
     600,   207,   406,   150,   151,    46,   458,    57,    58,   326,
      15,    52,   159,    99,    19,   299,    77,   164,   269,    80,
      79,     5,    81,    82,   609,   172,    79,   172,    81,    65,
      66,    67,    68,    79,    99,    19,    82,    73,    99,   186,
     286,    25,    81,    82,    65,    66,    67,    68,   299,    85,
      99,    77,    73,   304,    80,   261,   203,   263,   264,    79,
      65,    66,    67,    68,   209,   210,   211,   212,    73,    79,
      54,    55,    56,    57,    58,    59,    60,    60,    34,    35,
      85,    65,    66,    67,    68,    54,    55,    56,    57,    58,
      59,    60,    84,   299,   172,   346,    79,    77,    81,    82,
      80,    85,    77,    79,    88,    80,   650,    77,   359,   360,
      80,    99,   363,    82,   261,    15,   263,   264,    86,    19,
      77,   266,    82,    80,    84,   409,   385,   386,   387,   388,
      78,   581,    78,    79,   340,   341,    89,    90,   283,   284,
      91,    92,    93,   382,   428,   384,    80,   398,   399,   380,
     381,    77,   299,    83,   299,   406,     5,   389,   390,    79,
      79,   172,    80,    80,    86,    65,    66,    67,    68,    79,
      19,    79,    81,    73,    81,    96,    25,   428,    32,    76,
      81,    97,    86,   429,    98,    85,    80,    99,   266,   440,
     441,    79,    79,   340,   341,    79,   447,   514,   515,    79,
      79,    79,    79,   409,   410,    54,    55,    56,    57,    58,
      59,    60,    81,    81,    81,   421,    65,    66,    67,    68,
      81,   299,   428,    81,    81,    99,    99,    16,    17,    99,
      82,    79,   377,   378,   379,   380,   381,   382,    79,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,    99,    99,   505,   266,    84,    80,    80,    80,
      80,    80,   409,   410,   409,    54,    55,    56,    57,    58,
      59,    60,   556,    62,   421,   526,   560,    16,    17,   563,
      26,   428,    99,   428,   568,   569,    99,   563,   299,    99,
      99,    80,   568,   569,    86,    77,    80,   548,    83,    80,
      80,    77,    80,   587,    83,    78,   590,   591,    77,   454,
     455,   587,    79,    99,    77,    54,    55,    56,    57,    58,
      59,    60,    99,    62,    80,   576,    80,     9,    80,   613,
     614,   409,   616,    80,   618,    84,   620,   613,   614,    25,
     616,    80,   626,    83,   620,    14,    84,    80,    99,    80,
     428,    99,     4,    80,   638,    99,   640,   641,    80,   643,
      80,    78,   638,    78,   640,   641,   650,   643,    54,    55,
      56,    57,    58,    59,    60,   626,    85,    80,    86,   630,
     664,    54,    55,    56,    57,    58,    59,    60,   664,   207,
      48,   548,   466,   391,    16,    17,   541,   630,   409,   650,
     393,   392,   396,   626,   394,   632,   221,   429,   161,   395,
     410,   556,   526,   624,   626,   560,   559,   428,   563,   516,
     626,    41,   175,   568,   569,    53,    97,   409,   126,   186,
     162,   576,    54,    55,    56,    57,    58,    59,    60,   176,
      62,   339,   587,   186,   650,   590,   591,   127,    52,   185,
      86,    -1,    -1,    -1,   207,   208,    -1,    -1,    80,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   613,   614,
      -1,   616,    -1,   618,    -1,   620,    -1,    -1,   556,   626,
      -1,   626,   560,    16,    17,   563,    -1,   632,    -1,    -1,
     568,   569,    -1,   638,    -1,   640,   641,    -1,   643,    -1,
      -1,    -1,    -1,   650,    -1,   650,    -1,    -1,    -1,   587,
      -1,    -1,   590,   591,    -1,    -1,    -1,    -1,   271,   664,
     273,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      -1,    43,    -1,    -1,    -1,   613,   614,    49,   616,    -1,
     618,    -1,   620,    -1,    -1,   556,    -1,    59,   626,   560,
      -1,    -1,   563,    -1,    -1,    -1,    -1,   568,   569,    -1,
     638,    -1,   640,   641,    -1,   643,    -1,    79,    -1,    -1,
      -1,    -1,   650,    -1,    86,    -1,   587,    -1,    -1,   590,
     591,   334,    -1,    -1,    96,    97,   664,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   347,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   613,   614,   116,   616,    -1,   618,   361,   620,
      -1,    -1,   124,    -1,    -1,   626,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   376,    -1,    -1,     5,   638,    -1,   640,
     641,    -1,   643,    -1,    -1,    -1,    -1,    -1,   150,   650,
      -1,    -1,    -1,    -1,   397,    -1,    25,   159,    -1,    -1,
      -1,    -1,   164,   664,    -1,    -1,    -1,    -1,    -1,   412,
      -1,   414,    -1,    -1,   417,    -1,    -1,    -1,   421,   422,
      -1,    -1,    -1,    -1,   186,    54,    55,    56,    57,    58,
      59,    60,    -1,    -1,    -1,    -1,    65,    66,    67,    68,
      -1,   203,    -1,    -1,    -1,   448,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   458,    85,    -1,   461,     5,
       6,     7,     8,    -1,    10,    11,    12,    13,    -1,    -1,
      -1,    -1,    18,    -1,    20,    21,    22,    23,    24,    -1,
      26,    -1,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   500,    -1,   261,
      -1,   263,   264,    49,    50,    -1,    -1,    -1,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      16,    17,   525,    69,    -1,    -1,    72,    -1,    74,    75,
      -1,    -1,    -1,    79,    -1,   538,    -1,    -1,    -1,    85,
      -1,    87,    88,    89,    90,    -1,    -1,    -1,    -1,    -1,
     553,    -1,   555,    99,    -1,    -1,   559,    -1,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    38,    39,    40,
      41,    42,    43,    44,    45,    -1,    47,    -1,   340,   341,
      -1,    -1,    53,    -1,    80,    -1,    -1,     5,     6,     7,
       8,   594,    10,    11,    12,    13,    -1,   600,    -1,    -1,
      18,    -1,    20,    21,    22,    23,    24,    -1,    26,    -1,
      28,    29,    30,    -1,    -1,    86,    -1,    -1,    -1,   622,
      -1,    -1,    -1,    -1,    -1,    -1,   629,    -1,    -1,    -1,
      -1,    49,    50,    -1,    -1,    -1,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    -1,    -1,
      -1,    69,    -1,    -1,    72,    -1,    74,    75,    -1,    -1,
      -1,    79,    -1,    -1,    -1,    -1,    -1,    85,    -1,    87,
      88,    89,    90,    -1,    16,    17,    -1,     5,     6,     7,
       8,    99,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      18,    -1,    20,    21,    22,    23,    24,    -1,    26,    -1,
      28,    29,    30,     5,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    49,    50,    25,    -1,    -1,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    80,    -1,
      -1,    69,    70,    -1,    72,    -1,    74,    75,    -1,    -1,
      -1,    79,    54,    55,    56,    57,    58,    59,    60,    87,
      88,    89,    90,    65,    66,    67,    68,     5,     6,     7,
       8,    99,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      18,    -1,    20,    21,    22,    23,    24,    -1,    26,    -1,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    -1,    -1,    -1,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    -1,    -1,
      -1,    69,    -1,    -1,    72,    -1,    74,    75,    -1,    -1,
      -1,    79,    -1,    -1,    -1,    -1,    84,    -1,    -1,    87,
      88,    89,    90,    -1,    -1,    -1,    -1,     5,     6,     7,
       8,    99,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      18,    -1,    20,    21,    22,    23,    24,    -1,    26,    -1,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    -1,    -1,    -1,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    -1,    -1,
      -1,    69,    -1,    -1,    72,    -1,    74,    75,    -1,    -1,
      -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      88,    89,    90,     6,     7,     8,    -1,    10,    11,    12,
      13,    99,    -1,    -1,    -1,    18,    -1,    20,    21,    22,
      23,    24,    -1,    26,    -1,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,    -1,
      -1,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    -1,    -1,    -1,    69,     7,    -1,    72,
      -1,    74,    75,    -1,    -1,    -1,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    87,    88,    89,    90,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      50,    -1,    -1,    -1,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,
       7,    -1,    72,    -1,    74,    75,    -1,    -1,    -1,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    87,    88,    89,
      90,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    99,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    50,    -1,    -1,    -1,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    -1,    -1,    65,    -1,
      -1,    -1,    -1,     7,    -1,    72,    -1,    74,    75,    -1,
      -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      87,    88,    89,    90,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,    -1,    -1,    -1,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    -1,
      -1,    65,    -1,    -1,    -1,    -1,     7,    -1,    72,    -1,
      74,    75,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    87,    88,    89,    90,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,
      -1,    -1,    -1,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    -1,    -1,    65,    -1,    -1,    -1,    -1,     7,
      -1,    72,    -1,    74,    75,    -1,    -1,    -1,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    87,    88,    89,    90,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    99,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    -1,    -1,    -1,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    -1,    -1,    65,    -1,    -1,
      -1,    -1,     7,    -1,    72,    -1,    74,    75,    -1,    -1,
      -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    23,    87,
      88,    89,    90,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    50,    -1,    -1,    -1,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    -1,    -1,    -1,    -1,     7,    -1,    72,    -1,    74,
      75,    -1,    -1,    -1,    79,    80,    -1,    -1,    -1,    -1,
      -1,    23,    87,    88,    89,    90,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,
      -1,    -1,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    -1,    -1,    -1,    -1,     7,    -1,
      72,    -1,    74,    75,    -1,    -1,    -1,    79,    80,    -1,
      -1,    -1,    -1,    -1,    23,    87,    88,    89,    90,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    50,    -1,    -1,    -1,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    -1,    -1,    -1,
      -1,     7,    -1,    72,    -1,    74,    75,    -1,    -1,    -1,
      79,    80,    -1,    -1,    -1,    -1,    -1,    23,    87,    88,
      89,    90,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       5,    -1,    -1,    49,    50,    -1,    -1,    -1,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      25,    -1,    -1,    -1,     7,    -1,    72,    -1,    74,    75,
      -1,    -1,    -1,    79,    80,    -1,    -1,    -1,    -1,    -1,
      23,    87,    88,    89,    90,    28,    29,    30,    -1,    54,
      55,    56,    57,    58,    59,    60,    -1,    -1,    -1,    -1,
      65,    66,    67,    68,    -1,    -1,    49,    50,    -1,    -1,
      -1,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      85,    -1,    65,    -1,    -1,    -1,    -1,     7,    -1,    72,
      -1,    74,    75,    -1,    -1,    -1,    79,    17,    -1,    -1,
      -1,    84,    85,    23,    87,    88,    89,    90,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      50,    -1,    -1,     5,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    -1,    -1,    65,    -1,    19,    -1,    -1,
      -1,    -1,    72,    25,    74,    75,     7,    -1,    -1,    79,
      80,    -1,    -1,    -1,    -1,    -1,    17,    87,    88,    89,
      90,    -1,    23,    -1,    -1,    -1,    -1,    28,    29,    30,
      -1,    -1,    54,    55,    56,    57,    58,    59,    60,    -1,
      -1,    -1,    -1,    65,    66,    67,    68,    -1,    49,    50,
      -1,    -1,    -1,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    -1,    85,    65,    -1,    88,    -1,    -1,    -1,
      -1,    72,    -1,    74,    75,     7,    -1,    -1,    79,    80,
      -1,    -1,    -1,    -1,    -1,    17,    87,    88,    89,    90,
      -1,    23,    -1,    -1,    -1,    -1,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,
      -1,    -1,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    74,    75,     7,    -1,    -1,    79,    80,    -1,
      -1,    -1,    -1,    -1,    17,    87,    88,    89,    90,    -1,
      23,    -1,    -1,    -1,    -1,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,    -1,
      -1,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    74,    75,     7,    -1,    -1,    79,    80,    -1,    -1,
      -1,    -1,    -1,    17,    87,    88,    89,    90,    -1,    23,
      -1,    -1,    -1,    -1,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,    -1,    -1,    -1,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    -1,
      -1,    65,    -1,    -1,    -1,    -1,     7,    -1,    72,    -1,
      74,    75,    -1,    -1,    -1,    79,    80,    -1,    -1,    -1,
      -1,    -1,    23,    87,    88,    89,    90,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,
      -1,    -1,    -1,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    -1,    -1,    65,    -1,    -1,    -1,    -1,     7,
      -1,    72,    -1,    74,    75,    -1,    77,    -1,    79,    -1,
      -1,    -1,    83,    -1,    -1,    23,    87,    88,    89,    90,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    -1,    -1,    -1,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    -1,    -1,    65,    -1,    -1,
      -1,    -1,     7,    -1,    72,    -1,    74,    75,    -1,    -1,
      -1,    79,    -1,    -1,    -1,    -1,    84,    85,    23,    87,
      88,    89,    90,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    50,    -1,    -1,    -1,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    -1,    -1,    -1,    -1,     7,    -1,    72,    -1,    74,
      75,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    87,    88,    89,    90,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,
      -1,    -1,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    -1,    -1,    65,    -1,    -1,    -1,    -1,     7,    -1,
      72,    -1,    74,    75,    -1,    -1,    -1,    79,    -1,    -1,
      -1,    -1,    84,    85,    23,    87,    88,    89,    90,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    50,    -1,    -1,    -1,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    -1,    -1,    65,    -1,    -1,    -1,
      -1,     7,    -1,    72,    -1,    74,    75,    -1,    -1,    -1,
      79,    -1,    -1,    -1,    -1,    84,    85,    23,    87,    88,
      89,    90,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    -1,    -1,    -1,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    -1,    -1,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,    75,
       7,    -1,    -1,    79,    -1,    -1,    -1,    -1,    84,    -1,
      -1,    87,    88,    89,    90,    -1,    23,    -1,    25,    -1,
      -1,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    50,    -1,    -1,    -1,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    -1,    -1,    65,    -1,
      -1,    -1,    -1,     7,    -1,    72,    -1,    74,    75,    -1,
      -1,    -1,    79,    17,    -1,    -1,    -1,    -1,    -1,    23,
      87,    88,    89,    90,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,    -1,    -1,    -1,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    -1,
      -1,    65,    -1,    -1,    -1,    -1,     7,    -1,    72,    -1,
      74,    75,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    87,    88,    89,    90,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,
      -1,    -1,    -1,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    -1,    -1,    65,    -1,    -1,    -1,    -1,     7,
      -1,    72,    -1,    74,    75,    -1,    -1,    -1,    79,    -1,
      -1,    -1,    -1,    84,    -1,    23,    87,    88,    89,    90,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    -1,    -1,    -1,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    -1,    -1,    65,    -1,    -1,
      -1,    -1,     7,    -1,    72,    -1,    74,    75,    -1,    -1,
      -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    23,    87,
      88,    89,    90,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    50,    -1,    -1,    -1,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    -1,    -1,
      65,    -1,    -1,    -1,    -1,     7,    -1,    72,    -1,    74,
      75,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    87,    88,    89,    90,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,
      -1,    -1,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    74,    75,    -1,    -1,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    88
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    15,    19,    24,    65,    66,    67,    68,    73,   101,
     221,   222,   225,   226,   227,   228,   229,   230,   232,   233,
     234,   262,   270,    60,   102,   223,   102,   102,   111,   113,
     223,   231,   102,     0,   226,   229,   230,    19,    73,   234,
      81,    84,   224,    84,   263,    51,    86,    99,    78,    84,
     235,   236,   102,   102,   102,    85,   225,   229,    99,     5,
      25,    54,    55,    56,    57,    58,    59,    85,   102,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   233,
     239,   242,   246,   247,   256,   257,   264,   265,   266,    99,
     102,   102,   113,   121,    85,    88,   233,   237,   238,   239,
     242,   246,   256,   260,   262,   236,    99,   263,   235,   236,
      85,   229,    85,   114,   223,   248,    79,   102,   243,   244,
     248,    82,   267,    76,     5,    25,   114,   257,    99,   177,
     178,   249,   270,    99,   177,   259,    85,   265,    99,   102,
      85,   238,    99,    99,   236,    99,    85,   102,   240,   241,
      79,    16,    17,    62,    80,   114,   250,   251,   252,   254,
     255,    86,    77,    99,    79,    77,    83,   114,   248,   243,
     248,   259,    84,    79,    99,    86,    77,    99,    80,   250,
     115,   266,    78,   258,   102,    80,    77,   114,     7,    23,
      28,    29,    30,    49,    50,    54,    55,    56,    57,    58,
      59,    61,    62,    65,    72,    74,    75,    79,    84,    87,
      88,    89,    90,   103,   104,   105,   106,   107,   108,   127,
     128,   129,   130,   132,   133,   134,   136,   137,   138,   139,
     148,   149,   150,   151,   152,   155,   156,   157,   158,   159,
     160,   162,   163,   164,   165,   166,   167,   168,   169,   171,
     172,   223,   231,   245,   268,   102,   244,    80,   250,    83,
     240,    79,    99,    79,     5,     6,     8,    10,    11,    12,
      13,    18,    20,    21,    22,    24,    26,    54,    55,    56,
      57,    58,    59,    63,    64,    69,    85,    99,   102,   114,
     133,   139,   152,   153,   154,   169,   175,   176,   177,   180,
     181,   182,   183,   184,   185,   189,   190,   191,   192,   193,
     194,   200,   201,   202,   203,   208,   209,   210,   211,   212,
     213,   214,   215,   219,   223,   231,    80,   171,   173,   241,
      80,   102,    62,    72,    86,   253,   258,   252,   255,   102,
      79,    79,   114,   115,   266,   267,    81,    82,    25,   116,
     171,   223,    85,   245,   269,   152,   152,   152,   152,    81,
      79,    82,   151,    81,    38,    39,    40,    41,    42,    43,
      44,    45,    47,    53,    86,   110,   170,    91,    92,    93,
      89,    90,    46,    52,   109,    36,    37,    94,    95,    34,
      35,    96,    97,    98,    32,    31,    33,    76,    79,    81,
      80,    99,    80,   250,    80,   250,   114,    99,   176,    79,
      79,     7,    70,   102,    79,    99,   171,    79,    99,   171,
     177,    79,    79,   152,   152,    99,   179,   270,    78,    85,
     175,    99,   102,   186,   187,    99,    99,    99,   177,   261,
      79,    79,   171,   253,   114,    25,   114,    79,    82,   268,
     268,   102,   135,   171,    80,    80,    80,   267,    77,    85,
     102,    17,    80,   102,   123,   124,   125,   126,   171,   135,
     102,   171,   152,   152,   152,   152,   156,   156,   157,   157,
     158,   158,   158,   158,   159,   159,   160,   162,   163,   164,
     167,   165,   171,    80,   123,   102,    80,    80,   240,    26,
      99,   184,   191,   204,   207,   185,    99,   173,    99,   171,
     174,    99,   171,    99,     9,    71,   216,   217,   218,   171,
     184,   220,   174,   175,   179,    86,    77,    80,   123,    80,
     123,    80,    80,    80,    80,   123,   135,    83,    77,   152,
     152,    80,    85,   245,   131,   122,   171,    78,    77,    80,
     126,    83,   161,    78,    80,    79,    99,   174,   205,    99,
      77,   102,    99,    80,    80,   177,   177,   218,    80,    80,
     171,   188,   268,   187,    80,    80,    84,   140,   141,   145,
      80,    83,   171,   152,   124,   171,   174,    80,   206,   207,
      99,    99,   205,   191,    14,   176,    84,   195,   176,   176,
      84,    85,   102,   142,   143,   146,   147,   172,   140,   267,
     268,    80,   176,    80,    80,   206,    80,   206,    99,   171,
       4,     7,    70,    85,   196,   197,   198,   199,   135,    86,
      77,    85,    77,    85,   268,    99,   176,   176,    80,   176,
      80,    80,   206,    80,   176,    78,   173,    85,   197,     7,
     180,   199,    85,   140,   144,   171,    85,   102,   143,    85,
     147,   176,   176,   176,    80,   176,    78,   176
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
     138,   138,   139,   139,   139,   139,   140,   140,   141,   141,
     141,   142,   142,   143,   144,   144,   145,   145,   146,   146,
     147,   147,   148,   148,   148,   148,   148,   148,   149,   149,
     150,   151,   151,   151,   151,   152,   152,   152,   153,   154,
     155,   155,   155,   155,   156,   156,   156,   156,   157,   157,
     157,   158,   158,   158,   159,   159,   159,   159,   159,   160,
     161,   160,   160,   162,   162,   163,   163,   164,   164,   165,
     165,   166,   166,   167,   167,   168,   168,   169,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   171,
     171,   172,   173,   174,   175,   175,   175,   176,   176,   176,
     176,   176,   176,   176,   176,   177,   177,   178,   179,   180,
     180,   181,   182,   183,   183,   184,   185,   186,   186,   187,
     187,   188,   188,   189,   190,   191,   191,   191,   191,   191,
     192,   192,   193,   193,   194,   195,   195,   196,   196,   197,
     198,   198,   199,   199,   200,   200,   200,   200,   201,   202,
     203,   203,   203,   203,   203,   203,   203,   203,   204,   204,
     205,   206,   207,   207,   208,   209,   209,   209,   209,   209,
     210,   211,   212,   212,   212,   213,   213,   214,   214,   215,
     215,   215,   216,   217,   218,   219,   220,   220,   221,   221,
     221,   221,   222,   222,   223,   223,   224,   224,   224,   224,
     225,   225,   226,   226,   227,   228,   229,   229,   230,   230,
     230,   231,   232,   232,   232,   232,   232,   232,   232,   232,
     233,   233,   234,   234,   234,   234,   235,   236,   236,   237,
     237,   238,   238,   238,   238,   238,   238,   239,   239,   240,
     240,   241,   242,   242,   243,   243,   244,   244,   245,   245,
     246,   247,   247,   247,   247,   247,   247,   247,   247,   248,
     249,   249,   250,   250,   250,   251,   251,   252,   252,   252,
     252,   253,   254,   254,   255,   256,   256,   257,   257,   257,
     257,   258,   258,   258,   258,   259,   259,   260,   261,   261,
     262,   262,   262,   262,   263,   263,   264,   264,   265,   265,
     265,   265,   266,   267,   267,   268,   268,   268,   269,   269,
     270
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
       1,     2,     3,     2,     1,     1,     1,     1,     5,     7,
       6,     7,     7,     7,     8,     8,     8,     9,     1,     1,
       1,     1,     1,     3,     8,     1,     1,     1,     1,     1,
       2,     2,     3,     4,     3,     2,     3,     2,     3,     3,
       3,     4,     1,     2,     2,     5,     1,     1,     2,     1,
       1,     1,     3,     4,     1,     3,     2,     3,     3,     4,
       1,     2,     1,     1,     5,     3,     1,     2,     1,     1,
       1,     3,     3,     4,     4,     4,     5,     5,     5,     6,
       1,     2,     1,     1,     1,     1,     2,     2,     3,     1,
       2,     1,     1,     1,     1,     1,     1,     4,     5,     1,
       3,     3,     3,     4,     1,     3,     1,     3,     1,     1,
       2,     4,     5,     5,     6,     4,     5,     5,     6,     1,
       1,     1,     1,     3,     1,     1,     3,     2,     3,     3,
       4,     2,     1,     1,     3,     2,     3,     3,     4,     4,
       5,     4,     5,     4,     5,     1,     1,     5,     1,     1,
       3,     4,     4,     5,     2,     3,     1,     2,     1,     1,
       1,     1,     2,     2,     3,     2,     3,     4,     1,     3,
       0
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
#line 76 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); printTAC((yyval.node));}
#line 2457 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 81 "src/parser.ypp" /* yacc.c:1646  */
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
#line 2475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 98 "src/parser.ypp" /* yacc.c:1646  */
    {  
			(yyval.node) = (yyvsp[0].node);
		}
#line 2483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 102 "src/parser.ypp" /* yacc.c:1646  */
    {  
			(yyval.node) = (yyvsp[0].node);
		}
#line 2491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 106 "src/parser.ypp" /* yacc.c:1646  */
    {  
			(yyval.node) = (yyvsp[0].node);
		}
#line 2499 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 110 "src/parser.ypp" /* yacc.c:1646  */
    {  
			(yyval.node) = (yyvsp[0].node);
		}
#line 2507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 114 "src/parser.ypp" /* yacc.c:1646  */
    {  
			(yyval.node) = (yyvsp[0].node);
		}
#line 2515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 119 "src/parser.ypp" /* yacc.c:1646  */
    {	
			string s1((yyvsp[0].sVal));
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->type = "bool";
			(yyval.node)->place = s1;
			(yyval.node)->isLit = true;	
		}
#line 2528 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 127 "src/parser.ypp" /* yacc.c:1646  */
    { 	
			string s1((yyvsp[0].sVal));
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->type = "bool";
			(yyval.node)->place = s1;
			(yyval.node)->isLit = true;
		}
#line 2541 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 137 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->type = "int";
			(yyval.node)->place = to_string((yyvsp[0].iVal));
			(yyval.node)->isLit = true;
		}
#line 2553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 144 "src/parser.ypp" /* yacc.c:1646  */
    {
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->type = "int";
			(yyval.node)->place = to_string((yyvsp[0].iVal));
			(yyval.node)->isLit = true;
		}
#line 2565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 153 "src/parser.ypp" /* yacc.c:1646  */
    {
			string s1((yyvsp[0].sVal));
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->type = "char";
			(yyval.node)->place = s1;
			(yyval.node)->isLit = true;
		}
#line 2578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 168 "src/parser.ypp" /* yacc.c:1646  */
    {
			string s1((yyvsp[0].sVal));
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->type = "string";
			(yyval.node)->place = s1;
			(yyval.node)->isLit = true;
		}
#line 2591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 176 "src/parser.ypp" /* yacc.c:1646  */
    {
			string s1((yyvsp[0].sVal));
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->type = "string";
			(yyval.node)->place = s1;
			(yyval.node)->isLit = true;
		}
#line 2604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 186 "src/parser.ypp" /* yacc.c:1646  */
    {
			string s1((yyvsp[0].sVal));
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->type = "null";
			(yyval.node)->place = s1;
			(yyval.node)->isLit = true;
		}
#line 2617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 197 "src/parser.ypp" /* yacc.c:1646  */
    {}
#line 2623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 199 "src/parser.ypp" /* yacc.c:1646  */
    {}
#line 2629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 203 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 205 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 207 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 208 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 212 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node);}
#line 2659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 213 "src/parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[0].node);
		}
#line 2667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 217 "src/parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[0].node); 
		}
#line 2675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 220 "src/parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[0].node); 
		}
#line 2683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 223 "src/parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[0].node); 
		}
#line 2691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 227 "src/parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[0].node); 
		}
#line 2699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 230 "src/parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[0].node); 
		}
#line 2707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 233 "src/parser.ypp" /* yacc.c:1646  */
    {
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->place = "bool"; 
			(yyval.node)->type = "bool";
		}
#line 2718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 240 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 242 "src/parser.ypp" /* yacc.c:1646  */
    {
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->place = "int"; 
			(yyval.node)->type = "int";
		}
#line 2735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 248 "src/parser.ypp" /* yacc.c:1646  */
    {
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->place = "long"; 
			(yyval.node)->type = "long";
		}
#line 2746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 254 "src/parser.ypp" /* yacc.c:1646  */
    {
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->place = "char"; 
			(yyval.node)->type = "char";
		}
#line 2757 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 261 "src/parser.ypp" /* yacc.c:1646  */
    {
			(yyval.node) = (yyvsp[-1].node);
			(yyval.node)->place += " ?"; 
			// Consider the type of this node
		}
#line 2767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 267 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 271 "src/parser.ypp" /* yacc.c:1646  */
    { 
			string s1((yyvsp[0].sVal));
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->place = s1;
		}
#line 2784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 277 "src/parser.ypp" /* yacc.c:1646  */
    { 
			string s1((yyvsp[0].sVal));
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->place = s1;
		}
#line 2795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 286 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 290 "src/parser.ypp" /* yacc.c:1646  */
    { }
#line 2807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 291 "src/parser.ypp" /* yacc.c:1646  */
    { }
#line 2813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 293 "src/parser.ypp" /* yacc.c:1646  */
    { }
#line 2819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 294 "src/parser.ypp" /* yacc.c:1646  */
    { }
#line 2825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 296 "src/parser.ypp" /* yacc.c:1646  */
    { }
#line 2831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 298 "src/parser.ypp" /* yacc.c:1646  */
    { }
#line 2837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 299 "src/parser.ypp" /* yacc.c:1646  */
    { }
#line 2843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 301 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 302 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 303 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 305 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 306 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 307 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 308 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 309 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 310 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 311 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 312 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 313 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 316 "src/parser.ypp" /* yacc.c:1646  */
    { 
			// string tmpVar = symTable->GenTemp($2->type, "simple", -1);
			(yyval.node) = (yyvsp[-1].node);
			// $$ -> place = tmpVar;
			// gen2OpCode($$, "=", $2);
		}
#line 2926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 323 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 2932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 324 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 2938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 325 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 2944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 326 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 2950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 330 "src/parser.ypp" /* yacc.c:1646  */
    {
			genNode* newNode = new genNode();
			
  		}
#line 2959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 334 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 2965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 335 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 2971 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 336 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 2977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 337 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 2983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 338 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 2989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 341 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 2995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 342 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 343 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 344 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 347 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 350 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 351 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 353 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->place = (yyvsp[0].sVal); 
		}
#line 3041 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 359 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 360 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3053 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 362 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3059 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 363 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 366 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 367 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3077 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 368 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3083 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 369 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3089 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 371 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3095 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 372 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3101 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 374 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3107 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 375 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3113 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 376 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3119 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 378 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3125 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 379 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3131 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 381 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3137 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 383 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 384 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3149 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 386 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3155 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 387 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3161 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 389 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3167 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 390 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3173 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 392 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3179 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 393 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3185 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 395 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3191 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 396 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3197 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 397 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3203 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 398 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3209 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 399 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3215 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 400 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3221 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 403 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3227 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 404 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3233 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 406 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3239 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 408 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3245 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 409 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3251 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 410 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3257 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 411 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3263 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 413 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3269 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 414 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3275 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 415 "src/parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[0].node);
			//string tmpVar = GenTemp($2->type, "simple", curEnv->addTable[$2->place]->width);
			//$$->place = tmpVar;
			////////////////// I guess this function will carry out the above mentioned statements ////////////////////////////
			getPreUnaryOpCode("-", (yyval.node), (yyvsp[0].node), 1234555);
		}
#line 3287 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 424 "src/parser.ypp" /* yacc.c:1646  */
    {  
			(yyval.node) = (yyvsp[0].node);
			getPreUnaryOpCode("++", (yyval.node), (yyvsp[0].node), 1234555);
		}
#line 3296 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 430 "src/parser.ypp" /* yacc.c:1646  */
    {  
			(yyval.node) = (yyvsp[0].node);
			getPreUnaryOpCode("--", (yyval.node), (yyvsp[0].node), 1234555);
		}
#line 3305 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 435 "src/parser.ypp" /* yacc.c:1646  */
    { }
#line 3311 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 436 "src/parser.ypp" /* yacc.c:1646  */
    { }
#line 3317 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 437 "src/parser.ypp" /* yacc.c:1646  */
    { }
#line 3323 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 438 "src/parser.ypp" /* yacc.c:1646  */
    { }
#line 3329 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 441 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3335 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 443 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			gen2OpCode((yyval.node), "*", (yyvsp[-2].node), (yyvsp[0].node), 1234555);
			//$$->code.pb($$->code.end(), $3->code.begin(), $3->code.end());
		}
#line 3347 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 451 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), "/", (yyvsp[-2].node), (yyvsp[0].node), 1234555);
		}
#line 3359 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 459 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), "%", (yyvsp[-2].node), (yyvsp[0].node), 1234555);
		}
#line 3371 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 468 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3377 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 470 "src/parser.ypp" /* yacc.c:1646  */
    {  
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			cerr<<"fuck <-" << endl;
			gen2OpCode((yyval.node), "+", (yyvsp[-2].node), (yyvsp[0].node), 1234555);
		}
#line 3390 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 479 "src/parser.ypp" /* yacc.c:1646  */
    {  
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), "-", (yyvsp[-2].node), (yyvsp[0].node), 1234555);
		}
#line 3402 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 488 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3408 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 490 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), "<<", (yyvsp[-2].node), (yyvsp[0].node), 1234555);
		}
#line 3420 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 498 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), ">>", (yyvsp[-2].node), (yyvsp[0].node), 1234555);
		}
#line 3432 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 506 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3438 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 508 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), "<", (yyvsp[-2].node), (yyvsp[0].node), 1234555);
		}
#line 3450 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 516 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), ">", (yyvsp[-2].node), (yyvsp[0].node), 1234555);
		}
#line 3462 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 524 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), "<=", (yyvsp[-2].node), (yyvsp[0].node), 1234555);
		}
#line 3474 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 532 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), ">=", (yyvsp[-2].node), (yyvsp[0].node), 1234555);
		}
#line 3486 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 539 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3492 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 540 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3498 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 541 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-3].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[-1].node)->code.begin(), (yyvsp[-1].node)->code.end());
			gen2OpCode((yyval.node), "==", (yyvsp[-3].node), (yyvsp[-1].node), 1234555);
		}
#line 3510 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 549 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), "!=", (yyvsp[-2].node), (yyvsp[0].node), 1234555);
		}
#line 3522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 557 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3528 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 559 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), "&", (yyvsp[-2].node), (yyvsp[0].node), 1234555);
		}
#line 3540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 567 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 569 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), "^", (yyvsp[-2].node), (yyvsp[0].node), 1234555);
		}
#line 3558 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 577 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3564 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 579 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), "|", (yyvsp[-2].node), (yyvsp[0].node), 1234555);
		}
#line 3576 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 587 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node);  }
#line 3582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 589 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), "&&", (yyvsp[-2].node), (yyvsp[0].node), 1234555);
		}
#line 3594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 597 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 599 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), "||", (yyvsp[-2].node), (yyvsp[0].node), 1234555);
		}
#line 3612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 607 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 609 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->code = (yyvsp[-2].node)->code;
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			gen2OpCode((yyval.node), "??", (yyvsp[-2].node), (yyvsp[0].node), 1234555);
		}
#line 3630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 617 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 619 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			getCECode((yyval.node), (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node), 1234555);
		}
#line 3646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 625 "src/parser.ypp" /* yacc.c:1646  */
    {  
			// assignment_operator is a string
			(yyval.node) = (yyvsp[-2].node);	
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
			// TAC* tac = new TAC();
			Symbol* sym1 = ST->GetVar((yyvsp[-2].node)->place);
			Symbol* sym2 = ST->GetVar((yyvsp[0].node)->place);
			if(sym1->baseType != sym2->baseType){
				cout << "Error: Incompatible types at line num: " << endl;
				exit(1);
			}
			if(sym1->baseType == "ARRAYTYPE" || sym2->baseType == "ARRAYTYPE"){	
				cout << "Error: Incompatible types at line num: " << endl;
				exit(1);
			}
			// if((equal_compatible(sym2->type, sym1->type)) != "None"){
			// 	tac->dest = sym1;
			// 	tac->type = sym1->type;
			// 	if($3->isLit){
			// 		tac->isInt1 = true;
			// 		tac->l1 = 
			// 	}
			// }
			gen2OpCode((yyval.node), (yyvsp[-1].sVal), (yyvsp[-2].node), (yyvsp[0].node), 1234555);

		}
#line 3677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 652 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.sVal) = "="; }
#line 3683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 653 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.sVal) = "+="; }
#line 3689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 654 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.sVal) = "-="; }
#line 3695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 655 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.sVal) = "*="; }
#line 3701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 656 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.sVal) = "/="; }
#line 3707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 657 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.sVal) = "%="; }
#line 3713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 658 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.sVal) = "&="; }
#line 3719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 659 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.sVal) = "|="; }
#line 3725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 660 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.sVal) = "^="; }
#line 3731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 661 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.sVal) = "<<="; }
#line 3737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 662 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.sVal) = ">>="; }
#line 3743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 664 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); 
			
		}
#line 3751 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 667 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3757 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 669 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3763 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 671 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 673 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 677 "src/parser.ypp" /* yacc.c:1646  */
    {  (yyval.node) = (yyvsp[0].node);  }
#line 3781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 678 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 679 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 681 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 682 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 683 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3811 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 684 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 685 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 686 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 687 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 688 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 690 "src/parser.ypp" /* yacc.c:1646  */
    { 	}
#line 3847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 691 "src/parser.ypp" /* yacc.c:1646  */
    {   }
#line 3853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 693 "src/parser.ypp" /* yacc.c:1646  */
    {	}
#line 3859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 695 "src/parser.ypp" /* yacc.c:1646  */
    {	}
#line 3865 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 697 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3871 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 698 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node);}
#line 3877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 700 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3883 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 702 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3889 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 704 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 3895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 705 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 3901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 708 "src/parser.ypp" /* yacc.c:1646  */
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
#line 3917 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 720 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3923 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 722 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 724 "src/parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[-2].node);
			(yyval.node)->code.insert((yyval.node)->code.end(), (yyvsp[0].node)->code.begin(), (yyvsp[0].node)->code.end());
		}
#line 3938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 730 "src/parser.ypp" /* yacc.c:1646  */
    { 
			(yyval.node) = (yyvsp[0].node); 
			(yyval.node)->varDecs.pb(ST->GetVar((yyvsp[0].node)->place));
		}
#line 3947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 735 "src/parser.ypp" /* yacc.c:1646  */
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
#line 3976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 760 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3982 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 761 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3988 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 763 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 3994 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 765 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 4000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 767 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4006 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 768 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4012 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 769 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4018 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 770 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4024 "y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 771 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4030 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 773 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4036 "y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 774 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4042 "y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 776 "src/parser.ypp" /* yacc.c:1646  */
    { }
#line 4048 "y.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 777 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4054 "y.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 779 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4060 "y.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 781 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4066 "y.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 782 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4072 "y.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 784 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4078 "y.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 785 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4084 "y.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 787 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4090 "y.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 789 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4096 "y.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 790 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4102 "y.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 792 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4108 "y.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 793 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4114 "y.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 795 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4120 "y.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 796 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4126 "y.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 797 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4132 "y.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 798 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4138 "y.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 800 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4144 "y.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 802 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4150 "y.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 804 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4156 "y.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 805 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4162 "y.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 806 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4168 "y.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 807 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4174 "y.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 808 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4180 "y.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 809 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4186 "y.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 810 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4192 "y.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 811 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4198 "y.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 813 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4204 "y.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 814 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4210 "y.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 816 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4216 "y.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 818 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4222 "y.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 820 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4228 "y.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 821 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4234 "y.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 823 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4240 "y.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 825 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4246 "y.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 826 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4252 "y.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 827 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4258 "y.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 828 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4264 "y.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 829 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4270 "y.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 831 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4276 "y.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 833 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4282 "y.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 835 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4288 "y.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 836 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4294 "y.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 837 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4300 "y.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 839 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4306 "y.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 840 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4312 "y.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 842 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4318 "y.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 843 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4324 "y.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 845 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4330 "y.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 846 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4336 "y.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 847 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4342 "y.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 849 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4348 "y.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 851 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4354 "y.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 853 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4360 "y.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 855 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4366 "y.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 857 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4372 "y.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 858 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4378 "y.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 862 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4384 "y.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 863 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4390 "y.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 864 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4396 "y.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 865 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4402 "y.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 867 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 4408 "y.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 868 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-2].node); }
#line 4414 "y.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 870 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4420 "y.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 871 "src/parser.ypp" /* yacc.c:1646  */
    { }
#line 4426 "y.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 873 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4432 "y.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 874 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4438 "y.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 875 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 4444 "y.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 876 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4450 "y.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 878 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4456 "y.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 879 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4462 "y.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 881 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4468 "y.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 882 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4474 "y.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 884 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4480 "y.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 886 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 4486 "y.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 888 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4492 "y.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 889 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4498 "y.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 891 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4504 "y.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 892 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4510 "y.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 893 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4516 "y.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 895 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-2].node); }
#line 4522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 899 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 4528 "y.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 900 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4534 "y.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 901 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 902 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 903 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4552 "y.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 904 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4558 "y.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 905 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4564 "y.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 906 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4570 "y.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 908 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4576 "y.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 909 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 911 "src/parser.ypp" /* yacc.c:1646  */
    { 
			string s1((yyvsp[0].sVal));
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->place = s1;
		}
#line 4593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 917 "src/parser.ypp" /* yacc.c:1646  */
    { 
			string s1((yyvsp[0].sVal));
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->place = s1;
		}
#line 4604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 923 "src/parser.ypp" /* yacc.c:1646  */
    { 
			string s1((yyvsp[0].sVal));
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->place = s1;
		}
#line 4615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 929 "src/parser.ypp" /* yacc.c:1646  */
    { 
			string s1((yyvsp[0].sVal));
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
			(yyval.node)->place = s1;
		}
#line 4626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 936 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 938 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode; 
		}
#line 4641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 942 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 4647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 944 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 945 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 947 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 948 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 949 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 950 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 951 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 952 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 317:
#line 954 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 955 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 958 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 959 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 961 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 963 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 964 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 967 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 968 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 970 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 972 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 973 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 975 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 977 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 978 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 979 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 980 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-4].node); }
#line 4797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 981 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 982 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 337:
#line 983 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 338:
#line 984 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 339:
#line 987 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 340:
#line 989 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 341:
#line 990 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 4839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 992 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 343:
#line 993 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 994 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 996 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 4863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 346:
#line 997 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 347:
#line 999 "src/parser.ypp" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 4875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 348:
#line 1000 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 1001 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 350:
#line 1002 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 351:
#line 1004 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 352:
#line 1006 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 353:
#line 1007 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4911 "y.tab.c" /* yacc.c:1646  */
    break;

  case 354:
#line 1009 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4917 "y.tab.c" /* yacc.c:1646  */
    break;

  case 355:
#line 1011 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4923 "y.tab.c" /* yacc.c:1646  */
    break;

  case 356:
#line 1012 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 357:
#line 1015 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 1016 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 1017 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 1018 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 1020 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 362:
#line 1021 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 363:
#line 1022 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4971 "y.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 1023 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 365:
#line 1025 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 366:
#line 1026 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 367:
#line 1028 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 4995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 368:
#line 1030 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 369:
#line 1031 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 370:
#line 1035 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 371:
#line 1036 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 372:
#line 1037 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 373:
#line 1038 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 374:
#line 1041 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 375:
#line 1042 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5043 "y.tab.c" /* yacc.c:1646  */
    break;

  case 376:
#line 1044 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 377:
#line 1045 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 378:
#line 1047 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5061 "y.tab.c" /* yacc.c:1646  */
    break;

  case 379:
#line 1048 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5067 "y.tab.c" /* yacc.c:1646  */
    break;

  case 380:
#line 1049 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5073 "y.tab.c" /* yacc.c:1646  */
    break;

  case 381:
#line 1050 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5079 "y.tab.c" /* yacc.c:1646  */
    break;

  case 382:
#line 1054 "src/parser.ypp" /* yacc.c:1646  */
    { 
			genNode* newNode = new genNode();
			(yyval.node) = newNode;
		}
#line 5088 "y.tab.c" /* yacc.c:1646  */
    break;

  case 383:
#line 1059 "src/parser.ypp" /* yacc.c:1646  */
    {   }
#line 5094 "y.tab.c" /* yacc.c:1646  */
    break;

  case 384:
#line 1060 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5100 "y.tab.c" /* yacc.c:1646  */
    break;

  case 385:
#line 1063 "src/parser.ypp" /* yacc.c:1646  */
    { 

		}
#line 5108 "y.tab.c" /* yacc.c:1646  */
    break;

  case 386:
#line 1066 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5114 "y.tab.c" /* yacc.c:1646  */
    break;

  case 387:
#line 1067 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5120 "y.tab.c" /* yacc.c:1646  */
    break;

  case 388:
#line 1069 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5126 "y.tab.c" /* yacc.c:1646  */
    break;

  case 389:
#line 1070 "src/parser.ypp" /* yacc.c:1646  */
    {  }
#line 5132 "y.tab.c" /* yacc.c:1646  */
    break;

  case 390:
#line 1074 "src/parser.ypp" /* yacc.c:1646  */
    {}
#line 5138 "y.tab.c" /* yacc.c:1646  */
    break;


#line 5142 "y.tab.c" /* yacc.c:1646  */
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
#line 1077 "src/parser.ypp" /* yacc.c:1906  */
	

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
