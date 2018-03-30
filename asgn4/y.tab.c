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
#line 1 "src/asgn3.ypp" /* yacc.c:339  */

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
	using namespace std;
	extern void yyerror(char *c);
	extern int yylineno;

	int yylex(void);
	

#line 87 "y.tab.c" /* yacc.c:339  */

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
#line 22 "src/asgn3.ypp" /* yacc.c:355  */

	int iVal;
	char* sVal;
	char cVal;	

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
#define YYLAST   3671

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  102
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  171
/* YYNRULES -- Number of rules.  */
#define YYNRULES  401
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  677

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   332

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    89,     2,     2,     2,    95,    98,     2,
      81,    82,    93,    91,    79,    92,    83,    94,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    80,   101,
      96,    88,    97,    78,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    84,     2,    85,    99,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    86,   100,    87,    90,     2,     2,     2,
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
      75,    76,    77
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    37,    37,    41,    45,    46,    47,    48,    49,    51,
      52,    54,    55,    58,    66,    67,    70,    74,    76,    80,
      82,    84,    85,    89,    90,    92,    93,    94,    96,    97,
      98,   100,   102,   103,   104,   105,   106,   108,   110,   114,
     115,   119,   123,   124,   126,   127,   129,   131,   132,   134,
     135,   136,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   149,   151,   151,   153,   154,   156,   157,   158,   159,
     160,   161,   162,   163,   165,   166,   167,   168,   170,   172,
     173,   175,   177,   178,   180,   181,   182,   183,   185,   187,
     189,   190,   191,   192,   194,   195,   197,   198,   199,   201,
     202,   204,   206,   207,   209,   210,   212,   213,   215,   216,
     218,   219,   220,   221,   222,   223,   226,   227,   229,   231,
     232,   233,   234,   236,   237,   238,   239,   240,   242,   244,
     246,   247,   248,   249,   252,   253,   254,   255,   257,   258,
     259,   261,   262,   263,   265,   266,   267,   268,   269,   271,
     272,   273,   275,   276,   278,   279,   281,   282,   284,   285,
     287,   288,   290,   291,   293,   294,   296,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   310,   311,
     313,   315,   317,   321,   322,   323,   325,   326,   327,   328,
     329,   330,   331,   332,   334,   335,   337,   338,   340,   342,
     344,   345,   347,   349,   351,   352,   354,   355,   357,   358,
     360,   362,   364,   365,   366,   367,   368,   369,   370,   372,
     373,   375,   376,   378,   380,   381,   383,   384,   386,   388,
     389,   391,   392,   394,   395,   396,   397,   399,   401,   403,
     404,   405,   406,   407,   408,   409,   410,   412,   413,   415,
     417,   419,   420,   422,   424,   425,   426,   427,   428,   430,
     432,   434,   435,   436,   438,   439,   441,   442,   444,   445,
     446,   448,   450,   452,   454,   456,   457,   461,   462,   463,
     464,   466,   467,   469,   470,   472,   473,   474,   475,   477,
     478,   480,   481,   483,   485,   487,   488,   490,   491,   493,
     494,   496,   500,   501,   502,   503,   504,   505,   506,   507,
     509,   510,   512,   513,   514,   515,   517,   519,   520,   522,
     523,   525,   526,   527,   528,   529,   530,   532,   533,   536,
     537,   539,   541,   542,   545,   546,   548,   549,   550,   551,
     553,   555,   556,   557,   558,   559,   560,   561,   562,   565,
     567,   568,   570,   571,   572,   574,   575,   577,   578,   579,
     580,   582,   584,   585,   587,   589,   590,   593,   594,   595,
     596,   598,   599,   600,   601,   603,   604,   606,   608,   609,
     613,   614,   615,   616,   619,   620,   622,   623,   625,   626,
     627,   628,   629,   633,   635,   636,   638,   639,   640,   642,
     643,   647
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
  "THIS", "THROW", "TRUE", "TRY", "TYPEOF", "UINT", "ULONG", "USING",
  "VOID", "WHILE", "ID", "DINT_LITERAL", "HDINT_LITERAL", "SIMPLE_ESC_SEQ",
  "CHAR_LITERAL", "REG_STR_LITERAL", "VER_STR_LITERAL", "DQM", "DCLN",
  "INCR", "DECR", "RAND", "ROR", "REQ", "RNE", "LE", "GE", "APLUS",
  "AMINUS", "AMULT", "ADIV", "AMOD", "AAND", "AOR", "ACARET", "LSHIFT",
  "LSHIFTEQ", "RSHIFT", "RSHIFTEQ", "WHERE", "'?'", "','", "':'", "'('",
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
  "relational_expression", "equality_expression", "and_expression",
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
     325,   326,   327,   328,   329,   330,   331,   332,    63,    44,
      58,    40,    41,    46,    91,    93,   123,   125,    61,    33,
     126,    43,    45,    42,    47,    37,    60,    62,    38,    94,
     124,    59
};
# endif

#define YYPACT_NINF -561

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-561)))

