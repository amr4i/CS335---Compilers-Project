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
#line 1 "asgn3.ypp" /* yacc.c:339  */

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

	using namespace std;

	extern void yyerror(char *c){
		cout << "Error" << c << endl;
		exit(1);	
	}

	int yylex(void);
	//extern void yyerror(char *); // define it in either of the files
	

#line 91 "y.tab.c" /* yacc.c:339  */

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
#line 26 "asgn3.ypp" /* yacc.c:355  */

	int iVal;
	char* sVal;
	char cVal;	

#line 293 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 310 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  35
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3339

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  103
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  183
/* YYNRULES -- Number of rules.  */
#define YYNRULES  423
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  698

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   333

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    94,     2,     2,     2,    98,    99,     2,
      82,    83,    96,    92,    80,    93,    84,    97,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    81,   102,
      90,    89,    91,    79,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    85,     2,    86,   100,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    87,   101,    88,    95,     2,     2,     2,
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
      75,    76,    77,    78
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    36,    36,    45,    96,    97,    98,    99,   100,   102,
     103,   105,   106,   109,   117,   118,   121,   171,   173,   179,
     181,   183,   184,   188,   189,   191,   193,   194,   195,   197,
     198,   200,   202,   203,   204,   205,   206,   208,   210,   212,
     213,   216,   217,   218,   222,   226,   227,   229,   230,   232,
     234,   235,   237,   238,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   255,   257,
     259,   259,   261,   262,   264,   265,   266,   267,   268,   269,
     270,   271,   273,   274,   276,   278,   279,   281,   283,   284,
     286,   288,   290,   291,   292,   293,   294,   296,   297,   299,
     300,   301,   303,   304,   306,   308,   309,   311,   312,   314,
     315,   317,   318,   320,   321,   322,   323,   324,   325,   327,
     329,   330,   331,   333,   334,   336,   337,   338,   339,   341,
     342,   343,   345,   346,   347,   348,   349,   350,   352,   353,
     355,   356,   358,   360,   361,   362,   363,   364,   365,   366,
     367,   369,   371,   373,   375,   376,   377,   378,   380,   381,
     382,   384,   385,   386,   388,   389,   390,   391,   392,   394,
     395,   396,   398,   399,   401,   402,   404,   405,   407,   408,
     410,   411,   413,   414,   416,   417,   419,   421,   422,   423,
     424,   425,   426,   427,   428,   429,   430,   431,   433,   434,
     436,   438,   440,   444,   445,   446,   448,   449,   450,   451,
     452,   453,   454,   455,   457,   458,   460,   461,   463,   465,
     467,   468,   470,   472,   474,   475,   477,   478,   480,   481,
     483,   485,   487,   488,   489,   490,   491,   492,   493,   495,
     496,   498,   499,   501,   503,   504,   506,   507,   509,   511,
     512,   514,   515,   517,   518,   519,   520,   522,   524,   526,
     527,   528,   529,   530,   531,   532,   533,   535,   536,   538,
     540,   542,   543,   545,   547,   548,   549,   550,   551,   553,
     555,   557,   558,   559,   561,   562,   564,   565,   567,   568,
     569,   571,   573,   575,   577,   579,   580,   584,   585,   586,
     587,   589,   590,   592,   593,   595,   596,   597,   598,   600,
     601,   603,   604,   606,   608,   610,   611,   613,   614,   616,
     617,   619,   623,   624,   625,   626,   627,   628,   629,   630,
     632,   633,   635,   636,   638,   640,   641,   643,   644,   646,
     647,   648,   649,   650,   651,   653,   654,   657,   658,   660,
     662,   663,   666,   667,   669,   670,   671,   672,   674,   676,
     677,   678,   679,   683,   684,   686,   688,   689,   691,   692,
     693,   695,   696,   698,   699,   700,   701,   703,   705,   706,
     708,   710,   711,   713,   714,   716,   717,   718,   720,   721,
     722,   723,   725,   726,   727,   728,   730,   731,   733,   735,
     736,   740,   741,   742,   743,   746,   747,   749,   750,   752,
     753,   754,   755,   756,   760,   762,   764,   765,   767,   768,
     769,   771,   772,   775
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BASE", "BOOL", "BREAK", "CASE", "CATCH",
  "CHAR", "CLASS", "CONST", "CONTINUE", "DEFAULT", "DO", "ELSE", "FALSE",
  "FINALLY", "FOR", "FOREACH", "GOTO", "IF", "IN", "INT", "LONG",
  "NAMESPACE", "NEW", "NULL_LIT", "OBJECT", "PARAMS", "PRIVATE",
  "PROTECTED", "PUBLIC", "REF", "RETURN", "STRING", "STRUCT", "SWITCH",
  "THIS", "THROW", "TRUE", "TRY", "TYPEOF", "UINT", "ULONG", "USING",
  "VOID", "WHILE", "ID", "DINT_LITERAL", "HDINT_LITERAL", "SIMPLE_ESC_SEQ",
  "CHAR_LITERAL", "REG_STR_LITERAL", "VER_STR_LITERAL", "DQM", "DCLN",
  "INCR", "DECR", "RAND", "ROR", "REQ", "RNE", "LE", "GE", "APLUS",
  "AMINUS", "AMULT", "ADIV", "AMOD", "AAND", "AOR", "ACARET", "LSHIFT",
  "LSHIFTEQ", "RSHIFT", "RSHIFTEQ", "NEWLINE", "COMMENT", "WHERE", "'?'",
  "','", "':'", "'('", "')'", "'.'", "'['", "']'", "'{'", "'}'", "'='",
  "'<'", "'>'", "'+'", "'-'", "'!'", "'~'", "'*'", "'/'", "'%'", "'&'",
  "'^'", "'|'", "';'", "$accept", "start", "identifier", "literal",
  "boolean_literal", "integer_literal", "character_literal",
  "string_literal", "null_literal", "right_shift",
  "right_shift_assignment", "namespace_name", "type_name",
  "namespace_or_type_name", "type", "value_type", "struct_type",
  "simple_type", "numeric_type", "integral_type", "nullable_type",
  "non_nullable_value_type", "reference_type", "class_type",
  "variable_reference", "argument_list", "argument", "argument_name",
  "argument_value", "primary_expression",
  "primary_no_array_creation_expression", "simple_name",
  "parenthesized_expression", "member_access", "$@1", "predefined_type",
  "invocation_expression", "element_access", "expression_list",
  "this_access", "base_access", "post_increment_expression",
  "post_decrement_expression", "object_creation_expression",
  "object_or_collection_initializer", "object_initializer",
  "member_initializer_list", "member_initializer", "initializer_value",
  "collection_initializer", "element_initializer_list",
  "element_initializer", "array_creation_expression",
  "anonymous_object_creation_expression", "anonymous_object_initializer",
  "member_declarator_list", "member_declarator", "typeof_expression",
  "unbound_type_name", "generic_dimension_specifier", "commas",
  "default_value_expression", "unary_expression",
  "pre_increment_expression", "pre_decrement_expression",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
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
  "return_type", "member_name", "method_body", "formal_parameter_list",
  "fixed_parameters", "fixed_parameter", "default_argument",
  "parameter_modifier", "parameter_array", "constructor_declaration",
  "constructor_modifiers", "constructor_modifier",
  "constructor_declarator", "constructor_initializer", "constructor_body",
  "destructor_declaration", "destructor_body", "struct_declaration",
  "struct_body", "struct_member_declarations", "struct_member_declaration",
  "array_type", "non_array_type", "rank_specifier", "array_initializer",
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
     325,   326,   327,   328,   329,   330,   331,   332,   333,    63,
      44,    58,    40,    41,    46,    91,    93,   123,   125,    61,
      60,    62,    43,    45,    33,   126,    42,    47,    37,    38,
      94,   124,    59
};
# endif

#define YYPACT_NINF -475

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-475)))

