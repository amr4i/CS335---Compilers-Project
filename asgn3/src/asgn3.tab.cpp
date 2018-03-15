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
	

#line 91 "asgn3.tab.cpp" /* yacc.c:339  */

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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 26 "asgn3.ypp" /* yacc.c:355  */

	int iVal;
	char* sVal;
	char cVal;	

#line 213 "asgn3.tab.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 230 "asgn3.tab.cpp" /* yacc.c:358  */

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
#define YYLAST   3205

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  103
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  171
/* YYNRULES -- Number of rules.  */
#define YYNRULES  394
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  655

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
       2,     2,     2,    92,     2,     2,     2,    96,    99,     2,
      82,    83,    94,    90,    80,    91,    84,    95,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    81,   102,
      97,    89,    98,    79,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    85,     2,    86,   100,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    87,   101,    88,    93,     2,     2,     2,
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
       0,    38,    38,    42,    46,    47,    48,    49,    50,    52,
      53,    55,    56,    59,    67,    68,    71,    75,    77,    81,
      83,    85,    86,    90,    91,    93,    94,    95,    97,    98,
      99,   101,   103,   104,   105,   106,   107,   109,   111,   115,
     116,   120,   124,   125,   127,   128,   130,   132,   133,   135,
     136,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   150,   152,   152,   154,   155,   157,   158,   159,   160,
     161,   162,   163,   164,   166,   167,   169,   171,   172,   174,
     176,   177,   179,   180,   181,   182,   184,   186,   188,   189,
     190,   191,   192,   194,   195,   197,   198,   199,   201,   202,
     204,   206,   207,   209,   210,   212,   213,   215,   216,   218,
     219,   220,   221,   222,   223,   226,   227,   229,   231,   232,
     233,   234,   235,   236,   237,   238,   240,   242,   244,   246,
     247,   248,   249,   251,   252,   253,   255,   256,   257,   259,
     260,   261,   262,   263,   265,   266,   267,   269,   270,   272,
     273,   275,   276,   278,   279,   281,   282,   284,   285,   287,
     288,   290,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   304,   305,   307,   309,   311,   315,   316,
     317,   319,   320,   321,   322,   323,   324,   325,   326,   328,
     329,   331,   332,   334,   336,   338,   339,   341,   343,   345,
     346,   348,   349,   351,   352,   354,   356,   358,   359,   360,
     361,   362,   363,   364,   366,   367,   369,   370,   372,   374,
     375,   377,   378,   380,   382,   383,   385,   386,   388,   389,
     390,   391,   393,   395,   397,   398,   399,   400,   401,   402,
     403,   404,   406,   407,   409,   411,   413,   414,   416,   418,
     419,   420,   421,   422,   424,   426,   428,   429,   430,   432,
     433,   435,   436,   438,   439,   440,   442,   444,   446,   448,
     450,   451,   455,   456,   457,   458,   460,   461,   463,   464,
     466,   467,   468,   469,   471,   472,   474,   475,   477,   479,
     481,   482,   484,   485,   487,   488,   490,   494,   495,   496,
     497,   498,   499,   500,   501,   503,   504,   506,   507,   508,
     509,   511,   513,   514,   516,   517,   519,   520,   521,   522,
     523,   524,   526,   527,   530,   531,   533,   535,   536,   539,
     540,   542,   543,   544,   545,   547,   549,   550,   551,   552,
     556,   557,   559,   561,   562,   564,   565,   566,   568,   569,
     571,   572,   573,   574,   576,   578,   579,   581,   583,   584,
     587,   588,   589,   590,   592,   593,   594,   595,   597,   598,
     600,   602,   603,   607,   608,   609,   610,   613,   614,   616,
     617,   619,   620,   621,   622,   623,   627,   629,   630,   632,
     633,   634,   636,   637,   640
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
  "'+'", "'-'", "'!'", "'~'", "'*'", "'/'", "'%'", "'<'", "'>'", "'&'",
  "'^'", "'|'", "';'", "$accept", "start", "identifier", "literal",
  "boolean_literal", "integer_literal", "character_literal",
  "string_literal", "null_literal", "right_shift",
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
     325,   326,   327,   328,   329,   330,   331,   332,   333,    63,
      44,    58,    40,    41,    46,    91,    93,   123,   125,    61,
      43,    45,    33,   126,    42,    47,    37,    60,    62,    38,
      94,   124,    59
};
# endif

#define YYPACT_NINF -528

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-528)))