#define YYTABLE_NINF -337

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     282,    65,    65,  -561,  -561,  -561,  -561,    65,    65,   141,
    -561,  -561,   282,  -561,  -561,  -561,   325,  -561,  -561,  -561,
     230,  -561,  -561,  -561,  -561,   261,  -561,    59,    87,    55,
     -40,  -561,    79,  -561,  -561,  -561,   325,  -561,    65,    65,
    -561,   155,   978,   157,   146,    65,   299,   201,  1197,   214,
      65,    65,  -561,   261,    87,  -561,  -561,  -561,  -561,  -561,
     519,  -561,  -561,  -561,  -561,    65,  -561,    65,   -25,  -561,
    -561,    65,   288,   280,  -561,  -561,  -561,   298,  -561,  -561,
    3623,  3438,  -561,  -561,  -561,  -561,    85,  -561,    90,  -561,
    -561,   265,  -561,  -561,  -561,   428,    42,  -561,  -561,  -561,
    -561,  -561,  -561,  -561,  3483,  -561,  -561,  -561,   329,   292,
     157,   322,   336,    65,    79,   319,   360,  1162,    78,   158,
    -561,   363,   221,  -561,  -561,   519,    65,    65,    90,  -561,
    -561,  1253,  -561,  -561,  -561,  -561,  -561,  -561,  -561,  -561,
     247,  -561,  -561,  -561,  -561,   362,  -561,  -561,   367,   163,
    -561,  3510,   389,   519,  -561,  -561,   388,    65,   390,   397,
    -561,   519,  -561,  2733,    65,  -561,  3536,   392,  -561,    65,
     401,   173,   402,  -561,   239,   395,   385,   405,   519,   396,
     410,  1633,  -561,   417,   419,    44,   420,   421,   422,   205,
    -561,   423,  1721,   426,   429,  -561,  1781,  -561,   416,   433,
     434,   435,   438,   439,  -561,  -561,  -561,  -561,  -561,  3268,
    3268,  2821,  -561,  3268,  3268,  3268,  3268,  -561,   -21,  -561,
    -561,  -561,  -561,  -561,  -561,  -561,   440,   279,  3386,  -561,
     443,    88,  -561,  -561,  -561,   275,    93,   138,   145,  -561,
    -561,  -561,  -561,   634,   156,   216,  -561,  -561,  -561,  -561,
    -561,  1364,  -561,  -561,  -561,   415,    65,   430,  -561,   431,
    -561,  -561,  -561,  -561,  -561,  -561,  -561,  -561,  -561,  -561,
    -561,  -561,  -561,  -561,  -561,  -561,    52,   445,  -561,  -561,
    3268,    65,  -561,  -561,   448,    95,   288,    65,   117,  -561,
     447,   388,   551,    65,  -561,  -561,  -561,  -561,  -561,  -561,
    -561,  -561,  2021,  -561,  -561,  -561,  -561,   634,  -561,  -561,
     304,   254,   161,    57,   386,   424,   437,   444,   462,   249,
     455,  -561,  -561,  -561,  -561,   306,   445,  -561,  -561,   449,
    -561,  -561,   457,  -561,   220,  3562,  -561,  3588,    65,  3268,
    -561,    65,  -561,   519,   493,  1841,   519,  3268,   452,   458,
    3268,   464,   465,   460,   460,  -561,   459,  3268,  -561,   463,
     209,   446,  3327,  3268,  -561,  -561,   466,   468,   483,   207,
    -561,  -561,  -561,  -561,  1544,    65,  2109,  3268,  -561,    65,
    -561,  -561,  -561,  -561,  -561,  -561,  -561,  -561,  -561,  -561,
    -561,  -561,  -561,  -561,  3268,  -561,  -561,  -561,   480,   491,
    -561,  -561,  -561,  2169,    65,  -561,  -561,  -561,  -561,  -561,
    -561,  -561,  -561,   490,   492,  3268,  -561,  -561,  -561,  -561,
     447,  -561,  -561,   -36,  3268,  3268,  3268,  3268,  3268,  3268,
    -561,  3268,  3268,  3268,  3268,  3268,  3268,  3268,  3268,  3268,
    3268,  3268,  3268,  3268,  3268,  -561,  -561,  -561,   494,  -561,
     495,  -561,   264,  -561,   504,   506,   509,  1901,  -561,  -561,
     471,   512,    65,   496,  -561,  -561,  -561,   510,  2229,  2289,
    -561,  -561,  -561,   514,  -561,   416,   416,   581,  -561,  -561,
     518,   520,  -561,  -561,   521,   524,  3268,  3268,  -561,   528,
    -561,  -561,  3268,  -561,    67,   140,  -561,  2881,  -561,  -561,
     269,  -561,  -561,  2733,    65,  -561,   286,  -561,  2349,  2409,
    -561,  -561,  2469,  -561,  -561,  -561,  -561,  -561,   304,   304,
     254,   254,   161,   161,   161,   161,    57,    57,   386,   424,
     437,   444,  -561,   462,   532,  -561,  -561,  3268,  -561,  -561,
    3268,  2940,  -561,   500,  1961,  3268,   591,  -561,  1633,   529,
     312,   274,   530,  -561,  -561,  -561,  -561,  -561,  1633,  1633,
    -561,  -561,  3268,  -561,  -561,  -561,  -561,  2881,  -561,  -561,
    -561,  -561,  -561,  -561,  -561,  -561,  -561,   327,  -561,   332,
    -561,  -561,  3268,  -561,   536,  1633,   537,   512,  3000,  3060,
     513,  -561,  3268,   613,  2557,  -561,  -561,  -561,   529,   354,
       8,  -561,  -561,  -561,  -561,  -561,  -561,  -561,  -561,   522,
    -561,  1633,  1633,   538,  1633,   540,  3120,   542,  1633,  3268,
    -561,    76,   184,  -561,   197,  -561,  -561,  -561,   460,  -561,
    3268,   545,  -561,    10,  -561,  1454,  -561,  -561,  -561,  -561,
    1633,  -561,  1633,  1633,   544,  1633,  -561,   218,  3180,    61,
    -561,  2645,  -561,  -561,   547,  -561,  -561,  -561,   335,  1544,
    -561,  -561,  -561,  -561,  1633,  -561,  -561,  -561,  -561,  -561,
    -561,   541,  -561,  -561,  -561,  -561,  -561
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     401,     0,     0,   312,   315,   314,   313,     0,     0,     0,
       2,   297,   279,   289,   291,   292,   278,   295,   298,   299,
       0,   310,   300,   280,     3,     0,   283,     0,     0,   283,
       0,    19,    21,    22,     1,   290,   277,   296,     0,     0,
     311,     0,     0,     0,   302,     0,     0,   281,     0,   380,
       0,     0,   294,     0,     0,    39,    40,   316,    30,    36,
       0,    32,    34,    33,    35,     0,   317,     0,   283,    25,
      20,     0,    23,    26,    28,    31,    27,     0,    29,   326,
       0,     0,   319,   321,   322,   323,     0,   324,     0,   325,
      24,   304,   305,   284,   285,     0,     0,   282,   384,   392,
     388,   389,   390,   391,     0,   386,   382,   301,   283,     0,
       0,   303,   381,     0,   349,     0,     0,     0,   283,     0,
     334,     0,     0,   393,    37,     0,     0,     0,     0,   318,
     320,     0,   351,   350,   340,   376,   375,   365,   308,   287,
       0,   286,   385,   387,   293,   306,   307,   383,     0,     0,
     329,     0,     0,     0,   362,   363,   367,     0,     0,   352,
     355,     0,   354,     0,     0,   332,     0,     0,   394,     0,
       0,     0,     0,   366,     0,    30,     0,    36,     0,     0,
       0,     0,    10,     0,     0,     0,     0,    32,    34,     0,
      16,    39,     0,    40,     0,    81,     0,     9,     0,     0,
      33,    35,     0,     0,    11,    12,    13,    14,    15,     0,
       0,     0,   194,     0,     0,     0,     0,   198,   283,    52,
       4,     5,     6,     7,     8,   203,    84,    49,    51,    53,
       0,    54,    55,    56,    57,   119,    86,    87,    58,    50,
      59,    60,   123,     0,   126,   127,   122,   214,   196,   185,
     186,     0,   187,   183,   184,     0,     0,     0,   188,     0,
     189,   219,   220,   190,   233,   234,   235,   236,   191,   254,
     255,   256,   257,   258,   192,   193,    85,    22,   288,   309,
       0,     0,   327,   345,     0,     0,     0,     0,     0,   368,
     357,   369,     0,     0,    66,    67,    68,    69,    70,    71,
      72,    73,     0,    54,    86,    87,    58,   134,   126,   127,
     138,   141,   144,   149,   152,   154,   156,   158,   160,   162,
     164,   180,   179,   338,   178,    85,     0,   337,   339,   336,
     335,   341,     0,   395,     0,     0,   333,     0,     0,     0,
     259,     0,   260,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    23,    24,     0,   264,     0,     0,   266,     0,
       0,     0,     0,     0,   128,   129,     0,     0,     0,    85,
     120,   121,   124,   125,     0,     0,     0,     0,   130,     0,
      88,    89,   168,   169,   170,   171,   172,   173,   174,   175,
     176,    18,   167,   177,     0,   195,   197,   200,   206,   202,
     204,   201,   211,     0,     0,   181,   331,   330,   347,   379,
     378,   377,   364,     0,     0,     0,   359,   370,   356,   353,
     358,   396,   399,     0,     0,     0,     0,     0,     0,     0,
      17,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   343,   328,   346,     0,   342,
       0,    82,     0,    79,   210,     0,     0,     0,   247,   251,
       0,   248,     0,     0,   263,   261,   182,     0,     0,     0,
     114,   115,   265,     0,   267,     0,     0,   268,   271,   269,
       0,     0,   276,   275,     0,     0,     0,     0,    61,     0,
     199,    62,     0,    74,   283,     0,    42,     0,    44,    47,
       0,    64,   166,     0,     0,    76,     0,    65,     0,     0,
     361,   360,     0,   397,   135,   136,   137,   134,   139,   140,
     142,   143,   147,   148,   145,   146,   150,   151,   153,   155,
     157,   159,   163,   161,     0,   348,   344,     0,    83,   118,
       0,     0,   249,     0,     0,     0,     0,   262,     0,    90,
       0,     0,     0,   272,   273,   270,   117,   116,     0,     0,
     133,   132,     0,    63,    48,    41,    46,     0,    75,    45,
      78,   208,   207,   209,   205,    77,   371,     0,   373,     0,
     398,   400,     0,    80,     0,     0,     0,   250,     0,     0,
       0,   252,     0,   221,     0,    92,    94,    95,    91,   110,
       0,   223,   274,   237,   131,    43,   372,   374,   165,     0,
     239,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      96,   283,     0,    99,     0,   106,   108,    93,   111,   112,
       0,     0,   224,     0,   226,     0,   229,   238,   242,   241,
       0,   240,     0,     0,     0,     0,   222,     0,     0,     0,
      97,     0,   104,   113,     0,   232,   225,   227,     0,   228,
     230,   245,   244,   243,     0,   253,   109,   103,   101,   102,
      98,     0,   100,   105,   107,   231,   246
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -561,  -561,    -1,  -561,  -561,  -561,  -561,  -561,  -561,  -561,
    -561,  -561,  -561,    32,    27,  -103,   432,  -561,  -561,  -561,
    -561,   589,  -561,  -391,    64,  -561,   135,  -561,  -561,  -561,
    -561,  -561,  -561,   101,  -561,  -368,  -561,  -561,  -561,   139,
     211,   276,  -550,  -561,  -561,   -12,  -561,  -561,  -561,   -11,
    -561,  -561,  -561,   411,    -7,   318,   427,  -561,    23,    14,
     -51,    29,   203,   206,   213,   210,   204,  -561,   212,  -561,
     535,  -561,   745,  -560,  -343,  -336,  -246,   229,   -71,    20,
    -561,  -561,  -561,  -300,   310,  -561,   160,  -561,  -561,  -561,
    -320,  -561,  -561,  -561,  -561,  -561,    28,  -561,    30,  -561,
    -561,  -561,  -561,  -561,   118,  -439,   323,  -561,  -561,  -561,
    -561,  -561,  -561,  -561,  -561,  -561,  -561,   190,  -561,  -561,
    -561,  -561,    34,  -561,   624,    11,  -561,  -561,     9,    -6,
     -16,   150,  -561,    12,    -9,   618,   -14,  -561,   592,   -15,
    -161,   391,    -2,   548,   515,  -299,    15,  -561,    13,  -561,
    -138,  -561,   382,   256,  -561,   393,    33,   597,   400,   553,
    -561,  -561,  -561,   628,  -561,   579,   -43,  -187,  -334,  -561,
    -561
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,   108,   219,   220,   221,   222,   223,   224,   431,
     393,    30,    69,    70,   225,    72,    73,    74,    75,    76,
      77,    78,   564,   495,   496,   497,   498,   226,   227,   228,
     229,   563,   230,   303,   232,   452,   233,   234,   235,   304,
     305,   306,   595,   596,   622,   623,   668,   597,   624,   625,
     239,   240,   241,   242,   307,   308,   309,   246,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   394,   499,   324,   406,   542,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   399,   400,   572,   257,   258,
     259,   260,   261,   262,   601,   633,   634,   635,   636,   263,
     264,   265,   266,   460,   543,   586,   587,   267,   268,   269,
     270,   271,   272,   273,   274,   477,   478,   479,   275,   484,
      10,    11,   325,    47,    12,    13,    14,    15,    16,    17,
      18,   326,    19,    20,    21,    43,    44,    81,    82,    83,
     149,   150,    84,   119,   120,   327,    85,    86,   115,   134,
     158,   159,   160,   416,   161,   162,    87,    88,   289,   137,
      89,   411,    22,    49,   104,   105,    90,   123,   328,   423,
      23
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      25,    26,   354,   422,   463,   396,    28,    29,   334,   500,
      37,    40,   506,   284,   467,   133,   630,   136,   630,   470,
     471,    36,   631,    35,   631,   459,    79,   485,   332,    91,
      37,    50,    99,   100,   626,    50,    27,    53,    54,   111,
      31,    68,    32,   512,    93,   458,   101,    68,   627,   107,
     286,   513,   347,     1,    80,    96,   117,   136,   348,   374,
      80,    52,   483,   102,    26,    79,   116,     2,     3,    71,
     118,    40,     4,     5,     6,    71,    32,   550,     7,    68,
      68,   103,    32,   109,   121,    32,   352,   113,    99,   100,
      37,   626,    24,    80,    32,   632,   145,   656,   667,   114,
     -21,   551,   101,    68,   140,   114,    35,   127,    71,    24,
     287,    50,   148,    24,    32,    32,    80,   577,   579,   102,
     432,   433,   413,    50,   243,    26,   118,   360,   490,   141,
     218,    71,    50,   403,    37,    45,   -21,   103,    32,   170,
     172,    34,    45,    51,   157,    46,   353,   566,   670,   613,
     615,    32,   169,   434,   435,   414,   290,  -336,    33,    32,
     114,   114,    45,   329,   648,   276,   163,  -212,   148,   573,
    -212,   131,  -215,    48,   243,  -215,   131,   644,   157,  -336,
     454,   131,   489,    55,   349,    32,   132,    32,   293,  -212,
      56,   135,    33,   157,  -215,    32,   409,   448,    33,   450,
      32,    33,   364,   365,   584,   341,   370,   371,   372,   373,
      33,    58,    32,   581,   410,    59,   351,  -216,   475,   567,
    -216,   459,   568,    32,  -213,   591,   476,  -213,    61,    62,
      33,    33,   231,    55,   429,  -217,   430,   164,  -217,  -216,
      56,    38,   281,    42,   243,   369,  -213,    92,    63,    64,
     218,   647,   164,    24,    33,   398,     3,  -217,     1,   165,
       4,     5,     6,   649,   282,   629,    39,    33,   459,   459,
     236,   650,     2,     3,   336,    33,   651,     4,     5,     6,
     148,   277,   231,     7,   652,   276,   412,   654,   403,   122,
      45,   122,   420,     1,   653,  -218,   459,   537,  -218,   281,
     167,    33,    97,    33,   442,   666,   168,     2,     3,   443,
       1,    33,     4,     5,     6,   106,    33,  -218,     7,   157,
     236,   446,   338,   339,     2,     3,    32,     8,    33,     4,
       5,     6,   380,   381,   278,     7,     1,   451,   243,    33,
     148,    41,   237,   537,     8,   427,   428,    42,   537,   538,
       2,     3,   231,   537,   570,     4,     5,     6,   -38,   599,
     376,     7,   157,   377,   157,   567,   138,   243,   575,    32,
     455,    32,   122,   218,   491,   494,   124,    32,   501,   276,
      32,   522,   523,   524,   525,    50,    94,   403,   481,    45,
     236,   567,   237,   144,   598,    32,   276,   424,   425,   426,
     151,   277,   494,   507,   553,   554,   567,   238,   276,   606,
     344,   567,   628,   396,   607,   655,   343,   514,   515,   516,
     517,   517,   517,   146,   517,   517,   517,   517,   517,   517,
     517,   517,   517,   517,   517,   517,   517,   147,   122,     1,
     302,   152,    33,   520,   166,   521,   231,   436,   437,   244,
     518,   519,    58,     2,     3,   280,    59,   238,     4,     5,
       6,   546,   237,   279,     7,   526,   527,   494,   288,    61,
      62,   285,   291,     8,    55,   231,   292,   333,   -66,   560,
     561,    56,   335,   337,   236,    33,   340,    33,   -67,    63,
      64,   343,   480,    33,    24,   277,    33,   342,   345,   244,
     346,   350,   131,   398,   -68,   -69,   -70,   494,   494,   -71,
     357,    33,   277,   236,   361,   139,   397,   -72,   -73,   362,
     363,   441,   438,   375,   277,    58,   379,   238,   404,    59,
     408,   401,   402,   444,   243,   415,   439,   163,   243,   445,
     456,   243,    61,    62,   440,   468,   302,    55,   486,   469,
     487,   243,   243,   464,    56,   604,   237,    58,   245,   465,
     472,    59,    63,    64,   474,   488,   494,    24,   503,   244,
     504,   508,   544,   509,    61,    62,   535,   536,   243,    55,
     153,   243,   243,   281,   154,   237,    56,   517,   539,   155,
     540,   545,   548,   621,    63,    64,   552,   547,   476,    24,
     556,   588,   557,   558,   243,   243,   559,   243,   245,   243,
     562,   243,   582,   592,   616,   594,   600,   618,   609,   611,
     640,   238,   642,   637,   645,   655,   664,   675,   243,   648,
      57,   605,   569,   243,   218,   243,   243,   672,   243,   378,
     674,   528,   231,   367,   517,   529,   231,   533,   671,   231,
     238,   531,   243,   530,   532,   659,   462,   243,   218,   231,
     231,   657,   590,   244,   574,   660,   247,   555,   461,   276,
      95,   110,   407,   130,   418,   171,   511,   128,   245,   330,
     236,   173,   112,   143,   236,   419,   231,   236,     0,   231,
     231,   417,   244,   276,     0,     0,     0,   236,   236,   382,
     383,   384,   385,   386,   387,   388,   389,     0,   390,     0,
     391,     0,   231,   231,     0,   231,   247,   231,     0,   231,
       0,     0,   392,     0,   236,     0,     0,   236,   236,     0,
       0,     0,     0,     0,     0,     0,   231,     0,     0,     0,
       0,   231,     0,   231,   231,     0,   231,     0,     0,     0,
     236,   236,   237,   236,     0,   236,   237,   236,     0,   237,
     231,     0,     0,     0,     0,   231,     0,     0,     0,   237,
     237,     0,   245,     0,   236,     0,     0,   593,     0,   236,
       0,   236,   236,     0,   236,   277,   247,   602,   603,     0,
       0,     0,     0,     0,     0,     0,   237,     0,   236,   237,
     237,   245,     0,   236,     0,     0,     0,     0,     0,   277,
       0,     0,     0,     0,   610,     0,     0,   238,     0,     0,
       0,   238,   237,   237,   238,   237,     0,   237,     0,   237,
       0,     0,     0,     0,   238,   238,     0,     0,     0,     0,
     638,   639,     0,   641,     0,     0,   237,   646,     0,     0,
       0,   237,     0,   237,   237,     0,   237,     0,     0,   244,
       0,   238,     0,   244,   238,   238,   244,     0,     0,   661,
     237,   662,   663,     0,   665,   237,   244,   244,     0,     0,
     247,     0,     0,     0,     0,     0,     0,   238,   238,     0,
     238,     0,   238,   676,   238,     0,     0,     0,     0,     0,
       0,     0,     0,   244,     0,     0,   244,   244,   323,   247,
       0,   238,     0,     0,     0,     0,   238,     0,   238,   238,
       0,   238,     0,     0,     0,     0,     0,     0,     0,   244,
     244,     0,   244,     0,   244,   238,   244,   356,     0,     0,
     238,   359,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   244,     0,     0,   368,     0,   244,     0,
     244,   244,     0,   244,     0,     0,     0,     0,   245,     0,
       0,     0,   245,     0,     0,   245,     0,   244,     0,     0,
       0,     0,   244,     0,    58,   245,   245,     0,    59,     1,
      60,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    61,    62,     0,     3,     0,    55,     0,     4,     5,
       6,     0,   245,    56,     7,   245,   245,     0,     0,     0,
       0,    63,    64,     0,    65,   405,    24,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   245,   245,
       0,   245,     0,   245,     0,   245,     0,   323,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   245,     0,     0,    66,     0,   245,    67,   245,
     245,     0,   245,     0,     0,     0,   247,     0,     0,     0,
     247,     0,     0,   247,   453,     0,   245,     0,     0,     0,
       0,   245,   405,   247,   247,   466,     0,     0,     0,     0,
       0,     0,   473,     0,     0,     0,     0,   482,   466,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     247,     0,   453,   247,   247,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   502,
       0,     0,     0,     0,     0,     0,   247,   247,     0,   247,
       0,   247,     0,   247,     0,     0,     0,     0,     0,     0,
     510,     0,     0,     0,     0,     0,     0,     0,    58,     0,
     247,     0,    59,     0,     0,   247,     0,   247,   247,     0,
     247,     0,     0,     0,     0,    61,    62,     0,     0,   534,
      55,   153,     0,     0,   247,   154,     0,    56,     0,   247,
     155,     0,   466,    58,     0,    63,    64,    59,     1,    60,
      24,     0,     0,     0,   453,     0,     0,     0,     0,     0,
      61,    62,     0,     3,     0,    55,     0,     4,     5,     6,
       0,     0,    56,     7,     0,     0,     0,   565,     0,     0,
      63,    64,     0,    65,   156,    24,     0,     0,   571,     0,
       0,     0,     0,     0,     0,     0,     0,   323,   174,   175,
     176,     0,     0,   177,     0,   178,   179,   180,   181,   182,
       0,   183,   184,   185,   186,     0,   187,   188,     0,   189,
     190,   191,   583,     0,    98,   466,     0,   192,   193,   466,
     194,   195,   196,   197,   198,   199,   200,   201,   202,     0,
     203,    24,   204,   205,     0,   206,   207,   208,     0,     0,
     209,   210,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   608,     0,     0,
       0,     0,     0,     0,   211,     0,     0,   617,     0,   131,
     212,     0,   213,   214,   215,   216,     0,     0,     0,     0,
       0,     0,     0,     0,   217,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   453,     0,     0,     0,     0,   174,
     175,   176,     0,     0,   177,   405,   178,   179,   180,   181,
     182,     0,   183,   184,   185,   186,     0,   187,   188,     0,
     189,   190,   191,   669,     0,     0,     0,     0,   192,   193,
       0,   194,   195,   196,   197,   198,   199,   200,   201,   202,
       0,   203,    24,   204,   205,     0,   206,   207,   208,     0,
       0,   209,   210,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   211,     0,     0,     0,     0,
     131,   395,     0,   213,   214,   215,   216,     0,     0,   174,
     175,   176,   630,     0,   177,   217,   178,   179,   658,   181,
     182,     0,   183,   184,   185,   186,     0,   187,   188,     0,
     189,   190,   191,     0,     0,     0,     0,     0,   192,   193,
       0,   194,   195,   196,   197,   198,   199,   200,   201,   202,
       0,   203,    24,   204,   205,     0,   206,   207,   208,     0,
       0,   209,   210,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   211,     0,     0,     0,     0,
     131,     0,     0,   213,   214,   215,   216,     0,     0,   174,
     175,   176,     0,     0,   177,   217,   178,   179,   180,   181,
     182,     0,   183,   184,   185,   186,     0,   187,   188,     0,
     189,   190,   191,     0,     0,     0,     0,     0,   192,   193,
       0,   194,   195,   196,   197,   198,   199,   200,   201,   202,
       0,   203,    24,   204,   205,     0,   206,   207,   208,     0,
       0,   209,   210,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   211,     0,     0,     0,     0,
     131,     0,     0,   213,   214,   215,   216,     0,   174,   294,
     176,     0,     0,   295,     0,   217,   179,   180,   181,   182,
       0,   183,   184,   185,   186,     0,   296,   297,     0,   189,
     190,   298,     0,     0,     0,     0,     0,   192,   299,     0,
     194,   195,   196,   197,   198,   199,   300,   301,   202,     0,
     203,    24,   204,   205,     0,   206,   207,   208,     0,     0,
     209,   210,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   211,     0,     0,     0,     0,   131,
       0,     0,   213,   214,   215,   216,   174,   294,     0,     0,
       0,   295,     0,     0,   217,   180,     0,   182,     0,     0,
       0,     0,     0,     0,   296,   297,     0,   189,   190,   298,
       0,     0,     0,     0,     0,     0,   299,     0,     0,   195,
       0,   197,     0,   199,   300,   301,     0,     0,     0,    24,
     204,   205,     0,   206,   207,   208,     0,     0,   209,   210,
       0,     0,     0,     0,     0,     0,   174,   294,     0,     0,
       0,   295,     0,     0,     0,   180,     0,   182,     0,     0,
       0,     0,   211,     0,   296,   297,     0,   189,   190,   298,
     213,   214,   215,   216,     0,     0,   299,     0,     0,   195,
       0,   197,   355,   199,   300,   301,     0,     0,     0,    24,
     204,   205,     0,   206,   207,   208,     0,     0,   209,   210,
       0,     0,     0,     0,     0,     0,   174,   175,     0,     0,
       0,   177,     0,     0,     0,   180,     0,   182,     0,     0,
       0,     0,   211,     0,   187,   188,     0,   189,   190,   191,
     213,   214,   215,   216,     0,     0,   193,     0,     0,   195,
       0,   197,   358,   199,   200,   201,     0,     0,     0,    24,
     204,   205,     0,   206,   207,   208,     0,     0,   209,   210,
       0,     0,     0,     0,     0,     0,   174,   294,     0,     0,
       0,   295,     0,     0,     0,   180,     0,   182,     0,     0,
       0,     0,   211,     0,   296,   297,     0,   189,   190,   298,
     213,   214,   215,   216,     0,     0,   299,     0,     0,   195,
       0,   197,   457,   199,   300,   301,     0,     0,     0,    24,
     204,   205,     0,   206,   207,   208,     0,     0,   209,   210,
       0,     0,     0,     0,     0,     0,   174,   294,     0,     0,
       0,   295,     0,     0,     0,   180,     0,   182,     0,     0,
       0,     0,   211,     0,   296,   297,     0,   189,   190,   298,
     213,   214,   215,   216,     0,     0,   299,     0,     0,   195,
       0,   197,   541,   199,   300,   301,     0,     0,     0,    24,
     204,   205,     0,   206,   207,   208,     0,     0,   209,   210,
       0,     0,     0,     0,     0,     0,   174,   294,     0,     0,
       0,   295,     0,     0,     0,   180,     0,   182,     0,     0,
       0,     0,   211,     0,   296,   297,     0,   189,   190,   298,
     213,   214,   215,   216,     0,     0,   299,     0,     0,   195,
       0,   197,   589,   199,   300,   301,     0,     0,     0,    24,
     204,   205,     0,   206,   207,   208,     0,     0,   209,   210,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   211,     0,     0,     0,     0,   302,   421,     0,
     213,   214,   215,   216,   174,   294,     0,     0,     0,   295,
       0,     0,     0,   180,     0,   182,     0,     0,     0,     0,
       0,     0,   296,   297,     0,   189,   190,   298,     0,     0,
       0,     0,   492,     0,   299,     0,     0,   195,     0,   197,
       0,   199,   300,   301,     0,     0,     0,    24,   204,   205,
       0,   206,   207,   208,     0,     0,   209,   210,     0,     0,
       0,     0,     0,     0,   174,   294,     0,     0,     0,   295,
       0,     0,     0,   180,     0,   182,     0,     0,     0,     0,
     211,   493,   296,   297,     0,   189,   190,   298,   213,   214,
     215,   216,   492,     0,   299,     0,     0,   195,     0,   197,
       0,   199,   300,   301,     0,     0,     0,    24,   204,   205,
       0,   206,   207,   208,     0,     0,   209,   210,     0,     0,
       0,     0,     0,     0,   174,   294,     0,     0,     0,   295,
       0,     0,     0,   180,     0,   182,     0,     0,     0,     0,
     211,   505,   296,   297,     0,   189,   190,   298,   213,   214,
     215,   216,   492,     0,   299,     0,     0,   195,     0,   197,
       0,   199,   300,   301,     0,     0,     0,    24,   204,   205,
       0,   206,   207,   208,     0,     0,   209,   210,     0,     0,
       0,     0,     0,     0,   174,   294,     0,     0,     0,   295,
       0,     0,     0,   180,     0,   182,     0,     0,     0,     0,
     211,   549,   296,   297,     0,   189,   190,   298,   213,   214,
     215,   216,     0,     0,   299,     0,     0,   195,     0,   197,
       0,   199,   300,   301,     0,     0,     0,    24,   204,   205,
       0,   206,   207,   208,     0,     0,   209,   210,     0,     0,
       0,     0,     0,     0,   174,   294,     0,     0,     0,   295,
       0,     0,     0,   180,     0,   182,     0,     0,   167,     0,
     211,     0,   296,   297,   168,   189,   190,   298,   213,   214,
     215,   216,   492,     0,   299,     0,     0,   195,     0,   197,
       0,   199,   300,   301,     0,     0,     0,    24,   204,   205,
       0,   206,   207,   208,     0,     0,   209,   210,     0,     0,
       0,     0,     0,     0,   174,   294,     0,     0,     0,   295,
       0,     0,     0,   180,     0,   182,     0,     0,     0,     0,
     211,   576,   296,   297,     0,   189,   190,   298,   213,   214,
     215,   216,   492,     0,   299,     0,     0,   195,     0,   197,
       0,   199,   300,   301,     0,     0,     0,    24,   204,   205,
       0,   206,   207,   208,     0,     0,   209,   210,     0,     0,
       0,     0,     0,     0,   174,   294,     0,     0,     0,   295,
       0,     0,     0,   180,     0,   182,     0,     0,     0,     0,
     211,   578,   296,   297,     0,   189,   190,   298,   213,   214,
     215,   216,     0,     0,   299,     0,     0,   195,     0,   197,
       0,   199,   300,   301,     0,     0,     0,    24,   204,   205,
       0,   206,   207,   208,     0,     0,   209,   210,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     211,     0,     0,     0,     0,   302,   580,     0,   213,   214,
     215,   216,   174,   294,     0,     0,     0,   295,     0,     0,
       0,   180,     0,   182,     0,     0,     0,     0,     0,     0,
     296,   297,     0,   189,   190,   298,     0,     0,     0,     0,
       0,     0,   299,     0,     0,   195,     0,   197,     0,   199,
     300,   301,     0,     0,     0,    24,   204,   205,     0,   206,
     207,   208,     0,     0,   209,   210,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   211,     0,
       0,     0,     0,   619,   620,     0,   213,   214,   215,   216,
     174,   294,     0,     0,     0,   295,     0,     0,     0,   180,
       0,   182,     0,     0,     0,     0,     0,     0,   296,   297,
       0,   189,   190,   298,     0,     0,     0,     0,     0,     0,
     299,     0,     0,   195,     0,   197,     0,   199,   300,   301,
       0,     0,     0,    24,   204,   205,     0,   206,   207,   208,
       0,     0,   209,   210,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   211,     0,     0,     0,
       0,   619,   673,     0,   213,   214,   215,   216,   174,   294,
       0,     0,     0,   295,     0,     0,     0,   180,     0,   182,
       0,     0,     0,     0,     0,     0,   296,   297,     0,   189,
     190,   298,     0,     0,     0,     0,     0,     0,   299,     0,
       0,   195,     0,   197,     0,   199,   300,   301,     0,     0,
       0,    24,   204,   205,     0,   206,   207,   208,     0,     0,
     209,   210,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   211,     0,     0,     0,     0,   302,
       0,     0,   213,   214,   215,   216,   174,   175,     0,     0,
       0,   177,     0,     0,     0,   180,     0,   182,     0,     0,
       0,     0,     0,     0,   187,   188,     0,   189,   190,   191,
       0,     0,     0,     0,     0,     0,   193,     0,     0,   195,
       0,   197,     0,   199,   200,   201,     0,   366,     0,    24,
     204,   205,     0,   206,   207,   208,     0,     0,   209,   210,
       0,     0,     0,     0,     0,     0,   174,   294,     0,     0,
       0,   295,     0,     0,     0,   180,     0,   182,     0,     0,
       0,     0,   211,     0,   296,   297,     0,   189,   190,   298,
     213,   214,   215,   216,   492,     0,   299,     0,     0,   195,
       0,   197,     0,   199,   300,   301,     0,     0,     0,    24,
     204,   205,     0,   206,   207,   208,     0,     0,   209,   210,
       0,     0,     0,     0,     0,   174,   294,     0,     0,     0,
     295,     0,     0,     0,   180,     0,   182,     0,     0,     0,
       0,     0,   211,   296,   297,     0,   189,   190,   298,     0,
     213,   214,   215,   216,     0,   299,     0,     0,   195,     0,
     197,     0,   199,   300,   301,     0,     0,     0,    24,   204,
     205,     0,   206,   207,   208,     0,     0,   209,   210,     0,
       0,     0,     0,     0,     0,   174,   294,     0,     0,     0,
     295,     0,     0,     0,   180,     0,   182,     0,     0,     0,
       0,   211,   585,   296,   297,     0,   189,   190,   298,   213,
     214,   215,   216,     0,     0,   299,     0,     0,   195,     0,
     197,     0,   199,   300,   301,     0,     0,     0,    24,   204,
     205,     0,   206,   207,   208,     0,     0,   209,   210,     0,
       0,     0,     0,     0,     0,   174,   294,     0,     0,     0,
     295,     0,     0,     0,   180,     0,   182,     0,     0,     0,
       0,   211,   612,   296,   297,     0,   189,   190,   298,   213,
     214,   215,   216,     0,     0,   299,     0,     0,   195,     0,
     197,     0,   199,   300,   301,     0,     0,     0,    24,   204,
     205,     0,   206,   207,   208,     0,     0,   209,   210,     0,
       0,     0,     0,     0,     0,   174,   294,     0,     0,     0,
     295,     0,     0,     0,   180,     0,   182,     0,     0,     0,
       0,   211,   614,   296,   297,     0,   189,   190,   298,   213,
     214,   215,   216,     0,     0,   299,     0,     0,   195,     0,
     197,     0,   199,   300,   301,     0,     0,     0,    24,   204,
     205,     0,   206,   207,   208,     0,     0,   209,   210,     0,
       0,     0,     0,     0,     0,   174,   294,     0,     0,     0,
     295,     0,     0,     0,   180,     0,   182,     0,     0,     0,
       0,   211,   643,   296,   297,     0,   189,   190,   298,   213,
     214,   215,   216,     0,     0,   299,     0,     0,   195,     0,
     197,     0,   199,   300,   301,     0,     0,     0,    24,   204,
     205,     0,   206,   207,   208,     0,     0,   209,   210,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   211,     0,     0,     0,     0,   594,     0,     0,   213,
     214,   215,   216,   174,   294,     0,     0,     0,   295,     0,
       0,     0,   180,     0,   182,     0,     0,     0,     0,     0,
       0,   296,   297,     0,   189,   190,   298,     0,     0,     0,
       0,     0,     0,   299,     0,     0,   195,     0,   197,     0,
     199,   300,   301,     0,     0,     0,    24,   204,   205,     0,
     206,   207,   208,     0,     0,   209,   210,     0,     0,     0,
       0,     0,   174,   175,     0,     0,     0,   177,     0,     0,
       0,   180,     0,   182,     0,     0,     0,     0,     0,   211,
     187,   188,     0,   189,   190,   191,     0,   213,   214,   215,
     216,     0,   193,     0,     0,   195,     0,   197,     0,   199,
     200,   201,     0,     0,     0,    24,   204,   205,     0,   206,
     207,   208,     0,     0,   209,   210,     0,     0,     0,     0,
       0,   174,   294,     0,     0,     0,   295,     0,     0,     0,
     180,     0,   182,     0,     0,     0,     0,     0,   211,   296,
     297,     0,   189,   190,   298,     0,   213,   214,   215,   216,
       0,   299,     0,     0,   195,     0,   197,     0,   199,   300,
     301,     0,     0,     0,    24,   204,   205,     0,   206,   207,
     208,     0,     0,     0,    58,     0,     0,     0,    59,     1,
      60,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    61,    62,     0,     3,     0,    55,   211,     4,     5,
       6,     0,     0,    56,     7,   213,   214,     0,     0,     0,
       0,    63,    64,     0,    65,     0,    24,     0,     0,    58,
       0,     0,     0,    59,     1,    60,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    61,    62,     0,     3,
       0,    55,     0,     4,     5,     6,    58,     0,    56,     7,
      59,     0,     0,     0,     0,   129,    63,    64,    67,    65,
       0,    24,     0,    61,    62,     0,     0,     0,    55,   153,
       0,     0,    58,   154,     0,    56,    59,     0,   155,     0,
       0,     0,     0,    63,    64,     0,     0,     0,    24,    61,
      62,     0,     0,     0,    55,   153,     0,     0,    58,   154,
     142,    56,    59,     0,   155,     0,     0,     0,     0,    63,
      64,     0,     0,     0,    24,    61,    62,     0,     0,     0,
      55,   153,   283,     0,    58,   154,     0,    56,    59,     0,
     155,     0,     0,     0,     0,    63,    64,     0,     0,     0,
      24,    61,    62,     0,     0,     0,    55,   153,   331,     0,
       0,   154,     0,    56,     0,     0,   155,     0,     0,    58,
       0,    63,    64,    59,    38,   125,    24,     0,     0,     0,
       0,     0,     0,     0,   447,     0,    61,    62,     0,     3,
       0,    55,     0,     4,     5,     6,     0,     0,    56,    39,
       0,     0,     0,     0,     0,     0,    63,    64,     0,   126,
     449,    24
};

