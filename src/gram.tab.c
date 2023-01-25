/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     VOID = 258,
     IF = 259,
     ELSE = 260,
     WHILE = 261,
     RETURN = 262,
     IDENT = 263,
     TYPE = 264,
     AND = 265,
     EQ = 266,
     OR = 267,
     ORDER = 268,
     CHARACTER = 269,
     NUM = 270,
     ADDSUB = 271,
     DIVSTAR = 272
   };
#endif
/* Tokens.  */
#define VOID 258
#define IF 259
#define ELSE 260
#define WHILE 261
#define RETURN 262
#define IDENT 263
#define TYPE 264
#define AND 265
#define EQ 266
#define OR 267
#define ORDER 268
#define CHARACTER 269
#define NUM 270
#define ADDSUB 271
#define DIVSTAR 272




/* Copy the first part of user declarations.  */
#line 1 "src/gram.y"

  #include <stdio.h>
  #include <string.h>
  #include "tree.h"
  int yyerror(char * msg);
  int yylex();
  extern int lineno;
  extern int charno;

  Node* Tree;


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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 15 "src/gram.y"
{
  Node* node;
  char* name;
  int const_val;
}
/* Line 193 of yacc.c.  */
#line 148 "src/gram.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 161 "src/gram.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   118

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  26
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  57
/* YYNRULES -- Number of states.  */
#define YYNSTATES  112

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   272

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    25,     2,     2,     2,     2,     2,     2,
      20,    21,     2,     2,    19,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    18,
       2,    24,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    22,     2,    23,     2,     2,     2,     2,
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
      15,    16,    17
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     6,    11,    12,    16,    18,    21,    23,
      26,    32,    38,    40,    42,    47,    50,    55,    60,    61,
      65,    71,    75,    77,    80,    81,    86,    92,   100,   106,
     112,   116,   119,   123,   125,   129,   131,   135,   137,   141,
     143,   147,   149,   153,   155,   159,   161,   164,   167,   171,
     173,   175,   177,   182,   184,   186,   187,   191
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      27,     0,    -1,    28,    30,    -1,    28,     9,    29,    18,
      -1,    -1,    29,    19,     8,    -1,     8,    -1,    30,    31,
      -1,    31,    -1,    32,    35,    -1,     9,     8,    20,    33,
      21,    -1,     3,     8,    20,    33,    21,    -1,     3,    -1,
      34,    -1,    34,    19,     9,     8,    -1,     9,     8,    -1,
      22,    36,    38,    23,    -1,    36,     9,    37,    18,    -1,
      -1,    37,    19,     8,    -1,    37,    19,     8,    24,    40,
      -1,     8,    24,    40,    -1,     8,    -1,    38,    39,    -1,
      -1,    47,    24,    40,    18,    -1,     4,    20,    40,    21,
      39,    -1,     4,    20,    40,    21,    39,     5,    39,    -1,
       6,    20,    40,    21,    39,    -1,     8,    20,    48,    21,
      18,    -1,     7,    40,    18,    -1,     7,    18,    -1,    22,
      38,    23,    -1,    18,    -1,    40,    12,    41,    -1,    41,
      -1,    41,    10,    42,    -1,    42,    -1,    42,    11,    43,
      -1,    43,    -1,    43,    13,    44,    -1,    44,    -1,    44,
      16,    45,    -1,    45,    -1,    45,    17,    46,    -1,    46,
      -1,    16,    46,    -1,    25,    46,    -1,    20,    40,    21,
      -1,    15,    -1,    14,    -1,    47,    -1,     8,    20,    48,
      21,    -1,     8,    -1,    49,    -1,    -1,    49,    19,    40,
      -1,    40,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    27,    27,    34,    43,    46,    52,    58,    61,    66,
      72,    78,    85,    88,    94,   100,   106,   112,   127,   130,
     136,   145,   152,   158,   166,   169,   174,   179,   185,   190,
     194,   198,   201,   204,   206,   212,   214,   220,   222,   228,
     230,   236,   238,   244,   246,   252,   254,   260,   264,   265,
     269,   273,   274,   281,   287,   288,   291,   295
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "VOID", "IF", "ELSE", "WHILE", "RETURN",
  "IDENT", "TYPE", "AND", "EQ", "OR", "ORDER", "CHARACTER", "NUM",
  "ADDSUB", "DIVSTAR", "';'", "','", "'('", "')'", "'{'", "'}'", "'='",
  "'!'", "$accept", "Prog", "DeclGlobalVars", "GlobalDeclarateurs",
  "DeclFoncts", "DeclFonct", "EnTeteFonct", "Parametres", "ListTypVar",
  "Corps", "DeclVars", "Declarateurs", "SuiteInstr", "Instr", "Exp", "TB",
  "FB", "M", "E", "T", "F", "LValue", "Arguments", "ListExp", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,    59,    44,
      40,    41,   123,   125,    61,    33
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    26,    27,    28,    28,    29,    29,    30,    30,    31,
      32,    32,    33,    33,    34,    34,    35,    36,    36,    37,
      37,    37,    37,    38,    38,    39,    39,    39,    39,    39,
      39,    39,    39,    39,    40,    40,    41,    41,    42,    42,
      43,    43,    44,    44,    45,    45,    46,    46,    46,    46,
      46,    46,    46,    47,    48,    48,    49,    49
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     4,     0,     3,     1,     2,     1,     2,
       5,     5,     1,     1,     4,     2,     4,     4,     0,     3,
       5,     3,     1,     2,     0,     4,     5,     7,     5,     5,
       3,     2,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     2,     2,     3,     1,
       1,     1,     4,     1,     1,     0,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     1,     0,     0,     2,     8,     0,     0,
       6,     0,     0,     7,    18,     9,     0,     0,     3,     0,
       0,    24,    12,     0,     0,    13,     0,     5,     0,     0,
      15,    11,     0,    10,    22,     0,     0,     0,     0,    53,
      33,    24,    16,    23,     0,     0,     0,    17,     0,     0,
       0,    53,    50,    49,     0,    31,     0,     0,     0,    35,
      37,    39,    41,    43,    45,    51,    55,     0,     0,    14,
      21,    19,     0,     0,    55,    46,     0,    47,     0,    30,
       0,     0,     0,     0,     0,    57,     0,    54,    32,     0,
       0,     0,     0,     0,    48,    34,    36,    38,    40,    42,
      44,     0,     0,    25,    20,    26,    28,    52,    29,    56,
       0,    27
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,    11,     6,     7,     8,    24,    25,    15,
      21,    35,    29,    43,    85,    59,    60,    61,    62,    63,
      64,    65,    86,    87
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -78
static const yytype_int8 yypact[] =
{
     -78,     3,     7,   -78,    16,    29,    31,   -78,    25,    39,
      46,    36,    44,   -78,   -78,   -78,    32,    32,   -78,    50,
      46,    61,   -78,    64,    54,    55,    56,   -78,    71,     0,
     -78,   -78,    76,   -78,    62,    38,    60,    67,    53,    69,
     -78,   -78,   -78,   -78,    66,    83,    68,   -78,    84,    68,
      68,    74,   -78,   -78,    68,   -78,    68,    68,    24,    85,
      86,    87,    80,    81,   -78,   -78,    68,    21,    68,   -78,
      89,    75,    -1,     5,    68,   -78,     9,   -78,    68,   -78,
      68,    68,    68,    68,    68,    89,    82,    88,   -78,    33,
      68,    42,    42,    90,   -78,    85,    86,    87,    80,    81,
     -78,    91,    68,   -78,    89,    97,   -78,   -78,   -78,    89,
      42,   -78
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -78,   -78,   -78,   -78,   -78,    98,   -78,    93,   -78,   -78,
     -78,   -78,    65,   -77,   -37,    27,    28,    34,    30,    35,
     -52,   -29,    40,   -78
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      44,    58,    75,     3,    36,    77,    37,    38,    39,    70,
       4,    78,    72,    73,   105,   106,     5,    78,    40,    76,
      91,    78,    41,    42,     9,    36,    92,    37,    38,    39,
      94,    89,   100,   111,     4,    22,    78,    10,    44,    40,
      12,    23,    79,    41,    88,    78,    36,    14,    37,    38,
      39,   103,    20,   104,    18,    19,    47,    48,    27,    16,
      40,    51,    44,    44,    41,   109,    17,    52,    53,    54,
      28,    55,    30,    56,    32,    31,    51,    33,    57,    34,
      49,    44,    52,    53,    54,    45,    46,    50,    56,    66,
      68,    69,    71,    57,    74,    80,    83,    81,    84,    90,
      82,    78,   110,   101,    13,    95,    67,   102,    96,   108,
      26,   107,    98,     0,    93,    97,     0,     0,    99
};

