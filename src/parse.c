
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "src/parse.y"

#include "latino.h"
#include "structs.h"
#define YYERROR_VERBOSE 1


/* Line 189 of yacc.c  */
#line 80 "src/parse.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     KEYWORD_TRUE = 258,
     KEYWORD_FALSE = 259,
     TOKEN_INT = 260,
     TOKEN_CHAR = 261,
     TOKEN_NUMBER = 262,
     TOKEN_STRING = 263,
     TOKEN_IDENTIFIER = 264,
     TOKEN_FUNC = 265,
     KEYWORD_IF = 266,
     KEYWORD_END = 267,
     KEYWORD_ELSE = 268,
     KEYWORD_WHILE = 269,
     KEYWORD_DO = 270,
     KEYWORD_SWITCH = 271,
     KEYWORD_CASE = 272,
     KEYWORD_BREAK = 273,
     KEYWORD_DEFAULT = 274,
     KEYWORD_WHEN = 275,
     KEYWORD_FUNCTION = 276,
     KEYWORD_FROM = 277,
     KEYWORD_TO = 278,
     KEYWORD_STEP = 279,
     KEYWORD_BOOL = 280,
     OP_GT = 281,
     OP_LT = 282,
     OP_GE = 283,
     OP_LE = 284,
     OP_EQ = 285,
     OP_NEQ = 286,
     OP_AND = 287,
     OP_OR = 288,
     OP_NEG = 289,
     UNEG = 290,
     UMINUS = 291
   };
#endif
/* Tokens.  */
#define KEYWORD_TRUE 258
#define KEYWORD_FALSE 259
#define TOKEN_INT 260
#define TOKEN_CHAR 261
#define TOKEN_NUMBER 262
#define TOKEN_STRING 263
#define TOKEN_IDENTIFIER 264
#define TOKEN_FUNC 265
#define KEYWORD_IF 266
#define KEYWORD_END 267
#define KEYWORD_ELSE 268
#define KEYWORD_WHILE 269
#define KEYWORD_DO 270
#define KEYWORD_SWITCH 271
#define KEYWORD_CASE 272
#define KEYWORD_BREAK 273
#define KEYWORD_DEFAULT 274
#define KEYWORD_WHEN 275
#define KEYWORD_FUNCTION 276
#define KEYWORD_FROM 277
#define KEYWORD_TO 278
#define KEYWORD_STEP 279
#define KEYWORD_BOOL 280
#define OP_GT 281
#define OP_LT 282
#define OP_GE 283
#define OP_LE 284
#define OP_EQ 285
#define OP_NEQ 286
#define OP_AND 287
#define OP_OR 288
#define OP_NEG 289
#define UNEG 290
#define UMINUS 291




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 8 "src/parse.y"

    int fn; /* which function */
    char *b; /* boolean type*/
    char *c; /* char type */
    int i;  /* int type */
    double d; /* double type */
    struct lat_string *str; /* string type */
    struct ast *a; /* astract syntax tree */
    struct symbol *s;   /* which symbol */
    struct symlist *sl; /* symbol list */