#define YYTABLE_NINF -416

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     322,    55,    55,  -475,  -475,  -475,  -475,    55,    55,   125,
    -475,  -475,   322,  -475,  -475,  -475,   214,  -475,  -475,  -475,
     418,  -475,  -475,  -475,  -475,  -475,   159,  -475,   122,   120,
      48,   161,  -475,   132,  -475,  -475,  -475,   214,  -475,    55,
      55,  -475,   244,   225,   228,   192,    55,   441,   232,  2477,
     287,    55,    55,  -475,   159,   120,  -475,  -475,   272,  -475,
    -475,  -475,  -475,  -475,   857,  -475,  -475,  -475,  -475,  -475,
    -475,    55,     0,  -475,    55,  -475,  -475,   259,  -475,  -475,
    -475,   350,  -475,  -475,  -475,  3292,  2183,  -475,  -475,  -475,
    -475,   155,    55,  -475,   365,  -475,   198,  -475,  -475,   371,
     342,  -475,  -475,  -475,   479,   565,  -475,  -475,  -475,  -475,
    -475,  -475,  -475,  2570,  -475,  -475,  -475,   373,   228,   376,
     395,    55,   402,   265,   407,   -28,  -475,  -475,   857,    55,
      55,  -475,  -475,  1277,  -475,  -475,  -475,   132,   419,   420,
    -475,   198,  -475,  -475,  -475,   236,  -475,  -475,  -475,   613,
    -475,  -475,  -475,  -475,   398,  -475,  -475,   416,    70,  -475,
     423,   857,  -475,  -475,   430,    55,   429,   435,  -475,   857,
    -475,  2627,    55,  -475,    55,   117,   436,   -17,   437,   432,
     452,   857,   443,   455,  1649,  -475,   464,   465,    47,   466,
     468,   470,    54,  -475,   475,  1059,   476,   467,  -475,  1162,
    -475,   474,   481,   484,   485,   488,   490,  -475,  -475,  -475,
    -475,  -475,  3076,  3076,  3138,  -475,  3076,  3076,  3076,  3076,
    -475,   102,  -475,  -475,  -475,  -475,  -475,  -475,   491,   248,
     492,  -475,  -475,  -475,   489,   181,  -475,  -475,  -475,   226,
     231,   262,  -475,  -475,  -475,  -475,   871,   280,   298,  -475,
    -475,  -475,  -475,  -475,  1370,  -475,  -475,  -475,   480,    55,
     482,  -475,   483,  -475,  -475,  -475,  -475,  -475,  -475,  -475,
    -475,  -475,  -475,  -475,  -475,  -475,  -475,  -475,  -475,   494,
     725,  -475,   507,  -475,  -475,  -475,  3076,    55,  -475,   223,
    -475,    55,    34,  -475,   508,   430,  1970,    55,  -475,  -475,
    -475,  -475,  -475,  -475,  -475,  -475,  1928,   272,  -475,  -475,
    -475,  -475,   871,  -475,  -475,   273,   183,   380,   127,   294,
     499,   501,   498,   544,   -10,   525,  -475,  -475,  -475,  -475,
     494,  -475,  -475,  -475,   130,  -475,   886,    55,  3076,  -475,
      55,  -475,   857,   559,  1742,   857,  3076,   505,   506,  3076,
    3200,   364,  -475,   522,   526,   522,  -475,   512,  3076,  -475,
     513,    91,   798,  3138,  3076,  -475,  -475,   114,   527,   533,
    -475,  -475,  -475,  -475,  1556,  -475,  -475,  2021,    55,  3076,
      55,  -475,  -475,  -475,  -475,  -475,  -475,  -475,  -475,  -475,
    -475,  -475,  -475,  3076,  -475,  -475,  -475,   528,   538,  -475,
    -475,  -475,    55,  -475,   536,  -475,  -475,  -475,  -475,  -475,
    -475,  -475,  -475,   541,   546,  3076,  -475,  -475,  -475,  -475,
     508,  -475,  -475,    94,  3076,  3076,  3076,  3076,  3076,  3076,
    -475,  3076,  3076,  3076,  3076,  3076,  3076,  3076,  3076,  3076,
    3076,  3076,  3076,  3076,  3076,  -475,  -475,   543,  -475,   348,
    -475,   550,   549,   551,  1804,  -475,  -475,   532,   555,    55,
     539,  -475,  -475,  -475,   562,  3076,  -475,    63,   248,   123,
     194,   249,   270,  -475,  2085,  2147,  -475,  -475,  -475,  -475,
    2240,  -475,  -475,   563,  -475,   474,   474,   631,  -475,  -475,
     567,    80,   568,   319,  -475,  -475,   569,   571,  3076,  -475,
    -475,  3076,  -475,   112,   182,  -475,  2703,  -475,  -475,  -475,
     355,  -475,  -475,  2627,    55,  -475,  -475,  2315,  2379,  -475,
    -475,  2441,  -475,  -475,  -475,  -475,  -475,   273,   273,   183,
     183,   380,   380,   380,   380,   127,   127,   294,   499,   501,
     498,  -475,   544,   574,  -475,  3076,  -475,  -475,  3076,  2765,
    -475,   554,  1866,  3076,   636,  -475,  1649,  3076,  3242,  -475,
     572,   218,  3076,  -475,    88,   295,  -475,   300,  -475,  -475,
     359,   575,  -475,  -475,  -475,  -475,    55,    39,  -475,  -475,
    -475,    55,  1649,  1649,  -475,  -475,  -475,  -475,  2703,  -475,
    -475,  -475,  -475,  -475,  -475,  -475,  -475,  -475,   310,  -475,
     357,  -475,  -475,  3076,  -475,   581,  1649,   582,   555,  2827,
    2889,   566,  -475,  3076,   653,  -475,  -475,  -475,  -475,   572,
     304,  2951,    52,  -475,  2534,  -475,   394,    17,  -475,   377,
    -475,  -475,   150,   579,  -475,  -475,  -475,  -475,  -475,  -475,
     576,  -475,  1649,  1649,   587,  1649,   591,  3014,   597,  1649,
    -475,  -475,  -475,  -475,  -475,  -475,   592,  -475,  -475,  -475,
     522,  -475,  3076,   602,  -475,    22,  -475,  1463,  -475,  -475,
    -475,  -475,  -475,  -475,  -475,  -475,  1649,  -475,  1649,  1649,
     601,  1649,  -475,  -475,   604,  -475,  -475,  -475,   382,  1556,
    -475,  -475,  -475,  -475,  1649,  -475,  -475,  -475
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     423,     0,     0,   332,   387,   386,   385,     0,     0,     0,
       2,   317,   299,   309,   311,   312,   298,   315,   318,   319,
       0,   330,   333,   320,   300,     3,     0,   303,     0,     0,
     303,     0,    19,    21,    22,     1,   310,   297,   316,     0,
       0,   331,     0,     0,     0,   322,     0,     0,   301,     0,
     401,     0,     0,   314,     0,     0,    42,    43,   303,    41,
      20,   334,    30,    36,     0,    32,    34,    33,    35,   364,
     335,     0,   303,    26,   415,    23,    25,    27,    29,    31,
      28,     0,    24,    39,   344,     0,     0,   337,   339,   340,
     341,     0,     0,   342,     0,   333,     0,   343,    40,     0,
     324,   325,   304,   305,     0,     0,   302,   405,   413,   409,
     410,   411,   412,     0,   407,   403,   321,     0,     0,   323,
     402,   415,     0,     0,   354,     0,   352,    37,     0,   415,
       0,   336,   338,     0,   367,   366,   358,   365,     0,     0,
     384,     0,   397,   396,   381,     0,   414,   328,   307,     0,
     306,   406,   408,   313,   326,   327,   404,     0,     0,   347,
       0,     0,   378,   379,   388,   415,     0,   368,   371,     0,
     370,     0,     0,   350,   415,     0,     0,     0,    30,     0,
      36,     0,     0,     0,     0,    10,     0,     0,     0,     0,
      32,    34,     0,    16,    42,     0,    43,     0,    87,     0,
       9,     0,     0,    33,    35,     0,     0,    11,    12,    13,
      14,    15,     0,     0,     0,   214,     0,     0,     0,     0,
     218,    68,    54,     4,     5,     6,     7,     8,   223,   143,
      52,    55,    56,    57,     0,    58,    59,    60,    61,    62,
      63,    64,    53,    65,    66,    67,     0,   148,   149,   150,
     234,   216,   205,   206,     0,   207,   203,   204,     0,     0,
       0,   208,     0,   209,   239,   240,   210,   253,   254,   255,
     256,   211,   274,   275,   276,   277,   278,   212,   213,    22,
       0,   382,     0,   416,   308,   329,     0,     0,   345,     0,
     415,    40,     0,   389,   373,   390,     0,   415,    74,    75,
      76,    77,    78,    79,    80,    81,     0,    68,    58,    62,
      63,    64,   154,   148,   149,   158,   161,   164,   169,   172,
     174,   176,   178,   180,   182,   184,   200,   199,   356,   198,
       0,   355,   357,   353,     0,   351,     0,     0,     0,   279,
     415,   280,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   415,   119,    40,     0,     0,   284,     0,     0,   286,
       0,     0,     0,     0,     0,   151,   152,    68,   415,     0,
     144,   145,   146,   147,     0,    90,    91,     0,     0,     0,
       0,   188,   189,   190,   191,   192,   193,   194,   195,   196,
      18,   187,   197,     0,   215,   217,   220,   226,   222,   224,
     221,   231,     0,   359,     0,   417,   201,   349,   348,   400,
     399,   398,   380,     0,     0,     0,   375,   391,   372,   369,
     374,   418,   421,     0,     0,     0,     0,     0,     0,     0,
      17,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   346,   360,     0,    88,     0,
      85,   230,   415,     0,     0,   267,   271,     0,   268,     0,
       0,   283,   281,   202,     0,     0,   120,    68,     0,    55,
      57,    61,     0,   123,     0,     0,    96,    97,    98,   117,
       0,   118,   285,     0,   287,     0,     0,   288,   291,   289,
       0,   132,   415,     0,   296,   295,     0,     0,     0,    69,
     219,     0,    82,    68,     0,    45,     0,    47,    50,    70,
       0,    72,   186,     0,     0,    73,   361,     0,     0,   377,
     376,     0,   419,   155,   156,   157,   154,   159,   160,   162,
     163,   167,   168,   165,   166,   170,   171,   173,   175,   177,
     179,   183,   181,     0,   362,     0,    89,   142,     0,     0,
     269,     0,     0,     0,     0,   282,     0,     0,     0,   121,
      92,     0,     0,    99,    68,     0,   102,     0,   109,   111,
       0,     0,   292,   293,   290,   131,     0,     0,   133,   129,
     130,     0,     0,     0,   153,    51,    44,    49,     0,    83,
      48,    71,    84,   228,   227,   229,   225,   392,     0,   394,
       0,   420,   422,     0,    86,     0,     0,     0,   270,     0,
       0,     0,   272,     0,   241,   128,   122,   124,    94,    93,
       0,     0,     0,   100,     0,   107,   113,     0,   243,   134,
     140,   138,     0,   136,   294,   257,    46,   393,   395,   185,
       0,   259,     0,     0,     0,     0,     0,     0,     0,     0,
      95,   112,   106,   104,   105,   101,     0,   103,   108,   110,
     114,   115,     0,     0,   244,     0,   246,     0,   249,   135,
     141,   139,   137,   258,   262,   261,     0,   260,     0,     0,
       0,     0,   242,   116,     0,   252,   245,   247,     0,   248,
     250,   265,   264,   263,     0,   273,   251,   266
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -475,  -475,    -1,  -475,  -475,  -475,  -475,  -475,  -475,  -475,
    -475,  -475,   645,    38,   936,  -475,  -475,  -475,  -475,  -475,
    -475,  -475,  -475,   649,  -475,  -439,   104,  -475,   189,  -336,
    -475,  -333,  -475,  -331,  -475,  -475,  -123,  -475,  -374,  -475,
    -330,    30,   133,   188,  -474,  -475,  -475,    72,  -475,  -475,
    -475,    74,  -475,  -475,  -475,  -475,   138,  -475,  -475,  -454,
    -475,  -475,   -18,   207,   349,  -475,    41,    64,   107,    53,
     261,   263,   260,   264,   271,  -475,   275,  -475,   366,  -475,
     624,  -462,  -338,  -317,  -251,  -151,   -87,    36,  -475,  -475,
    -475,  -158,   362,  -475,   190,  -475,  -475,  -475,  -329,  -475,
    -475,  -475,  -475,  -475,    56,  -475,    46,  -475,  -475,  -475,
    -475,  -475,   166,  -451,   378,  -475,  -475,  -475,  -475,  -475,
    -475,  -475,  -475,  -475,  -475,   233,  -475,  -475,  -475,  -475,
      24,  -475,   678,    13,  -475,  -475,     9,     6,    95,    23,
    -475,    99,     7,   672,   -14,  -475,   641,   -13,  -162,   444,
       8,   599,   558,  -295,    11,  -475,   647,   605,  -475,  -256,
    -475,   438,   316,  -475,   442,    20,  -475,    40,   651,   451,
     608,  -475,  -475,  -475,   695,  -475,   638,   -97,   573,  -190,
    -337,  -475,  -475
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,   307,   222,   223,   224,   225,   226,   227,   431,
     392,    31,    73,    60,   228,    75,    76,    77,    78,    79,
      80,    81,    82,    83,   585,   504,   505,   506,   507,   229,
     230,   231,   232,   233,   591,   234,   308,   236,   449,   237,
     238,   309,   310,   311,   476,   477,   565,   566,   653,   478,
     567,   568,   242,   243,   352,   472,   473,   244,   493,   578,
     632,   245,   312,   313,   314,   249,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   393,
     508,   329,   407,   550,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   398,   399,   594,   260,   261,   262,   263,
     264,   265,   628,   665,   666,   667,   668,   266,   267,   268,
     269,   457,   551,   607,   608,   270,   271,   272,   273,   274,
     275,   276,   277,   487,   488,   489,   278,   496,    10,    11,
      33,    48,    12,    13,    14,    15,    16,    17,    18,   330,
      19,    20,    21,    44,    45,    86,    87,    88,   158,   159,
      89,   125,   126,   331,    90,    91,    92,   138,   136,   166,
     167,   168,   416,   169,   170,    93,    94,    22,    96,   293,
     144,    97,   411,    23,    50,   113,   114,    98,    99,   146,
     332,   423,    24
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      26,    27,   355,   395,   135,   510,    29,    30,   460,   143,
     235,   422,   334,   569,   468,   456,   479,   469,   481,   470,
     471,    37,    38,   662,   404,    36,    28,    41,   662,   663,
     100,    34,   464,   343,   663,   561,   109,   413,    54,    55,
     119,    58,    72,    38,   442,   102,    32,   497,    72,   443,
     116,    58,   172,   346,   143,    51,   105,   110,    62,   347,
     111,   235,    63,    58,   291,    34,    34,   337,   338,   112,
     122,   414,    34,   124,   173,    34,    65,    66,   598,   600,
     447,    56,   123,    95,    58,    72,   618,    34,    57,    95,
     117,    27,    41,   139,    25,   353,    67,    68,   485,    25,
     109,    25,    25,    51,   154,   664,   570,   486,    34,    34,
     686,    38,    72,   149,   361,   246,   137,    36,    51,   630,
     157,   110,    58,   500,   111,    35,    95,    58,   124,    27,
     631,   235,   221,   112,   140,   576,    34,    52,    84,   145,
     655,   350,    85,    51,   108,   650,    34,   652,    85,  -303,
     287,    34,   557,    95,   137,    38,   279,    51,   644,   646,
      58,  -303,   569,   239,   294,  -303,   246,    51,    58,    51,
     577,   124,   288,   157,   521,   669,   595,   621,   451,   672,
      58,    84,   522,   374,    34,    85,   455,   348,   620,   432,
     433,    58,    34,   587,   365,   366,   680,   172,   370,   371,
     372,   373,   410,  -125,    34,   495,    46,    49,   108,    47,
     287,  -125,    85,   367,   239,    34,    46,   434,   435,   335,
     456,   235,   468,     1,   612,   469,   602,   470,   471,    62,
     670,   605,   445,    63,     1,    64,   246,   279,     2,     3,
      42,   671,   133,     4,     5,     6,    43,    65,    66,     7,
       3,   235,    56,   221,     4,     5,     6,   134,   397,    57,
       7,  -232,   588,    53,  -232,   589,   240,    67,    68,    62,
      69,    56,    25,    63,  -126,   427,   428,   279,    57,    58,
     456,   456,  -126,  -232,   239,   133,   157,    65,    66,   661,
     412,    25,    56,   161,   101,    58,   420,   162,   588,    57,
     142,   619,   163,    34,   375,   376,  -235,    67,    68,  -235,
     133,  -236,    25,    70,  -236,    43,   282,   240,   456,    34,
      71,   241,   283,   683,   684,   409,   246,    51,  -235,  -127,
     377,     1,   378,  -236,   106,    58,   448,  -127,   -38,   157,
     247,    58,  -233,   367,    58,  -233,     2,     3,   164,   467,
     558,     4,     5,     6,   436,   437,   246,     7,   559,    34,
    -237,   491,   367,  -237,  -233,    34,     8,   279,    34,   424,
     425,   426,   241,   221,   239,   622,   503,   509,  -238,   511,
     624,  -238,  -237,   623,   545,    34,   279,   240,   625,   115,
     588,   247,   651,   637,     4,     5,     6,   279,   572,   573,
    -238,   515,   580,   581,   239,   614,   523,   524,   525,   526,
     526,   526,    25,   526,   526,   526,   526,   526,   526,   526,
     526,   526,   526,   526,   526,   526,   235,    39,   545,   127,
     235,   634,   635,   235,   546,   545,   660,   588,   395,   545,
     638,   592,   241,     3,   147,   626,   474,     4,     5,     6,
       1,   475,   429,    40,   430,   641,   145,   526,   554,   235,
     235,   247,  -321,   685,   342,     2,     3,   577,   527,   528,
       4,     5,     6,   503,   564,   153,     7,   240,   155,   145,
     584,   306,   248,   235,   160,     8,   235,   235,     1,   535,
     536,   674,   675,   529,   677,   530,   171,   156,   682,   250,
     285,   280,   123,     2,     3,   286,   289,   240,     4,     5,
       6,   292,   295,   397,     7,   296,   503,   503,   336,   235,
     235,   -74,   235,     8,   235,   691,   235,   692,   693,   103,
     695,   246,   241,   248,   339,   246,   -75,   342,   246,   531,
     532,   533,   534,   697,   235,   341,   344,   345,   349,   358,
     250,   247,   -76,   235,   -77,   235,   235,   467,   235,   -78,
     -79,   133,   241,   362,   246,   246,   235,   148,   -80,   -81,
     363,   235,   364,   380,     1,   629,  -415,   379,   402,   239,
     633,   247,   396,   239,   400,   401,   239,   503,   246,     2,
       3,   246,   246,   405,     4,     5,     6,   415,   438,   440,
       7,   439,   441,   248,   444,   453,   526,   461,   462,   306,
     498,   480,   239,   239,   482,   484,   499,   513,   514,   516,
     250,   656,     1,   517,   246,   246,   544,   246,   518,   246,
     287,   246,   547,   548,   552,   553,   239,     2,     3,   239,
     239,   555,     4,     5,     6,   556,   571,   486,     7,   246,
     575,   579,   582,   150,   583,   603,   609,   613,   246,   475,
     246,   246,   627,   246,   640,   642,   221,   649,   647,   577,
     676,   246,   239,   239,   678,   239,   246,   239,   673,   239,
     681,   621,   240,   685,   694,   696,   240,    59,   221,   240,
     279,    61,   636,   248,   657,   590,   617,   239,   659,   537,
     539,   284,   538,   689,   596,   540,   239,   459,   239,   239,
     250,   239,   279,   690,   542,   240,   240,   541,   611,   239,
     574,   687,   458,   248,   239,   104,   118,   132,   175,    62,
     333,   408,   130,    63,   418,   176,   520,   241,   419,   240,
     250,   241,   240,   240,   241,   141,   417,    65,    66,   281,
     120,   152,    56,   161,     0,     0,   247,   162,     0,    57,
     247,     0,   163,   247,     0,   354,     0,    67,    68,     0,
     241,   241,    25,     0,     0,   240,   240,     0,   240,     0,
     240,     0,   240,     0,     0,     0,     0,     0,     0,   247,
     247,     0,     0,     0,   241,   328,     0,   241,   241,     0,
     240,     0,    62,     0,     0,     0,    63,     0,   403,   240,
       0,   240,   240,   247,   240,     0,   247,   247,     0,   357,
      65,    66,   240,   360,     0,    56,     0,   240,     0,     0,
     241,   241,    57,   241,     0,   241,     0,   241,   369,     0,
      67,    68,     0,   490,     0,    25,     0,     0,     0,   247,
     247,     0,   247,     0,   247,   241,   247,     0,     0,     0,
       0,    62,     0,     0,   241,    63,   241,   241,     0,   241,
       0,     0,     0,     0,   247,     0,     0,   241,     0,    65,
      66,     0,   241,   247,    56,   247,   247,     0,   247,     0,
      62,    57,     0,     0,    63,     0,   247,     0,   248,    67,
      68,   247,   248,     0,    25,   248,     0,     0,    65,    66,
     406,     0,     0,    56,   161,   250,     0,     0,   162,   250,
      57,     0,   250,   163,     0,     0,     0,     0,    67,    68,
     328,   248,   248,    25,     0,   381,   382,   383,   384,   385,
     386,   387,   388,     0,   389,     0,   390,     0,   250,   250,
       0,     0,     0,     0,     0,   248,     0,     0,   248,   248,
     391,     0,   450,     0,     0,     0,     0,     0,     0,   446,
     406,     0,   250,   463,     0,   250,   250,     0,     0,    74,
       0,     0,   483,     0,     0,    74,     0,   494,   463,     0,
       0,   248,   248,     0,   248,     0,   248,     0,   248,     0,
     121,     0,     0,   450,     0,     0,     0,     0,   250,   250,
       0,   250,     0,   250,     0,   250,   248,   512,     0,     0,
       0,   129,    74,     0,     0,   248,     0,   248,   248,     0,
     248,     0,     0,   250,     0,     0,     0,     0,   248,   519,
       0,     0,   250,   248,   250,   250,     0,   250,     0,    74,
       0,     0,     0,     0,     0,   250,     0,     0,     0,   165,
     250,     0,   177,   298,   174,     0,     0,   299,   543,     0,
       0,   183,     0,     0,   185,     0,     0,     0,   463,     0,
       0,   300,   301,     0,   192,   193,   302,     0,     0,   369,
       0,     0,     0,   303,     0,     0,   198,   290,   200,     0,
     202,   304,   305,     0,   450,   297,    25,   207,   208,     0,
     209,   210,   211,     0,     0,   212,   213,   340,     0,     0,
       0,     0,     0,     0,     0,   586,     0,     0,   351,     0,
       0,     0,     0,     0,     0,     0,     0,   593,     0,     0,
       0,   214,     0,     0,     0,   328,     0,     0,     0,     0,
     368,   216,   217,   218,   219,     0,     0,     0,     0,     0,
       0,   356,     0,     0,     0,   177,   298,     0,     0,   604,
     299,     0,   463,     0,   183,     0,   463,   185,     0,     0,
       0,   615,     0,     0,   300,   301,   450,   192,   193,   302,
       0,     0,     0,     0,     0,     0,   303,     0,     0,   198,
       0,   200,     0,   202,   304,   305,     0,     0,     0,    25,
     207,   208,     0,   209,   210,   211,   165,     0,   212,   213,
       0,     0,     0,     0,     0,     0,     0,   639,     0,     0,
       0,     0,   165,     0,     0,     0,     0,   648,     0,     0,
       0,     0,     0,     0,   214,   654,     0,     0,     0,     0,
       0,     0,     0,     0,   216,   217,   218,   219,     0,     0,
       0,     0,     0,     0,   359,     0,     0,     0,     0,     0,
       0,     0,   165,     0,     0,     0,     0,     0,   452,     0,
     177,   178,   179,     0,     0,   180,   406,   181,   182,   183,
     184,     0,   185,     0,   186,   187,   188,   189,   492,   190,
     191,     0,   192,   193,   194,     0,     0,     0,     0,     0,
     195,   196,     0,   197,   198,   199,   200,   201,   202,   203,
     204,   205,     0,   206,    25,   207,   208,     0,   209,   210,
     211,     0,     0,   212,   213,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   214,
       0,     0,     0,     0,   133,   215,     0,     0,     0,   216,
     217,   218,   219,   177,   178,   179,     0,     0,   180,   220,
     181,   182,   183,   184,     0,   185,     0,   186,   187,   188,
     189,     0,   190,   191,     0,   192,   193,   194,     0,     0,
       0,     0,     0,   195,   196,     0,   197,   198,   199,   200,
     201,   202,   203,   204,   205,     0,   206,    25,   207,   208,
       0,   209,   210,   211,     0,     0,   212,   213,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   214,     0,     0,     0,     0,   133,   394,     0,
       0,     0,   216,   217,   218,   219,   177,   178,   179,   662,
       0,   180,   220,   181,   182,   688,   184,     0,   185,     0,
     186,   187,   188,   189,     0,   190,   191,     0,   192,   193,
     194,     0,     0,     0,     0,     0,   195,   196,     0,   197,
     198,   199,   200,   201,   202,   203,   204,   205,     0,   206,
      25,   207,   208,     0,   209,   210,   211,     0,     0,   212,
     213,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   214,     0,     0,     0,     0,
     133,     0,     0,     0,     0,   216,   217,   218,   219,   177,
     178,   179,     0,     0,   180,   220,   181,   182,   183,   184,
       0,   185,     0,   186,   187,   188,   189,     0,   190,   191,
       0,   192,   193,   194,     0,     0,     0,     0,     0,   195,
     196,     0,   197,   198,   199,   200,   201,   202,   203,   204,
     205,     0,   206,    25,   207,   208,     0,   209,   210,   211,
       0,     0,   212,   213,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   214,     0,
       0,     0,     0,   133,     0,     0,     0,     0,   216,   217,
     218,   219,   177,   298,   179,     0,     0,   299,   220,     0,
     182,   183,   184,     0,   185,     0,   186,   187,   188,   189,
       0,   300,   301,     0,   192,   193,   302,     0,     0,     0,
       0,     0,   195,   303,     0,   197,   198,   199,   200,   201,
     202,   304,   305,   205,     0,   206,    25,   207,   208,     0,
     209,   210,   211,     0,     0,   212,   213,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   214,     0,     0,     0,     0,   133,     0,     0,     0,
       0,   216,   217,   218,   219,   177,   178,     0,     0,     0,
     180,   220,     0,     0,   183,     0,     0,   185,     0,     0,
       0,     0,     0,     0,   190,   191,     0,   192,   193,   194,
       0,     0,     0,     0,     0,     0,   196,     0,     0,   198,
       0,   200,     0,   202,   203,   204,     0,     0,     0,    25,
     207,   208,     0,   209,   210,   211,     0,     0,   212,   213,
       0,     0,     0,     0,     0,     0,     0,   177,   298,     0,
       0,     0,   299,     0,     0,     0,   183,     0,     0,   185,
       0,     0,     0,     0,   214,     0,   300,   301,     0,   192,
     193,   302,     0,     0,   216,   217,   218,   219,   303,     0,
       0,   198,     0,   200,   454,   202,   304,   305,     0,     0,
       0,    25,   207,   208,     0,   209,   210,   211,     0,     0,
     212,   213,     0,     0,     0,     0,     0,     0,     0,   177,
     298,     0,     0,     0,   299,     0,     0,     0,   183,     0,
       0,   185,     0,     0,     0,     0,   214,     0,   300,   301,
       0,   192,   193,   302,     0,     0,   216,   217,   218,   219,
     303,     0,     0,   198,     0,   200,   549,   202,   304,   305,
       0,     0,     0,    25,   207,   208,     0,   209,   210,   211,
       0,     0,   212,   213,     0,     0,     0,     0,     0,     0,
       0,   177,   298,     0,     0,     0,   299,     0,     0,     0,
     183,     0,     0,   185,     0,     0,     0,     0,   214,     0,
     300,   301,     0,   192,   193,   302,     0,     0,   216,   217,
     218,   219,   303,     0,     0,   198,     0,   200,   610,   202,
     304,   305,     0,     0,    62,    25,   207,   208,    63,   209,
     210,   211,     0,     0,   212,   213,     0,     0,     0,     0,
       0,     0,    65,    66,     0,     0,     0,    56,   161,     0,
       0,     0,   162,     0,    57,     0,     0,   163,     0,     0,
     214,     0,    67,    68,     0,   306,   421,    25,     0,     0,
     216,   217,   218,   219,   177,   298,     0,     0,     0,   299,
       0,     0,     0,   183,     0,     0,   185,     0,     0,     0,
       0,     0,     0,   300,   301,     0,   192,   193,   302,     0,
       0,     0,     0,   501,     0,   303,     0,     0,   198,     0,
     200,     0,   202,   304,   305,     0,     0,     0,    25,   207,
     208,     0,   209,   210,   211,     0,     0,   212,   213,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   177,   298,
       0,     0,     0,   299,     0,     0,     0,   183,     0,     0,
     185,     0,     0,   214,   502,     0,     0,   300,   301,     0,
     192,   193,   302,   216,   217,   218,   219,   501,     0,   303,
       0,     0,   198,     0,   200,     0,   202,   304,   305,     0,
       0,     0,    25,   207,   208,     0,   209,   210,   211,     0,
       0,   212,   213,     0,     0,     0,     0,     0,     0,     0,
     177,   298,     0,     0,     0,   299,     0,     0,     0,   183,
       0,     0,   185,     0,     0,     0,     0,   214,   560,   300,
     301,     0,   192,   193,   302,     0,     0,   216,   217,   218,
     219,   303,     0,     0,   198,     0,   200,    62,   202,   304,
     305,    63,     1,    64,    25,   207,   208,     0,   209,   210,
     211,     0,     0,   212,   213,    65,    66,     0,     3,     0,
      56,     0,     4,     5,     6,     0,     0,    57,     7,     0,
       0,     0,     0,     0,     0,    67,    68,     0,    69,   214,
      25,     0,     0,     0,   562,   563,     0,     0,     0,   216,
     217,   218,   219,   177,   298,     0,     0,     0,   299,     0,
       0,     0,   183,     0,     0,   185,     0,     0,     0,     0,
       0,     0,   300,   301,     0,   192,   193,   302,     0,     0,
       0,   131,     0,     0,   303,     0,     0,   198,    71,   200,
       0,   202,   304,   305,     0,     0,     0,    25,   207,   208,
       0,   209,   210,   211,     0,     0,   212,   213,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   177,   298,
     282,     0,   214,   299,     0,     0,   283,   183,     0,     0,
     185,     0,   216,   217,   218,   219,     0,   300,   301,     0,
     192,   193,   302,     0,     0,     0,     0,   501,     0,   303,
       0,     0,   198,     0,   200,     0,   202,   304,   305,     0,
       0,     0,    25,   207,   208,     0,   209,   210,   211,     0,
       0,   212,   213,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   177,   298,     0,     0,     0,   299,     0,     0,
       0,   183,     0,     0,   185,     0,     0,   214,   597,     0,
       0,   300,   301,     0,   192,   193,   302,   216,   217,   218,
     219,   501,     0,   303,     0,     0,   198,     0,   200,     0,
     202,   304,   305,     0,     0,     0,    25,   207,   208,     0,
     209,   210,   211,     0,     0,   212,   213,     0,     0,     0,
       0,     0,     0,     0,   177,   298,     0,     0,     0,   299,
       0,     0,     0,   183,     0,     0,   185,     0,     0,     0,
       0,   214,   599,   300,   301,     0,   192,   193,   302,     0,
       0,   216,   217,   218,   219,   303,     0,     0,   198,     0,
     200,    62,   202,   304,   305,    63,     1,    64,    25,   207,
     208,     0,   209,   210,   211,     0,     0,   212,   213,    65,
      66,     0,     3,     0,    56,     0,     4,     5,     6,     0,
       0,    57,     7,     0,     0,     0,     0,     0,     0,    67,
      68,     0,    69,   214,    25,     0,     0,     0,   306,   601,
       0,     0,     0,   216,   217,   218,   219,   177,   298,     0,
       0,     0,   299,     0,     0,     0,   183,     0,     0,   185,
       0,     0,     0,     0,     0,     0,   300,   301,     0,   192,
     193,   302,     0,     0,     0,   107,     0,     0,   303,     0,
       0,   198,     0,   200,    62,   202,   304,   305,    63,     1,
      64,    25,   207,   208,     0,   209,   210,   211,     0,     0,
     212,   213,    65,    66,     0,     3,     0,    56,     0,     4,
       5,     6,     0,     0,    57,     7,     0,     0,     0,     0,
       0,     0,    67,    68,     0,    69,   214,    25,     0,     0,
       0,   562,   658,     0,     0,     0,   216,   217,   218,   219,
     177,   298,     0,     0,     0,   299,     0,     0,     0,   183,
       0,     0,   185,     0,     0,     0,     0,     0,     0,   300,
     301,     0,   192,   193,   302,     0,     0,     0,   151,     0,
       0,   303,     0,     0,   198,     0,   200,     0,   202,   304,
     305,     0,     0,     0,    25,   207,   208,     0,   209,   210,
     211,     0,     0,   212,   213,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   177,   298,     0,   214,
       0,   299,     0,     0,   306,   183,     0,     0,   185,   216,
     217,   218,   219,     0,     0,   300,   301,     0,   192,   193,
     302,     0,     0,     0,     0,   501,     0,   303,     0,     0,
     198,     0,   200,     0,   202,   304,   305,     0,     0,     0,
      25,   207,   208,     0,   209,   210,   211,     0,     0,   212,
     213,     0,     0,     0,     0,     0,     0,     0,   177,   298,
       0,     0,     0,   299,     0,     0,     0,   183,     0,     0,
     185,     0,     0,     0,     0,   214,     0,   300,   301,     0,
     192,   193,   302,     0,     0,   216,   217,   218,   219,   303,
       0,     0,   198,     0,   200,     0,   202,   304,   305,     0,
       0,     0,    25,   207,   208,     0,   209,   210,   211,     0,
       0,   212,   213,     0,     0,     0,     0,     0,     0,     0,
     177,   298,     0,     0,     0,   299,     0,     0,     0,   183,
       0,     0,   185,     0,     0,     0,     0,   214,   606,   300,
     301,     0,   192,   193,   302,     0,     0,   216,   217,   218,
     219,   303,     0,     0,   198,     0,   200,     0,   202,   304,
     305,     0,     0,     0,    25,   207,   208,     0,   209,   210,
     211,     0,     0,   212,   213,     0,     0,     0,     0,     0,
       0,     0,   177,   298,     0,     0,     0,   299,     0,     0,
       0,   183,     0,     0,   185,     0,     0,     0,     0,   214,
     643,   300,   301,     0,   192,   193,   302,     0,     0,   216,
     217,   218,   219,   303,     0,     0,   198,     0,   200,     0,
     202,   304,   305,     0,     0,     0,    25,   207,   208,     0,
     209,   210,   211,     0,     0,   212,   213,     0,     0,     0,
       0,     0,     0,     0,   177,   298,     0,     0,     0,   299,
       0,     0,     0,   183,     0,     0,   185,     0,     0,     0,
       0,   214,   645,   300,   301,     0,   192,   193,   302,     0,
       0,   216,   217,   218,   219,   303,     0,     0,   198,     0,
     200,     0,   202,   304,   305,     0,     0,     0,    25,   207,
     208,     0,   209,   210,   211,     0,     0,   212,   213,     0,
       0,     0,     0,     0,     0,     0,     0,   177,   298,     0,
       0,     0,   299,     0,     0,     0,   183,     0,     0,   185,
       0,     0,     0,   214,     0,     0,   300,   301,   475,   192,
     193,   302,     0,   216,   217,   218,   219,     0,   303,     0,
       0,   198,     0,   200,     0,   202,   304,   305,     0,     0,
       0,    25,   207,   208,     0,   209,   210,   211,     0,     0,
     212,   213,     0,     0,     0,     0,     0,     0,     0,   177,
     298,     0,     0,     0,   299,     0,     0,     0,   183,     0,
       0,   185,     0,     0,     0,     0,   214,   679,   300,   301,
       0,   192,   193,   302,     0,     0,   216,   217,   218,   219,
     303,     0,     0,   198,     0,   200,     0,   202,   304,   305,
       0,     0,     0,    25,   207,   208,     0,   209,   210,   211,
       0,     0,   212,   213,     0,     0,     0,     0,     0,     0,
       0,   177,   178,     0,     0,     0,   180,     0,     0,     0,
     183,     0,     0,   185,     0,     0,     0,     0,   214,     0,
     190,   191,     0,   192,   193,   194,     0,     0,   216,   217,
     218,   219,   196,     0,     0,   198,     0,   200,     0,   202,
     203,   204,     0,     0,     0,    25,   207,   208,     0,   209,
     210,   211,     0,     0,   212,   213,     0,     0,     0,     0,
       0,     0,     0,   177,   298,     0,     0,     0,   299,     0,
       0,     0,   183,     0,     0,   185,     0,     0,     0,     0,
     214,     0,   300,   301,     0,   192,   193,   302,     0,     0,
     216,   217,   218,   219,   303,     0,     0,   198,     0,   200,
       0,   202,   304,   305,     0,   177,   298,    25,   207,   208,
     299,   209,   210,   211,   183,     0,     0,   185,     0,     0,
       0,     0,     0,     0,   300,   301,     0,   192,   193,   302,
       0,     0,     0,     0,     0,     0,   303,     0,     0,   198,
       0,   200,   465,   202,   304,   305,     0,     0,   466,    25,
     207,   208,     0,   209,   210,   211,    62,     0,     0,     0,
      63,    39,   128,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    65,    66,     0,     3,     0,    56,
       0,     4,     5,     6,   465,     0,    57,    40,     0,     0,
     616,     0,     0,     0,    67,    68,     0,    69,     0,    25
};