static const yytype_int8 yycheck[] =
{
      29,    38,    54,     0,     4,    57,     6,     7,     8,    46,
       3,    12,    49,    50,    91,    92,     9,    12,    18,    56,
      21,    12,    22,    23,     8,     4,    21,     6,     7,     8,
      21,    68,    84,   110,     3,     3,    12,     8,    67,    18,
       9,     9,    18,    22,    23,    12,     4,    22,     6,     7,
       8,    18,     8,    90,    18,    19,    18,    19,     8,    20,
      18,     8,    91,    92,    22,   102,    20,    14,    15,    16,
       9,    18,     8,    20,    19,    21,     8,    21,    25,     8,
      20,   110,    14,    15,    16,     9,    24,    20,    20,    20,
      24,     8,     8,    25,    20,    10,    16,    11,    17,    24,
      13,    12,     5,    21,     6,    78,    41,    19,    80,    18,
      17,    21,    82,    -1,    74,    81,    -1,    -1,    83
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    27,    28,     0,     3,     9,    30,    31,    32,     8,
       8,    29,     9,    31,    22,    35,    20,    20,    18,    19,
       8,    36,     3,     9,    33,    34,    33,     8,     9,    38,
       8,    21,    19,    21,     8,    37,     4,     6,     7,     8,
      18,    22,    23,    39,    47,     9,    24,    18,    19,    20,
      20,     8,    14,    15,    16,    18,    20,    25,    40,    41,
      42,    43,    44,    45,    46,    47,    20,    38,    24,     8,
      40,     8,    40,    40,    20,    46,    40,    46,    12,    18,
      10,    11,    13,    16,    17,    40,    48,    49,    23,    40,
      24,    21,    21,    48,    21,    41,    42,    43,    44,    45,
      46,    21,    19,    18,    40,    39,    39,    21,    18,    40,
       5,    39
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
        case 2:
#line 27 "src/gram.y"
    {
                                                    Tree = makeNode(_PROG);
                                                    addChild(Tree, (yyvsp[(1) - (2)].node));
                                                    addChild(Tree, (yyvsp[(2) - (2)].node));
                                                ;}
    break;

  case 3:
#line 34 "src/gram.y"
    {
                                                        (yyval.node) = (yyvsp[(3) - (4)].node);
                                                        Node* t = (yyvsp[(3) - (4)].node);
                                                        while(t != NULL) {
                                                            t->type = strdup((yyvsp[(2) - (4)].name));
                                                            t = t->nextSibling;
                                                        }
                                                        addSibling((yyval.node), (yyvsp[(1) - (4)].node));
                                                    ;}
    break;

  case 4:
#line 43 "src/gram.y"
    { (yyval.node)=NULL;;}
    break;

  case 5:
#line 46 "src/gram.y"
    {
                                                    (yyval.node) = (yyvsp[(1) - (3)].node);
                                                    Node* t = makeNode(_DECL_VAR);
                                                    t->name = strdup((yyvsp[(3) - (3)].name));
                                                    addSibling((yyval.node), t);
                                                ;}
    break;

  case 6:
#line 52 "src/gram.y"
    {
                                                    (yyval.node) = makeNode(_DECL_VAR);
                                                    (yyval.node)->name = strdup((yyvsp[(1) - (1)].name));
                                                ;}
    break;

  case 7:
#line 58 "src/gram.y"
    {
                                                    (yyval.node) = (yyvsp[(1) - (2)].node); addSibling((yyval.node), (yyvsp[(2) - (2)].node));
                                                ;}
    break;

  case 8:
#line 61 "src/gram.y"
    {
                                                    (yyval.node) = (yyvsp[(1) - (1)].node);
                                                ;}
    break;

  case 9:
#line 66 "src/gram.y"
    {
                                                    (yyval.node) = (yyvsp[(1) - (2)].node);
                                                    addChild((yyval.node), (yyvsp[(2) - (2)].node));
                                                ;}
    break;

  case 10:
#line 72 "src/gram.y"
    {
                                                    (yyval.node) = makeNode(_DECL_FUN);
                                                    (yyval.node)->name = strdup((yyvsp[(2) - (5)].name));
                                                    (yyval.node)->type = strdup((yyvsp[(1) - (5)].name));
                                                    addChild((yyval.node), (yyvsp[(4) - (5)].node));
                                                ;}
    break;

  case 11:
#line 78 "src/gram.y"
    {
                                                    (yyval.node) = makeNode(_DECL_FUN);
                                                    (yyval.node)->name = strdup((yyvsp[(2) - (5)].name));
                                                    addChild((yyval.node), (yyvsp[(4) - (5)].node));
                                                ;}
    break;

  case 12:
#line 85 "src/gram.y"
    {
                                                    (yyval.node) = NULL;
                                                ;}
    break;

  case 13:
#line 88 "src/gram.y"
    {
                                                    (yyval.node) = makeNode(_PARAM);
                                                    addChild((yyval.node), (yyvsp[(1) - (1)].node));
                                                ;}
    break;

  case 14:
#line 94 "src/gram.y"
    {
                                                    (yyval.node) = makeNode(_DECL_VAR);
                                                    (yyval.node)->name = strdup((yyvsp[(4) - (4)].name));
                                                    (yyval.node)->type = strdup((yyvsp[(3) - (4)].name));
                                                    addSibling((yyval.node), (yyvsp[(1) - (4)].node));
                                                ;}
    break;

  case 15:
#line 100 "src/gram.y"
    {
                                                    (yyval.node) = makeNode(_DECL_VAR);
                                                    (yyval.node)->name = strdup((yyvsp[(2) - (2)].name));
                                                    (yyval.node)->type = strdup((yyvsp[(1) - (2)].name));
                                                ;}
    break;

  case 16:
#line 106 "src/gram.y"
    {
                                                    (yyval.node)=makeNode(_BODY);
                                                    addChild((yyval.node), (yyvsp[(2) - (4)].node)); addChild((yyval.node), (yyvsp[(3) - (4)].node));
                                                ;}
    break;

  case 17:
#line 112 "src/gram.y"
    {
                                                    if ((yyvsp[(1) - (4)].node) != NULL) {
                                                        (yyval.node) = (yyvsp[(1) - (4)].node);
                                                        addSibling((yyval.node), (yyvsp[(3) - (4)].node));
                                                    }else
                                                        (yyval.node) = (yyvsp[(3) - (4)].node);
                                                    Node* t = (yyvsp[(3) - (4)].node);
                                                    while(t != NULL) {
                                                        if (t->label == _ASSIGN) {
                                                            t->firstChild->type = strdup((yyvsp[(2) - (4)].name));
                                                        }else
                                                            t->type = strdup((yyvsp[(2) - (4)].name));
                                                        t = t->nextSibling;
                                                    }
                                                ;}
    break;

  case 18:
#line 127 "src/gram.y"
    {(yyval.node)=NULL;;}
    break;

  case 19:
#line 130 "src/gram.y"
    {
                                                    (yyval.node) = (yyvsp[(1) - (3)].node);
                                                    Node* t = makeNode(_DECL_VAR);
                                                    t->name = strdup((yyvsp[(3) - (3)].name));
                                                    addSibling((yyval.node), t);
                                                ;}
    break;

  case 20:
#line 136 "src/gram.y"
    {
                                                    (yyval.node) = (yyvsp[(1) - (5)].node);
                                                    Node* a = makeNode(_ASSIGN);
                                                    Node* t = makeNode(_DECL_VAR);
                                                    addChild(a, t);
                                                    addChild(a, (yyvsp[(5) - (5)].node));
                                                    t->name = strdup((yyvsp[(3) - (5)].name));
                                                    addSibling((yyval.node), a);
                                                ;}
    break;

  case 21:
#line 145 "src/gram.y"
    {
                                                    (yyval.node) = makeNode(_ASSIGN);
                                                    Node* t = makeNode(_DECL_VAR);
                                                    t->name = strdup((yyvsp[(1) - (3)].name));
                                                    addChild((yyval.node), t);
                                                    addChild((yyval.node), (yyvsp[(3) - (3)].node));
                                                ;}
    break;

  case 22:
#line 152 "src/gram.y"
    {
                                                    (yyval.node) = makeNode(_DECL_VAR);
                                                    (yyval.node)->name = strdup((yyvsp[(1) - (1)].name));
                                                ;}
    break;

  case 23:
#line 158 "src/gram.y"
    {
                                                    if((yyval.node) == NULL) {
                                                        (yyval.node)=(yyvsp[(2) - (2)].node);
                                                    } else {
                                                        (yyval.node) = (yyvsp[(1) - (2)].node);
                                                        addSibling((yyval.node), (yyvsp[(2) - (2)].node));
                                                    }
                                                ;}
    break;

  case 24:
#line 166 "src/gram.y"
    { (yyval.node)=NULL; ;}
    break;

  case 25:
#line 169 "src/gram.y"
    {
                                                    (yyval.node) = makeNode(_ASSIGN);
                                                    addChild((yyval.node), (yyvsp[(1) - (4)].node));
                                                    addChild((yyval.node), (yyvsp[(3) - (4)].node));
                                                ;}
    break;

  case 26:
#line 174 "src/gram.y"
    {
                                                    (yyval.node) = makeNode(_IF);
                                                    addChild((yyval.node), (yyvsp[(3) - (5)].node));
                                                    addChild((yyval.node), (yyvsp[(5) - (5)].node));
                                                ;}
    break;

  case 27:
#line 179 "src/gram.y"
    {
                                                    (yyval.node) = makeNode(_IF);
                                                    addChild((yyval.node), (yyvsp[(3) - (7)].node));
                                                    addChild((yyval.node), (yyvsp[(5) - (7)].node));
                                                    addChild((yyval.node), (yyvsp[(7) - (7)].node));
                                                ;}
    break;

  case 28:
#line 185 "src/gram.y"
    {
                                                    (yyval.node) = makeNode(_WHILE);
                                                    addChild((yyval.node), (yyvsp[(3) - (5)].node));
                                                    addChild((yyval.node), (yyvsp[(5) - (5)].node));
                                                ;}
    break;

  case 29:
#line 190 "src/gram.y"
    {
                                                    (yyval.node) = makeNode(_FUN);
                                                    addChild((yyval.node), (yyvsp[(3) - (5)].node));
                                                ;}
    break;

  case 30:
#line 194 "src/gram.y"
    {
                                                    (yyval.node) = makeNode(_RETURN);
                                                    addChild((yyval.node), (yyvsp[(2) - (3)].node));
                                                ;}
    break;

  case 31:
#line 198 "src/gram.y"
    {
                                                    (yyval.node) = makeNode(_RETURN);
                                                ;}
    break;

  case 32:
#line 201 "src/gram.y"
    {
                                                    (yyval.node) = (yyvsp[(2) - (3)].node);
                                                ;}
    break;

  case 33:
#line 204 "src/gram.y"
    {(yyval.node)=NULL;;}
    break;

  case 34:
#line 206 "src/gram.y"
    {
                                                    (yyval.node) = makeNode(_COMP);
                                                    (yyval.node)->name = strdup((yyvsp[(2) - (3)].name));
                                                    addChild((yyval.node), (yyvsp[(1) - (3)].node));
                                                    addChild((yyval.node), (yyvsp[(3) - (3)].node));
                                                ;}
    break;

  case 35:
#line 212 "src/gram.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);;}
    break;

  case 36:
#line 214 "src/gram.y"
    {
                                                    (yyval.node) = makeNode(_COMP);
                                                    (yyval.node)->name = strdup((yyvsp[(2) - (3)].name));
                                                    addChild((yyval.node), (yyvsp[(1) - (3)].node));
                                                    addChild((yyval.node), (yyvsp[(3) - (3)].node));
                                                ;}
    break;

  case 37:
#line 220 "src/gram.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);;}
    break;

  case 38:
#line 222 "src/gram.y"
    {
                                                    (yyval.node) = makeNode(_COMP);
                                                    (yyval.node)->name = strdup((yyvsp[(2) - (3)].name));
                                                    addChild((yyval.node), (yyvsp[(1) - (3)].node));
                                                    addChild((yyval.node), (yyvsp[(3) - (3)].node));
                                                ;}
    break;

  case 39:
#line 228 "src/gram.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);;}
    break;

  case 40:
#line 230 "src/gram.y"
    {
                                                    (yyval.node) = makeNode(_COMP);
                                                    (yyval.node)->name = strdup((yyvsp[(2) - (3)].name));
                                                    addChild((yyval.node), (yyvsp[(1) - (3)].node));
                                                    addChild((yyval.node), (yyvsp[(3) - (3)].node));
                                                ;}
    break;

  case 41:
#line 236 "src/gram.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);;}
    break;

  case 42:
#line 238 "src/gram.y"
    {
                                                    (yyval.node) = makeNode(_BIN_OP);
                                                    (yyval.node)->const_val = (yyvsp[(2) - (3)].const_val);
                                                    addChild((yyval.node), (yyvsp[(1) - (3)].node));
                                                    addChild((yyval.node), (yyvsp[(3) - (3)].node));
                                                ;}
    break;

  case 43:
#line 244 "src/gram.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);;}
    break;

  case 44:
#line 246 "src/gram.y"
    {
                                                    (yyval.node) = makeNode(_BIN_OP);
                                                    (yyval.node)->const_val = (yyvsp[(2) - (3)].const_val);
                                                    addChild((yyval.node), (yyvsp[(1) - (3)].node));
                                                    addChild((yyval.node), (yyvsp[(3) - (3)].node));
                                                ;}
    break;

  case 45:
#line 252 "src/gram.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);;}
    break;

  case 46:
#line 254 "src/gram.y"
    {
                                                    // NEED TO BE FIX
                                                    (yyval.node) = makeNode(_BIN_OP);
                                                    (yyval.node)->const_val = (yyvsp[(1) - (2)].const_val);
                                                    addChild((yyval.node), (yyvsp[(2) - (2)].node));
                                                ;}
    break;

  case 47:
#line 260 "src/gram.y"
    {
                                                    (yyval.node) = makeNode(_NON);
                                                    addChild((yyval.node), (yyvsp[(2) - (2)].node));
                                                ;}
    break;

  case 48:
#line 264 "src/gram.y"
    {(yyval.node)=(yyvsp[(2) - (3)].node);;}
    break;

  case 49:
#line 265 "src/gram.y"
    {
                                                    (yyval.node) = makeNode(_CONST);
                                                    (yyval.node)->const_val = (yyvsp[(1) - (1)].const_val);
                                                ;}
    break;

  case 50:
#line 269 "src/gram.y"
    {
                                                    (yyval.node) = makeNode(_CONST_CHAR);
                                                    (yyval.node)->const_val = (yyvsp[(1) - (1)].const_val);
                                                ;}
    break;

  case 51:
#line 273 "src/gram.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);;}
    break;

  case 52:
#line 274 "src/gram.y"
    {
                                                    (yyval.node) = makeNode(_FUN);
                                                    (yyval.node)->name = strdup((yyvsp[(1) - (4)].name));
                                                    addChild((yyval.node), (yyvsp[(3) - (4)].node));
                                                ;}
    break;

  case 53:
#line 281 "src/gram.y"
    {
                                                    (yyval.node) = makeNode(_VAR);
                                                    (yyval.node)->name = strdup((yyvsp[(1) - (1)].name));
                                                ;}
    break;

  case 54:
#line 287 "src/gram.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);;}
    break;

  case 55:
#line 288 "src/gram.y"
    {(yyval.node) = NULL;;}
    break;

  case 56:
#line 291 "src/gram.y"
    {
                                                    (yyval.node)=(yyvsp[(1) - (3)].node);
                                                    addSibling((yyval.node), (yyvsp[(3) - (3)].node));
                                                ;}
    break;

  case 57:
#line 295 "src/gram.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);;}
    break;


/* Line 1267 of yacc.c.  */
#line 1904 "src/gram.tab.c"
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
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  if (yyn == YYFINAL)
    YYACCEPT;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
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


#line 297 "src/gram.y"


int main(int argc, char const *argv[]) {
    int i;
    int help = 0;
    int tree = 0;
    int stdinRedifined = 0;

    // Lecture des arguments
    for (i=1; i<argc; i++) {
        if(strcmp(argv[i], "-h") == 0 || strcmp(argv[i], "--help") == 0)
            help = 1;
        else if(strcmp(argv[i], "-t") == 0 || strcmp(argv[i], "--tree") == 0)
            tree = 1;
        else {
            // We redifine stdin with the first name we meet
            if (!stdinRedifined) {
                stdin = freopen(argv[i], "r", stdin);
                stdinRedifined = 1;
                if (stdin == NULL) {
                    printf("invalid file name: %s\n", argv[i]);
                    return 2;
                }
                break;
            }
            printf("invalid arg: %s\n", argv[i]);
            return 2;
        }
    }

    // help
    if(help) {
        printf("--- COMMAND ---\n");
        printf("-t > print execution tree\n");
        printf("-h > print help tab\n");
        printf("-- USE FILES --\n");
        printf("./tpcas [-OPTION] < [FILE]\n");
        return 0;
    }

    int code = yyparse();

    if(tree) {
        printTree(Tree);
        free(Tree);
    }
    return code;
}

int yyerror(char * msg) {
    printf("%s at line %d (after char %d)\n", msg, lineno, charno);
    return 0;
}