#define YYTABLE_NINF -214

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     561,    44,    44,  -528,  -528,  -528,  -528,    44,    44,    32,
    -528,  -528,   561,  -528,  -528,  -528,   209,  -528,  -528,  -528,
     326,  -528,  -528,  -528,  -528,   238,  -528,   168,    51,   -20,
     -52,  -528,    17,  -528,  -528,  -528,   209,  -528,    44,    44,
    -528,    34,  2142,    88,    40,    44,    64,    49,  2510,   124,
      44,    44,  -528,   238,    51,  -528,  -528,  -528,  -528,  -528,
     858,  -528,  -528,  -528,  -528,  -528,  -528,    44,    81,  -528,
    -528,    44,   152,   169,  -528,  -528,  -528,   228,  -528,  -528,
    3157,  2419,  -528,  -528,  -528,  -528,    78,    44,  -528,    90,
    -528,  -528,   207,  -528,  -528,  -528,   236,   286,  -528,  -528,
    -528,  -528,  -528,  -528,  -528,  3117,  -528,  -528,  -528,   263,
     218,    88,   220,   256,    44,   278,   437,   276,   -37,  -528,
     121,  -528,  -528,   858,    44,    44,    90,  -528,  -528,  1102,
    -528,  -528,  -528,    17,   289,  -528,  -528,  -528,  -528,  -528,
     533,  -528,  -528,  -528,  -528,   271,  -528,  -528,   293,    57,
    -528,   308,   858,  -528,  -528,   319,    44,   329,   327,  -528,
     858,  -528,  2565,    44,  -528,   323,  -528,    44,   120,   332,
    -528,   253,   331,   314,   333,   858,   316,   339,  1508,  -528,
     341,   342,    30,   343,   344,   345,   189,  -528,   347,  1581,
     349,   352,  -528,  1643,  -528,   340,   353,   354,   355,   358,
     360,  -528,  -528,  -528,  -528,  -528,  3020,  3020,  3081,  -528,
    3020,  3020,  3020,  3020,  -528,    -9,  -528,  -528,  -528,  -528,
    -528,  -528,  -528,    89,   362,  -528,  -528,   359,   115,  -528,
    -528,  -528,   324,   126,   167,   199,  -528,  -528,  -528,   952,
     211,   225,  -528,  -528,  -528,  -528,  -528,  1230,  -528,  -528,
    -528,   335,    44,   356,  -528,   364,  -528,  -528,  -528,  -528,
    -528,  -528,  -528,  -528,  -528,  -528,  -528,  -528,  -528,  -528,
    -528,  -528,   103,   367,  1178,  -528,  -528,  3020,    44,  -528,
     118,   152,    44,   119,  -528,   365,   319,  1933,    44,  -528,
    -528,  -528,  -528,  -528,  -528,  -528,  -528,  1891,  -528,  -528,
    -528,  -528,   952,  -528,  -528,   282,   303,   198,    72,   336,
     357,   348,   361,   397,   130,   378,  -528,  -528,  -528,  -528,
      17,   367,  -528,  -528,  -528,  -528,   133,  -528,  2601,    44,
    3020,  -528,    44,  -528,   858,   421,  1705,   858,  3020,   366,
     368,  3020,   143,   387,   386,   386,  -528,   374,  3020,  -528,
     375,    55,   735,  3081,  3020,  -528,  -528,   395,   398,  -528,
    -528,  -528,  -528,  1416,  1982,    44,  3020,    44,  -528,  -528,
    -528,  -528,  -528,  -528,  -528,  -528,  -528,  -528,  -528,  -528,
    -528,  -528,  3020,  -528,  -528,  -528,   393,   403,  -528,  -528,
    -528,    44,  -528,   402,  -528,  -528,  -528,  -528,  -528,  -528,
    -528,   404,   405,  3020,  -528,  -528,  -528,  -528,   365,  -528,
    -528,   161,  3020,  3020,  3020,  3020,  3020,  3020,  -528,  3020,
    3020,  3020,  3020,  3020,  3020,  3020,  3020,  3020,  3020,  3020,
    3020,  3020,  3020,  -528,  -528,   406,  -528,   243,  -528,   408,
     412,   409,  1767,  -528,  -528,   394,   417,    44,   416,  -528,
    -528,  -528,   436,  2044,  2106,  -528,  -528,  -528,  2197,  -528,
    -528,  -528,   438,  -528,   340,   340,   488,  -528,  -528,   440,
     442,  -528,  -528,   444,   445,  3020,  -528,  -528,  3020,  -528,
       1,   259,  -528,  2638,  -528,  -528,  -528,   250,  -528,  -528,
    2565,    44,  -528,  -528,  2259,  2321,  -528,  -528,  2383,  -528,
    -528,  -528,  -528,  -528,   282,   282,   303,   303,   198,   198,
     198,   198,    72,    72,   336,   357,   348,   361,  -528,   397,
     449,  -528,  3020,  -528,  -528,  3020,  2699,  -528,   429,  1829,
    3020,   511,  -528,  1508,   447,   265,  3020,  -528,    71,   174,
    -528,   188,  -528,  -528,   254,   448,  -528,  -528,  -528,  -528,
    -528,  1508,  1508,  -528,  -528,  -528,  -528,  2638,  -528,  -528,
    -528,  -528,  -528,  -528,  -528,  -528,  -528,   266,  -528,   287,
    -528,  -528,  3020,  -528,   453,  1508,   454,   417,  2761,  2823,
     441,  -528,  3020,   524,  -528,   447,   224,  2885,   -31,  -528,
    2474,  -528,   215,    14,  -528,  -528,  -528,  -528,  -528,  -528,
    -528,   443,  -528,  1508,  1508,   456,  1508,   461,  2958,   463,
    1508,  -528,  -528,  -528,  -528,  -528,  -528,   460,  -528,  -528,
    -528,   386,  -528,  3020,   470,  -528,    22,  -528,  1323,  -528,
    -528,  -528,  -528,  1508,  -528,  1508,  1508,   469,  1508,  -528,
    -528,   472,  -528,  -528,  -528,   317,  1416,  -528,  -528,  -528,
    -528,  1508,  -528,  -528,  -528
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     394,     0,     0,   307,   310,   309,   308,     0,     0,     0,
       2,   292,   274,   284,   286,   287,   273,   290,   293,   294,
       0,   305,   295,   275,     3,     0,   278,     0,     0,   278,
       0,    19,    21,    22,     1,   285,   272,   291,     0,     0,
     306,     0,     0,     0,   297,     0,     0,   276,     0,   373,
       0,     0,   289,     0,     0,    39,    40,   311,    30,    36,
       0,    32,    34,    33,    35,   341,   312,     0,   278,    25,
      20,     0,    23,    26,    28,    31,    27,     0,    29,   321,
       0,     0,   314,   316,   317,   318,     0,     0,   319,     0,
     320,    24,   299,   300,   279,   280,     0,     0,   277,   377,
     385,   381,   382,   383,   384,     0,   379,   375,   296,   278,
       0,     0,   298,   374,     0,     0,     0,   331,     0,   329,
       0,   386,    37,     0,     0,     0,     0,   313,   315,     0,
     344,   343,   335,   342,     0,   369,   368,   358,   303,   282,
       0,   281,   378,   380,   288,   301,   302,   376,     0,     0,
     324,     0,     0,   355,   356,   360,     0,     0,   345,   348,
       0,   347,     0,     0,   327,     0,   387,     0,     0,     0,
     359,     0,    30,     0,    36,     0,     0,     0,     0,    10,
       0,     0,     0,     0,    32,    34,     0,    16,    39,     0,
      40,     0,    79,     0,     9,     0,     0,    33,    35,     0,
       0,    11,    12,    13,    14,    15,     0,     0,     0,   189,
       0,     0,     0,     0,   193,   278,    51,     4,     5,     6,
       7,     8,   198,    82,    49,    52,    53,     0,    54,    55,
      56,    57,   118,    84,    85,    58,    50,    59,    60,     0,
     123,   124,   125,   209,   191,   180,   181,     0,   182,   178,
     179,     0,     0,     0,   183,     0,   184,   214,   215,   185,
     228,   229,   230,   231,   186,   249,   250,   251,   252,   253,
     187,   188,    83,    22,     0,   283,   304,     0,     0,   322,
       0,     0,     0,     0,   361,   350,   362,     0,     0,    66,
      67,    68,    69,    70,    71,    72,    73,     0,    54,    84,
      85,    58,   129,   123,   124,   133,   136,   139,   144,   147,
     149,   151,   153,   155,   157,   159,   175,   174,   333,   173,
      83,     0,   332,   334,   330,   388,     0,   328,     0,     0,
       0,   254,     0,   255,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    23,    24,     0,   259,     0,     0,   261,
       0,     0,     0,     0,     0,   126,   127,     0,     0,   119,
     120,   121,   122,     0,     0,     0,     0,     0,    86,    87,
     163,   164,   165,   166,   167,   168,   169,   170,   171,    18,
     162,   172,     0,   190,   192,   195,   201,   197,   199,   196,
     206,     0,   336,     0,   176,   326,   325,   372,   371,   370,
     357,     0,     0,     0,   352,   363,   349,   346,   351,   389,
     392,     0,     0,     0,     0,     0,     0,     0,    17,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   323,   337,     0,    80,     0,    77,   205,
       0,     0,     0,   242,   246,     0,   243,     0,     0,   258,
     256,   177,     0,     0,     0,    92,    93,    94,     0,   113,
     114,   260,     0,   262,     0,     0,   263,   266,   264,     0,
       0,   271,   270,     0,     0,     0,    61,   194,     0,    74,
     278,     0,    42,     0,    44,    47,    62,     0,    64,   161,
       0,     0,    65,   338,     0,     0,   354,   353,     0,   390,
     130,   131,   132,   129,   134,   135,   137,   138,   142,   143,
     140,   141,   145,   146,   148,   150,   152,   154,   158,   156,
       0,   339,     0,    81,   117,     0,     0,   244,     0,     0,
       0,     0,   257,     0,    88,     0,     0,    95,   278,     0,
      98,     0,   105,   107,     0,     0,   267,   268,   265,   116,
     115,     0,     0,   128,    48,    41,    46,     0,    75,    45,
      63,    76,   203,   202,   204,   200,   364,     0,   366,     0,
     391,   393,     0,    78,     0,     0,     0,   245,     0,     0,
       0,   247,     0,   216,    90,    89,     0,     0,     0,    96,
       0,   103,   109,     0,   218,   269,   232,    43,   365,   367,
     160,     0,   234,     0,     0,     0,     0,     0,     0,     0,
       0,    91,   108,   102,   100,   101,    97,     0,    99,   104,
     106,   110,   111,     0,     0,   219,     0,   221,     0,   224,
     233,   237,   236,     0,   235,     0,     0,     0,     0,   217,
     112,     0,   227,   220,   222,     0,   223,   225,   240,   239,
     238,     0,   248,   226,   241
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -528,  -528,    -1,  -528,  -528,  -528,  -528,  -528,  -528,  -528,
    -528,  -528,  -528,    23,    98,   -22,  -528,  -528,  -528,  -528,
    -528,   514,  -528,  -341,     2,  -528,    82,  -528,  -528,  -528,
    -528,  -528,  -528,    -4,  -528,  -351,  -528,  -528,  -528,   100,
     197,   214,  -456,  -528,  -528,   -16,  -528,  -528,  -528,   -24,
    -528,  -528,  -528,    86,   346,   363,  -528,   -10,  -134,   -34,
     -14,   141,   142,   145,   147,   148,  -528,   150,  -528,   425,
    -528,   729,  -441,  -334,  -331,  -244,   235,   -81,   -50,  -528,
    -528,  -528,  -192,   244,  -528,    91,  -528,  -528,  -528,  -322,
    -528,  -528,  -528,  -528,  -528,   -43,  -528,   -44,  -528,  -528,
    -528,  -528,  -528,    59,  -527,   258,  -528,  -528,  -528,  -528,
    -528,  -528,  -528,  -528,  -528,  -528,   123,  -528,  -528,  -528,
    -528,    16,  -528,   549,    10,  -528,  -528,     9,     3,     6,
      67,  -528,    11,     5,   544,   -13,  -528,   517,   -21,  -150,
     330,   -15,   477,   446,  -288,    12,  -528,   527,   486,  -528,
    -245,  -528,   328,   205,  -528,   338,    15,   534,   334,   491,
    -528,  -528,  -528,   564,  -528,   518,   -19,  -184,  -333,  -528,
    -528
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,   109,   216,   217,   218,   219,   220,   221,   419,
     381,    30,    69,    70,   222,    72,    73,    74,    75,    76,
      77,    78,   554,   481,   482,   483,   484,   223,   224,   225,
     226,   560,   227,   298,   229,   437,   230,   231,   232,   299,
     300,   301,   455,   456,   539,   540,   614,   457,   541,   542,
     236,   237,   238,   302,   303,   304,   242,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     382,   485,   319,   395,   527,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   387,   388,   563,   253,   254,   255,
     256,   257,   258,   594,   626,   627,   628,   629,   259,   260,
     261,   262,   445,   528,   576,   577,   263,   264,   265,   266,
     267,   268,   269,   270,   466,   467,   468,   271,   473,    10,
      11,   320,    47,    12,    13,    14,    15,    16,    17,    18,
     321,    19,    20,    21,    43,    44,    81,    82,    83,   149,
     150,    84,   118,   119,   322,    85,    86,    87,   134,   132,
     157,   158,   159,   404,   160,   161,    88,    89,   284,   137,
      90,   399,    22,    49,   105,   106,    91,   121,   323,   411,
      23
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      25,    26,   345,   384,   448,   131,    28,    29,   136,   410,
     452,   459,   460,   543,   444,   487,    24,   326,    27,    37,
     623,    36,    35,   474,    32,    40,   624,   101,   623,   393,
      92,    31,    34,   102,   624,    50,   338,    53,    54,    37,
     112,    68,   339,   163,    94,   136,    50,    68,    79,   108,
      52,   605,   607,    80,   100,    97,    50,   616,    32,    80,
     103,    55,   464,   104,    32,   164,   115,    32,    56,    51,
     117,   465,   363,     1,   110,    33,    32,    24,   584,    68,
      68,   637,   556,   435,   101,    40,    26,    79,     2,     3,
     102,    24,    80,     4,     5,     6,    32,    32,   145,     7,
      37,    45,   625,   133,    68,   140,    35,   544,     8,    33,
     643,   100,   535,   148,   351,    33,    80,   103,    33,   477,
     104,    32,   401,   117,    26,   228,    50,    33,   215,   611,
     281,   613,    32,   282,   420,   421,    50,   278,    48,    32,
      71,   133,    93,    37,   443,   272,    71,    33,    33,   543,
     -21,    98,    95,   567,   569,   285,   402,   564,   114,   279,
     587,   472,   117,   116,   343,   129,   148,   344,    32,   422,
     423,   364,    33,   365,   228,    42,    32,   129,   124,    71,
     130,   340,   439,    33,   430,   586,   -21,    45,   -21,   431,
      33,    32,   135,    58,   574,  -207,   273,    59,  -207,   398,
     163,   165,    32,    71,   444,   129,  -210,   166,   581,  -210,
     571,    61,    62,   278,   156,   239,    55,  -207,     1,    33,
     397,   167,   327,    56,   272,   453,   107,    33,  -210,   233,
     454,    63,    64,     2,     3,   433,    24,   120,     4,     5,
       6,   498,    33,   228,     7,     1,   215,  -211,   -38,   499,
    -211,   386,    45,    33,   588,    46,   444,   444,   288,   622,
       2,     3,   589,   272,   239,     4,     5,     6,   590,  -211,
     417,     7,   418,   332,   120,   273,   591,   148,   233,  -208,
       8,   400,  -208,   506,   342,   507,   444,   408,   640,   641,
      32,  -212,   355,   356,  -212,     1,   359,   360,   361,   362,
     120,  -208,   297,    32,   522,  -213,   357,   122,  -213,   138,
       2,     3,   612,  -212,   273,     4,     5,     6,    50,    41,
     144,     7,   146,   522,   139,    42,   234,  -213,   436,   523,
     522,   148,   228,   239,   522,    38,   561,   329,   330,   557,
     592,    33,   558,   235,    32,   557,   557,   233,   585,   598,
      32,     3,   272,    32,    33,     4,     5,     6,   147,   228,
     151,    39,   215,   480,   486,   162,   488,   557,    32,   272,
     599,   274,   156,   276,   141,   234,   412,   413,   414,   272,
     368,   369,   277,   546,   547,   156,   508,   509,   510,   511,
     492,   280,   235,   415,   416,    33,   424,   425,   642,   334,
     283,    33,   384,   273,    33,   504,   505,   287,   621,   325,
     512,   513,   286,   335,   328,   -66,   331,   -67,   333,    33,
     273,   334,   239,   336,   337,   341,   156,   129,   -68,   -69,
     273,   -70,   440,   -71,   348,   352,   233,   385,   -72,   -73,
     353,    58,   354,   367,   234,    59,   531,   366,   427,   239,
     470,   391,   480,   538,   403,   429,   426,   432,   389,    61,
      62,   235,   428,   233,    55,   152,   390,   441,   449,   153,
     450,    56,   458,   297,   154,   240,   461,   463,   475,    63,
      64,   476,   490,   491,    24,   493,   494,   495,   278,   521,
     386,   525,   241,   480,   480,   524,   529,   530,   500,   501,
     502,   503,   503,   503,   465,   503,   503,   503,   503,   503,
     503,   503,   503,   503,   503,   503,   503,   503,   532,   533,
     155,   545,   228,   549,   240,   550,   228,   551,   552,   228,
     572,   578,   582,   234,   454,   593,   601,   603,   610,   633,
     503,   241,     1,   608,   635,   630,   638,   228,   228,   587,
     235,   642,   651,   653,   243,    57,   480,     2,     3,   597,
     234,   553,     4,     5,     6,   559,   620,   514,     7,   515,
       1,   228,   618,   516,   228,   228,   517,   235,   646,   519,
     518,   447,   565,   644,   647,     2,     3,   617,   580,   548,
       4,     5,     6,   240,   446,    96,     7,   111,   128,   228,
     228,   168,   228,   243,   228,     8,   228,   125,   396,   324,
     241,   169,   239,   497,   126,   406,   239,   170,   113,   239,
     405,   275,     0,   143,   228,   407,   233,   215,     0,   228,
     233,   228,   228,   233,   228,     0,     0,   239,   239,     0,
       0,     0,   228,     0,   272,   215,     0,   228,     0,     0,
       0,   233,   233,     0,     0,     0,     0,     0,     0,     0,
       0,   239,   272,     0,   239,   239,     0,     0,     0,     0,
       0,     0,   243,     0,     0,   233,   503,     0,   233,   233,
       0,     0,   240,     0,     0,     0,     0,     0,     0,   239,
     239,     0,   239,     0,   239,   273,   239,     0,     0,   241,
       0,     0,     0,   233,   233,     0,   233,     0,   233,   240,
     233,     0,     0,   273,   239,     0,     0,     0,     0,   239,
       0,   239,   239,   234,   239,     0,   241,   234,   233,     0,
     234,     0,   239,   233,     0,   233,   233,   239,   233,    58,
     235,     0,     0,    59,   235,     0,   233,   235,   234,   234,
       0,   233,     0,     0,     0,     0,     0,    61,    62,     0,
       0,   243,    55,     0,     0,   235,   235,     0,   583,    56,
       0,     0,   234,     0,     0,   234,   234,    63,    64,     0,
     469,     0,    24,     0,     0,     0,   595,   596,   243,   235,
       0,     0,   235,   235,     0,     0,     0,     0,     0,     0,
     234,   234,     0,   234,     0,   234,     0,   234,     0,     0,
     602,     0,     0,     0,     0,     0,     0,   235,   235,     0,
     235,     0,   235,     0,   235,   234,     0,     0,     0,     0,
     234,     0,   234,   234,     0,   234,     0,     0,   631,   632,
       0,   634,   235,   234,     0,   639,     0,   235,   234,   235,
     235,     0,   235,     0,     0,     0,     0,     0,     0,     0,
     235,     0,    58,     0,     0,   235,    59,     0,   648,     0,
     649,   650,   240,   652,     0,     0,   240,     0,     0,   240,
      61,    62,     0,     0,     0,    55,   654,     0,     0,   241,
       0,   318,    56,   241,     0,     0,   241,   240,   240,     0,
      63,    64,     0,     0,     0,    24,     0,     0,     0,     0,
       0,     0,     0,     0,   241,   241,     0,     0,   347,     0,
       0,   240,   350,     0,   240,   240,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   358,   241,     0,
       0,   241,   241,     0,     0,     0,     0,     0,     0,   240,
     240,   243,   240,     0,   240,   243,   240,     0,   243,     0,
       0,     0,     0,     0,     0,     0,   241,   241,     0,   241,
       0,   241,     0,   241,   240,     0,   243,   243,     0,   240,
       0,   240,   240,     0,   240,     0,     0,     0,     0,     0,
       0,   241,   240,     0,     0,     0,   241,   240,   241,   241,
     243,   241,     0,   243,   243,     0,   394,     0,     0,   241,
       0,     0,     0,     0,   241,     0,   370,   371,   372,   373,
     374,   375,   376,   377,     0,   378,   318,   379,   243,   243,
       0,   243,     0,   243,     0,   243,     0,     0,     0,     0,
       0,   380,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   243,     0,     0,     0,     0,   243,   438,
     243,   243,     0,   243,     0,     0,     0,   394,     0,     0,
     451,   243,     0,     0,     0,     0,   243,   462,     0,     0,
       0,     0,   471,   451,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   438,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   171,   172,   173,     0,     0,
     174,   489,   175,   176,   177,   178,     0,   179,     0,   180,
     181,   182,   183,     0,   184,   185,     0,   186,   187,   188,
       0,     0,   496,     0,     0,   189,   190,     0,   191,   192,
     193,   194,   195,   196,   197,   198,   199,     0,   200,    24,
     201,   202,     0,   203,   204,   205,     0,     0,   206,   207,
       0,   520,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   451,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    58,     0,   208,     0,    59,   438,     0,   129,
     209,     0,   210,   211,   212,   213,     0,     0,     0,     0,
      61,    62,     0,     0,   214,    55,   152,   555,     0,     0,
     153,     0,    56,     0,     0,   154,     0,     0,     0,   562,
      63,    64,     0,     0,     0,    24,     0,   318,     0,     0,
       0,     0,     0,   171,   172,   173,     0,     0,   174,     0,
     175,   176,   177,   178,     0,   179,     0,   180,   181,   182,
     183,   573,   184,   185,   451,   186,   187,   188,   451,     0,
       0,   392,     0,   189,   190,   438,   191,   192,   193,   194,
     195,   196,   197,   198,   199,     0,   200,    24,   201,   202,
       0,   203,   204,   205,     0,     0,   206,   207,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   600,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   609,   208,     0,     0,     0,   615,   129,   383,     0,
     210,   211,   212,   213,     0,     0,   171,   172,   173,   623,
       0,   174,   214,   175,   176,   645,   178,     0,   179,     0,
     180,   181,   182,   183,     0,   184,   185,     0,   186,   187,
     188,     0,   394,     0,     0,     0,   189,   190,     0,   191,
     192,   193,   194,   195,   196,   197,   198,   199,     0,   200,
      24,   201,   202,     0,   203,   204,   205,     0,     0,   206,
     207,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   208,     0,     0,     0,     0,
     129,     0,     0,   210,   211,   212,   213,     0,     0,   171,
     172,   173,     0,     0,   174,   214,   175,   176,   177,   178,
       0,   179,     0,   180,   181,   182,   183,     0,   184,   185,
       0,   186,   187,   188,     0,     0,     0,     0,     0,   189,
     190,     0,   191,   192,   193,   194,   195,   196,   197,   198,
     199,     0,   200,    24,   201,   202,     0,   203,   204,   205,
       0,     0,   206,   207,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   208,     0,
       0,     0,     0,   129,     0,     0,   210,   211,   212,   213,
       0,   171,   289,   173,     0,     0,   290,     0,   214,   176,
     177,   178,     0,   179,     0,   180,   181,   182,   183,     0,
     291,   292,     0,   186,   187,   293,     0,     0,     0,     0,
       0,   189,   294,     0,   191,   192,   193,   194,   195,   196,
     295,   296,   199,     0,   200,    24,   201,   202,     0,   203,
     204,   205,     0,     0,   206,   207,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   171,   289,     0,     0,     0,   290,
     208,     0,     0,   177,     0,   129,   179,     0,   210,   211,
     212,   213,     0,   291,   292,     0,   186,   187,   293,     0,
     214,     0,     0,     0,     0,   294,     0,     0,   192,     0,
     194,     0,   196,   295,   296,     0,     0,     0,    24,   201,
     202,     0,   203,   204,   205,     0,     0,   206,   207,     0,
       0,     0,     0,     0,     0,     0,   171,   289,     0,     0,
       0,   290,     0,     0,     0,   177,     0,     0,   179,     0,
       0,     0,     0,   208,     0,   291,   292,     0,   186,   187,
     293,   210,   211,   212,   213,     0,     0,   294,     0,     0,
     192,     0,   194,   346,   196,   295,   296,     0,     0,     0,
      24,   201,   202,     0,   203,   204,   205,     0,     0,   206,
     207,     0,     0,     0,     0,     0,     0,     0,   171,   172,
       0,     0,     0,   174,     0,     0,     0,   177,     0,     0,
     179,     0,     0,     0,     0,   208,     0,   184,   185,     0,
     186,   187,   188,   210,   211,   212,   213,     0,     0,   190,
       0,     0,   192,     0,   194,   349,   196,   197,   198,     0,
       0,     0,    24,   201,   202,     0,   203,   204,   205,     0,
       0,   206,   207,     0,     0,     0,     0,     0,     0,     0,
     171,   289,     0,     0,     0,   290,     0,     0,     0,   177,
       0,     0,   179,     0,     0,     0,     0,   208,     0,   291,
     292,     0,   186,   187,   293,   210,   211,   212,   213,     0,
       0,   294,     0,     0,   192,     0,   194,   442,   196,   295,
     296,     0,     0,     0,    24,   201,   202,     0,   203,   204,
     205,     0,     0,   206,   207,     0,     0,     0,     0,     0,
       0,     0,   171,   289,     0,     0,     0,   290,     0,     0,
       0,   177,     0,     0,   179,     0,     0,     0,     0,   208,
       0,   291,   292,     0,   186,   187,   293,   210,   211,   212,
     213,     0,     0,   294,     0,     0,   192,     0,   194,   526,
     196,   295,   296,     0,     0,     0,    24,   201,   202,     0,
     203,   204,   205,     0,     0,   206,   207,     0,     0,     0,
       0,     0,     0,     0,   171,   289,     0,     0,     0,   290,
       0,     0,     0,   177,     0,     0,   179,     0,     0,     0,
       0,   208,     0,   291,   292,     0,   186,   187,   293,   210,
     211,   212,   213,     0,     0,   294,     0,     0,   192,     0,
     194,   579,   196,   295,   296,     0,     0,    58,    24,   201,
     202,    59,   203,   204,   205,     0,     0,   206,   207,     0,
       0,     0,     0,     0,     0,    61,    62,     0,     0,     0,
      55,   152,     0,     0,     0,   153,     0,    56,     0,     0,
     154,     0,     0,   208,     0,    63,    64,     0,   297,   409,
      24,   210,   211,   212,   213,   171,   289,     0,     0,     0,
     290,     0,     0,     0,   177,     0,     0,   179,     0,     0,
       0,     0,     0,     0,   291,   292,     0,   186,   187,   293,
       0,     0,     0,     0,   478,     0,   294,     0,     0,   192,
       0,   194,     0,   196,   295,   296,     0,     0,     0,    24,
     201,   202,     0,   203,   204,   205,     0,     0,   206,   207,
       0,     0,     0,     0,     0,     0,     0,   171,   289,     0,
       0,     0,   290,     0,     0,     0,   177,     0,     0,   179,
       0,     0,     0,     0,   208,   479,   291,   292,     0,   186,
     187,   293,   210,   211,   212,   213,   478,     0,   294,     0,
       0,   192,     0,   194,     0,   196,   295,   296,     0,     0,
       0,    24,   201,   202,     0,   203,   204,   205,     0,     0,
     206,   207,     0,     0,     0,     0,     0,     0,     0,   171,
     289,     0,     0,     0,   290,     0,     0,     0,   177,     0,
       0,   179,     0,     0,     0,     0,   208,   534,   291,   292,
       0,   186,   187,   293,   210,   211,   212,   213,     0,     0,
     294,     0,     0,   192,     0,   194,    58,   196,   295,   296,
      59,     1,    60,    24,   201,   202,     0,   203,   204,   205,
       0,     0,   206,   207,    61,    62,     0,     3,     0,    55,
       0,     4,     5,     6,     0,     0,    56,     7,     0,     0,
       0,     0,     0,     0,    63,    64,     0,    65,   208,    24,
       0,     0,     0,   536,   537,     0,   210,   211,   212,   213,
     171,   289,     0,     0,     0,   290,     0,     0,     0,   177,
       0,     0,   179,     0,     0,     0,     0,     0,     0,   291,
     292,     0,   186,   187,   293,     0,     0,     0,     0,     0,
      66,   294,     0,     0,   192,    67,   194,     0,   196,   295,
     296,     0,     0,     0,    24,   201,   202,     0,   203,   204,
     205,     0,     0,   206,   207,     0,     0,     0,     0,     0,
       0,     0,   171,   289,     0,     0,     0,   290,     0,     0,
       0,   177,     0,     0,   179,     0,     0,   165,     0,   208,
       0,   291,   292,   166,   186,   187,   293,   210,   211,   212,
     213,   478,     0,   294,     0,     0,   192,     0,   194,     0,
     196,   295,   296,     0,     0,     0,    24,   201,   202,     0,
     203,   204,   205,     0,     0,   206,   207,     0,     0,     0,
       0,     0,     0,     0,   171,   289,     0,     0,     0,   290,
       0,     0,     0,   177,     0,     0,   179,     0,     0,     0,
       0,   208,   566,   291,   292,     0,   186,   187,   293,   210,
     211,   212,   213,   478,     0,   294,     0,     0,   192,     0,
     194,     0,   196,   295,   296,     0,     0,     0,    24,   201,
     202,     0,   203,   204,   205,     0,     0,   206,   207,     0,
       0,     0,     0,     0,     0,     0,   171,   289,     0,     0,
       0,   290,     0,     0,     0,   177,     0,     0,   179,     0,
       0,     0,     0,   208,   568,   291,   292,     0,   186,   187,
     293,   210,   211,   212,   213,     0,     0,   294,     0,     0,
     192,     0,   194,    58,   196,   295,   296,    59,     1,    60,
      24,   201,   202,     0,   203,   204,   205,     0,     0,   206,
     207,    61,    62,     0,     3,     0,    55,     0,     4,     5,
       6,     0,     0,    56,     7,     0,     0,     0,     0,     0,
       0,    63,    64,     0,    65,   208,    24,     0,     0,     0,
     297,   570,     0,   210,   211,   212,   213,   171,   289,     0,
       0,     0,   290,     0,     0,     0,   177,     0,     0,   179,
       0,     0,     0,     0,     0,     0,   291,   292,     0,   186,
     187,   293,     0,     0,     0,     0,     0,   127,   294,     0,
       0,   192,    67,   194,    58,   196,   295,   296,    59,     1,
      60,    24,   201,   202,     0,   203,   204,   205,     0,     0,
     206,   207,    61,    62,     0,     3,     0,    55,     0,     4,
       5,     6,     0,     0,    56,     7,     0,     0,     0,     0,
       0,     0,    63,    64,     0,    65,   208,    24,     0,     0,
       0,   536,   619,     0,   210,   211,   212,   213,   171,   289,
       0,     0,     0,   290,     0,     0,     0,   177,     0,     0,
     179,     0,     0,     0,     0,     0,     0,   291,   292,     0,
     186,   187,   293,     0,     0,     0,     0,     0,    99,   294,
       0,     0,   192,     0,   194,    58,   196,   295,   296,    59,
       0,     0,    24,   201,   202,     0,   203,   204,   205,     0,
       0,   206,   207,    61,    62,     0,     0,     0,    55,   152,
       0,     0,     0,   153,     0,    56,     0,     0,   154,     0,
       0,   171,   289,    63,    64,     0,   290,   208,    24,     0,
     177,     0,   297,   179,     0,   210,   211,   212,   213,     0,
     291,   292,     0,   186,   187,   293,     0,     0,     0,     0,
     478,     0,   294,     0,     0,   192,     0,   194,     0,   196,
     295,   296,     0,     0,   434,    24,   201,   202,     0,   203,
     204,   205,     0,     0,   206,   207,     0,     0,     0,     0,
       0,     0,   171,   289,     0,     0,     0,   290,     0,     0,
       0,   177,     0,     0,   179,     0,     0,     0,     0,     0,
     208,   291,   292,     0,   186,   187,   293,     0,   210,   211,
     212,   213,     0,   294,     0,     0,   192,     0,   194,     0,
     196,   295,   296,     0,     0,     0,    24,   201,   202,     0,
     203,   204,   205,     0,     0,   206,   207,     0,     0,     0,
       0,     0,     0,     0,   171,   289,     0,     0,     0,   290,
       0,     0,     0,   177,     0,     0,   179,     0,     0,     0,
       0,   208,   575,   291,   292,     0,   186,   187,   293,   210,
     211,   212,   213,     0,     0,   294,     0,     0,   192,     0,
     194,     0,   196,   295,   296,     0,     0,     0,    24,   201,
     202,     0,   203,   204,   205,     0,     0,   206,   207,     0,
       0,     0,     0,     0,     0,     0,   171,   289,     0,     0,
       0,   290,     0,     0,     0,   177,     0,     0,   179,     0,
       0,     0,     0,   208,   604,   291,   292,     0,   186,   187,
     293,   210,   211,   212,   213,     0,     0,   294,     0,     0,
     192,     0,   194,     0,   196,   295,   296,     0,     0,     0,
      24,   201,   202,     0,   203,   204,   205,     0,     0,   206,
     207,     0,     0,     0,     0,     0,     0,     0,   171,   289,
       0,     0,     0,   290,     0,     0,     0,   177,     0,     0,
     179,     0,     0,     0,     0,   208,   606,   291,   292,     0,
     186,   187,   293,   210,   211,   212,   213,     0,     0,   294,
       0,     0,   192,     0,   194,     0,   196,   295,   296,     0,
       0,     0,    24,   201,   202,     0,   203,   204,   205,     0,
       0,   206,   207,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   171,   289,     0,     0,     0,   290,   208,     0,     0,
     177,     0,   454,   179,     0,   210,   211,   212,   213,     0,
     291,   292,     0,   186,   187,   293,     0,     0,     0,     0,
       0,     0,   294,     0,     0,   192,     0,   194,     0,   196,
     295,   296,     0,     0,     0,    24,   201,   202,     0,   203,
     204,   205,     0,     0,   206,   207,     0,     0,     0,     0,
       0,     0,     0,   171,   289,     0,     0,     0,   290,     0,
       0,     0,   177,     0,     0,   179,     0,     0,     0,     0,
     208,   636,   291,   292,     0,   186,   187,   293,   210,   211,
     212,   213,     0,     0,   294,     0,     0,   192,     0,   194,
       0,   196,   295,   296,     0,     0,     0,    24,   201,   202,
       0,   203,   204,   205,     0,     0,   206,   207,     0,     0,
       0,     0,     0,     0,   171,   172,     0,     0,     0,   174,
       0,     0,     0,   177,     0,     0,   179,     0,     0,     0,
       0,     0,   208,   184,   185,     0,   186,   187,   188,     0,
     210,   211,   212,   213,     0,   190,     0,     0,   192,     0,
     194,    58,   196,   197,   198,    59,     1,    60,    24,   201,
     202,     0,   203,   204,   205,     0,     0,   206,   207,    61,
      62,     0,     3,     0,    55,     0,     4,     5,     6,     0,
       0,    56,     7,     0,     0,     0,     0,     0,     0,    63,
      64,    58,    65,   208,    24,    59,    38,   123,     0,     0,
       0,   210,   211,   212,   213,     0,     0,     0,     0,    61,
      62,     0,     3,     0,    55,     0,     4,     5,     6,     0,
       0,    56,    39,     0,     0,     0,     0,     0,     0,    63,
      64,     0,    65,     0,    24,   142
};