/* Line 214 of yacc.c  */
#line 202 "src/parse.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 214 "src/parse.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   259

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  13
/* YYNRULES -- Number of rules.  */
#define YYNRULES  53
/* YYNRULES -- Number of states.  */
#define YYNSTATES  121

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   291

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    40,     2,     2,
      43,    44,    38,    36,    46,    37,     2,    39,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    45,     2,
       2,    35,     2,     2,     2,     2,     2,     2,     2,     2,
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
      41,    42
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     4,     7,    14,    23,    30,    37,    44,
      52,    59,    69,    77,    79,    82,    84,    89,    93,    94,
      97,   101,   105,   109,   113,   117,   121,   125,   129,   132,
     136,   140,   144,   148,   152,   156,   159,   161,   165,   170,
     175,   177,   179,   181,   183,   185,   187,   189,   191,   192,
     194,   198,   199,   201
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      48,     0,    -1,    -1,    48,    49,    -1,    11,    43,    54,
      44,    53,    12,    -1,    11,    43,    54,    44,    53,    13,
      53,    12,    -1,    14,    43,    54,    44,    53,    12,    -1,
      15,    53,    20,    43,    54,    44,    -1,    16,    43,    56,
      44,    50,    12,    -1,    16,    43,    56,    44,    50,    52,
      12,    -1,    22,    56,    23,    56,    53,    12,    -1,    22,
      56,    23,    56,    24,    35,    56,    53,    12,    -1,    21,
       9,    43,    59,    44,    53,    12,    -1,    55,    -1,    50,
      51,    -1,    51,    -1,    17,    57,    45,    53,    -1,    19,
      45,    53,    -1,    -1,    49,    53,    -1,    54,    26,    54,
      -1,    54,    27,    54,    -1,    54,    28,    54,    -1,    54,
      29,    54,    -1,    54,    31,    54,    -1,    54,    30,    54,
      -1,    54,    32,    54,    -1,    54,    33,    54,    -1,    34,
      54,    -1,    54,    36,    54,    -1,    54,    37,    54,    -1,
      54,    38,    54,    -1,    54,    39,    54,    -1,    54,    40,
      54,    -1,    43,    54,    44,    -1,    37,    54,    -1,    56,
      -1,     9,    35,    54,    -1,     9,    43,    58,    44,    -1,
      10,    43,    58,    44,    -1,     9,    -1,     3,    -1,     4,
      -1,    57,    -1,     5,    -1,     7,    -1,     6,    -1,     8,
      -1,    -1,    54,    -1,    54,    46,    58,    -1,    -1,     9,
      -1,     9,    46,    59,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    77,    77,    78,    87,    89,    91,    93,    95,    97,
      99,   101,   103,   107,   111,   115,   121,   128,   134,   135,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   162,   163,   164,
     168,   169,   170,   171,   175,   176,   177,   178,   181,   182,
     183,   186,   187,   188
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "KEYWORD_TRUE", "KEYWORD_FALSE",
  "TOKEN_INT", "TOKEN_CHAR", "TOKEN_NUMBER", "TOKEN_STRING",
  "TOKEN_IDENTIFIER", "TOKEN_FUNC", "KEYWORD_IF", "KEYWORD_END",
  "KEYWORD_ELSE", "KEYWORD_WHILE", "KEYWORD_DO", "KEYWORD_SWITCH",
  "KEYWORD_CASE", "KEYWORD_BREAK", "KEYWORD_DEFAULT", "KEYWORD_WHEN",
  "KEYWORD_FUNCTION", "KEYWORD_FROM", "KEYWORD_TO", "KEYWORD_STEP",
  "KEYWORD_BOOL", "OP_GT", "OP_LT", "OP_GE", "OP_LE", "OP_EQ", "OP_NEQ",
  "OP_AND", "OP_OR", "OP_NEG", "'='", "'+'", "'-'", "'*'", "'/'", "'%'",
  "UNEG", "UMINUS", "'('", "')'", "':'", "','", "$accept", "program",
  "stmt", "cases", "case", "default", "list", "exp", "var", "value",
  "atom_value", "explist", "symlist", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,    61,    43,    45,    42,    47,
      37,   290,   291,    40,    41,    58,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    48,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    50,    50,    51,    52,    53,    53,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    55,    55,    55,
      56,    56,    56,    56,    57,    57,    57,    57,    58,    58,
      58,    59,    59,    59
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     6,     8,     6,     6,     6,     7,
       6,     9,     7,     1,     2,     1,     4,     3,     0,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     3,
       3,     3,     3,     3,     3,     2,     1,     3,     4,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     1,
       3,     0,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,     0,     0,     0,    18,     0,     0,
       0,     3,    13,     0,    48,    48,     0,     0,    18,     0,
       0,     0,    41,    42,    44,    46,    45,    47,    40,     0,
      43,     0,     0,     0,    37,    36,    49,     0,     0,     0,
       0,    19,     0,     0,    51,     0,    28,    35,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,    38,    39,    18,    18,     0,     0,    52,
       0,    18,    34,    20,    21,    22,    23,    25,    24,    26,
      27,    29,    30,    31,    32,    33,    50,     0,     0,     0,
       0,     0,    15,    51,    18,     0,     0,     4,    18,     6,
       7,     0,     8,     0,    14,     0,    53,     0,     0,    10,
       0,    18,    18,     9,    12,    18,     5,    16,    17,     0,
      11
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,    18,    91,    92,   105,    19,    36,    12,    35,
      30,    37,    70
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -28
static const yytype_int16 yypact[] =
{
     -28,    70,   -28,   -22,   -27,   -15,    -7,   230,    -2,    33,
     250,   -28,   -28,     0,     0,     0,     0,     0,   230,    24,
     250,     2,   -28,   -28,   -28,   -28,   -28,   -28,   -28,    23,
     -28,     0,     0,     0,   183,   -28,    74,     3,     8,    95,
     114,   -28,    11,     9,    42,   250,   -18,   -18,   133,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -28,   -28,   230,   230,     0,    52,    26,
      27,   184,   -28,   198,   198,   198,   198,   198,   198,   183,
     183,   -21,   -21,   -18,   -18,   -18,   -28,    13,    61,   152,
      25,    10,   -28,    42,   230,    40,    64,   -28,   230,   -28,
     -28,    32,   -28,    38,   -28,    75,   -28,    76,   250,   -28,
      77,   230,   230,   -28,   -28,   230,   -28,   -28,   -28,    78,
     -28
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -28,   -28,    92,   -28,     6,   -28,   -16,     7,   -28,   -10,
       4,   -14,    15
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_int8 yytable[] =
{
      29,    38,    41,    22,    23,    24,    25,    26,    27,    28,
      43,    55,    56,    13,    55,    56,    15,    59,    60,    61,
      34,    14,   102,    39,    40,    97,    98,    90,    16,   103,
      24,    25,    26,    27,    31,    71,    17,    32,    46,    47,
      48,    20,    21,    33,    42,    44,    45,    63,    86,    87,
      88,    69,    64,    68,    67,    96,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    90,
       2,    94,    93,    99,    89,   108,   109,   111,   107,     3,
       4,     5,   110,   112,     6,     7,     8,   113,   114,   116,
     120,     9,    10,    11,   101,   117,   118,   104,   115,   119,
      49,    50,    51,    52,    53,    54,    55,    56,   106,     0,
      57,    58,    59,    60,    61,     0,     0,     0,     0,     0,
      62,    49,    50,    51,    52,    53,    54,    55,    56,     0,
       0,    57,    58,    59,    60,    61,     0,     0,     0,    65,
      49,    50,    51,    52,    53,    54,    55,    56,     0,     0,
      57,    58,    59,    60,    61,     0,     0,     0,    66,    49,
      50,    51,    52,    53,    54,    55,    56,     0,     0,    57,
      58,    59,    60,    61,     0,     0,     0,    72,    49,    50,
      51,    52,    53,    54,    55,    56,     0,     0,    57,    58,
      59,    60,    61,     3,     4,     5,   100,     0,     6,     7,
       8,     0,     0,     0,     0,     9,    10,     0,    95,    49,
      50,    51,    52,    53,    54,    55,    56,     0,     0,    57,
      58,    59,    60,    61,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,     0,     0,    57,    58,    59,    60,    61,     3,
       4,     5,     0,     0,     6,     7,     8,     0,     0,     0,
       0,     9,    10,    22,    23,    24,    25,    26,    27,    28
};

static const yytype_int8 yycheck[] =
{
      10,    15,    18,     3,     4,     5,     6,     7,     8,     9,
      20,    32,    33,    35,    32,    33,    43,    38,    39,    40,
      13,    43,    12,    16,    17,    12,    13,    17,    43,    19,
       5,     6,     7,     8,    34,    45,    43,    37,    31,    32,
      33,    43,     9,    43,    20,    43,    23,    44,    62,    65,
      66,     9,    44,    44,    43,    71,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    17,
       0,    44,    46,    12,    67,    35,    12,    45,    94,     9,
      10,    11,    98,    45,    14,    15,    16,    12,    12,    12,
      12,    21,    22,     1,    90,   111,   112,    91,   108,   115,
      26,    27,    28,    29,    30,    31,    32,    33,    93,    -1,
      36,    37,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,
      46,    26,    27,    28,    29,    30,    31,    32,    33,    -1,
      -1,    36,    37,    38,    39,    40,    -1,    -1,    -1,    44,
      26,    27,    28,    29,    30,    31,    32,    33,    -1,    -1,
      36,    37,    38,    39,    40,    -1,    -1,    -1,    44,    26,
      27,    28,    29,    30,    31,    32,    33,    -1,    -1,    36,
      37,    38,    39,    40,    -1,    -1,    -1,    44,    26,    27,
      28,    29,    30,    31,    32,    33,    -1,    -1,    36,    37,
      38,    39,    40,     9,    10,    11,    44,    -1,    14,    15,
      16,    -1,    -1,    -1,    -1,    21,    22,    -1,    24,    26,
      27,    28,    29,    30,    31,    32,    33,    -1,    -1,    36,
      37,    38,    39,    40,    26,    27,    28,    29,    30,    31,
      32,    33,    -1,    -1,    36,    37,    38,    39,    40,     9,
      10,    11,    -1,    -1,    14,    15,    16,    -1,    -1,    -1,
      -1,    21,    22,     3,     4,     5,     6,     7,     8,     9
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    48,     0,     9,    10,    11,    14,    15,    16,    21,
      22,    49,    55,    35,    43,    43,    43,    43,    49,    53,
      43,     9,     3,     4,     5,     6,     7,     8,     9,    56,
      57,    34,    37,    43,    54,    56,    54,    58,    58,    54,
      54,    53,    20,    56,    43,    23,    54,    54,    54,    26,
      27,    28,    29,    30,    31,    32,    33,    36,    37,    38,
      39,    40,    46,    44,    44,    44,    44,    43,    44,     9,
      59,    56,    44,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    58,    53,    53,    54,
      17,    50,    51,    46,    44,    24,    53,    12,    13,    12,
      44,    57,    12,    19,    51,    52,    59,    53,    35,    12,
      53,    45,    45,    12,    12,    56,    12,    53,    53,    53,
      12
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:

/* Line 1455 of yacc.c  */
#line 78 "src/parse.y"
    {
        if((yyvsp[(2) - (2)].a) != NULL) {
            eval((yyvsp[(2) - (2)].a));
            treefree((yyvsp[(2) - (2)].a));
        }
    }
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 87 "src/parse.y"
    {
        (yyval.a) = newflow(NODE_IF, (yyvsp[(3) - (6)].a), (yyvsp[(5) - (6)].a), NULL); }
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 89 "src/parse.y"
    {
        (yyval.a) = newflow(NODE_IF, (yyvsp[(3) - (8)].a), (yyvsp[(5) - (8)].a), (yyvsp[(7) - (8)].a)); }
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 91 "src/parse.y"
    {
        (yyval.a) = newflow(NODE_WHILE, (yyvsp[(3) - (6)].a), (yyvsp[(5) - (6)].a), NULL); }
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 93 "src/parse.y"
    {
        (yyval.a) = newflow(NODE_DO, (yyvsp[(5) - (6)].a), (yyvsp[(2) - (6)].a), NULL); }
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 95 "src/parse.y"
    {
        (yyval.a) = newflow(NODE_SWITCH, (yyvsp[(3) - (6)].a), (yyvsp[(5) - (6)].a), NULL); }
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 97 "src/parse.y"
    {
        (yyval.a) = newflow(NODE_SWITCH, (yyvsp[(3) - (7)].a), (yyvsp[(5) - (7)].a), (yyvsp[(6) - (7)].a)); }
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 99 "src/parse.y"
    {
        (yyval.a) = newfor(NODE_FROM, (yyvsp[(2) - (6)].a), (yyvsp[(4) - (6)].a), (yyvsp[(5) - (6)].a), NULL); }
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 101 "src/parse.y"
    {
        (yyval.a) = newfor(NODE_FROM, (yyvsp[(2) - (9)].a), (yyvsp[(4) - (9)].a), (yyvsp[(8) - (9)].a), (yyvsp[(7) - (9)].a)); }
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 103 "src/parse.y"
    {
        dodef((yyvsp[(2) - (7)].s), (yyvsp[(4) - (7)].sl), (yyvsp[(6) - (7)].a));
        (yyval.a) = NULL;
    }
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 111 "src/parse.y"
    {
        /*printf("parse cases\n");*/
        (yyval.a) = newflow(NODE_CASES, NULL, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a));
     }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 115 "src/parse.y"
    {
            (yyval.a) = (yyvsp[(1) - (1)].a);
        }
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 121 "src/parse.y"
    {
        /*printf("parse simple case\n");*/
        (yyval.a) = newflow(NODE_CASE, NULL, (yyvsp[(2) - (4)].a), (yyvsp[(4) - (4)].a));
    }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 128 "src/parse.y"
    {
        /*printf("parse default\n");*/
        (yyval.a) = newflow(NODE_DEFAULT, NULL, (yyvsp[(3) - (3)].a), NULL);
    }
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 134 "src/parse.y"
    { (yyval.a) = NULL; }
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 135 "src/parse.y"
    {
        if ((yyvsp[(2) - (2)].a) == NULL)
            (yyval.a) = (yyvsp[(1) - (2)].a);
        else
            (yyval.a) = newast(NODE_EXPRESSION, (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a));
    }
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 143 "src/parse.y"
    { (yyval.a) = newast(NODE_GT, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 144 "src/parse.y"
    { (yyval.a) = newast(NODE_LT, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); }
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 145 "src/parse.y"
    { (yyval.a) = newast(NODE_GE, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 146 "src/parse.y"
    { (yyval.a) = newast(NODE_LE, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 147 "src/parse.y"
    { (yyval.a) = newast(NODE_NEQ, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 148 "src/parse.y"
    { (yyval.a) = newast(NODE_EQ, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); }
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 149 "src/parse.y"
    { (yyval.a) = newast(NODE_AND, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); }
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 150 "src/parse.y"
    { (yyval.a) = newast(NODE_OR, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 151 "src/parse.y"
    { (yyval.a) = newast(NODE_NEG, (yyvsp[(2) - (2)].a), NULL); }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 152 "src/parse.y"
    { (yyval.a) = newast(NODE_ADD, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 153 "src/parse.y"
    { (yyval.a) = newast(NODE_SUB, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 154 "src/parse.y"
    { (yyval.a) = newast(NODE_MULT, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 155 "src/parse.y"
    { (yyval.a) = newast(NODE_DIV, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 156 "src/parse.y"
    { (yyval.a) = newast(NODE_MOD, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 157 "src/parse.y"
    { (yyval.a) = (yyvsp[(2) - (3)].a); }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 158 "src/parse.y"
    { (yyval.a) = newast(NODE_UNARY_MINUS, (yyvsp[(2) - (2)].a), NULL); }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 162 "src/parse.y"
    { (yyval.a) = newasgn((yyvsp[(1) - (3)].s), (yyvsp[(3) - (3)].a)); }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 163 "src/parse.y"
    { (yyval.a) = newcall((yyvsp[(1) - (4)].s), (yyvsp[(3) - (4)].a)); }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 164 "src/parse.y"
    { (yyval.a) = newfunc((yyvsp[(1) - (4)].fn), (yyvsp[(3) - (4)].a)); }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 168 "src/parse.y"
    { (yyval.a) = newref((yyvsp[(1) - (1)].s)); }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 169 "src/parse.y"
    { (yyval.a) = newbool((yyvsp[(1) - (1)].b)); }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 170 "src/parse.y"
    { (yyval.a) = newbool((yyvsp[(1) - (1)].b)); }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 171 "src/parse.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 175 "src/parse.y"
    { (yyval.a) = newint((yyvsp[(1) - (1)].i)); }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 176 "src/parse.y"
    { (yyval.a) = newnum((yyvsp[(1) - (1)].d)); }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 177 "src/parse.y"
    { (yyval.a) = (yyvsp[(1) - (1)].c); }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 178 "src/parse.y"
    { (yyval.a) = (yyvsp[(1) - (1)].str); }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 181 "src/parse.y"
    { (yyval.a) = NULL; }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 182 "src/parse.y"
    { (yyval.a) = newast(NODE_LIST_SYMBOLS, (yyvsp[(1) - (1)].a), NULL); }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 183 "src/parse.y"
    { (yyval.a) = newast(NODE_LIST_SYMBOLS, (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 186 "src/parse.y"
    { (yyval.sl) = NULL; }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 187 "src/parse.y"
    { (yyval.sl) = newsymlist((yyvsp[(1) - (1)].s), NULL); }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 188 "src/parse.y"
    { (yyval.sl) = newsymlist((yyvsp[(1) - (3)].s), (yyvsp[(3) - (3)].sl)); }
    break;



/* Line 1455 of yacc.c  */
#line 1911 "src/parse.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 191 "src/parse.y"


extern
void yyerror(char *s, ...)
{
    print_error("linea %i, %s", yylineno, s);
}