static const yytype_int16 yycheck[] =
{
       1,     2,   192,   254,    91,   379,     7,     8,   346,    96,
     133,   306,   174,   475,   350,   344,   353,   350,   355,   350,
     350,    12,    16,     6,   280,    12,     2,    20,     6,    12,
      44,     8,   349,   184,    12,   474,    49,     3,    39,    40,
      54,    42,    43,    37,    54,    46,     8,   364,    49,    59,
      51,    52,    80,     6,   141,    55,    47,    49,     4,    12,
      49,   184,     8,    64,   161,    42,    43,    84,    85,    49,
      71,    37,    49,    74,   102,    52,    22,    23,   517,   518,
     336,    27,    82,    43,    85,    86,   560,    64,    34,    49,
      52,    92,    85,    94,    47,   192,    42,    43,     7,    47,
     113,    47,    47,    55,   118,    88,   480,    16,    85,    86,
      88,   105,   113,   104,   201,   133,    92,   104,    55,    80,
     121,   113,   123,   374,   113,     0,    86,   128,   129,   130,
      91,   254,   133,   113,    94,    55,   113,    89,    43,    85,
      88,    87,    43,    55,    49,   619,   123,   621,    49,    47,
      80,   128,    89,   113,   130,   149,   133,    55,   609,   610,
     161,    47,   624,   133,   165,    85,   184,    55,   169,    55,
      90,   172,   102,   174,    80,   629,   513,    89,   340,   633,
     181,    86,    88,    81,   161,    86,   344,   188,   562,    62,
      63,   192,   169,    81,   212,   213,   647,    80,   216,   217,
     218,   219,   289,    80,   181,   363,    84,    87,   113,    87,
      80,    88,   113,   214,   184,   192,    84,    90,    91,   102,
     549,   344,   558,     9,   553,   558,   521,   558,   558,     4,
      80,   548,   102,     8,     9,    10,   254,   214,    24,    25,
      81,    91,    87,    29,    30,    31,    87,    22,    23,    35,
      25,   374,    27,   254,    29,    30,    31,   102,   259,    34,
      35,    80,    80,   102,    83,    83,   133,    42,    43,     4,
      45,    27,    47,     8,    80,    92,    93,   254,    34,   280,
     609,   610,    88,   102,   254,    87,   287,    22,    23,   626,
     291,    47,    27,    28,   102,   296,   297,    32,    80,    34,
     102,    83,    37,   280,    56,    57,    80,    42,    43,    83,
      87,    80,    47,    88,    83,    87,    80,   184,   647,   296,
      95,   133,    86,   660,   662,   102,   344,    55,   102,    80,
      82,     9,    84,   102,   102,   336,   337,    88,    79,   340,
     133,   342,    80,   344,   345,    83,    24,    25,    83,   350,
      80,    29,    30,    31,    60,    61,   374,    35,    88,   336,
      80,   362,   363,    83,   102,   342,    44,   344,   345,    96,
      97,    98,   184,   374,   344,    80,   377,   378,    80,   380,
      80,    83,   102,    88,    80,   362,   363,   254,    88,   102,
      80,   184,    88,    83,    29,    30,    31,   374,   485,   486,
     102,   402,    83,    84,   374,   556,   424,   425,   426,   427,
     428,   429,    47,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   549,     9,    80,    79,
     553,   582,   583,   556,    86,    80,   626,    80,   689,    80,
      83,    86,   254,    25,   102,    86,    82,    29,    30,    31,
       9,    87,    72,    35,    74,   606,    85,   475,   459,   582,
     583,   254,    85,    81,    82,    24,    25,    90,   427,   428,
      29,    30,    31,   474,   475,   102,    35,   344,   102,    85,
     498,    87,   133,   606,    82,    44,   609,   610,     9,   436,
     437,   642,   643,   429,   645,   431,    89,   102,   649,   133,
     102,    82,    82,    24,    25,    89,    83,   374,    29,    30,
      31,    81,    83,   514,    35,    80,   517,   518,    82,   642,
     643,    84,   645,    44,   647,   676,   649,   678,   679,    88,
     681,   549,   344,   184,   102,   553,    84,    82,   556,   432,
     433,   434,   435,   694,   667,   102,    82,    82,    82,    82,
     184,   344,    84,   676,    84,   678,   679,   558,   681,    84,
      84,    87,   374,    82,   582,   583,   689,    88,    84,    84,
      82,   694,    82,    84,     9,   576,    85,    85,    84,   549,
     581,   374,   102,   553,   102,   102,   556,   588,   606,    24,
      25,   609,   610,    86,    29,    30,    31,    89,    99,   101,
      35,   100,    58,   254,    79,    46,   624,   102,   102,    87,
      83,    85,   582,   583,   102,   102,    83,    89,    80,    83,
     254,   622,     9,    82,   642,   643,    83,   645,    82,   647,
      80,   649,    83,    82,   102,    80,   606,    24,    25,   609,
     610,   102,    29,    30,    31,    83,    83,    16,    35,   667,
      83,    83,    83,    88,    83,    81,   102,    21,   676,    87,
     678,   679,    87,   681,    83,    83,   667,    14,   102,    90,
      83,   689,   642,   643,    83,   645,   694,   647,   102,   649,
      83,    89,   549,    81,    83,    81,   553,    42,   689,   556,
     667,    42,   588,   344,   622,   506,   558,   667,   624,   438,
     440,    88,   439,   667,   514,   441,   676,   345,   678,   679,
     344,   681,   689,   667,   443,   582,   583,   442,   552,   689,
     487,   665,   344,   374,   694,    47,    54,    86,   129,     4,
     172,   287,    85,     8,   296,   130,   420,   549,   296,   606,
     374,   553,   609,   610,   556,    94,   295,    22,    23,   141,
      55,   113,    27,    28,    -1,    -1,   549,    32,    -1,    34,
     553,    -1,    37,   556,    -1,   192,    -1,    42,    43,    -1,
     582,   583,    47,    -1,    -1,   642,   643,    -1,   645,    -1,
     647,    -1,   649,    -1,    -1,    -1,    -1,    -1,    -1,   582,
     583,    -1,    -1,    -1,   606,   171,    -1,   609,   610,    -1,
     667,    -1,     4,    -1,    -1,    -1,     8,    -1,    83,   676,
      -1,   678,   679,   606,   681,    -1,   609,   610,    -1,   195,
      22,    23,   689,   199,    -1,    27,    -1,   694,    -1,    -1,
     642,   643,    34,   645,    -1,   647,    -1,   649,   214,    -1,
      42,    43,    -1,    45,    -1,    47,    -1,    -1,    -1,   642,
     643,    -1,   645,    -1,   647,   667,   649,    -1,    -1,    -1,
      -1,     4,    -1,    -1,   676,     8,   678,   679,    -1,   681,
      -1,    -1,    -1,    -1,   667,    -1,    -1,   689,    -1,    22,
      23,    -1,   694,   676,    27,   678,   679,    -1,   681,    -1,
       4,    34,    -1,    -1,     8,    -1,   689,    -1,   549,    42,
      43,   694,   553,    -1,    47,   556,    -1,    -1,    22,    23,
     286,    -1,    -1,    27,    28,   549,    -1,    -1,    32,   553,
      34,    -1,   556,    37,    -1,    -1,    -1,    -1,    42,    43,
     306,   582,   583,    47,    -1,    64,    65,    66,    67,    68,
      69,    70,    71,    -1,    73,    -1,    75,    -1,   582,   583,
      -1,    -1,    -1,    -1,    -1,   606,    -1,    -1,   609,   610,
      89,    -1,   338,    -1,    -1,    -1,    -1,    -1,    -1,    83,
     346,    -1,   606,   349,    -1,   609,   610,    -1,    -1,    43,
      -1,    -1,   358,    -1,    -1,    49,    -1,   363,   364,    -1,
      -1,   642,   643,    -1,   645,    -1,   647,    -1,   649,    -1,
      64,    -1,    -1,   379,    -1,    -1,    -1,    -1,   642,   643,
      -1,   645,    -1,   647,    -1,   649,   667,   393,    -1,    -1,
      -1,    85,    86,    -1,    -1,   676,    -1,   678,   679,    -1,
     681,    -1,    -1,   667,    -1,    -1,    -1,    -1,   689,   415,
      -1,    -1,   676,   694,   678,   679,    -1,   681,    -1,   113,
      -1,    -1,    -1,    -1,    -1,   689,    -1,    -1,    -1,   123,
     694,    -1,     3,     4,   128,    -1,    -1,     8,   444,    -1,
      -1,    12,    -1,    -1,    15,    -1,    -1,    -1,   454,    -1,
      -1,    22,    23,    -1,    25,    26,    27,    -1,    -1,   465,
      -1,    -1,    -1,    34,    -1,    -1,    37,   161,    39,    -1,
      41,    42,    43,    -1,   480,   169,    47,    48,    49,    -1,
      51,    52,    53,    -1,    -1,    56,    57,   181,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   501,    -1,    -1,   192,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   513,    -1,    -1,
      -1,    82,    -1,    -1,    -1,   521,    -1,    -1,    -1,    -1,
     214,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,   102,    -1,    -1,    -1,     3,     4,    -1,    -1,   545,
       8,    -1,   548,    -1,    12,    -1,   552,    15,    -1,    -1,
      -1,   557,    -1,    -1,    22,    23,   562,    25,    26,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    37,
      -1,    39,    -1,    41,    42,    43,    -1,    -1,    -1,    47,
      48,    49,    -1,    51,    52,    53,   280,    -1,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   603,    -1,    -1,
      -1,    -1,   296,    -1,    -1,    -1,    -1,   613,    -1,    -1,
      -1,    -1,    -1,    -1,    82,   621,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    93,    94,    95,    -1,    -1,
      -1,    -1,    -1,    -1,   102,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   336,    -1,    -1,    -1,    -1,    -1,   342,    -1,
       3,     4,     5,    -1,    -1,     8,   662,    10,    11,    12,
      13,    -1,    15,    -1,    17,    18,    19,    20,   362,    22,
      23,    -1,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,
      33,    34,    -1,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    -1,    46,    47,    48,    49,    -1,    51,    52,
      53,    -1,    -1,    56,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    -1,    87,    88,    -1,    -1,    -1,    92,
      93,    94,    95,     3,     4,     5,    -1,    -1,     8,   102,
      10,    11,    12,    13,    -1,    15,    -1,    17,    18,    19,
      20,    -1,    22,    23,    -1,    25,    26,    27,    -1,    -1,
      -1,    -1,    -1,    33,    34,    -1,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    -1,    46,    47,    48,    49,
      -1,    51,    52,    53,    -1,    -1,    56,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    -1,    87,    88,    -1,
      -1,    -1,    92,    93,    94,    95,     3,     4,     5,     6,
      -1,     8,   102,    10,    11,    12,    13,    -1,    15,    -1,
      17,    18,    19,    20,    -1,    22,    23,    -1,    25,    26,
      27,    -1,    -1,    -1,    -1,    -1,    33,    34,    -1,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    -1,    46,
      47,    48,    49,    -1,    51,    52,    53,    -1,    -1,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,
      87,    -1,    -1,    -1,    -1,    92,    93,    94,    95,     3,
       4,     5,    -1,    -1,     8,   102,    10,    11,    12,    13,
      -1,    15,    -1,    17,    18,    19,    20,    -1,    22,    23,
      -1,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,    33,
      34,    -1,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    -1,    46,    47,    48,    49,    -1,    51,    52,    53,
      -1,    -1,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,    92,    93,
      94,    95,     3,     4,     5,    -1,    -1,     8,   102,    -1,
      11,    12,    13,    -1,    15,    -1,    17,    18,    19,    20,
      -1,    22,    23,    -1,    25,    26,    27,    -1,    -1,    -1,
      -1,    -1,    33,    34,    -1,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    -1,    46,    47,    48,    49,    -1,
      51,    52,    53,    -1,    -1,    56,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,
      -1,    92,    93,    94,    95,     3,     4,    -1,    -1,    -1,
       8,   102,    -1,    -1,    12,    -1,    -1,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    -1,    25,    26,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    37,
      -1,    39,    -1,    41,    42,    43,    -1,    -1,    -1,    47,
      48,    49,    -1,    51,    52,    53,    -1,    -1,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,    -1,
      -1,    -1,     8,    -1,    -1,    -1,    12,    -1,    -1,    15,
      -1,    -1,    -1,    -1,    82,    -1,    22,    23,    -1,    25,
      26,    27,    -1,    -1,    92,    93,    94,    95,    34,    -1,
      -1,    37,    -1,    39,   102,    41,    42,    43,    -1,    -1,
      -1,    47,    48,    49,    -1,    51,    52,    53,    -1,    -1,
      56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,    -1,    -1,    -1,     8,    -1,    -1,    -1,    12,    -1,
      -1,    15,    -1,    -1,    -1,    -1,    82,    -1,    22,    23,
      -1,    25,    26,    27,    -1,    -1,    92,    93,    94,    95,
      34,    -1,    -1,    37,    -1,    39,   102,    41,    42,    43,
      -1,    -1,    -1,    47,    48,    49,    -1,    51,    52,    53,
      -1,    -1,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,    -1,    -1,    -1,     8,    -1,    -1,    -1,
      12,    -1,    -1,    15,    -1,    -1,    -1,    -1,    82,    -1,
      22,    23,    -1,    25,    26,    27,    -1,    -1,    92,    93,
      94,    95,    34,    -1,    -1,    37,    -1,    39,   102,    41,
      42,    43,    -1,    -1,     4,    47,    48,    49,     8,    51,
      52,    53,    -1,    -1,    56,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    -1,    -1,    -1,    27,    28,    -1,
      -1,    -1,    32,    -1,    34,    -1,    -1,    37,    -1,    -1,
      82,    -1,    42,    43,    -1,    87,    88,    47,    -1,    -1,
      92,    93,    94,    95,     3,     4,    -1,    -1,    -1,     8,
      -1,    -1,    -1,    12,    -1,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    -1,    25,    26,    27,    -1,
      -1,    -1,    -1,    32,    -1,    34,    -1,    -1,    37,    -1,
      39,    -1,    41,    42,    43,    -1,    -1,    -1,    47,    48,
      49,    -1,    51,    52,    53,    -1,    -1,    56,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
      -1,    -1,    -1,     8,    -1,    -1,    -1,    12,    -1,    -1,
      15,    -1,    -1,    82,    83,    -1,    -1,    22,    23,    -1,
      25,    26,    27,    92,    93,    94,    95,    32,    -1,    34,
      -1,    -1,    37,    -1,    39,    -1,    41,    42,    43,    -1,
      -1,    -1,    47,    48,    49,    -1,    51,    52,    53,    -1,
      -1,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,    -1,    -1,    -1,     8,    -1,    -1,    -1,    12,
      -1,    -1,    15,    -1,    -1,    -1,    -1,    82,    83,    22,
      23,    -1,    25,    26,    27,    -1,    -1,    92,    93,    94,
      95,    34,    -1,    -1,    37,    -1,    39,     4,    41,    42,
      43,     8,     9,    10,    47,    48,    49,    -1,    51,    52,
      53,    -1,    -1,    56,    57,    22,    23,    -1,    25,    -1,
      27,    -1,    29,    30,    31,    -1,    -1,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    45,    82,
      47,    -1,    -1,    -1,    87,    88,    -1,    -1,    -1,    92,
      93,    94,    95,     3,     4,    -1,    -1,    -1,     8,    -1,
      -1,    -1,    12,    -1,    -1,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    -1,    25,    26,    27,    -1,    -1,
      -1,    88,    -1,    -1,    34,    -1,    -1,    37,    95,    39,
      -1,    41,    42,    43,    -1,    -1,    -1,    47,    48,    49,
      -1,    51,    52,    53,    -1,    -1,    56,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
      80,    -1,    82,     8,    -1,    -1,    86,    12,    -1,    -1,
      15,    -1,    92,    93,    94,    95,    -1,    22,    23,    -1,
      25,    26,    27,    -1,    -1,    -1,    -1,    32,    -1,    34,
      -1,    -1,    37,    -1,    39,    -1,    41,    42,    43,    -1,
      -1,    -1,    47,    48,    49,    -1,    51,    52,    53,    -1,
      -1,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,    -1,    -1,    -1,     8,    -1,    -1,
      -1,    12,    -1,    -1,    15,    -1,    -1,    82,    83,    -1,
      -1,    22,    23,    -1,    25,    26,    27,    92,    93,    94,
      95,    32,    -1,    34,    -1,    -1,    37,    -1,    39,    -1,
      41,    42,    43,    -1,    -1,    -1,    47,    48,    49,    -1,
      51,    52,    53,    -1,    -1,    56,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,    -1,    -1,    -1,     8,
      -1,    -1,    -1,    12,    -1,    -1,    15,    -1,    -1,    -1,
      -1,    82,    83,    22,    23,    -1,    25,    26,    27,    -1,
      -1,    92,    93,    94,    95,    34,    -1,    -1,    37,    -1,
      39,     4,    41,    42,    43,     8,     9,    10,    47,    48,
      49,    -1,    51,    52,    53,    -1,    -1,    56,    57,    22,
      23,    -1,    25,    -1,    27,    -1,    29,    30,    31,    -1,
      -1,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    45,    82,    47,    -1,    -1,    -1,    87,    88,
      -1,    -1,    -1,    92,    93,    94,    95,     3,     4,    -1,
      -1,    -1,     8,    -1,    -1,    -1,    12,    -1,    -1,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,    25,
      26,    27,    -1,    -1,    -1,    88,    -1,    -1,    34,    -1,
      -1,    37,    -1,    39,     4,    41,    42,    43,     8,     9,
      10,    47,    48,    49,    -1,    51,    52,    53,    -1,    -1,
      56,    57,    22,    23,    -1,    25,    -1,    27,    -1,    29,
      30,    31,    -1,    -1,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    45,    82,    47,    -1,    -1,
      -1,    87,    88,    -1,    -1,    -1,    92,    93,    94,    95,
       3,     4,    -1,    -1,    -1,     8,    -1,    -1,    -1,    12,
      -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    -1,    25,    26,    27,    -1,    -1,    -1,    88,    -1,
      -1,    34,    -1,    -1,    37,    -1,    39,    -1,    41,    42,
      43,    -1,    -1,    -1,    47,    48,    49,    -1,    51,    52,
      53,    -1,    -1,    56,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,    -1,    82,
      -1,     8,    -1,    -1,    87,    12,    -1,    -1,    15,    92,
      93,    94,    95,    -1,    -1,    22,    23,    -1,    25,    26,
      27,    -1,    -1,    -1,    -1,    32,    -1,    34,    -1,    -1,
      37,    -1,    39,    -1,    41,    42,    43,    -1,    -1,    -1,
      47,    48,    49,    -1,    51,    52,    53,    -1,    -1,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
      -1,    -1,    -1,     8,    -1,    -1,    -1,    12,    -1,    -1,
      15,    -1,    -1,    -1,    -1,    82,    -1,    22,    23,    -1,
      25,    26,    27,    -1,    -1,    92,    93,    94,    95,    34,
      -1,    -1,    37,    -1,    39,    -1,    41,    42,    43,    -1,
      -1,    -1,    47,    48,    49,    -1,    51,    52,    53,    -1,
      -1,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,    -1,    -1,    -1,     8,    -1,    -1,    -1,    12,
      -1,    -1,    15,    -1,    -1,    -1,    -1,    82,    83,    22,
      23,    -1,    25,    26,    27,    -1,    -1,    92,    93,    94,
      95,    34,    -1,    -1,    37,    -1,    39,    -1,    41,    42,
      43,    -1,    -1,    -1,    47,    48,    49,    -1,    51,    52,
      53,    -1,    -1,    56,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,    -1,    -1,    -1,     8,    -1,    -1,
      -1,    12,    -1,    -1,    15,    -1,    -1,    -1,    -1,    82,
      83,    22,    23,    -1,    25,    26,    27,    -1,    -1,    92,
      93,    94,    95,    34,    -1,    -1,    37,    -1,    39,    -1,
      41,    42,    43,    -1,    -1,    -1,    47,    48,    49,    -1,
      51,    52,    53,    -1,    -1,    56,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,    -1,    -1,    -1,     8,
      -1,    -1,    -1,    12,    -1,    -1,    15,    -1,    -1,    -1,
      -1,    82,    83,    22,    23,    -1,    25,    26,    27,    -1,
      -1,    92,    93,    94,    95,    34,    -1,    -1,    37,    -1,
      39,    -1,    41,    42,    43,    -1,    -1,    -1,    47,    48,
      49,    -1,    51,    52,    53,    -1,    -1,    56,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,    -1,
      -1,    -1,     8,    -1,    -1,    -1,    12,    -1,    -1,    15,
      -1,    -1,    -1,    82,    -1,    -1,    22,    23,    87,    25,
      26,    27,    -1,    92,    93,    94,    95,    -1,    34,    -1,
      -1,    37,    -1,    39,    -1,    41,    42,    43,    -1,    -1,
      -1,    47,    48,    49,    -1,    51,    52,    53,    -1,    -1,
      56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,    -1,    -1,    -1,     8,    -1,    -1,    -1,    12,    -1,
      -1,    15,    -1,    -1,    -1,    -1,    82,    83,    22,    23,
      -1,    25,    26,    27,    -1,    -1,    92,    93,    94,    95,
      34,    -1,    -1,    37,    -1,    39,    -1,    41,    42,    43,
      -1,    -1,    -1,    47,    48,    49,    -1,    51,    52,    53,
      -1,    -1,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,    -1,    -1,    -1,     8,    -1,    -1,    -1,
      12,    -1,    -1,    15,    -1,    -1,    -1,    -1,    82,    -1,
      22,    23,    -1,    25,    26,    27,    -1,    -1,    92,    93,
      94,    95,    34,    -1,    -1,    37,    -1,    39,    -1,    41,
      42,    43,    -1,    -1,    -1,    47,    48,    49,    -1,    51,
      52,    53,    -1,    -1,    56,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,    -1,    -1,    -1,     8,    -1,
      -1,    -1,    12,    -1,    -1,    15,    -1,    -1,    -1,    -1,
      82,    -1,    22,    23,    -1,    25,    26,    27,    -1,    -1,
      92,    93,    94,    95,    34,    -1,    -1,    37,    -1,    39,
      -1,    41,    42,    43,    -1,     3,     4,    47,    48,    49,
       8,    51,    52,    53,    12,    -1,    -1,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    -1,    25,    26,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    37,
      -1,    39,    82,    41,    42,    43,    -1,    -1,    88,    47,
      48,    49,    -1,    51,    52,    53,     4,    -1,    -1,    -1,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    -1,    25,    -1,    27,
      -1,    29,    30,    31,    82,    -1,    34,    35,    -1,    -1,
      88,    -1,    -1,    -1,    42,    43,    -1,    45,    -1,    47
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     9,    24,    25,    29,    30,    31,    35,    44,   104,
     231,   232,   235,   236,   237,   238,   239,   240,   241,   243,
     244,   245,   270,   276,   285,    47,   105,   105,   233,   105,
     105,   114,   116,   233,   242,     0,   236,   239,   240,     9,
      35,   245,    81,    87,   246,   247,    84,    87,   234,    87,
     277,    55,    89,   102,   105,   105,    27,    34,   105,   115,
     116,   126,     4,     8,    10,    22,    23,    42,    43,    45,
      88,    95,   105,   115,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   241,   244,   248,   249,   250,   253,
     257,   258,   259,   268,   269,   270,   271,   274,   280,   281,
     247,   102,   105,    88,   235,   239,   102,    88,   241,   250,
     253,   257,   268,   278,   279,   102,   105,   116,   246,   247,
     277,   117,   105,    82,   105,   254,   255,    79,    10,   117,
     259,    88,   249,    87,   102,   189,   261,   233,   260,   105,
     270,   271,   102,   189,   273,    85,   282,   102,    88,   239,
      88,    88,   279,   102,   247,   102,   102,   105,   251,   252,
      82,    28,    32,    37,    83,   117,   262,   263,   264,   266,
     267,    89,    80,   102,   117,   254,   260,     3,     4,     5,
       8,    10,    11,    12,    13,    15,    17,    18,    19,    20,
      22,    23,    25,    26,    27,    33,    34,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    46,    48,    49,    51,
      52,    53,    56,    57,    82,    88,    92,    93,    94,    95,
     102,   105,   106,   107,   108,   109,   110,   111,   117,   132,
     133,   134,   135,   136,   138,   139,   140,   142,   143,   144,
     145,   146,   155,   156,   160,   164,   165,   166,   167,   168,
     181,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     199,   200,   201,   202,   203,   204,   210,   211,   212,   213,
     218,   219,   220,   221,   222,   223,   224,   225,   229,   242,
      82,   273,    80,    86,    88,   102,    89,    80,   102,    83,
     117,   280,    81,   272,   105,    83,    80,   117,     4,     8,
      22,    23,    27,    34,    42,    43,    87,   105,   139,   144,
     145,   146,   165,   166,   167,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   183,   184,
     242,   256,   283,   255,   251,   102,    82,    84,    85,   102,
     117,   102,    82,   188,    82,    82,     6,    12,   105,    82,
      87,   117,   157,   280,   281,   282,   102,   183,    82,   102,
     183,   189,    82,    82,    82,   165,   165,   105,   117,   183,
     165,   165,   165,   165,    81,    56,    57,    82,    84,    85,
      84,    64,    65,    66,    67,    68,    69,    70,    71,    73,
      75,    89,   113,   182,    88,   187,   102,   105,   196,   197,
     102,   102,    84,    83,   262,    86,   183,   185,   252,   102,
     189,   275,   105,     3,    37,    89,   265,   272,   264,   267,
     105,    88,   256,   284,    96,    97,    98,    92,    93,    72,
      74,   112,    62,    63,    90,    91,    60,    61,    99,   100,
     101,    58,    54,    59,    79,   102,    83,   262,   105,   141,
     183,   251,   117,    46,   102,   194,   201,   214,   217,   195,
     185,   102,   102,   183,   186,    82,    88,   105,   132,   134,
     136,   143,   158,   159,    82,    87,   147,   148,   152,   283,
      85,   283,   102,   183,   102,     7,    16,   226,   227,   228,
      45,   105,   117,   161,   183,   194,   230,   186,    83,    83,
     187,    32,    83,   105,   128,   129,   130,   131,   183,   105,
     141,   105,   183,    89,    80,   105,    83,    82,    82,   183,
     265,    80,    88,   165,   165,   165,   165,   169,   169,   170,
     170,   171,   171,   171,   171,   172,   172,   173,   174,   175,
     176,   179,   177,   183,    83,    80,    86,    83,    82,   102,
     186,   215,   102,    80,   105,   102,    83,    89,    80,    88,
      83,   128,    87,    88,   105,   149,   150,   153,   154,   184,
     141,    83,   189,   189,   228,    83,    55,    90,   162,    83,
      83,    84,    83,    83,   165,   127,   183,    81,    80,    83,
     131,   137,    86,   183,   198,   283,   197,    83,   128,    83,
     128,    88,   256,    81,   183,   186,    83,   216,   217,   102,
     102,   215,   201,    21,   188,   183,    88,   159,   147,    83,
     141,    89,    80,    88,    80,    88,    86,    87,   205,   105,
      80,    91,   163,   105,   188,   188,   129,    83,    83,   183,
      83,   188,    83,    83,   216,    83,   216,   102,   183,    14,
     147,    88,   147,   151,   183,    88,   105,   150,    88,   154,
     282,   283,     6,    12,    88,   206,   207,   208,   209,   162,
      80,    91,   162,   102,   188,   188,    83,   188,    83,    83,
     216,    83,   188,   283,   185,    81,    88,   207,    12,   190,
     209,   188,   188,   188,    83,   188,    81,   188
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   103,   104,   105,   106,   106,   106,   106,   106,   107,
     107,   108,   108,   109,   110,   110,   111,   112,   113,   114,
     115,   116,   116,   117,   117,   118,   119,   119,   119,   120,
     120,   121,   122,   122,   122,   122,   122,   123,   124,   125,
     125,   126,   126,   126,   127,   128,   128,   129,   129,   130,
     131,   131,   132,   132,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   134,   135,
     137,   136,   136,   136,   138,   138,   138,   138,   138,   138,
     138,   138,   139,   139,   140,   141,   141,   142,   143,   143,
     144,   145,   146,   146,   146,   146,   146,   147,   147,   148,
     148,   148,   149,   149,   150,   151,   151,   152,   152,   153,
     153,   154,   154,   155,   155,   155,   155,   155,   155,   156,
     157,   157,   157,   158,   158,   159,   159,   159,   159,   160,
     160,   160,   161,   161,   161,   161,   161,   161,   162,   162,
     163,   163,   164,   165,   165,   165,   165,   165,   165,   165,
     165,   166,   167,   168,   169,   169,   169,   169,   170,   170,
     170,   171,   171,   171,   172,   172,   172,   172,   172,   173,
     173,   173,   174,   174,   175,   175,   176,   176,   177,   177,
     178,   178,   179,   179,   180,   180,   181,   182,   182,   182,
     182,   182,   182,   182,   182,   182,   182,   182,   183,   183,
     184,   185,   186,   187,   187,   187,   188,   188,   188,   188,
     188,   188,   188,   188,   189,   189,   190,   190,   191,   192,
     193,   193,   194,   195,   196,   196,   197,   197,   198,   198,
     199,   200,   201,   201,   201,   201,   201,   201,   201,   202,
     202,   203,   203,   204,   205,   205,   206,   206,   207,   208,
     208,   209,   209,   210,   210,   210,   210,   211,   212,   213,
     213,   213,   213,   213,   213,   213,   213,   214,   214,   215,
     216,   217,   217,   218,   219,   219,   219,   219,   219,   220,
     221,   222,   222,   222,   223,   223,   224,   224,   225,   225,
     225,   226,   227,   228,   229,   230,   230,   231,   231,   231,
     231,   232,   232,   233,   233,   234,   234,   234,   234,   235,
     235,   236,   236,   237,   238,   239,   239,   240,   240,   241,
     241,   242,   243,   243,   243,   243,   243,   243,   243,   243,
     244,   244,   245,   245,   246,   247,   247,   248,   248,   249,
     249,   249,   249,   249,   249,   250,   250,   251,   251,   252,
     253,   253,   254,   254,   255,   255,   256,   256,   257,   258,
     258,   258,   258,   259,   259,   260,   261,   261,   262,   262,
     262,   263,   263,   264,   264,   264,   264,   265,   266,   266,
     267,   268,   268,   269,   269,   270,   270,   270,   271,   271,
     271,   271,   272,   272,   272,   272,   273,   273,   274,   275,
     275,   276,   276,   276,   276,   277,   277,   278,   278,   279,
     279,   279,   279,   279,   280,   281,   282,   282,   283,   283,
     283,   284,   284,   285
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     2,     2,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       0,     4,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     4,     4,     1,     3,     1,     3,     4,
       2,     2,     4,     5,     5,     6,     3,     1,     1,     2,
       3,     4,     1,     3,     3,     1,     1,     3,     4,     1,
       3,     1,     3,     5,     6,     6,     7,     3,     3,     2,
       2,     3,     4,     1,     3,     1,     1,     1,     3,     4,
       4,     4,     1,     2,     3,     4,     3,     4,     2,     3,
       1,     2,     4,     1,     2,     2,     2,     2,     1,     1,
       1,     2,     2,     4,     1,     3,     3,     3,     1,     3,
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
       1,     2,     1,     1,     2,     2,     3,     1,     2,     1,
       1,     1,     1,     1,     1,     4,     5,     1,     3,     3,
       3,     4,     1,     3,     1,     3,     1,     1,     2,     4,
       5,     5,     6,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     3,     2,     3,     3,     4,     2,     1,     1,
       3,     2,     3,     1,     2,     1,     1,     1,     3,     4,
       4,     5,     4,     5,     4,     5,     1,     1,     5,     1,
       1,     3,     4,     4,     5,     2,     3,     1,     2,     1,
       1,     1,     1,     1,     2,     1,     2,     3,     2,     3,
       4,     1,     3,     0
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
#line 36 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 45 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2508 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 96 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 97 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 98 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 99 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 100 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 102 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 103 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 105 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 106 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 109 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 117 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 118 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 121 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 171 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 173 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 179 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 181 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 183 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 184 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 188 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 189 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 191 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 193 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 194 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 195 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 197 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 198 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 200 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 202 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 203 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 204 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 205 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 206 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 208 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 210 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 212 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 213 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 216 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 217 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 218 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 222 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 226 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 227 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 229 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 230 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 232 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 234 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 235 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 237 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 238 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 240 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 241 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 242 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 243 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 244 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 245 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 246 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 247 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 248 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 249 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 250 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 251 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2880 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 252 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 253 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 255 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 257 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 259 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 260 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 261 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 262 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 264 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 265 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 266 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 267 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 268 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 269 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 270 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 271 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 273 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2982 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 274 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2988 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 276 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2994 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 278 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 279 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3006 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 281 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3012 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 283 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3018 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 284 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3024 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 286 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3030 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 288 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3036 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 290 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3042 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 291 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3048 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 292 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3054 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 293 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3060 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 294 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3066 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 296 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3072 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 297 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3078 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 299 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3084 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 300 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3090 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 301 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3096 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 303 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3102 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 304 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3108 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 306 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3114 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 308 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3120 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 309 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3126 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 311 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3132 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 312 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3138 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 314 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3144 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 315 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3150 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 317 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3156 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 318 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3162 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 320 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3168 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 321 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3174 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 322 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3180 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 323 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3186 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 324 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3192 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 325 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3198 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 327 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3204 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 329 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3210 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 330 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3216 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 331 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3222 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 333 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3228 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 334 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3234 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 336 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3240 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 337 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3246 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 338 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3252 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 339 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3258 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 341 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3264 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 342 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3270 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 343 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3276 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 345 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3282 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 346 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3288 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 347 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3294 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 348 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3300 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 349 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3306 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 350 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3312 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 352 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3318 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 353 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3324 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 355 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3330 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 356 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3336 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 358 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3342 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 360 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3348 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 361 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3354 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 362 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3360 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 363 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3366 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 364 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3372 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 365 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3378 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 366 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3384 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 367 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3390 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 369 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3396 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 371 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3402 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 373 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3408 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 375 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3414 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 376 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3420 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 377 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3426 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 378 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3432 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 380 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3438 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 381 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3444 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 382 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3450 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 384 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3456 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 385 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3462 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 386 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3468 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 388 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3474 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 389 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3480 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 390 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3486 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 391 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3492 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 392 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3498 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 394 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3504 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 395 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3510 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 396 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3516 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 398 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 399 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3528 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 401 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3534 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 402 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 404 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 405 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3552 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 407 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3558 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 408 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3564 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 410 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3570 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 411 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3576 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 413 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 414 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 416 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 417 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 419 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 421 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 422 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 423 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 424 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 425 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 426 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 427 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 428 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 429 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 430 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 431 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 433 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 434 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 436 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 438 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 440 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 444 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 445 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 446 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 448 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 449 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 450 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 451 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 452 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 453 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 454 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 455 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 457 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 458 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 460 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 461 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 463 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 465 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 467 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 468 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 470 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 472 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 474 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 475 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 477 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 478 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 480 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 481 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 483 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 485 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 487 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 488 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 489 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 490 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 491 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 492 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 493 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 495 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 496 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 498 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3936 "y.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 499 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3942 "y.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 501 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 503 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 504 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3960 "y.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 506 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3966 "y.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 507 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3972 "y.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 509 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3978 "y.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 511 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3984 "y.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 512 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 514 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3996 "y.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 515 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 517 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 518 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4014 "y.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 519 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4020 "y.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 520 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4026 "y.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 522 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4032 "y.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 524 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4038 "y.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 526 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4044 "y.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 527 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4050 "y.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 528 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4056 "y.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 529 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4062 "y.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 530 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4068 "y.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 531 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4074 "y.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 532 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4080 "y.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 533 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4086 "y.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 535 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4092 "y.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 536 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4098 "y.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 538 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4104 "y.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 540 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4110 "y.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 542 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4116 "y.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 543 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4122 "y.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 545 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4128 "y.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 547 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4134 "y.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 548 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4140 "y.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 549 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4146 "y.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 550 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4152 "y.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 551 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4158 "y.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 553 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4164 "y.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 555 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4170 "y.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 557 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4176 "y.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 558 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4182 "y.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 559 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4188 "y.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 561 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4194 "y.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 562 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4200 "y.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 564 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4206 "y.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 565 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4212 "y.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 567 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4218 "y.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 568 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4224 "y.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 569 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4230 "y.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 571 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4236 "y.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 573 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4242 "y.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 575 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4248 "y.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 577 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4254 "y.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 579 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4260 "y.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 580 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4266 "y.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 584 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4272 "y.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 585 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4278 "y.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 586 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4284 "y.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 587 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4290 "y.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 589 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4296 "y.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 590 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4302 "y.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 592 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4308 "y.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 593 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4314 "y.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 595 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4320 "y.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 596 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4326 "y.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 597 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4332 "y.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 598 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4338 "y.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 600 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4344 "y.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 601 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4350 "y.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 603 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4356 "y.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 604 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4362 "y.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 606 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4368 "y.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 608 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4374 "y.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 610 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4380 "y.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 611 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4386 "y.tab.c" /* yacc.c:1646  */
    break;

  case 317:
#line 613 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4392 "y.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 614 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4398 "y.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 616 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4404 "y.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 617 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4410 "y.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 619 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4416 "y.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 623 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4422 "y.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 624 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4428 "y.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 625 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4434 "y.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 626 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4440 "y.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 627 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4446 "y.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 628 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4452 "y.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 629 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4458 "y.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 630 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4464 "y.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 632 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4470 "y.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 633 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4476 "y.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 635 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4482 "y.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 636 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 638 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4494 "y.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 640 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 641 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 337:
#line 643 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 338:
#line 644 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 339:
#line 646 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 340:
#line 647 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 341:
#line 648 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 342:
#line 649 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 343:
#line 650 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 344:
#line 651 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 345:
#line 653 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 346:
#line 654 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 347:
#line 657 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 348:
#line 658 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 349:
#line 660 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 350:
#line 662 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 351:
#line 663 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 352:
#line 666 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 353:
#line 667 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 354:
#line 669 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 356:
#line 671 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 357:
#line 672 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 674 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 676 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 677 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 678 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 362:
#line 679 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 363:
#line 683 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 684 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 365:
#line 686 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 366:
#line 688 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 367:
#line 689 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 368:
#line 691 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4692 "y.tab.c" /* yacc.c:1646  */
    break;

  case 369:
#line 692 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 370:
#line 693 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 371:
#line 695 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 372:
#line 696 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 373:
#line 698 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 374:
#line 699 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 375:
#line 700 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 376:
#line 701 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 377:
#line 703 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 378:
#line 705 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 379:
#line 706 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 380:
#line 708 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 381:
#line 710 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 382:
#line 711 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 383:
#line 713 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 384:
#line 714 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 385:
#line 716 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 386:
#line 717 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 387:
#line 718 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 388:
#line 720 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 389:
#line 721 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 390:
#line 722 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4824 "y.tab.c" /* yacc.c:1646  */
    break;

  case 391:
#line 723 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 392:
#line 725 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 393:
#line 726 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 394:
#line 727 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 395:
#line 728 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 396:
#line 730 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 397:
#line 731 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 398:
#line 733 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 399:
#line 735 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 400:
#line 736 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 401:
#line 740 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 402:
#line 741 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 403:
#line 742 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 404:
#line 743 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 405:
#line 746 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 406:
#line 747 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 407:
#line 749 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 408:
#line 750 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 409:
#line 752 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 410:
#line 753 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 411:
#line 754 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 412:
#line 755 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 413:
#line 756 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 414:
#line 760 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 415:
#line 762 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 416:
#line 764 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4980 "y.tab.c" /* yacc.c:1646  */
    break;

  case 417:
#line 765 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4986 "y.tab.c" /* yacc.c:1646  */
    break;

  case 418:
#line 767 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 419:
#line 768 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4998 "y.tab.c" /* yacc.c:1646  */
    break;

  case 420:
#line 769 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 5004 "y.tab.c" /* yacc.c:1646  */
    break;

  case 421:
#line 771 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 5010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 422:
#line 772 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 5016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 423:
#line 775 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 5022 "y.tab.c" /* yacc.c:1646  */
    break;


#line 5026 "y.tab.c" /* yacc.c:1646  */
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
#line 778 "asgn3.ypp" /* yacc.c:1906  */
	


int main(void){
	yyparse();
	return 0;
}