static const yytype_int16 yycheck[] =
{
       1,     2,   186,   247,   338,    86,     7,     8,    89,   297,
     341,   344,   345,   454,   336,   366,    47,   167,     2,    16,
       6,    12,    12,   354,     8,    20,    12,    48,     6,   274,
      43,     8,     0,    48,    12,    55,     6,    38,    39,    36,
      53,    42,    12,    80,    45,   126,    55,    48,    42,    50,
     102,   578,   579,    42,    48,    46,    55,    88,    42,    48,
      48,    27,     7,    48,    48,   102,    67,    51,    34,    89,
      71,    16,    81,     9,    51,     8,    60,    47,   534,    80,
      81,   608,    81,   328,   105,    80,    87,    81,    24,    25,
     105,    47,    81,    29,    30,    31,    80,    81,   111,    35,
      97,    84,    88,    87,   105,    96,    96,   458,    44,    42,
      88,   105,   453,   114,   195,    48,   105,   105,    51,   363,
     105,   105,     3,   124,   125,   129,    55,    60,   129,   585,
     152,   587,   116,   152,    62,    63,    55,    80,    87,   123,
      42,   125,   102,   140,   336,   129,    48,    80,    81,   590,
      47,   102,    88,   494,   495,   156,    37,   490,    60,   102,
      89,   353,   163,    82,   186,    87,   167,   186,   152,    97,
      98,    82,   105,    84,   178,    87,   160,    87,    80,    81,
     102,   182,   332,   116,    54,   536,    83,    84,    85,    59,
     123,   175,   102,     4,   525,    80,   129,     8,    83,   280,
      80,    80,   186,   105,   526,    87,    80,    86,   530,    83,
     498,    22,    23,    80,   116,   129,    27,   102,     9,   152,
     102,   123,   102,    34,   208,    82,   102,   160,   102,   129,
      87,    42,    43,    24,    25,   102,    47,    85,    29,    30,
      31,    80,   175,   247,    35,     9,   247,    80,    79,    88,
      83,   252,    84,   186,    80,    87,   578,   579,   160,   592,
      24,    25,    88,   247,   178,    29,    30,    31,    80,   102,
      72,    35,    74,   175,    85,   208,    88,   278,   178,    80,
      44,   282,    83,   417,   186,   419,   608,   288,   621,   623,
     274,    80,   206,   207,    83,     9,   210,   211,   212,   213,
      85,   102,    87,   287,    80,    80,   208,    79,    83,   102,
      24,    25,    88,   102,   247,    29,    30,    31,    55,    81,
     102,    35,   102,    80,    88,    87,   129,   102,   329,    86,
      80,   332,   336,   247,    80,     9,    86,    84,    85,    80,
      86,   274,    83,   129,   328,    80,    80,   247,    83,    83,
     334,    25,   336,   337,   287,    29,    30,    31,   102,   363,
      82,    35,   363,   364,   365,    89,   367,    80,   352,   353,
      83,    82,   274,   102,    88,   178,    94,    95,    96,   363,
      56,    57,    89,   464,   465,   287,   420,   421,   422,   423,
     391,    83,   178,    90,    91,   328,    60,    61,    81,    82,
      81,   334,   646,   336,   337,   415,   416,    80,   592,    86,
     424,   425,    83,   178,    82,    84,   102,    84,   102,   352,
     353,    82,   336,    82,    82,    82,   328,    87,    84,    84,
     363,    84,   334,    84,    82,    82,   336,   102,    84,    84,
      82,     4,    82,    84,   247,     8,   447,    85,   100,   363,
     352,    84,   453,   454,    89,    58,    99,    79,   102,    22,
      23,   247,   101,   363,    27,    28,   102,    46,   102,    32,
     102,    34,    85,    87,    37,   129,   102,   102,    83,    42,
      43,    83,    89,    80,    47,    83,    82,    82,    80,    83,
     491,    82,   129,   494,   495,    83,   102,    80,   412,   413,
     414,   415,   416,   417,    16,   419,   420,   421,   422,   423,
     424,   425,   426,   427,   428,   429,   430,   431,   102,    83,
      83,    83,   526,    83,   178,    83,   530,    83,    83,   533,
      81,   102,    21,   336,    87,    87,    83,    83,    14,    83,
     454,   178,     9,   102,    83,   102,    83,   551,   552,    89,
     336,    81,    83,    81,   129,    41,   557,    24,    25,   557,
     363,   475,    29,    30,    31,   483,   590,   426,    35,   427,
       9,   575,   588,   428,   578,   579,   429,   363,   628,   431,
     430,   337,   491,   626,   628,    24,    25,   588,   529,   466,
      29,    30,    31,   247,   336,    46,    35,    53,    81,   603,
     604,   124,   606,   178,   608,    44,   610,    80,   278,   163,
     247,   125,   526,   408,    80,   287,   530,   126,    54,   533,
     286,    88,    -1,   105,   628,   287,   526,   628,    -1,   633,
     530,   635,   636,   533,   638,    -1,    -1,   551,   552,    -1,
      -1,    -1,   646,    -1,   628,   646,    -1,   651,    -1,    -1,
      -1,   551,   552,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   575,   646,    -1,   578,   579,    -1,    -1,    -1,    -1,
      -1,    -1,   247,    -1,    -1,   575,   590,    -1,   578,   579,
      -1,    -1,   336,    -1,    -1,    -1,    -1,    -1,    -1,   603,
     604,    -1,   606,    -1,   608,   628,   610,    -1,    -1,   336,
      -1,    -1,    -1,   603,   604,    -1,   606,    -1,   608,   363,
     610,    -1,    -1,   646,   628,    -1,    -1,    -1,    -1,   633,
      -1,   635,   636,   526,   638,    -1,   363,   530,   628,    -1,
     533,    -1,   646,   633,    -1,   635,   636,   651,   638,     4,
     526,    -1,    -1,     8,   530,    -1,   646,   533,   551,   552,
      -1,   651,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,
      -1,   336,    27,    -1,    -1,   551,   552,    -1,   533,    34,
      -1,    -1,   575,    -1,    -1,   578,   579,    42,    43,    -1,
      45,    -1,    47,    -1,    -1,    -1,   551,   552,   363,   575,
      -1,    -1,   578,   579,    -1,    -1,    -1,    -1,    -1,    -1,
     603,   604,    -1,   606,    -1,   608,    -1,   610,    -1,    -1,
     575,    -1,    -1,    -1,    -1,    -1,    -1,   603,   604,    -1,
     606,    -1,   608,    -1,   610,   628,    -1,    -1,    -1,    -1,
     633,    -1,   635,   636,    -1,   638,    -1,    -1,   603,   604,
      -1,   606,   628,   646,    -1,   610,    -1,   633,   651,   635,
     636,    -1,   638,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     646,    -1,     4,    -1,    -1,   651,     8,    -1,   633,    -1,
     635,   636,   526,   638,    -1,    -1,   530,    -1,    -1,   533,
      22,    23,    -1,    -1,    -1,    27,   651,    -1,    -1,   526,
      -1,   162,    34,   530,    -1,    -1,   533,   551,   552,    -1,
      42,    43,    -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   551,   552,    -1,    -1,   189,    -1,
      -1,   575,   193,    -1,   578,   579,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   208,   575,    -1,
      -1,   578,   579,    -1,    -1,    -1,    -1,    -1,    -1,   603,
     604,   526,   606,    -1,   608,   530,   610,    -1,   533,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   603,   604,    -1,   606,
      -1,   608,    -1,   610,   628,    -1,   551,   552,    -1,   633,
      -1,   635,   636,    -1,   638,    -1,    -1,    -1,    -1,    -1,
      -1,   628,   646,    -1,    -1,    -1,   633,   651,   635,   636,
     575,   638,    -1,   578,   579,    -1,   277,    -1,    -1,   646,
      -1,    -1,    -1,    -1,   651,    -1,    64,    65,    66,    67,
      68,    69,    70,    71,    -1,    73,   297,    75,   603,   604,
      -1,   606,    -1,   608,    -1,   610,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   628,    -1,    -1,    -1,    -1,   633,   330,
     635,   636,    -1,   638,    -1,    -1,    -1,   338,    -1,    -1,
     341,   646,    -1,    -1,    -1,    -1,   651,   348,    -1,    -1,
      -1,    -1,   353,   354,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   366,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,    -1,
       8,   382,    10,    11,    12,    13,    -1,    15,    -1,    17,
      18,    19,    20,    -1,    22,    23,    -1,    25,    26,    27,
      -1,    -1,   403,    -1,    -1,    33,    34,    -1,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    -1,    46,    47,
      48,    49,    -1,    51,    52,    53,    -1,    -1,    56,    57,
      -1,   432,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   442,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     4,    -1,    82,    -1,     8,   458,    -1,    87,
      88,    -1,    90,    91,    92,    93,    -1,    -1,    -1,    -1,
      22,    23,    -1,    -1,   102,    27,    28,   478,    -1,    -1,
      32,    -1,    34,    -1,    -1,    37,    -1,    -1,    -1,   490,
      42,    43,    -1,    -1,    -1,    47,    -1,   498,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,    -1,    -1,     8,    -1,
      10,    11,    12,    13,    -1,    15,    -1,    17,    18,    19,
      20,   522,    22,    23,   525,    25,    26,    27,   529,    -1,
      -1,    83,    -1,    33,    34,   536,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    -1,    46,    47,    48,    49,
      -1,    51,    52,    53,    -1,    -1,    56,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   572,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   582,    82,    -1,    -1,    -1,   587,    87,    88,    -1,
      90,    91,    92,    93,    -1,    -1,     3,     4,     5,     6,
      -1,     8,   102,    10,    11,    12,    13,    -1,    15,    -1,
      17,    18,    19,    20,    -1,    22,    23,    -1,    25,    26,
      27,    -1,   623,    -1,    -1,    -1,    33,    34,    -1,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    -1,    46,
      47,    48,    49,    -1,    51,    52,    53,    -1,    -1,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,
      87,    -1,    -1,    90,    91,    92,    93,    -1,    -1,     3,
       4,     5,    -1,    -1,     8,   102,    10,    11,    12,    13,
      -1,    15,    -1,    17,    18,    19,    20,    -1,    22,    23,
      -1,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,    33,
      34,    -1,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    -1,    46,    47,    48,    49,    -1,    51,    52,    53,
      -1,    -1,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    87,    -1,    -1,    90,    91,    92,    93,
      -1,     3,     4,     5,    -1,    -1,     8,    -1,   102,    11,
      12,    13,    -1,    15,    -1,    17,    18,    19,    20,    -1,
      22,    23,    -1,    25,    26,    27,    -1,    -1,    -1,    -1,
      -1,    33,    34,    -1,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    -1,    46,    47,    48,    49,    -1,    51,
      52,    53,    -1,    -1,    56,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,    -1,    -1,    -1,     8,
      82,    -1,    -1,    12,    -1,    87,    15,    -1,    90,    91,
      92,    93,    -1,    22,    23,    -1,    25,    26,    27,    -1,
     102,    -1,    -1,    -1,    -1,    34,    -1,    -1,    37,    -1,
      39,    -1,    41,    42,    43,    -1,    -1,    -1,    47,    48,
      49,    -1,    51,    52,    53,    -1,    -1,    56,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,    -1,    -1,
      -1,     8,    -1,    -1,    -1,    12,    -1,    -1,    15,    -1,
      -1,    -1,    -1,    82,    -1,    22,    23,    -1,    25,    26,
      27,    90,    91,    92,    93,    -1,    -1,    34,    -1,    -1,
      37,    -1,    39,   102,    41,    42,    43,    -1,    -1,    -1,
      47,    48,    49,    -1,    51,    52,    53,    -1,    -1,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
      -1,    -1,    -1,     8,    -1,    -1,    -1,    12,    -1,    -1,
      15,    -1,    -1,    -1,    -1,    82,    -1,    22,    23,    -1,
      25,    26,    27,    90,    91,    92,    93,    -1,    -1,    34,
      -1,    -1,    37,    -1,    39,   102,    41,    42,    43,    -1,
      -1,    -1,    47,    48,    49,    -1,    51,    52,    53,    -1,
      -1,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,    -1,    -1,    -1,     8,    -1,    -1,    -1,    12,
      -1,    -1,    15,    -1,    -1,    -1,    -1,    82,    -1,    22,
      23,    -1,    25,    26,    27,    90,    91,    92,    93,    -1,
      -1,    34,    -1,    -1,    37,    -1,    39,   102,    41,    42,
      43,    -1,    -1,    -1,    47,    48,    49,    -1,    51,    52,
      53,    -1,    -1,    56,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,    -1,    -1,    -1,     8,    -1,    -1,
      -1,    12,    -1,    -1,    15,    -1,    -1,    -1,    -1,    82,
      -1,    22,    23,    -1,    25,    26,    27,    90,    91,    92,
      93,    -1,    -1,    34,    -1,    -1,    37,    -1,    39,   102,
      41,    42,    43,    -1,    -1,    -1,    47,    48,    49,    -1,
      51,    52,    53,    -1,    -1,    56,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,    -1,    -1,    -1,     8,
      -1,    -1,    -1,    12,    -1,    -1,    15,    -1,    -1,    -1,
      -1,    82,    -1,    22,    23,    -1,    25,    26,    27,    90,
      91,    92,    93,    -1,    -1,    34,    -1,    -1,    37,    -1,
      39,   102,    41,    42,    43,    -1,    -1,     4,    47,    48,
      49,     8,    51,    52,    53,    -1,    -1,    56,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    -1,
      27,    28,    -1,    -1,    -1,    32,    -1,    34,    -1,    -1,
      37,    -1,    -1,    82,    -1,    42,    43,    -1,    87,    88,
      47,    90,    91,    92,    93,     3,     4,    -1,    -1,    -1,
       8,    -1,    -1,    -1,    12,    -1,    -1,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    -1,    25,    26,    27,
      -1,    -1,    -1,    -1,    32,    -1,    34,    -1,    -1,    37,
      -1,    39,    -1,    41,    42,    43,    -1,    -1,    -1,    47,
      48,    49,    -1,    51,    52,    53,    -1,    -1,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,    -1,
      -1,    -1,     8,    -1,    -1,    -1,    12,    -1,    -1,    15,
      -1,    -1,    -1,    -1,    82,    83,    22,    23,    -1,    25,
      26,    27,    90,    91,    92,    93,    32,    -1,    34,    -1,
      -1,    37,    -1,    39,    -1,    41,    42,    43,    -1,    -1,
      -1,    47,    48,    49,    -1,    51,    52,    53,    -1,    -1,
      56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,    -1,    -1,    -1,     8,    -1,    -1,    -1,    12,    -1,
      -1,    15,    -1,    -1,    -1,    -1,    82,    83,    22,    23,
      -1,    25,    26,    27,    90,    91,    92,    93,    -1,    -1,
      34,    -1,    -1,    37,    -1,    39,     4,    41,    42,    43,
       8,     9,    10,    47,    48,    49,    -1,    51,    52,    53,
      -1,    -1,    56,    57,    22,    23,    -1,    25,    -1,    27,
      -1,    29,    30,    31,    -1,    -1,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    45,    82,    47,
      -1,    -1,    -1,    87,    88,    -1,    90,    91,    92,    93,
       3,     4,    -1,    -1,    -1,     8,    -1,    -1,    -1,    12,
      -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    -1,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,
      88,    34,    -1,    -1,    37,    93,    39,    -1,    41,    42,
      43,    -1,    -1,    -1,    47,    48,    49,    -1,    51,    52,
      53,    -1,    -1,    56,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,    -1,    -1,    -1,     8,    -1,    -1,
      -1,    12,    -1,    -1,    15,    -1,    -1,    80,    -1,    82,
      -1,    22,    23,    86,    25,    26,    27,    90,    91,    92,
      93,    32,    -1,    34,    -1,    -1,    37,    -1,    39,    -1,
      41,    42,    43,    -1,    -1,    -1,    47,    48,    49,    -1,
      51,    52,    53,    -1,    -1,    56,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,    -1,    -1,    -1,     8,
      -1,    -1,    -1,    12,    -1,    -1,    15,    -1,    -1,    -1,
      -1,    82,    83,    22,    23,    -1,    25,    26,    27,    90,
      91,    92,    93,    32,    -1,    34,    -1,    -1,    37,    -1,
      39,    -1,    41,    42,    43,    -1,    -1,    -1,    47,    48,
      49,    -1,    51,    52,    53,    -1,    -1,    56,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,    -1,    -1,
      -1,     8,    -1,    -1,    -1,    12,    -1,    -1,    15,    -1,
      -1,    -1,    -1,    82,    83,    22,    23,    -1,    25,    26,
      27,    90,    91,    92,    93,    -1,    -1,    34,    -1,    -1,
      37,    -1,    39,     4,    41,    42,    43,     8,     9,    10,
      47,    48,    49,    -1,    51,    52,    53,    -1,    -1,    56,
      57,    22,    23,    -1,    25,    -1,    27,    -1,    29,    30,
      31,    -1,    -1,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    45,    82,    47,    -1,    -1,    -1,
      87,    88,    -1,    90,    91,    92,    93,     3,     4,    -1,
      -1,    -1,     8,    -1,    -1,    -1,    12,    -1,    -1,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,    25,
      26,    27,    -1,    -1,    -1,    -1,    -1,    88,    34,    -1,
      -1,    37,    93,    39,     4,    41,    42,    43,     8,     9,
      10,    47,    48,    49,    -1,    51,    52,    53,    -1,    -1,
      56,    57,    22,    23,    -1,    25,    -1,    27,    -1,    29,
      30,    31,    -1,    -1,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    45,    82,    47,    -1,    -1,
      -1,    87,    88,    -1,    90,    91,    92,    93,     3,     4,
      -1,    -1,    -1,     8,    -1,    -1,    -1,    12,    -1,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,
      25,    26,    27,    -1,    -1,    -1,    -1,    -1,    88,    34,
      -1,    -1,    37,    -1,    39,     4,    41,    42,    43,     8,
      -1,    -1,    47,    48,    49,    -1,    51,    52,    53,    -1,
      -1,    56,    57,    22,    23,    -1,    -1,    -1,    27,    28,
      -1,    -1,    -1,    32,    -1,    34,    -1,    -1,    37,    -1,
      -1,     3,     4,    42,    43,    -1,     8,    82,    47,    -1,
      12,    -1,    87,    15,    -1,    90,    91,    92,    93,    -1,
      22,    23,    -1,    25,    26,    27,    -1,    -1,    -1,    -1,
      32,    -1,    34,    -1,    -1,    37,    -1,    39,    -1,    41,
      42,    43,    -1,    -1,    83,    47,    48,    49,    -1,    51,
      52,    53,    -1,    -1,    56,    57,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,    -1,    -1,    -1,     8,    -1,    -1,
      -1,    12,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      82,    22,    23,    -1,    25,    26,    27,    -1,    90,    91,
      92,    93,    -1,    34,    -1,    -1,    37,    -1,    39,    -1,
      41,    42,    43,    -1,    -1,    -1,    47,    48,    49,    -1,
      51,    52,    53,    -1,    -1,    56,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,    -1,    -1,    -1,     8,
      -1,    -1,    -1,    12,    -1,    -1,    15,    -1,    -1,    -1,
      -1,    82,    83,    22,    23,    -1,    25,    26,    27,    90,
      91,    92,    93,    -1,    -1,    34,    -1,    -1,    37,    -1,
      39,    -1,    41,    42,    43,    -1,    -1,    -1,    47,    48,
      49,    -1,    51,    52,    53,    -1,    -1,    56,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,    -1,    -1,
      -1,     8,    -1,    -1,    -1,    12,    -1,    -1,    15,    -1,
      -1,    -1,    -1,    82,    83,    22,    23,    -1,    25,    26,
      27,    90,    91,    92,    93,    -1,    -1,    34,    -1,    -1,
      37,    -1,    39,    -1,    41,    42,    43,    -1,    -1,    -1,
      47,    48,    49,    -1,    51,    52,    53,    -1,    -1,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
      -1,    -1,    -1,     8,    -1,    -1,    -1,    12,    -1,    -1,
      15,    -1,    -1,    -1,    -1,    82,    83,    22,    23,    -1,
      25,    26,    27,    90,    91,    92,    93,    -1,    -1,    34,
      -1,    -1,    37,    -1,    39,    -1,    41,    42,    43,    -1,
      -1,    -1,    47,    48,    49,    -1,    51,    52,    53,    -1,
      -1,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,    -1,    -1,    -1,     8,    82,    -1,    -1,
      12,    -1,    87,    15,    -1,    90,    91,    92,    93,    -1,
      22,    23,    -1,    25,    26,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    -1,    -1,    37,    -1,    39,    -1,    41,
      42,    43,    -1,    -1,    -1,    47,    48,    49,    -1,    51,
      52,    53,    -1,    -1,    56,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,    -1,    -1,    -1,     8,    -1,
      -1,    -1,    12,    -1,    -1,    15,    -1,    -1,    -1,    -1,
      82,    83,    22,    23,    -1,    25,    26,    27,    90,    91,
      92,    93,    -1,    -1,    34,    -1,    -1,    37,    -1,    39,
      -1,    41,    42,    43,    -1,    -1,    -1,    47,    48,    49,
      -1,    51,    52,    53,    -1,    -1,    56,    57,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,    -1,    -1,    -1,     8,
      -1,    -1,    -1,    12,    -1,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    82,    22,    23,    -1,    25,    26,    27,    -1,
      90,    91,    92,    93,    -1,    34,    -1,    -1,    37,    -1,
      39,     4,    41,    42,    43,     8,     9,    10,    47,    48,
      49,    -1,    51,    52,    53,    -1,    -1,    56,    57,    22,
      23,    -1,    25,    -1,    27,    -1,    29,    30,    31,    -1,
      -1,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,     4,    45,    82,    47,     8,     9,    10,    -1,    -1,
      -1,    90,    91,    92,    93,    -1,    -1,    -1,    -1,    22,
      23,    -1,    25,    -1,    27,    -1,    29,    30,    31,    -1,
      -1,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    45,    -1,    47,    88
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     9,    24,    25,    29,    30,    31,    35,    44,   104,
     222,   223,   226,   227,   228,   229,   230,   231,   232,   234,
     235,   236,   265,   273,    47,   105,   105,   224,   105,   105,
     114,   116,   224,   233,     0,   227,   230,   231,     9,    35,
     236,    81,    87,   237,   238,    84,    87,   225,    87,   266,
      55,    89,   102,   105,   105,    27,    34,   124,     4,     8,
      10,    22,    23,    42,    43,    45,    88,    93,   105,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   232,
     235,   239,   240,   241,   244,   248,   249,   250,   259,   260,
     263,   269,   238,   102,   105,    88,   226,   230,   102,    88,
     232,   241,   244,   248,   259,   267,   268,   102,   105,   105,
     116,   237,   238,   266,   117,   105,    82,   105,   245,   246,
      85,   270,    79,    10,   117,   250,   260,    88,   240,    87,
     102,   180,   252,   224,   251,   102,   180,   262,   102,    88,
     230,    88,    88,   268,   102,   238,   102,   102,   105,   242,
     243,    82,    28,    32,    37,    83,   117,   253,   254,   255,
     257,   258,    89,    80,   102,    80,    86,   117,   245,   251,
     262,     3,     4,     5,     8,    10,    11,    12,    13,    15,
      17,    18,    19,    20,    22,    23,    25,    26,    27,    33,
      34,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      46,    48,    49,    51,    52,    53,    56,    57,    82,    88,
      90,    91,    92,    93,   102,   105,   106,   107,   108,   109,
     110,   111,   117,   130,   131,   132,   133,   135,   136,   137,
     139,   140,   141,   142,   143,   144,   153,   154,   155,   156,
     157,   158,   159,   172,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   190,   191,   192,   193,   194,   195,   201,
     202,   203,   204,   209,   210,   211,   212,   213,   214,   215,
     216,   220,   224,   233,    82,    88,   102,    89,    80,   102,
      83,   118,   269,    81,   261,   105,    83,    80,   117,     4,
       8,    22,    23,    27,    34,    42,    43,    87,   136,   142,
     143,   144,   156,   157,   158,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   174,   175,
     224,   233,   247,   271,   246,    86,   242,   102,    82,    84,
      85,   102,   117,   102,    82,   179,    82,    82,     6,    12,
     105,    82,   117,   118,   269,   270,   102,   174,    82,   102,
     174,   180,    82,    82,    82,   156,   156,   117,   174,   156,
     156,   156,   156,    81,    82,    84,    85,    84,    56,    57,
      64,    65,    66,    67,    68,    69,    70,    71,    73,    75,
      89,   113,   173,    88,   178,   102,   105,   187,   188,   102,
     102,    84,    83,   253,   174,   176,   243,   102,   180,   264,
     105,     3,    37,    89,   256,   261,   255,   258,   105,    88,
     247,   272,    94,    95,    96,    90,    91,    72,    74,   112,
      62,    63,    97,    98,    60,    61,    99,   100,   101,    58,
      54,    59,    79,   102,    83,   253,   105,   138,   174,   242,
     117,    46,   102,   185,   192,   205,   208,   186,   176,   102,
     102,   174,   177,    82,    87,   145,   146,   150,    85,   271,
     271,   102,   174,   102,     7,    16,   217,   218,   219,    45,
     117,   174,   185,   221,   177,    83,    83,   178,    32,    83,
     105,   126,   127,   128,   129,   174,   105,   138,   105,   174,
      89,    80,   105,    83,    82,    82,   174,   256,    80,    88,
     156,   156,   156,   156,   160,   160,   161,   161,   162,   162,
     162,   162,   163,   163,   164,   165,   166,   167,   170,   168,
     174,    83,    80,    86,    83,    82,   102,   177,   206,   102,
      80,   105,   102,    83,    83,   126,    87,    88,   105,   147,
     148,   151,   152,   175,   138,    83,   180,   180,   219,    83,
      83,    83,    83,   156,   125,   174,    81,    80,    83,   129,
     134,    86,   174,   189,   271,   188,    83,   126,    83,   126,
      88,   247,    81,   174,   177,    83,   207,   208,   102,   102,
     206,   192,    21,   179,   145,    83,   138,    89,    80,    88,
      80,    88,    86,    87,   196,   179,   179,   127,    83,    83,
     174,    83,   179,    83,    83,   207,    83,   207,   102,   174,
      14,   145,    88,   145,   149,   174,    88,   105,   148,    88,
     152,   270,   271,     6,    12,    88,   197,   198,   199,   200,
     102,   179,   179,    83,   179,    83,    83,   207,    83,   179,
     271,   176,    81,    88,   198,    12,   181,   200,   179,   179,
     179,    83,   179,    81,   179
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   103,   104,   105,   106,   106,   106,   106,   106,   107,
     107,   108,   108,   109,   110,   110,   111,   112,   113,   114,
     115,   116,   116,   117,   117,   118,   118,   118,   119,   119,
     119,   120,   121,   121,   121,   121,   121,   122,   123,   124,
     124,   125,   126,   126,   127,   127,   128,   129,   129,   130,
     130,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   132,   134,   133,   133,   133,   135,   135,   135,   135,
     135,   135,   135,   135,   136,   136,   137,   138,   138,   139,
     140,   140,   141,   141,   141,   141,   142,   143,   144,   144,
     144,   144,   144,   145,   145,   146,   146,   146,   147,   147,
     148,   149,   149,   150,   150,   151,   151,   152,   152,   153,
     153,   153,   153,   153,   153,   154,   154,   155,   156,   156,
     156,   156,   156,   156,   156,   156,   157,   158,   159,   160,
     160,   160,   160,   161,   161,   161,   162,   162,   162,   163,
     163,   163,   163,   163,   164,   164,   164,   165,   165,   166,
     166,   167,   167,   168,   168,   169,   169,   170,   170,   171,
     171,   172,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   174,   174,   175,   176,   177,   178,   178,
     178,   179,   179,   179,   179,   179,   179,   179,   179,   180,
     180,   181,   181,   182,   183,   184,   184,   185,   186,   187,
     187,   188,   188,   189,   189,   190,   191,   192,   192,   192,
     192,   192,   192,   192,   193,   193,   194,   194,   195,   196,
     196,   197,   197,   198,   199,   199,   200,   200,   201,   201,
     201,   201,   202,   203,   204,   204,   204,   204,   204,   204,
     204,   204,   205,   205,   206,   207,   208,   208,   209,   210,
     210,   210,   210,   210,   211,   212,   213,   213,   213,   214,
     214,   215,   215,   216,   216,   216,   217,   218,   219,   220,
     221,   221,   222,   222,   222,   222,   223,   223,   224,   224,
     225,   225,   225,   225,   226,   226,   227,   227,   228,   229,
     230,   230,   231,   231,   232,   232,   233,   234,   234,   234,
     234,   234,   234,   234,   234,   235,   235,   236,   236,   236,
     236,   237,   238,   238,   239,   239,   240,   240,   240,   240,
     240,   240,   241,   241,   242,   242,   243,   244,   244,   245,
     245,   246,   246,   247,   247,   248,   249,   249,   249,   249,
     250,   250,   251,   252,   252,   253,   253,   253,   254,   254,
     255,   255,   255,   255,   256,   257,   257,   258,   259,   259,
     260,   260,   260,   260,   261,   261,   261,   261,   262,   262,
     263,   264,   264,   265,   265,   265,   265,   266,   266,   267,
     267,   268,   268,   268,   268,   268,   269,   270,   270,   271,
     271,   271,   272,   272,   273
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
       1,     1,     1,     1,     3,     4,     4,     1,     3,     1,
       3,     4,     1,     1,     1,     1,     2,     2,     4,     5,
       5,     6,     3,     1,     1,     2,     3,     4,     1,     3,
       3,     1,     1,     3,     4,     1,     3,     1,     3,     5,
       6,     6,     7,     3,     3,     4,     4,     4,     1,     2,
       2,     2,     2,     1,     1,     1,     2,     2,     4,     1,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     1,
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
       1,     1,     1,     1,     1,     1,     3,     1,     1,     3,
       2,     3,     3,     4,     2,     1,     1,     3,     2,     3,
       3,     4,     4,     5,     4,     5,     4,     5,     1,     1,
       5,     1,     1,     3,     4,     4,     5,     2,     3,     1,
       2,     1,     1,     1,     1,     1,     2,     2,     3,     2,
       3,     4,     1,     3,     0
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
#line 38 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2369 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 42 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2375 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 46 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2381 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 47 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2387 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 48 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2393 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 49 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2399 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 50 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2405 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 52 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2411 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 53 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2417 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 55 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2423 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 56 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2429 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 59 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2435 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 67 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2441 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 68 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2447 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 71 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2453 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 75 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2459 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 77 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2465 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 81 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2471 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 83 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2477 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 85 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2483 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 86 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2489 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 90 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2495 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 91 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2501 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 93 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2507 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 94 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2513 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 95 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2519 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 97 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2525 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 98 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2531 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 99 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2537 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 101 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2543 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 103 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2549 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 104 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2555 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 105 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2561 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 106 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2567 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 107 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2573 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 109 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2579 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 111 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2585 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 115 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2591 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 116 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2597 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 120 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2603 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 124 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2609 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 125 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2615 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 127 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2621 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 128 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2627 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 130 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2633 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 132 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2639 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 133 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2645 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 135 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2651 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 136 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2657 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 138 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2663 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 139 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2669 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 140 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2675 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 141 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2681 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 142 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2687 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 143 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2693 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 144 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2699 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 145 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2705 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 146 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2711 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 147 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2717 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 150 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2723 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 152 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2729 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 153 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2735 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 154 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2741 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 155 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2747 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 157 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2753 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 158 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2759 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 159 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2765 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 160 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2771 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 161 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2777 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 162 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2783 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 163 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2789 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 164 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2795 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 166 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2801 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 167 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2807 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 169 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2813 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 171 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2819 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 172 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2825 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 174 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2831 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 176 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2837 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 177 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2843 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 179 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2849 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 180 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2855 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 181 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2861 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 182 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2867 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 184 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2873 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 186 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2879 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 188 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2885 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 189 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2891 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 190 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2897 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 191 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2903 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 192 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2909 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 194 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2915 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 195 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2921 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 197 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2927 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 198 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2933 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 199 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2939 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 201 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2945 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 202 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2951 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 204 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2957 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 206 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2963 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 207 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2969 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 209 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2975 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 210 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2981 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 212 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2987 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 213 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2993 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 215 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 2999 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 216 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3005 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 218 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3011 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 219 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3017 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 220 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3023 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 221 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3029 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 222 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3035 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 223 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3041 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 226 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3047 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 227 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3053 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 229 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3059 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 231 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3065 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 232 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3071 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 233 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3077 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 234 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3083 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 235 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3089 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 236 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3095 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 237 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3101 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 238 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3107 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 240 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3113 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 242 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3119 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 244 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3125 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 246 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3131 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 247 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3137 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 248 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3143 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 249 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3149 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 251 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3155 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 252 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3161 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 253 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3167 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 255 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3173 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 256 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3179 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 257 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3185 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 259 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3191 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 260 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3197 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 261 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3203 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 262 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3209 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 263 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3215 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 265 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3221 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 266 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3227 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 267 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3233 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 269 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3239 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 270 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3245 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 272 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3251 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 273 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3257 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 275 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3263 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 276 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3269 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 278 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3275 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 279 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3281 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 281 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3287 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 282 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3293 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 284 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3299 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 285 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3305 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 287 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3311 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 288 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3317 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 290 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3323 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 292 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3329 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 293 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3335 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 294 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3341 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 295 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3347 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 296 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3353 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 297 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3359 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 298 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3365 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 299 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3371 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 300 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3377 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 301 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3383 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 302 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3389 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 304 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3395 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 305 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3401 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 307 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3407 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 309 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3413 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 311 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3419 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 315 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3425 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 316 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3431 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 317 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3437 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 319 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3443 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 320 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3449 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 321 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3455 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 322 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3461 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 323 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3467 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 324 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3473 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 325 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3479 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 326 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3485 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 328 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3491 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 329 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3497 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 331 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3503 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 332 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3509 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 334 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3515 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 336 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3521 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 338 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3527 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 339 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3533 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 341 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3539 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 343 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3545 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 345 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3551 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 346 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3557 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 348 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3563 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 349 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3569 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 351 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3575 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 352 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3581 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 354 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3587 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 356 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3593 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 358 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3599 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 359 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3605 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 360 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3611 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 361 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3617 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 362 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3623 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 363 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3629 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 364 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3635 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 366 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3641 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 367 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3647 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 369 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3653 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 370 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3659 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 372 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3665 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 374 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3671 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 375 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3677 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 377 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3683 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 378 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3689 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 380 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3695 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 382 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3701 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 383 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3707 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 385 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3713 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 386 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3719 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 388 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3725 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 389 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3731 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 390 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3737 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 391 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3743 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 393 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3749 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 395 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3755 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 397 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3761 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 398 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3767 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 399 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3773 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 400 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3779 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 401 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3785 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 402 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3791 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 403 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3797 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 404 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3803 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 406 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3809 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 407 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3815 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 409 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3821 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 411 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3827 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 413 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3833 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 414 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3839 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 416 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3845 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 418 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3851 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 419 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3857 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 420 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3863 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 421 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3869 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 422 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3875 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 424 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3881 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 426 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3887 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 428 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3893 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 429 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3899 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 430 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3905 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 432 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3911 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 433 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3917 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 435 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3923 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 436 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3929 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 438 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3935 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 439 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3941 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 440 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3947 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 442 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3953 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 444 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3959 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 446 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3965 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 448 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3971 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 450 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3977 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 451 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3983 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 272:
#line 455 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3989 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 456 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 3995 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 457 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4001 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 275:
#line 458 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4007 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 276:
#line 460 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4013 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 277:
#line 461 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4019 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 278:
#line 463 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4025 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 279:
#line 464 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4031 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 466 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4037 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 281:
#line 467 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4043 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 468 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4049 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 283:
#line 469 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4055 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 284:
#line 471 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4061 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 285:
#line 472 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4067 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 286:
#line 474 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4073 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 475 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4079 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 477 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4085 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 289:
#line 479 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4091 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 290:
#line 481 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4097 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 291:
#line 482 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4103 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 292:
#line 484 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4109 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 293:
#line 485 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4115 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 294:
#line 487 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4121 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 295:
#line 488 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4127 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 296:
#line 490 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4133 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 297:
#line 494 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4139 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 298:
#line 495 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4145 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 299:
#line 496 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4151 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 300:
#line 497 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4157 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 301:
#line 498 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4163 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 302:
#line 499 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4169 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 303:
#line 500 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4175 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 304:
#line 501 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4181 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 305:
#line 503 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4187 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 306:
#line 504 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4193 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 307:
#line 506 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4199 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 308:
#line 507 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4205 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 309:
#line 508 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4211 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 310:
#line 509 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4217 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 311:
#line 511 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4223 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 312:
#line 513 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4229 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 313:
#line 514 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4235 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 314:
#line 516 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4241 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 315:
#line 517 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4247 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 316:
#line 519 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4253 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 317:
#line 520 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4259 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 318:
#line 521 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4265 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 319:
#line 522 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4271 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 320:
#line 523 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4277 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 321:
#line 524 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4283 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 322:
#line 526 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4289 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 323:
#line 527 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4295 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 324:
#line 530 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4301 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 325:
#line 531 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4307 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 326:
#line 533 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4313 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 327:
#line 535 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4319 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 328:
#line 536 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4325 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 329:
#line 539 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4331 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 330:
#line 540 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4337 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 331:
#line 542 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4343 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 333:
#line 544 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4349 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 334:
#line 545 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4355 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 335:
#line 547 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4361 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 336:
#line 549 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4367 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 337:
#line 550 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4373 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 338:
#line 551 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4379 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 339:
#line 552 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4385 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 340:
#line 556 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4391 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 341:
#line 557 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4397 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 342:
#line 559 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4403 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 343:
#line 561 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4409 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 344:
#line 562 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4415 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 345:
#line 564 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4421 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 346:
#line 565 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4427 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 347:
#line 566 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4433 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 348:
#line 568 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4439 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 349:
#line 569 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4445 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 350:
#line 571 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4451 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 351:
#line 572 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4457 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 352:
#line 573 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4463 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 353:
#line 574 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4469 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 354:
#line 576 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4475 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 355:
#line 578 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4481 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 356:
#line 579 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4487 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 357:
#line 581 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4493 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 358:
#line 583 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4499 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 359:
#line 584 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4505 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 360:
#line 587 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4511 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 361:
#line 588 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4517 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 362:
#line 589 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4523 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 363:
#line 590 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4529 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 364:
#line 592 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4535 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 365:
#line 593 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4541 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 366:
#line 594 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4547 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 367:
#line 595 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4553 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 368:
#line 597 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4559 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 369:
#line 598 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4565 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 370:
#line 600 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4571 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 371:
#line 602 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4577 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 372:
#line 603 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4583 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 373:
#line 607 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4589 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 374:
#line 608 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4595 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 375:
#line 609 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4601 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 376:
#line 610 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4607 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 377:
#line 613 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4613 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 378:
#line 614 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4619 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 379:
#line 616 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4625 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 380:
#line 617 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4631 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 381:
#line 619 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4637 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 382:
#line 620 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4643 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 383:
#line 621 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4649 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 384:
#line 622 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4655 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 385:
#line 623 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4661 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 386:
#line 627 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4667 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 387:
#line 629 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4673 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 388:
#line 630 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4679 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 389:
#line 632 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4685 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 390:
#line 633 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4691 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 391:
#line 634 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4697 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 392:
#line 636 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4703 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 393:
#line 637 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4709 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;

  case 394:
#line 640 "asgn3.ypp" /* yacc.c:1646  */
    {}
#line 4715 "asgn3.tab.cpp" /* yacc.c:1646  */
    break;


#line 4719 "asgn3.tab.cpp" /* yacc.c:1646  */
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
#line 643 "asgn3.ypp" /* yacc.c:1906  */
	


int main(void){
	yyparse();
	return 0;
}