static const yytype_int16 yycheck[] =
{
       1,     2,   189,   302,   347,   251,     7,     8,   169,   377,
      16,    20,   403,   151,   350,    86,     8,    88,     8,   353,
     354,    12,    14,    12,    14,   345,    42,   363,   166,    43,
      36,    56,    48,    48,   594,    56,     2,    38,    39,    53,
       8,    42,     8,    79,    45,   345,    48,    48,   598,    50,
     153,    87,     8,    11,    42,    46,    81,   128,    14,    80,
      48,   101,   362,    48,    65,    81,    67,    25,    26,    42,
      71,    80,    30,    31,    32,    48,    42,   468,    36,    80,
      81,    48,    48,    51,    71,    51,   189,    60,   104,   104,
      96,   651,    48,    81,    60,    87,   110,    87,   648,    65,
      48,   469,   104,   104,    95,    71,    95,    80,    81,    48,
     153,    56,   113,    48,    80,    81,   104,   508,   509,   104,
      63,    64,     5,    56,   131,   126,   127,   198,   374,    87,
     131,   104,    56,    81,   140,    83,    84,   104,   104,   126,
     127,     0,    83,    88,   117,    86,   189,    80,    87,   588,
     589,   117,   125,    96,    97,    38,   157,    79,     8,   125,
     126,   127,    83,   164,    88,   131,    88,    79,   169,   503,
      82,    86,    79,    86,   181,    82,    86,   616,   151,   101,
     341,    86,   369,    28,   185,   151,   101,   153,   161,   101,
      35,   101,    42,   166,   101,   161,   101,   335,    48,   337,
     166,    51,   209,   210,   540,   178,   213,   214,   215,   216,
      60,     6,   178,   512,   285,    10,   189,    79,     9,    79,
      82,   541,    82,   189,    79,   545,    17,    82,    23,    24,
      80,    81,   131,    28,    73,    79,    75,    79,    82,   101,
      35,    11,    79,    86,   251,   211,   101,   101,    43,    44,
     251,   619,    79,    48,   104,   256,    26,   101,    11,   101,
      30,    31,    32,    79,   101,   599,    36,   117,   588,   589,
     131,    87,    25,    26,   101,   125,    79,    30,    31,    32,
     281,   131,   181,    36,    87,   251,   287,   630,    81,    84,
      83,    84,   293,    11,   628,    79,   616,    79,    82,    79,
      79,   151,   101,   153,    55,    87,    85,    25,    26,    60,
      11,   161,    30,    31,    32,   101,   166,   101,    36,   292,
     181,   101,    83,    84,    25,    26,   292,    45,   178,    30,
      31,    32,    57,    58,    87,    36,    11,   338,   345,   189,
     341,    80,   131,    79,    45,    91,    92,    86,    79,    85,
      25,    26,   251,    79,    85,    30,    31,    32,    78,    85,
      81,    36,   335,    84,   337,    79,   101,   374,    82,   335,
     343,   337,    84,   374,   375,   376,    78,   343,   379,   345,
     346,   432,   433,   434,   435,    56,    87,    81,   361,    83,
     251,    79,   181,   101,    82,   361,   362,    93,    94,    95,
      81,   251,   403,   404,   475,   476,    79,   131,   374,    82,
     181,    79,   599,   659,    82,    80,    81,   424,   425,   426,
     427,   428,   429,   101,   431,   432,   433,   434,   435,   436,
     437,   438,   439,   440,   441,   442,   443,   101,    84,    11,
      86,    81,   292,   429,    81,   431,   345,    61,    62,   131,
     427,   428,     6,    25,    26,    88,    10,   181,    30,    31,
      32,   462,   251,   101,    36,   436,   437,   468,    80,    23,
      24,    82,    82,    45,    28,   374,    79,    85,    83,   486,
     487,    35,    81,    81,   345,   335,   101,   337,    83,    43,
      44,    81,    46,   343,    48,   345,   346,   101,    81,   181,
      81,    81,    86,   504,    83,    83,    83,   508,   509,    83,
      81,   361,   362,   374,    81,    87,   101,    83,    83,    81,
      81,    59,    98,    83,   374,     6,    83,   251,    83,    10,
      82,   101,   101,    78,   541,    88,    99,    88,   545,    82,
      47,   548,    23,    24,   100,    81,    86,    28,    82,    84,
      82,   558,   559,   101,    35,   562,   345,     6,   131,   101,
     101,    10,    43,    44,   101,    82,   567,    48,    88,   251,
      79,    81,   101,    81,    23,    24,    82,    82,   585,    28,
      29,   588,   589,    79,    33,   374,    35,   594,    82,    38,
      81,    79,    82,   594,    43,    44,    82,   101,    17,    48,
      82,   101,    82,    82,   611,   612,    82,   614,   181,   616,
      82,   618,    80,    22,   101,    86,    86,     4,    82,    82,
      82,   345,    82,   101,    82,    80,    82,    80,   635,    88,
      41,   567,   497,   640,   635,   642,   643,   649,   645,   228,
     651,   438,   541,   211,   651,   439,   545,   443,   649,   548,
     374,   441,   659,   440,   442,   635,   346,   664,   659,   558,
     559,   633,   544,   345,   504,   635,   131,   477,   345,   635,
      46,    53,   281,    81,   292,   127,   420,    80,   251,   164,
     541,   128,    54,   104,   545,   292,   585,   548,    -1,   588,
     589,   291,   374,   659,    -1,    -1,    -1,   558,   559,    65,
      66,    67,    68,    69,    70,    71,    72,    -1,    74,    -1,
      76,    -1,   611,   612,    -1,   614,   181,   616,    -1,   618,
      -1,    -1,    88,    -1,   585,    -1,    -1,   588,   589,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   635,    -1,    -1,    -1,
      -1,   640,    -1,   642,   643,    -1,   645,    -1,    -1,    -1,
     611,   612,   541,   614,    -1,   616,   545,   618,    -1,   548,
     659,    -1,    -1,    -1,    -1,   664,    -1,    -1,    -1,   558,
     559,    -1,   345,    -1,   635,    -1,    -1,   548,    -1,   640,
      -1,   642,   643,    -1,   645,   635,   251,   558,   559,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   585,    -1,   659,   588,
     589,   374,    -1,   664,    -1,    -1,    -1,    -1,    -1,   659,
      -1,    -1,    -1,    -1,   585,    -1,    -1,   541,    -1,    -1,
      -1,   545,   611,   612,   548,   614,    -1,   616,    -1,   618,
      -1,    -1,    -1,    -1,   558,   559,    -1,    -1,    -1,    -1,
     611,   612,    -1,   614,    -1,    -1,   635,   618,    -1,    -1,
      -1,   640,    -1,   642,   643,    -1,   645,    -1,    -1,   541,
      -1,   585,    -1,   545,   588,   589,   548,    -1,    -1,   640,
     659,   642,   643,    -1,   645,   664,   558,   559,    -1,    -1,
     345,    -1,    -1,    -1,    -1,    -1,    -1,   611,   612,    -1,
     614,    -1,   616,   664,   618,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   585,    -1,    -1,   588,   589,   163,   374,
      -1,   635,    -1,    -1,    -1,    -1,   640,    -1,   642,   643,
      -1,   645,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   611,
     612,    -1,   614,    -1,   616,   659,   618,   192,    -1,    -1,
     664,   196,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   635,    -1,    -1,   211,    -1,   640,    -1,
     642,   643,    -1,   645,    -1,    -1,    -1,    -1,   541,    -1,
      -1,    -1,   545,    -1,    -1,   548,    -1,   659,    -1,    -1,
      -1,    -1,   664,    -1,     6,   558,   559,    -1,    10,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    -1,    26,    -1,    28,    -1,    30,    31,
      32,    -1,   585,    35,    36,   588,   589,    -1,    -1,    -1,
      -1,    43,    44,    -1,    46,   280,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   611,   612,
      -1,   614,    -1,   616,    -1,   618,    -1,   302,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   635,    -1,    -1,    87,    -1,   640,    90,   642,
     643,    -1,   645,    -1,    -1,    -1,   541,    -1,    -1,    -1,
     545,    -1,    -1,   548,   339,    -1,   659,    -1,    -1,    -1,
      -1,   664,   347,   558,   559,   350,    -1,    -1,    -1,    -1,
      -1,    -1,   357,    -1,    -1,    -1,    -1,   362,   363,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     585,    -1,   377,   588,   589,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   394,
      -1,    -1,    -1,    -1,    -1,    -1,   611,   612,    -1,   614,
      -1,   616,    -1,   618,    -1,    -1,    -1,    -1,    -1,    -1,
     415,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     6,    -1,
     635,    -1,    10,    -1,    -1,   640,    -1,   642,   643,    -1,
     645,    -1,    -1,    -1,    -1,    23,    24,    -1,    -1,   444,
      28,    29,    -1,    -1,   659,    33,    -1,    35,    -1,   664,
      38,    -1,   457,     6,    -1,    43,    44,    10,    11,    12,
      48,    -1,    -1,    -1,   469,    -1,    -1,    -1,    -1,    -1,
      23,    24,    -1,    26,    -1,    28,    -1,    30,    31,    32,
      -1,    -1,    35,    36,    -1,    -1,    -1,   492,    -1,    -1,
      43,    44,    -1,    46,    82,    48,    -1,    -1,   503,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   512,     5,     6,
       7,    -1,    -1,    10,    -1,    12,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    -1,    23,    24,    -1,    26,
      27,    28,   537,    -1,    87,   540,    -1,    34,    35,   544,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      47,    48,    49,    50,    -1,    52,    53,    54,    -1,    -1,
      57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   582,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    -1,   592,    -1,    86,
      87,    -1,    89,    90,    91,    92,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   619,    -1,    -1,    -1,    -1,     5,
       6,     7,    -1,    -1,    10,   630,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    -1,    23,    24,    -1,
      26,    27,    28,   648,    -1,    -1,    -1,    -1,    34,    35,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      -1,    47,    48,    49,    50,    -1,    52,    53,    54,    -1,
      -1,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,
      86,    87,    -1,    89,    90,    91,    92,    -1,    -1,     5,
       6,     7,     8,    -1,    10,   101,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    -1,    23,    24,    -1,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    34,    35,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      -1,    47,    48,    49,    50,    -1,    52,    53,    54,    -1,
      -1,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    89,    90,    91,    92,    -1,    -1,     5,
       6,     7,    -1,    -1,    10,   101,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    -1,    23,    24,    -1,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    34,    35,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      -1,    47,    48,    49,    50,    -1,    52,    53,    54,    -1,
      -1,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    89,    90,    91,    92,    -1,     5,     6,
       7,    -1,    -1,    10,    -1,   101,    13,    14,    15,    16,
      -1,    18,    19,    20,    21,    -1,    23,    24,    -1,    26,
      27,    28,    -1,    -1,    -1,    -1,    -1,    34,    35,    -1,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      47,    48,    49,    50,    -1,    52,    53,    54,    -1,    -1,
      57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    89,    90,    91,    92,     5,     6,    -1,    -1,
      -1,    10,    -1,    -1,   101,    14,    -1,    16,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    -1,    26,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,    38,
      -1,    40,    -1,    42,    43,    44,    -1,    -1,    -1,    48,
      49,    50,    -1,    52,    53,    54,    -1,    -1,    57,    58,
      -1,    -1,    -1,    -1,    -1,    -1,     5,     6,    -1,    -1,
      -1,    10,    -1,    -1,    -1,    14,    -1,    16,    -1,    -1,
      -1,    -1,    81,    -1,    23,    24,    -1,    26,    27,    28,
      89,    90,    91,    92,    -1,    -1,    35,    -1,    -1,    38,
      -1,    40,   101,    42,    43,    44,    -1,    -1,    -1,    48,
      49,    50,    -1,    52,    53,    54,    -1,    -1,    57,    58,
      -1,    -1,    -1,    -1,    -1,    -1,     5,     6,    -1,    -1,
      -1,    10,    -1,    -1,    -1,    14,    -1,    16,    -1,    -1,
      -1,    -1,    81,    -1,    23,    24,    -1,    26,    27,    28,
      89,    90,    91,    92,    -1,    -1,    35,    -1,    -1,    38,
      -1,    40,   101,    42,    43,    44,    -1,    -1,    -1,    48,
      49,    50,    -1,    52,    53,    54,    -1,    -1,    57,    58,
      -1,    -1,    -1,    -1,    -1,    -1,     5,     6,    -1,    -1,
      -1,    10,    -1,    -1,    -1,    14,    -1,    16,    -1,    -1,
      -1,    -1,    81,    -1,    23,    24,    -1,    26,    27,    28,
      89,    90,    91,    92,    -1,    -1,    35,    -1,    -1,    38,
      -1,    40,   101,    42,    43,    44,    -1,    -1,    -1,    48,
      49,    50,    -1,    52,    53,    54,    -1,    -1,    57,    58,
      -1,    -1,    -1,    -1,    -1,    -1,     5,     6,    -1,    -1,
      -1,    10,    -1,    -1,    -1,    14,    -1,    16,    -1,    -1,
      -1,    -1,    81,    -1,    23,    24,    -1,    26,    27,    28,
      89,    90,    91,    92,    -1,    -1,    35,    -1,    -1,    38,
      -1,    40,   101,    42,    43,    44,    -1,    -1,    -1,    48,
      49,    50,    -1,    52,    53,    54,    -1,    -1,    57,    58,
      -1,    -1,    -1,    -1,    -1,    -1,     5,     6,    -1,    -1,
      -1,    10,    -1,    -1,    -1,    14,    -1,    16,    -1,    -1,
      -1,    -1,    81,    -1,    23,    24,    -1,    26,    27,    28,
      89,    90,    91,    92,    -1,    -1,    35,    -1,    -1,    38,
      -1,    40,   101,    42,    43,    44,    -1,    -1,    -1,    48,
      49,    50,    -1,    52,    53,    54,    -1,    -1,    57,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    86,    87,    -1,
      89,    90,    91,    92,     5,     6,    -1,    -1,    -1,    10,
      -1,    -1,    -1,    14,    -1,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    -1,    26,    27,    28,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    38,    -1,    40,
      -1,    42,    43,    44,    -1,    -1,    -1,    48,    49,    50,
      -1,    52,    53,    54,    -1,    -1,    57,    58,    -1,    -1,
      -1,    -1,    -1,    -1,     5,     6,    -1,    -1,    -1,    10,
      -1,    -1,    -1,    14,    -1,    16,    -1,    -1,    -1,    -1,
      81,    82,    23,    24,    -1,    26,    27,    28,    89,    90,
      91,    92,    33,    -1,    35,    -1,    -1,    38,    -1,    40,
      -1,    42,    43,    44,    -1,    -1,    -1,    48,    49,    50,
      -1,    52,    53,    54,    -1,    -1,    57,    58,    -1,    -1,
      -1,    -1,    -1,    -1,     5,     6,    -1,    -1,    -1,    10,
      -1,    -1,    -1,    14,    -1,    16,    -1,    -1,    -1,    -1,
      81,    82,    23,    24,    -1,    26,    27,    28,    89,    90,
      91,    92,    33,    -1,    35,    -1,    -1,    38,    -1,    40,
      -1,    42,    43,    44,    -1,    -1,    -1,    48,    49,    50,
      -1,    52,    53,    54,    -1,    -1,    57,    58,    -1,    -1,
      -1,    -1,    -1,    -1,     5,     6,    -1,    -1,    -1,    10,
      -1,    -1,    -1,    14,    -1,    16,    -1,    -1,    -1,    -1,
      81,    82,    23,    24,    -1,    26,    27,    28,    89,    90,
      91,    92,    -1,    -1,    35,    -1,    -1,    38,    -1,    40,
      -1,    42,    43,    44,    -1,    -1,    -1,    48,    49,    50,
      -1,    52,    53,    54,    -1,    -1,    57,    58,    -1,    -1,
      -1,    -1,    -1,    -1,     5,     6,    -1,    -1,    -1,    10,
      -1,    -1,    -1,    14,    -1,    16,    -1,    -1,    79,    -1,
      81,    -1,    23,    24,    85,    26,    27,    28,    89,    90,
      91,    92,    33,    -1,    35,    -1,    -1,    38,    -1,    40,
      -1,    42,    43,    44,    -1,    -1,    -1,    48,    49,    50,
      -1,    52,    53,    54,    -1,    -1,    57,    58,    -1,    -1,
      -1,    -1,    -1,    -1,     5,     6,    -1,    -1,    -1,    10,
      -1,    -1,    -1,    14,    -1,    16,    -1,    -1,    -1,    -1,
      81,    82,    23,    24,    -1,    26,    27,    28,    89,    90,
      91,    92,    33,    -1,    35,    -1,    -1,    38,    -1,    40,
      -1,    42,    43,    44,    -1,    -1,    -1,    48,    49,    50,
      -1,    52,    53,    54,    -1,    -1,    57,    58,    -1,    -1,
      -1,    -1,    -1,    -1,     5,     6,    -1,    -1,    -1,    10,
      -1,    -1,    -1,    14,    -1,    16,    -1,    -1,    -1,    -1,
      81,    82,    23,    24,    -1,    26,    27,    28,    89,    90,
      91,    92,    -1,    -1,    35,    -1,    -1,    38,    -1,    40,
      -1,    42,    43,    44,    -1,    -1,    -1,    48,    49,    50,
      -1,    52,    53,    54,    -1,    -1,    57,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    -1,    86,    87,    -1,    89,    90,
      91,    92,     5,     6,    -1,    -1,    -1,    10,    -1,    -1,
      -1,    14,    -1,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    -1,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    -1,    -1,    38,    -1,    40,    -1,    42,
      43,    44,    -1,    -1,    -1,    48,    49,    50,    -1,    52,
      53,    54,    -1,    -1,    57,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    -1,    86,    87,    -1,    89,    90,    91,    92,
       5,     6,    -1,    -1,    -1,    10,    -1,    -1,    -1,    14,
      -1,    16,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      -1,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    -1,    -1,    38,    -1,    40,    -1,    42,    43,    44,
      -1,    -1,    -1,    48,    49,    50,    -1,    52,    53,    54,
      -1,    -1,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,
      -1,    86,    87,    -1,    89,    90,    91,    92,     5,     6,
      -1,    -1,    -1,    10,    -1,    -1,    -1,    14,    -1,    16,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    -1,    26,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,
      -1,    38,    -1,    40,    -1,    42,    43,    44,    -1,    -1,
      -1,    48,    49,    50,    -1,    52,    53,    54,    -1,    -1,
      57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    89,    90,    91,    92,     5,     6,    -1,    -1,
      -1,    10,    -1,    -1,    -1,    14,    -1,    16,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    -1,    26,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,    38,
      -1,    40,    -1,    42,    43,    44,    -1,    46,    -1,    48,
      49,    50,    -1,    52,    53,    54,    -1,    -1,    57,    58,
      -1,    -1,    -1,    -1,    -1,    -1,     5,     6,    -1,    -1,
      -1,    10,    -1,    -1,    -1,    14,    -1,    16,    -1,    -1,
      -1,    -1,    81,    -1,    23,    24,    -1,    26,    27,    28,
      89,    90,    91,    92,    33,    -1,    35,    -1,    -1,    38,
      -1,    40,    -1,    42,    43,    44,    -1,    -1,    -1,    48,
      49,    50,    -1,    52,    53,    54,    -1,    -1,    57,    58,
      -1,    -1,    -1,    -1,    -1,     5,     6,    -1,    -1,    -1,
      10,    -1,    -1,    -1,    14,    -1,    16,    -1,    -1,    -1,
      -1,    -1,    81,    23,    24,    -1,    26,    27,    28,    -1,
      89,    90,    91,    92,    -1,    35,    -1,    -1,    38,    -1,
      40,    -1,    42,    43,    44,    -1,    -1,    -1,    48,    49,
      50,    -1,    52,    53,    54,    -1,    -1,    57,    58,    -1,
      -1,    -1,    -1,    -1,    -1,     5,     6,    -1,    -1,    -1,
      10,    -1,    -1,    -1,    14,    -1,    16,    -1,    -1,    -1,
      -1,    81,    82,    23,    24,    -1,    26,    27,    28,    89,
      90,    91,    92,    -1,    -1,    35,    -1,    -1,    38,    -1,
      40,    -1,    42,    43,    44,    -1,    -1,    -1,    48,    49,
      50,    -1,    52,    53,    54,    -1,    -1,    57,    58,    -1,
      -1,    -1,    -1,    -1,    -1,     5,     6,    -1,    -1,    -1,
      10,    -1,    -1,    -1,    14,    -1,    16,    -1,    -1,    -1,
      -1,    81,    82,    23,    24,    -1,    26,    27,    28,    89,
      90,    91,    92,    -1,    -1,    35,    -1,    -1,    38,    -1,
      40,    -1,    42,    43,    44,    -1,    -1,    -1,    48,    49,
      50,    -1,    52,    53,    54,    -1,    -1,    57,    58,    -1,
      -1,    -1,    -1,    -1,    -1,     5,     6,    -1,    -1,    -1,
      10,    -1,    -1,    -1,    14,    -1,    16,    -1,    -1,    -1,
      -1,    81,    82,    23,    24,    -1,    26,    27,    28,    89,
      90,    91,    92,    -1,    -1,    35,    -1,    -1,    38,    -1,
      40,    -1,    42,    43,    44,    -1,    -1,    -1,    48,    49,
      50,    -1,    52,    53,    54,    -1,    -1,    57,    58,    -1,
      -1,    -1,    -1,    -1,    -1,     5,     6,    -1,    -1,    -1,
      10,    -1,    -1,    -1,    14,    -1,    16,    -1,    -1,    -1,
      -1,    81,    82,    23,    24,    -1,    26,    27,    28,    89,
      90,    91,    92,    -1,    -1,    35,    -1,    -1,    38,    -1,
      40,    -1,    42,    43,    44,    -1,    -1,    -1,    48,    49,
      50,    -1,    52,    53,    54,    -1,    -1,    57,    58,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    -1,    86,    -1,    -1,    89,
      90,    91,    92,     5,     6,    -1,    -1,    -1,    10,    -1,
      -1,    -1,    14,    -1,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    -1,    26,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    -1,    -1,    38,    -1,    40,    -1,
      42,    43,    44,    -1,    -1,    -1,    48,    49,    50,    -1,
      52,    53,    54,    -1,    -1,    57,    58,    -1,    -1,    -1,
      -1,    -1,     5,     6,    -1,    -1,    -1,    10,    -1,    -1,
      -1,    14,    -1,    16,    -1,    -1,    -1,    -1,    -1,    81,
      23,    24,    -1,    26,    27,    28,    -1,    89,    90,    91,
      92,    -1,    35,    -1,    -1,    38,    -1,    40,    -1,    42,
      43,    44,    -1,    -1,    -1,    48,    49,    50,    -1,    52,
      53,    54,    -1,    -1,    57,    58,    -1,    -1,    -1,    -1,
      -1,     5,     6,    -1,    -1,    -1,    10,    -1,    -1,    -1,
      14,    -1,    16,    -1,    -1,    -1,    -1,    -1,    81,    23,
      24,    -1,    26,    27,    28,    -1,    89,    90,    91,    92,
      -1,    35,    -1,    -1,    38,    -1,    40,    -1,    42,    43,
      44,    -1,    -1,    -1,    48,    49,    50,    -1,    52,    53,
      54,    -1,    -1,    -1,     6,    -1,    -1,    -1,    10,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    -1,    26,    -1,    28,    81,    30,    31,
      32,    -1,    -1,    35,    36,    89,    90,    -1,    -1,    -1,
      -1,    43,    44,    -1,    46,    -1,    48,    -1,    -1,     6,
      -1,    -1,    -1,    10,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    -1,    26,
      -1,    28,    -1,    30,    31,    32,     6,    -1,    35,    36,
      10,    -1,    -1,    -1,    -1,    87,    43,    44,    90,    46,
      -1,    48,    -1,    23,    24,    -1,    -1,    -1,    28,    29,
      -1,    -1,     6,    33,    -1,    35,    10,    -1,    38,    -1,
      -1,    -1,    -1,    43,    44,    -1,    -1,    -1,    48,    23,
      24,    -1,    -1,    -1,    28,    29,    -1,    -1,     6,    33,
      87,    35,    10,    -1,    38,    -1,    -1,    -1,    -1,    43,
      44,    -1,    -1,    -1,    48,    23,    24,    -1,    -1,    -1,
      28,    29,    82,    -1,     6,    33,    -1,    35,    10,    -1,
      38,    -1,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,
      48,    23,    24,    -1,    -1,    -1,    28,    29,    82,    -1,
      -1,    33,    -1,    35,    -1,    -1,    38,    -1,    -1,     6,
      -1,    43,    44,    10,    11,    12,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    23,    24,    -1,    26,
      -1,    28,    -1,    30,    31,    32,    -1,    -1,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    -1,    46,
      82,    48
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    11,    25,    26,    30,    31,    32,    36,    45,   103,
     222,   223,   226,   227,   228,   229,   230,   231,   232,   234,
     235,   236,   264,   272,    48,   104,   104,   224,   104,   104,
     113,   115,   224,   233,     0,   227,   230,   231,    11,    36,
     236,    80,    86,   237,   238,    83,    86,   225,    86,   265,
      56,    88,   101,   104,   104,    28,    35,   123,     6,    10,
      12,    23,    24,    43,    44,    46,    87,    90,   104,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   232,
     235,   239,   240,   241,   244,   248,   249,   258,   259,   262,
     268,   238,   101,   104,    87,   226,   230,   101,    87,   232,
     241,   244,   248,   258,   266,   267,   101,   104,   104,   115,
     237,   238,   265,   116,   224,   250,   104,    81,   104,   245,
     246,   250,    84,   269,    78,    12,    46,   116,   259,    87,
     240,    86,   101,   180,   251,   101,   180,   261,   101,    87,
     230,    87,    87,   267,   101,   238,   101,   101,   104,   242,
     243,    81,    81,    29,    33,    38,    82,   116,   252,   253,
     254,   256,   257,    88,    79,   101,    81,    79,    85,   116,
     250,   245,   250,   261,     5,     6,     7,    10,    12,    13,
      14,    15,    16,    18,    19,    20,    21,    23,    24,    26,
      27,    28,    34,    35,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    47,    49,    50,    52,    53,    54,    57,
      58,    81,    87,    89,    90,    91,    92,   101,   104,   105,
     106,   107,   108,   109,   110,   116,   129,   130,   131,   132,
     134,   135,   136,   138,   139,   140,   141,   142,   143,   152,
     153,   154,   155,   156,   157,   158,   159,   172,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   190,   191,   192,
     193,   194,   195,   201,   202,   203,   204,   209,   210,   211,
     212,   213,   214,   215,   216,   220,   224,   233,    87,   101,
      88,    79,   101,    82,   252,    82,   117,   268,    80,   260,
     104,    82,    79,   116,     6,    10,    23,    24,    28,    35,
      43,    44,    86,   135,   141,   142,   143,   156,   157,   158,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   174,   175,   224,   233,   247,   270,   104,
     246,    82,   252,    85,   242,    81,   101,    81,    83,    84,
     101,   116,   101,    81,   179,    81,    81,     8,    14,   104,
      81,   116,   117,   268,   269,   101,   174,    81,   101,   174,
     180,    81,    81,    81,   156,   156,    46,   118,   174,   224,
     156,   156,   156,   156,    80,    83,    81,    84,   155,    83,
      57,    58,    65,    66,    67,    68,    69,    70,    71,    72,
      74,    76,    88,   112,   173,    87,   178,   101,   104,   187,
     188,   101,   101,    81,    83,   174,   176,   243,    82,   101,
     180,   263,   104,     5,    38,    88,   255,   260,   254,   257,
     104,    87,   247,   271,    93,    94,    95,    91,    92,    73,
      75,   111,    63,    64,    96,    97,    61,    62,    98,    99,
     100,    59,    55,    60,    78,    82,   101,    82,   252,    82,
     252,   104,   137,   174,   242,   116,    47,   101,   185,   192,
     205,   208,   186,   176,   101,   101,   174,   177,    81,    84,
     270,   270,   101,   174,   101,     9,    17,   217,   218,   219,
      46,   116,   174,   185,   221,   177,    82,    82,    82,   269,
     178,   104,    33,    82,   104,   125,   126,   127,   128,   174,
     137,   104,   174,    88,    79,    82,   125,   104,    81,    81,
     174,   255,    79,    87,   156,   156,   156,   156,   160,   160,
     161,   161,   162,   162,   162,   162,   163,   163,   164,   165,
     166,   167,   170,   168,   174,    82,    82,    79,    85,    82,
      81,   101,   177,   206,   101,    79,   104,   101,    82,    82,
     125,   137,    82,   180,   180,   219,    82,    82,    82,    82,
     156,   156,    82,   133,   124,   174,    80,    79,    82,   128,
      85,   174,   189,   270,   188,    82,    82,   125,    82,   125,
      87,   247,    80,   174,   177,    82,   207,   208,   101,   101,
     206,   192,    22,   179,    86,   144,   145,   149,    82,    85,
      86,   196,   179,   179,   156,   126,    82,    82,   174,    82,
     179,    82,    82,   207,    82,   207,   101,   174,     4,    86,
      87,   104,   146,   147,   150,   151,   175,   144,   269,   270,
       8,    14,    87,   197,   198,   199,   200,   101,   179,   179,
      82,   179,    82,    82,   207,    82,   179,   137,    88,    79,
      87,    79,    87,   270,   176,    80,    87,   198,    14,   181,
     200,   179,   179,   179,    82,   179,    87,   144,   148,   174,
      87,   104,   147,    87,   151,    80,   179
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   102,   103,   104,   105,   105,   105,   105,   105,   106,
     106,   107,   107,   108,   109,   109,   110,   111,   112,   113,
     114,   115,   115,   116,   116,   117,   117,   117,   118,   118,
     118,   119,   120,   120,   120,   120,   120,   121,   122,   123,
     123,   124,   125,   125,   126,   126,   127,   128,   128,   129,
     129,   129,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   131,   133,   132,   132,   132,   134,   134,   134,   134,
     134,   134,   134,   134,   135,   135,   135,   135,   136,   137,
     137,   138,   139,   139,   140,   140,   140,   140,   141,   142,
     143,   143,   143,   143,   144,   144,   145,   145,   145,   146,
     146,   147,   148,   148,   149,   149,   150,   150,   151,   151,
     152,   152,   152,   152,   152,   152,   153,   153,   154,   155,
     155,   155,   155,   156,   156,   156,   156,   156,   157,   158,
     159,   159,   159,   159,   160,   160,   160,   160,   161,   161,
     161,   162,   162,   162,   163,   163,   163,   163,   163,   164,
     164,   164,   165,   165,   166,   166,   167,   167,   168,   168,
     169,   169,   170,   170,   171,   171,   172,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   174,   174,
     175,   176,   177,   178,   178,   178,   179,   179,   179,   179,
     179,   179,   179,   179,   180,   180,   181,   181,   182,   183,
     184,   184,   185,   186,   187,   187,   188,   188,   189,   189,
     190,   191,   192,   192,   192,   192,   192,   192,   192,   193,
     193,   194,   194,   195,   196,   196,   197,   197,   198,   199,
     199,   200,   200,   201,   201,   201,   201,   202,   203,   204,
     204,   204,   204,   204,   204,   204,   204,   205,   205,   206,
     207,   208,   208,   209,   210,   210,   210,   210,   210,   211,
     212,   213,   213,   213,   214,   214,   215,   215,   216,   216,
     216,   217,   218,   219,   220,   221,   221,   222,   222,   222,
     222,   223,   223,   224,   224,   225,   225,   225,   225,   226,
     226,   227,   227,   228,   229,   230,   230,   231,   231,   232,
     232,   233,   234,   234,   234,   234,   234,   234,   234,   234,
     235,   235,   236,   236,   236,   236,   237,   238,   238,   239,
     239,   240,   240,   240,   240,   240,   240,   241,   241,   242,
     242,   243,   244,   244,   245,   245,   246,   246,   247,   247,
     248,   249,   249,   249,   249,   249,   249,   249,   249,   250,
     251,   251,   252,   252,   252,   253,   253,   254,   254,   254,
     254,   255,   256,   256,   257,   258,   258,   259,   259,   259,
     259,   260,   260,   260,   260,   261,   261,   262,   263,   263,
     264,   264,   264,   264,   265,   265,   266,   266,   267,   267,
     267,   267,   267,   268,   269,   269,   270,   270,   270,   271,
     271,   272
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       1,     1,     1,     3,     1,     2,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     0,     4,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     4,     3,     4,     4,     1,
       3,     1,     3,     4,     1,     1,     1,     1,     2,     2,
       4,     5,     5,     6,     1,     1,     2,     3,     4,     1,
       3,     3,     1,     1,     3,     4,     1,     3,     1,     3,
       5,     6,     6,     7,     3,     3,     4,     4,     4,     1,
       2,     2,     1,     1,     2,     2,     1,     1,     2,     2,
       2,     5,     4,     4,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     5,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     3,     1,     2,     1,     3,
       2,     2,     2,     1,     1,     3,     1,     3,     1,     1,
       3,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     5,     7,     5,     2,     3,     1,     2,     2,     1,
       2,     3,     2,     1,     1,     1,     1,     5,     7,     6,
       7,     7,     7,     8,     8,     8,     9,     1,     1,     1,
       1,     1,     3,     8,     1,     1,     1,     1,     1,     2,
       2,     3,     4,     3,     2,     3,     2,     3,     3,     3,
       4,     1,     2,     2,     5,     1,     1,     2,     1,     1,
       1,     3,     4,     1,     3,     2,     3,     3,     4,     1,
       2,     1,     1,     5,     3,     1,     2,     1,     1,     1,
       1,     3,     3,     4,     4,     4,     5,     5,     5,     6,
       1,     2,     1,     1,     1,     1,     2,     2,     3,     1,
       2,     1,     1,     1,     1,     1,     1,     4,     5,     1,
       3,     3,     3,     4,     1,     3,     1,     3,     1,     1,
       2,     4,     5,     5,     6,     4,     5,     5,     6,     1,
       1,     1,     1,     3,     1,     1,     3,     2,     3,     3,
       4,     2,     1,     1,     3,     2,     3,     3,     4,     4,
       5,     4,     5,     4,     5,     1,     1,     5,     1,     1,
       3,     4,     4,     5,     2,     3,     1,     2,     1,     1,
       1,     1,     1,     2,     2,     3,     2,     3,     4,     1,
       3,     0
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
#line 37 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("start compilation_unit\n"); }
#line 2546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 41 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("identifier ID\n"); }
#line 2552 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 45 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("literal boolean_literal\n"); }
#line 2558 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 46 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("literal integer_literal\n"); }
#line 2564 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 47 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("literal character_literal\n"); }
#line 2570 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 48 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("literal string_literal\n"); }
#line 2576 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 49 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("literal null_literal\n"); }
#line 2582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 51 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("boolean_literal TRUE\n"); }
#line 2588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 52 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("boolean_literal FALSE\n"); }
#line 2594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 54 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("integer_literal DINT_LITERAL\n"); }
#line 2600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 55 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("integer_literal HDINT_LITERAL\n"); }
#line 2606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 58 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("character_literal CHAR_LITERAL\n"); }
#line 2612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 66 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("string_literal REG_STR_LITERAL\n"); }
#line 2618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 67 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("string_literal VER_STR_LITERAL\n"); }
#line 2624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 70 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("null_literal NULL_LIT\n"); }
#line 2630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 74 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("right_shift RSHIFT\n"); }
#line 2636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 76 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("right_shift_assignment RSHIFTEQ\n"); }
#line 2642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 80 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("namespace_name namespace_or_type_name\n"); }
#line 2648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 82 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("type_name namespace_or_type_name\n"); }
#line 2654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 84 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("namespace_or_type_name qualified_identifier\n"); }
#line 2660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 85 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("namespace_or_type_name qualified_alias_member\n"); }
#line 2666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 89 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("type non_array_type\n"); }
#line 2672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 90 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("type array_type\n"); }
#line 2678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 92 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("non_array_type type_name\n"); }
#line 2684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 93 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("non_array_type simple_type\n"); }
#line 2690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 94 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("non_array_type nullable_type\n"); }
#line 2696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 96 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("simple_type numeric_type\n"); }
#line 2702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 97 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("simple_type class_type\n"); }
#line 2708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 98 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("simple_type BOOL\n"); }
#line 2714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 100 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("numeric_type integral_type\n"); }
#line 2720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 102 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("integral_type INT\n"); }
#line 2726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 103 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("integral_type UINT\n"); }
#line 2732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 104 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("integral_type LONG\n"); }
#line 2738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 105 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("integral_type ULONG\n"); }
#line 2744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 106 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("integral_type CHAR\n"); }
#line 2750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 108 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("nullable_type non_nullable_value_type ?\n"); }
#line 2756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 110 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("non_nullable_value_type simple_type\n"); }
#line 2762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 114 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("class_type OBJECT\n"); }
#line 2768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 115 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("class_type STRING\n"); }
#line 2774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 119 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("variable_reference expression\n"); }
#line 2780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 123 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("argument_list argument\n"); }
#line 2786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 124 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("argument_list argument_list , argument\n"); }
#line 2792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 126 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("argument argument_value\n"); }
#line 2798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 127 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("argument argument_name argument_value\n"); }
#line 2804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 129 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("argument_name identifier :\n"); }
#line 2810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 131 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("argument_value expression\n"); }
#line 2816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 132 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("argument_value REF variable_reference\n"); }
#line 2822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 134 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("primary_expression primary_no_array_creation_expression\n"); }
#line 2828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 135 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("primary_expression array_creation_expression\n"); }
#line 2834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 136 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("primary_expression parenthesized_expression\n"); }
#line 2840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 138 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("primary_no_array_creation_expression literal\n"); }
#line 2846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 139 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("primary_no_array_creation_expression member_access\n"); }
#line 2852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 140 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("primary_no_array_creation_expression invocation_expression\n"); }
#line 2858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 141 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("primary_no_array_creation_expression element_access\n"); }
#line 2864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 142 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("primary_no_array_creation_expression this_access\n"); }
#line 2870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 143 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("primary_no_array_creation_expression base_access\n"); }
#line 2876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 144 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("primary_no_array_creation_expression object_creation_expression\n"); }
#line 2882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 145 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("primary_no_array_creation_expression typeof_expression\n"); }
#line 2888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 146 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("primary_no_array_creation_expression default_value_expression\n"); }
#line 2894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 149 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("parenthesized_expression ( expression )\n"); }
#line 2900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 151 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("member_access primary_expression . identifier\n"); }
#line 2906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 152 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("member_access \n"); }
#line 2912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 153 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("member_access predefined_type . identifier\n"); }
#line 2918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 154 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("member_access qualified_alias_member . identifier\n"); }
#line 2924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 156 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("predefined_type BOOL\n"); }
#line 2930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 157 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("predefined_type CHAR\n"); }
#line 2936 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 158 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("predefined_type INT\n"); }
#line 2942 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 159 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("predefined_type LONG\n"); }
#line 2948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 160 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("predefined_type OBJECT\n"); }
#line 2954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 161 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("predefined_type STRING\n"); }
#line 2960 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 162 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("predefined_type UINT\n"); }
#line 2966 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 163 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("predefined_type ULONG\n"); }
#line 2972 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 165 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("invocation_expression primary_no_array_creation_expression ( )\n"); }
#line 2978 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 166 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("invocation_expression primary_no_array_creation_expression ( argument_list )\n"); }
#line 2984 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 167 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("invocation_expression qualified_identifier ( )\n"); }
#line 2990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 168 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("invocation_expression qualified_identifier ( argument_list )\n"); }
#line 2996 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 170 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("element_access primary_no_array_creation_expression [ expression_list ]\n"); }
#line 3002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 172 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("expression_list expression\n"); }
#line 3008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 173 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("expression_list expression_list , expression\n"); }
#line 3014 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 175 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("this_access THIS\n"); }
#line 3020 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 177 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("base_access BASE . identifier\n"); }
#line 3026 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 178 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("base_access BASE [ expression_list ]\n"); }
#line 3032 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 180 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("postfix_expression primary_expression\n"); }
#line 3038 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 181 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("postfix_expression qualified_identifier\n"); }
#line 3044 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 182 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("postfix_expression post_increment_expression\n"); }
#line 3050 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 183 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("postfix_expression post_decrement_expression\n"); }
#line 3056 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 185 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("post_increment_expression postfix_expression INCR\n"); }
#line 3062 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 187 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("post_decrement_expression postfix_expression DECR\n"); }
#line 3068 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 189 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("object_creation_expression NEW type ( )\n"); }
#line 3074 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 190 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("object_creation_expression NEW type ( argument_list )\n"); }
#line 3080 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 191 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("object_creation_expression NEW type ( ) object_or_collection_initializer\n"); }
#line 3086 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 192 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("object_creation_expression NEW type ( argument_list ) object_or_collection_initializer\n"); }
#line 3092 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 194 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("object_or_collection_initializer object_initializer\n"); }
#line 3098 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 195 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("object_or_collection_initializer collection_initializer\n"); }
#line 3104 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 197 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("object_initializer { }\n"); }
#line 3110 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 198 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("object_initializer { member_initializer_list }\n"); }
#line 3116 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 199 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("object_initializer { member_initializer_list , }\n"); }
#line 3122 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 201 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("member_initializer_list member_initializer\n"); }
#line 3128 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 202 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("member_initializer_list member_initializer_list , member_initializer\n"); }
#line 3134 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 204 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("member_initializer identifier = initializer_value\n"); }
#line 3140 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 206 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("initializer_value expression\n"); }
#line 3146 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 207 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("initializer_value object_or_collection_initializer\n"); }
#line 3152 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 209 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("collection_initializer { element_initializer_list }\n"); }
#line 3158 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 210 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("collection_initializer { element_initializer_list , }\n"); }
#line 3164 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 212 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("element_initializer_list element_initializer\n"); }
#line 3170 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 213 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("element_initializer_list element_initializer_list , element_initializer\n"); }
#line 3176 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 215 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("element_initializer non_assignment_expression\n"); }
#line 3182 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 216 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("element_initializer { expression_list }\n"); }
#line 3188 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 218 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("array_creation_expression NEW non_array_type [ expression_list ]\n"); }
#line 3194 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 219 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("array_creation_expression NEW non_array_type [ expression_list ] rank_specifier\n"); }
#line 3200 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 220 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("array_creation_expression NEW non_array_type [ expression_list ] array_initializer\n"); }
#line 3206 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 221 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("array_creation_expression NEW non_array_type [ expression_list ] rank_specifier array_initializer\n"); }
#line 3212 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 222 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("array_creation_expression NEW array_type array_initializer\n"); }
#line 3218 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 223 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("array_creation_expression NEW rank_specifier array_initializer\n"); }
#line 3224 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 226 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("typeof_expression TYPEOF ( type )\n"); }
#line 3230 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 227 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("typeof_expression TYPEOF ( VOID )\n"); }
#line 3236 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 229 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("default_value_expression DEFAULT ( type )\n"); }
#line 3242 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 231 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("unary_expression_not_plusminus postfix_expression\n"); }
#line 3248 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 232 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("unary_expression_not_plusminus ! unary_expression\n"); }
#line 3254 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 233 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("unary_expression_not_plusminus ~ unary_expression\n"); }
#line 3260 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 234 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("unary_expression_not_plusminus cast_expression\n"); }
#line 3266 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 236 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("unary_expression unary_expression_not_plusminus\n"); }
#line 3272 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 237 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("unary_expression + unary_expression\n"); }
#line 3278 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 238 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("unary_expression - unary_expression\n"); }
#line 3284 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 239 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("unary_expression pre_increment_expression\n"); }
#line 3290 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 240 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("unary_expression pre_decrement_expression\n"); }
#line 3296 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 242 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("pre_increment_expression INCR unary_expression\n"); }
#line 3302 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 244 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("pre_decrement_expression DECR unary_expression\n"); }
#line 3308 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 246 "src/asgn3.ypp" /* yacc.c:1646  */
    {printf("cast_expression parenthesized_expression unary_expression_not_plusminus\n"); }
#line 3314 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 247 "src/asgn3.ypp" /* yacc.c:1646  */
    {printf("cast_expression ( qualified_identifier rank_specifier ) unary_expression\n"); }
#line 3320 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 248 "src/asgn3.ypp" /* yacc.c:1646  */
    {printf("cast_expression ( simple_type ) unary_expression\n"); }
#line 3326 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 249 "src/asgn3.ypp" /* yacc.c:1646  */
    {printf("cast_expression ( VOID ) unary_expression\n"); }
#line 3332 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 252 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("multiplicative_expression unary_expression\n"); }
#line 3338 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 253 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("multiplicative_expression multiplicative_expression * unary_expression\n"); }
#line 3344 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 254 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("multiplicative_expression multiplicative_expression / unary_expression\n"); }
#line 3350 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 255 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("multiplicative_expression multiplicative_expression %% unary_expression\n"); }
#line 3356 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 257 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("additive_expression multiplicative_expression\n"); }
#line 3362 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 258 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("additive_expression additive_expression + multiplicative_expression\n"); }
#line 3368 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 259 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("additive_expression additive_expression - multiplicative_expression\n"); }
#line 3374 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 261 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("shift_expression additive_expression\n"); }
#line 3380 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 262 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("shift_expression shift_expression LSHIFT additive_expression\n"); }
#line 3386 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 263 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("shift_expression shift_expression right_shift additive_expression\n"); }
#line 3392 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 265 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("relational_expression shift_expression\n"); }
#line 3398 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 266 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("relational_expression relational_expression < shift_expression\n"); }
#line 3404 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 267 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("relational_expression relational_expression > shift_expression\n"); }
#line 3410 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 268 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("relational_expression relational_expression LE shift_expression\n"); }
#line 3416 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 269 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("relational_expression relational_expression GE shift_expression\n"); }
#line 3422 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 271 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("equality_expression relational_expression\n"); }
#line 3428 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 272 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("equality_expression equality_expression REQ relational_expression\n"); }
#line 3434 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 273 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("equality_expression equality_expression RNE relational_expression\n"); }
#line 3440 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 275 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("and_expression equality_expression\n"); }
#line 3446 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 276 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("and_expression and_expression & equality_expression\n"); }
#line 3452 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 278 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("exclusive_or_expression and_expression\n"); }
#line 3458 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 279 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("exclusive_or_expression exclusive_or_expression ^ and_expression\n"); }
#line 3464 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 281 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("inclusive_or_expression exclusive_or_expression\n"); }
#line 3470 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 282 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("inclusive_or_expression inclusive_or_expression | exclusive_or_expression\n"); }
#line 3476 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 284 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("conditional_and_expression inclusive_or_expression\n"); }
#line 3482 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 285 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("conditional_and_expression conditional_and_expression RAND inclusive_or_expression\n"); }
#line 3488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 287 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("conditional_or_expression conditional_and_expression\n"); }
#line 3494 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 288 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("conditional_or_expression conditional_or_expression ROR conditional_and_expression\n"); }
#line 3500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 290 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("null_coalescing_expression conditional_or_expression\n"); }
#line 3506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 291 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("null_coalescing_expression conditional_or_expression DQM null_coalescing_expression\n"); }
#line 3512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 293 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("conditional_expression null_coalescing_expression\n"); }
#line 3518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 294 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("| null_coalescing_expression ? expression : expression\n"); }
#line 3524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 296 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("assignment unary_expression assignment_operator expression\n"); }
#line 3530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 298 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("assignment_operator =\n"); }
#line 3536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 299 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("assignment_operator APLUS\n"); }
#line 3542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 300 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("assignment_operator AMINUS\n"); }
#line 3548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 301 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("assignment_operator AMULT\n"); }
#line 3554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 302 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("assignment_operator ADIV\n"); }
#line 3560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 303 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("assignment_operator AMOD\n"); }
#line 3566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 304 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("assignment_operator AAND\n"); }
#line 3572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 305 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("assignment_operator AOR\n"); }
#line 3578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 306 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("assignment_operator ACARET\n"); }
#line 3584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 307 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("assignment_operator LSHIFTEQ\n"); }
#line 3590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 308 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("assignment_operator right_shift_assignment\n"); }
#line 3596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 310 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("expression non_assignment_expression\n"); }
#line 3602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 311 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("expression assignment\n"); }
#line 3608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 313 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("non_assignment_expression conditional_expression\n"); }
#line 3614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 315 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("constant_expression expression\n"); }
#line 3620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 317 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("boolean_expression expression\n"); }
#line 3626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 321 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("statement labeled_statement\n"); }
#line 3632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 322 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("statement declaration_statement\n"); }
#line 3638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 323 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("statement embedded_statement\n"); }
#line 3644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 325 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("embedded_statement block\n"); }
#line 3650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 326 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("embedded_statement empty_statement\n"); }
#line 3656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 327 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("embedded_statement expression_statement\n"); }
#line 3662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 328 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("embedded_statement selection_statement\n"); }
#line 3668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 329 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("embedded_statement iteration_statement\n"); }
#line 3674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 330 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("embedded_statement jump_statement\n"); }
#line 3680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 331 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("embedded_statement try_statement\n"); }
#line 3686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 332 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("embedded_statement using_statement\n"); }
#line 3692 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 334 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("block { }\n"); }
#line 3698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 335 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("block { statement_list }\n"); }
#line 3704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 337 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("statement_list statement\n"); }
#line 3710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 338 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("statement_list statement_list statement\n"); }
#line 3716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 340 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("empty_statement ;\n"); }
#line 3722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 342 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("labeled_statement identifier : statement\n"); }
#line 3728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 344 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("declaration_statement local_variable_declaration ;\n"); }
#line 3734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 345 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("declaration_statement local_constant_declaration ;\n"); }
#line 3740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 347 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("local_variable_declaration local_variable_type local_variable_declarators\n"); }
#line 3746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 349 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("local_variable_type type\n"); }
#line 3752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 351 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("local_variable_declarators local_variable_declarator\n"); }
#line 3758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 352 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("local_variable_declarators local_variable_declarators , local_variable_declarator\n"); }
#line 3764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 354 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("local_variable_declarator identifier\n"); }
#line 3770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 355 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("local_variable_declarator identifier = local_variable_initializer\n"); }
#line 3776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 357 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("local_variable_initializer expression\n"); }
#line 3782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 358 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("local_variable_initializer array_initializer\n"); }
#line 3788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 360 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("local_constant_declaration CONST type constant_declarators\n"); }
#line 3794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 362 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("expression_statement statement_expression ;\n"); }
#line 3800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 364 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("statement_expression invocation_expression\n"); }
#line 3806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 365 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("statement_expression object_creation_expression\n"); }
#line 3812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 366 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("statement_expression assignment\n"); }
#line 3818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 367 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("statement_expression post_increment_expression\n"); }
#line 3824 "y.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 368 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("statement_expression post_decrement_expression\n"); }
#line 3830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 369 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("statement_expression pre_increment_expression\n"); }
#line 3836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 370 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("statement_expression pre_decrement_expression\n"); }
#line 3842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 372 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("selection_statement if_statement\n"); }
#line 3848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 373 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("selection_statement switch_statement\n"); }
#line 3854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 375 "src/asgn3.ypp" /* yacc.c:1646  */
    {printf("if_statement IF ( boolean_expression ) embedded_statement\n"); }
#line 3860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 376 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("if_statement IF ( boolean_expression ) embedded_statement ELSE embedded_statement\n"); }
#line 3866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 378 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("switch_statement SWITCH ( expression ) switch_block\n"); }
#line 3872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 380 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("switch_block { }\n"); }
#line 3878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 381 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("switch_block { switch_sections }\n"); }
#line 3884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 383 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("switch_sections switch_section\n"); }
#line 3890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 384 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("switch_sections switch_sections switch_section\n"); }
#line 3896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 386 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("switch_section switch_labels statement_list\n"); }
#line 3902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 388 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("switch_labels switch_label\n"); }
#line 3908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 389 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("switch_labels switch_labels switch_label\n"); }
#line 3914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 391 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("switch_label CASE constant_expression :\n"); }
#line 3920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 392 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("| DEFAULT :\n"); }
#line 3926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 394 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("iteration_statement while_statement\n"); }
#line 3932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 395 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("iteration_statement do_statement\n"); }
#line 3938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 396 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("iteration_statement for_statement\n"); }
#line 3944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 397 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("iteration_statement foreach_statement\n"); }
#line 3950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 399 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("while_statement WHILE ( boolean_expression ) embedded_statement\n"); }
#line 3956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 401 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("do_statement DO embedded_statement WHILE ( boolean_expression ) ;\n"); }
#line 3962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 403 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("for_statement FOR ( ; ; ) embedded_statement\n"); }
#line 3968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 404 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("for_statement FOR ( for_initializer ; ; ) embedded_statement\n"); }
#line 3974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 405 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("for_statement FOR ( ; for_condition ; ) embedded_statement\n"); }
#line 3980 "y.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 406 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("for_statement FOR ( ; ; for_iterator ) embedded_statement\n"); }
#line 3986 "y.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 407 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("for_statement FOR ( for_initializer ; for_condition ; ) embedded_statement\n"); }
#line 3992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 408 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("for_statement FOR ( for_initializer ; ; for_iterator ) embedded_statement\n"); }
#line 3998 "y.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 409 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("for_statement FOR ( ; for_condition ; for_iterator ) embedded_statement\n"); }
#line 4004 "y.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 410 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("for_statement FOR ( for_initializer ; for_condition ; for_iterator ) embedded_statement\n"); }
#line 4010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 412 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("for_initializer local_variable_declaration\n"); }
#line 4016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 413 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("for_initializer statement_expression_list\n"); }
#line 4022 "y.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 415 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("for_condition boolean_expression\n"); }
#line 4028 "y.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 417 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("for_iterator statement_expression_list\n"); }
#line 4034 "y.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 419 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("statement_expression_list statement_expression\n"); }
#line 4040 "y.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 420 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("statement_expression_list statement_expression_list , statement_expression\n"); }
#line 4046 "y.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 422 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("foreach_statement FOREACH ( local_variable_type identifier IN expression ) embedded_statement\n"); }
#line 4052 "y.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 424 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("jump_statement break_statement\n"); }
#line 4058 "y.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 425 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("jump_statement continue_statement\n"); }
#line 4064 "y.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 426 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("jump_statement goto_statement\n"); }
#line 4070 "y.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 427 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("jump_statement return_statement\n"); }
#line 4076 "y.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 428 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("jump_statement throw_statement\n"); }
#line 4082 "y.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 430 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("break_statement BREAK ;\n"); }
#line 4088 "y.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 432 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("continue_statement CONTINUE ;\n"); }
#line 4094 "y.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 434 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("goto_statement GOTO identifier ;\n"); }
#line 4100 "y.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 435 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("goto_statement GOTO CASE constant_expression ;\n"); }
#line 4106 "y.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 436 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("goto_statement GOTO DEFAULT ;\n"); }
#line 4112 "y.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 438 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("return_statement RETURN ;\n"); }
#line 4118 "y.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 439 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("return_statement RETURN expression ;\n"); }
#line 4124 "y.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 441 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("throw_statement THROW ;\n"); }
#line 4130 "y.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 442 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("throw_statement THROW expression ;\n"); }
#line 4136 "y.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 444 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("try_statement TRY block catch_clauses\n"); }
#line 4142 "y.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 445 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("try_statement TRY block finally_clause\n"); }
#line 4148 "y.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 446 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("try_statement TRY block catch_clauses finally_clause\n"); }
#line 4154 "y.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 448 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("catch_clauses general_catch_clause\n"); }
#line 4160 "y.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 450 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("general_catch_clause CATCH block\n"); }
#line 4166 "y.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 452 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("finally_clause FINALLY block\n"); }
#line 4172 "y.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 454 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("using_statement USING ( resource_acquisition ) embedded_statement\n"); }
#line 4178 "y.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 456 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("resource_acquisition local_variable_declaration\n"); }
#line 4184 "y.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 457 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("resource_acquisition expression\n"); }
#line 4190 "y.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 461 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("compilation_unit using_directives namespace_member_declarations\n"); }
#line 4196 "y.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 462 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("compilation_unit namespace_member_declarations\n"); }
#line 4202 "y.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 463 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("compilation_unit using_directives\n"); }
#line 4208 "y.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 464 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("compilation_unit epsilon\n"); }
#line 4214 "y.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 466 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("namespace_declaration NAMESPACE qualified_identifier namespace_body\n"); }
#line 4220 "y.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 467 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("namespace_declaration NAMESPACE qualified_identifier namespace_body ;\n"); }
#line 4226 "y.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 469 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("qualified_identifier identifier\n"); }
#line 4232 "y.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 470 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("qualified_identifier qualified_identifier . identifier\n"); }
#line 4238 "y.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 472 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("namespace_body { }\n"); }
#line 4244 "y.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 473 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("namespace_body { namespace_member_declarations }\n"); }
#line 4250 "y.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 474 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("namespace_body { using_directives }\n"); }
#line 4256 "y.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 475 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("namespace_body { using_directives namespace_member_declarations }\n"); }
#line 4262 "y.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 477 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("using_directives using_directive\n"); }
#line 4268 "y.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 478 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("using_directives using_directives using_directive\n"); }
#line 4274 "y.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 480 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("using_directive using_alias_directive\n"); }
#line 4280 "y.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 481 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("using_directive using_namespace_directive\n"); }
#line 4286 "y.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 483 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("using_alias_directive USING identifier = namespace_or_type_name ;\n"); }
#line 4292 "y.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 485 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("using_namespace_directive USING namespace_name ;\n"); }
#line 4298 "y.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 487 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("namespace_member_declarations namespace_member_declaration\n"); }
#line 4304 "y.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 488 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("namespace_member_declarations namespace_member_declarations namespace_member_declaration\n"); }
#line 4310 "y.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 490 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("namespace_member_declaration namespace_declaration\n"); }
#line 4316 "y.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 491 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("namespace_member_declaration type_declaration\n"); }
#line 4322 "y.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 493 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("type_declaration class_declaration\n"); }
#line 4328 "y.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 494 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("type_declaration struct_declaration\n"); }
#line 4334 "y.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 496 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("qualified_alias_member identifier DCLN identifier\n"); }
#line 4340 "y.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 500 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("class_declaration CLASS identifier class_body\n"); }
#line 4346 "y.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 501 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("class_declaration modifiers CLASS identifier class_body\n"); }
#line 4352 "y.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 502 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("class_declaration CLASS identifier class_base class_body\n"); }
#line 4358 "y.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 503 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("class_declaration CLASS identifier class_body ;\n"); }
#line 4364 "y.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 504 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("class_declaration modifiers CLASS identifier class_base class_body\n"); }
#line 4370 "y.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 505 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("class_declaration modifiers CLASS identifier class_body ;\n"); }
#line 4376 "y.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 506 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("class_declaration CLASS identifier class_base class_body ;\n"); }
#line 4382 "y.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 507 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("class_declaration modifiers CLASS identifier class_base class_body ;\n"); }
#line 4388 "y.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 509 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("modifiers modifier\n"); }
#line 4394 "y.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 510 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("modifiers modifiers modifier\n"); }
#line 4400 "y.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 512 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("modifier NEW\n"); }
#line 4406 "y.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 513 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("modifier PUBLIC\n"); }
#line 4412 "y.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 514 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("modifier PROTECTED\n"); }
#line 4418 "y.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 515 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("modifier PRIVATE\n"); }
#line 4424 "y.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 517 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("class_base : class_type\n"); }
#line 4430 "y.tab.c" /* yacc.c:1646  */
    break;

  case 317:
#line 519 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("class_body { }\n"); }
#line 4436 "y.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 520 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("class_body { class_member_declarations }\n"); }
#line 4442 "y.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 522 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("class_member_declarations class_member_declaration\n"); }
#line 4448 "y.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 523 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("class_member_declarations class_member_declarations class_member_declaration\n"); }
#line 4454 "y.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 525 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("class_member_declaration constant_declaration\n"); }
#line 4460 "y.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 526 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("class_member_declaration field_declaration\n"); }
#line 4466 "y.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 527 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("class_member_declaration method_declaration\n"); }
#line 4472 "y.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 528 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("class_member_declaration constructor_declaration\n"); }
#line 4478 "y.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 529 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("class_member_declaration destructor_declaration\n"); }
#line 4484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 530 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("class_member_declaration type_declaration\n"); }
#line 4490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 532 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("constant_declaration CONST type constant_declarators ;\n"); }
#line 4496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 533 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("constant_declaration modifiers CONST type constant_declarators ;\n"); }
#line 4502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 536 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("constant_declarators constant_declarator\n"); }
#line 4508 "y.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 537 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("constant_declarators constant_declarators , constant_declarator\n"); }
#line 4514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 539 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("constant_declarator identifier = constant_expression\n"); }
#line 4520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 541 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("field_declaration type variable_declarators ;\n"); }
#line 4526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 542 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("field_declaration modifiers type variable_declarators ;\n"); }
#line 4532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 545 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("variable_declarators variable_declarator\n"); }
#line 4538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 546 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("variable_declarators variable_declarators , variable_declarator\n"); }
#line 4544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 548 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("variable_declarator identifier\n"); }
#line 4550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 338:
#line 550 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("variable_initializer expression\n"); }
#line 4556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 339:
#line 551 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("variable_initializer array_initializer\n"); }
#line 4562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 340:
#line 553 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("method_declaration method_header method_body\n"); }
#line 4568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 341:
#line 555 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("method_header type member_name ( )\n"); }
#line 4574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 556 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("method_header modifiers type member_name ( )\n"); }
#line 4580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 343:
#line 557 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("method_header type member_name ( formal_parameter_list )\n"); }
#line 4586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 558 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("method_header modifiers type member_name ( formal_parameter_list )\n"); }
#line 4592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 559 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("method_header VOID member_name ( )\n"); }
#line 4598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 346:
#line 560 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("method_header modifiers VOID member_name ( )\n"); }
#line 4604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 347:
#line 561 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("method_header VOID member_name ( formal_parameter_list )\n"); }
#line 4610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 348:
#line 562 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("method_header modifiers VOID member_name ( formal_parameter_list )\n"); }
#line 4616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 565 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("member_name qualified_identifier\n"); }
#line 4622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 350:
#line 567 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("method_body block\n"); }
#line 4628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 351:
#line 568 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("method_body ;\n"); }
#line 4634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 352:
#line 570 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("formal_parameter_list fixed_parameters\n"); }
#line 4640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 353:
#line 571 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("formal_parameter_list fixed_parameters , parameter_array\n"); }
#line 4646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 354:
#line 572 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("formal_parameter_list parameter_array\n"); }
#line 4652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 355:
#line 574 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("fixed_parameters fixed_parameter\n"); }
#line 4658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 356:
#line 575 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("fixed_parameters fixed_parameters , fixed_parameter\n"); }
#line 4664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 357:
#line 577 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("fixed_parameter type identifier\n"); }
#line 4670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 578 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("fixed_parameter parameter_modifier type identifier\n"); }
#line 4676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 579 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("fixed_parameter type identifier default_argument\n"); }
#line 4682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 580 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("fixed_parameter parameter_modifier type identifier default_argument\n"); }
#line 4688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 582 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("default_argument = expression\n"); }
#line 4694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 362:
#line 584 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("parameter_modifier REF\n"); }
#line 4700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 363:
#line 585 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("parameter_modifier THIS\n"); }
#line 4706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 587 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("parameter_array PARAMS array_type identifier\n"); }
#line 4712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 365:
#line 589 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("constructor_declaration constructor_declarator constructor_body\n"); }
#line 4718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 366:
#line 590 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("constructor_declaration modifiers constructor_declarator constructor_body\n"); }
#line 4724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 367:
#line 593 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("constructor_declarator identifier ( )\n"); }
#line 4730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 368:
#line 594 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("constructor_declarator identifier ( ) constructor_initializer\n"); }
#line 4736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 369:
#line 595 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("constructor_declarator identifier ( formal_parameter_list )\n"); }
#line 4742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 370:
#line 596 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("constructor_declarator identifier ( formal_parameter_list ) constructor_initializer\n"); }
#line 4748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 371:
#line 598 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("constructor_initializer : BASE ( )\n"); }
#line 4754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 372:
#line 599 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("| : BASE ( argument_list )\n"); }
#line 4760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 373:
#line 600 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("| : THIS ( )\n"); }
#line 4766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 374:
#line 601 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("| : THIS ( argument_list )\n"); }
#line 4772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 375:
#line 603 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("constructor_body block\n"); }
#line 4778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 376:
#line 604 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("constructor_body ;\n"); }
#line 4784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 377:
#line 606 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("destructor_declaration ~ identifier ( ) destructor_body\n"); }
#line 4790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 378:
#line 608 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("destructor_body block\n"); }
#line 4796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 379:
#line 609 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("destructor_body ;\n"); }
#line 4802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 380:
#line 613 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("struct_declaration STRUCT identifier struct_body\n"); }
#line 4808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 381:
#line 614 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("struct_declaration modifiers STRUCT identifier struct_body\n"); }
#line 4814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 382:
#line 615 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("struct_declaration STRUCT identifier struct_body ;\n"); }
#line 4820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 383:
#line 616 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("struct_declaration modifiers STRUCT identifier struct_body ;\n"); }
#line 4826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 384:
#line 619 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("struct_body { }\n"); }
#line 4832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 385:
#line 620 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("struct_body { struct_member_declarations }\n"); }
#line 4838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 386:
#line 622 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("struct_member_declarations struct_member_declaration\n"); }
#line 4844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 387:
#line 623 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("struct_member_declarations struct_member_declarations struct_member_declaration\n"); }
#line 4850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 388:
#line 625 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("struct_member_declaration constant_declaration\n"); }
#line 4856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 389:
#line 626 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("struct_member_declaration field_declaration\n"); }
#line 4862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 390:
#line 627 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("struct_member_declaration method_declaration\n"); }
#line 4868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 391:
#line 628 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("struct_member_declaration constructor_declaration\n"); }
#line 4874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 392:
#line 629 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("struct_member_declaration type_declaration\n"); }
#line 4880 "y.tab.c" /* yacc.c:1646  */
    break;

  case 393:
#line 633 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("array_type non_array_type rank_specifier\n"); }
#line 4886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 394:
#line 635 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("rank_specifier [ ]\n"); }
#line 4892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 395:
#line 636 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("rank_specifier [ , ]\n"); }
#line 4898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 396:
#line 638 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("array_initializer { }\n"); }
#line 4904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 397:
#line 639 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("array_initializer { variable_initializer_list }\n"); }
#line 4910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 398:
#line 640 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("array_initializer { variable_initializer_list , }\n"); }
#line 4916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 399:
#line 642 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("variable_initializer_list variable_initializer\n"); }
#line 4922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 400:
#line 643 "src/asgn3.ypp" /* yacc.c:1646  */
    { printf("variable_initializer_list variable_initializer_list , variable_initializer\n"); }
#line 4928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 401:
#line 647 "src/asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4934 "y.tab.c" /* yacc.c:1646  */
    break;


#line 4938 "y.tab.c" /* yacc.c:1646  */
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
#line 650 "src/asgn3.ypp" /* yacc.c:1906  */
	

extern FILE *yyin;

extern void yyerror(char *c){
		cout << "Error at line: " << yylineno << "\n" << c << endl;
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
