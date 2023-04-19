/* A Bison parser, made by GNU Bison 3.7.5.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30705

/* Bison version string.  */
#define YYBISON_VERSION "3.7.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "src/gram.y"

  #include <stdio.h>
  #include <string.h>
  #include "tree.h"
  int yyerror(char * msg);
  int yylex();
  extern int lineno;
  extern int charno;

  extern Node* Tree;
  extern FILE* yyin;

#line 84 "src/gram.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "gram.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_VOID = 3,                       /* VOID  */
  YYSYMBOL_IF = 4,                         /* IF  */
  YYSYMBOL_ELSE = 5,                       /* ELSE  */
  YYSYMBOL_WHILE = 6,                      /* WHILE  */
  YYSYMBOL_RETURN = 7,                     /* RETURN  */
  YYSYMBOL_IDENT = 8,                      /* IDENT  */
  YYSYMBOL_TYPE = 9,                       /* TYPE  */
  YYSYMBOL_AND = 10,                       /* AND  */
  YYSYMBOL_EQ = 11,                        /* EQ  */
  YYSYMBOL_OR = 12,                        /* OR  */
  YYSYMBOL_ORDER = 13,                     /* ORDER  */
  YYSYMBOL_CHARACTER = 14,                 /* CHARACTER  */
  YYSYMBOL_NUM = 15,                       /* NUM  */
  YYSYMBOL_ADDSUB = 16,                    /* ADDSUB  */
  YYSYMBOL_DIVSTAR = 17,                   /* DIVSTAR  */
  YYSYMBOL_18_ = 18,                       /* ';'  */
  YYSYMBOL_19_ = 19,                       /* ','  */
  YYSYMBOL_20_ = 20,                       /* '('  */
  YYSYMBOL_21_ = 21,                       /* ')'  */
  YYSYMBOL_22_ = 22,                       /* '{'  */
  YYSYMBOL_23_ = 23,                       /* '}'  */
  YYSYMBOL_24_ = 24,                       /* '='  */
  YYSYMBOL_25_ = 25,                       /* '!'  */
  YYSYMBOL_YYACCEPT = 26,                  /* $accept  */
  YYSYMBOL_Prog = 27,                      /* Prog  */
  YYSYMBOL_DeclGlobalVars = 28,            /* DeclGlobalVars  */
  YYSYMBOL_GlobalDeclarateurs = 29,        /* GlobalDeclarateurs  */
  YYSYMBOL_DeclFoncts = 30,                /* DeclFoncts  */
  YYSYMBOL_DeclFonct = 31,                 /* DeclFonct  */
  YYSYMBOL_EnTeteFonct = 32,               /* EnTeteFonct  */
  YYSYMBOL_Parametres = 33,                /* Parametres  */
  YYSYMBOL_ListTypVar = 34,                /* ListTypVar  */
  YYSYMBOL_Corps = 35,                     /* Corps  */
  YYSYMBOL_DeclVars = 36,                  /* DeclVars  */
  YYSYMBOL_Declarateurs = 37,              /* Declarateurs  */
  YYSYMBOL_SuiteInstr = 38,                /* SuiteInstr  */
  YYSYMBOL_Instr = 39,                     /* Instr  */
  YYSYMBOL_Exp = 40,                       /* Exp  */
  YYSYMBOL_TB = 41,                        /* TB  */
  YYSYMBOL_FB = 42,                        /* FB  */
  YYSYMBOL_M = 43,                         /* M  */
  YYSYMBOL_E = 44,                         /* E  */
  YYSYMBOL_T = 45,                         /* T  */
  YYSYMBOL_F = 46,                         /* F  */
  YYSYMBOL_LValue = 47,                    /* LValue  */
  YYSYMBOL_Arguments = 48,                 /* Arguments  */
  YYSYMBOL_ListExp = 49                    /* ListExp  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

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
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  112

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   272


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    28,    28,    35,    44,    47,    53,    59,    62,    67,
      73,    80,    87,    90,    96,   103,   110,   116,   131,   134,
     140,   149,   156,   162,   170,   173,   178,   183,   189,   194,
     199,   203,   206,   209,   211,   217,   219,   225,   227,   233,
     235,   241,   243,   249,   251,   257,   259,   265,   269,   270,
     274,   278,   279,   286,   292,   293,   296,   300
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "VOID", "IF", "ELSE",
  "WHILE", "RETURN", "IDENT", "TYPE", "AND", "EQ", "OR", "ORDER",
  "CHARACTER", "NUM", "ADDSUB", "DIVSTAR", "';'", "','", "'('", "')'",
  "'{'", "'}'", "'='", "'!'", "$accept", "Prog", "DeclGlobalVars",
  "GlobalDeclarateurs", "DeclFoncts", "DeclFonct", "EnTeteFonct",
  "Parametres", "ListTypVar", "Corps", "DeclVars", "Declarateurs",
  "SuiteInstr", "Instr", "Exp", "TB", "FB", "M", "E", "T", "F", "LValue",
  "Arguments", "ListExp", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,    59,    44,
      40,    41,   123,   125,    61,    33
};
#endif

#define YYPACT_NINF (-78)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
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

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
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

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -78,   -78,   -78,   -78,   -78,    98,   -78,    93,   -78,   -78,
     -78,   -78,    65,   -77,   -37,    27,    28,    34,    30,    35,
     -52,   -29,    40,   -78
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,     2,    11,     6,     7,     8,    24,    25,    15,
      21,    35,    29,    43,    85,    59,    60,    61,    62,    63,
      64,    65,    86,    87
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
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
static const yytype_int8 yystos[] =
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

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    26,    27,    28,    28,    29,    29,    30,    30,    31,
      32,    32,    33,    33,    34,    34,    35,    36,    36,    37,
      37,    37,    37,    38,    38,    39,    39,    39,    39,    39,
      39,    39,    39,    39,    40,    40,    41,    41,    42,    42,
      43,    43,    44,    44,    45,    45,    46,    46,    46,    46,
      46,    46,    46,    47,    48,    48,    49,    49
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     4,     0,     3,     1,     2,     1,     2,
       5,     5,     1,     1,     4,     2,     4,     4,     0,     3,
       5,     3,     1,     2,     0,     4,     5,     7,     5,     5,
       3,     2,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     2,     2,     3,     1,
       1,     1,     4,     1,     1,     0,     3,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* Prog: DeclGlobalVars DeclFoncts  */
#line 28 "src/gram.y"
                                                {
                                                    Tree = makeNode(_PROG);
                                                    addChild(Tree, (yyvsp[-1].node));
                                                    addChild(Tree, (yyvsp[0].node));
                                                }
#line 1201 "src/gram.tab.c"
    break;

  case 3: /* DeclGlobalVars: DeclGlobalVars TYPE GlobalDeclarateurs ';'  */
#line 35 "src/gram.y"
                                                    {
                                                        (yyval.node) = (yyvsp[-1].node);
                                                        Node* t = (yyvsp[-1].node);
                                                        while(t != NULL) {
                                                            t->type = strdup((yyvsp[-2].name));
                                                            t = t->nextSibling;
                                                        }
                                                        addSibling((yyval.node), (yyvsp[-3].node));
                                                    }
#line 1215 "src/gram.tab.c"
    break;

  case 4: /* DeclGlobalVars: %empty  */
#line 44 "src/gram.y"
                                                { (yyval.node)=NULL;}
#line 1221 "src/gram.tab.c"
    break;

  case 5: /* GlobalDeclarateurs: GlobalDeclarateurs ',' IDENT  */
#line 47 "src/gram.y"
                                                {
                                                    (yyval.node) = (yyvsp[-2].node);
                                                    Node* t = makeNode(_DECL_VAR);
                                                    t->name = strdup((yyvsp[0].name));
                                                    addSibling((yyval.node), t);
                                                }
#line 1232 "src/gram.tab.c"
    break;

  case 6: /* GlobalDeclarateurs: IDENT  */
#line 53 "src/gram.y"
                                                {
                                                    (yyval.node) = makeNode(_DECL_VAR);
                                                    (yyval.node)->name = strdup((yyvsp[0].name));
                                                }
#line 1241 "src/gram.tab.c"
    break;

  case 7: /* DeclFoncts: DeclFoncts DeclFonct  */
#line 59 "src/gram.y"
                                                {
                                                    (yyval.node) = (yyvsp[-1].node); addSibling((yyval.node), (yyvsp[0].node));
                                                }
#line 1249 "src/gram.tab.c"
    break;

  case 8: /* DeclFoncts: DeclFonct  */
#line 62 "src/gram.y"
                                                {
                                                    (yyval.node) = (yyvsp[0].node);
                                                }
#line 1257 "src/gram.tab.c"
    break;

  case 9: /* DeclFonct: EnTeteFonct Corps  */
#line 67 "src/gram.y"
                                                {
                                                    (yyval.node) = (yyvsp[-1].node);
                                                    addChild((yyval.node), (yyvsp[0].node));
                                                }
#line 1266 "src/gram.tab.c"
    break;

  case 10: /* EnTeteFonct: TYPE IDENT '(' Parametres ')'  */
#line 73 "src/gram.y"
                                                {
                                                    (yyval.node) = makeNode(_DECL_FUN);
                                                    (yyval.node)->name = strdup((yyvsp[-3].name));
                                                    (yyval.node)->type = strdup((yyvsp[-4].name));
                                                    (yyval.node)->fun = 1;
                                                    addChild((yyval.node), (yyvsp[-1].node));
                                                }
#line 1278 "src/gram.tab.c"
    break;

  case 11: /* EnTeteFonct: VOID IDENT '(' Parametres ')'  */
#line 80 "src/gram.y"
                                                {
                                                    (yyval.node) = makeNode(_DECL_FUN);
                                                    (yyval.node)->name = strdup((yyvsp[-3].name));
                                                    addChild((yyval.node), (yyvsp[-1].node));
                                                }
#line 1288 "src/gram.tab.c"
    break;

  case 12: /* Parametres: VOID  */
#line 87 "src/gram.y"
                                                {
                                                    (yyval.node) = NULL;
                                                }
#line 1296 "src/gram.tab.c"
    break;

  case 13: /* Parametres: ListTypVar  */
#line 90 "src/gram.y"
                                                {
                                                    (yyval.node) = makeNode(_PARAM);
                                                    addChild((yyval.node), (yyvsp[0].node));
                                                }
#line 1305 "src/gram.tab.c"
    break;

  case 14: /* ListTypVar: ListTypVar ',' TYPE IDENT  */
#line 96 "src/gram.y"
                                                {
                                                    (yyval.node) = makeNode(_DECL_VAR);
                                                    (yyval.node)->name = strdup((yyvsp[0].name));
                                                    (yyval.node)->type = strdup((yyvsp[-1].name));
                                                    (yyval.node)->param = 1;
                                                    addSibling((yyval.node), (yyvsp[-3].node));
                                                }
#line 1317 "src/gram.tab.c"
    break;

  case 15: /* ListTypVar: TYPE IDENT  */
#line 103 "src/gram.y"
                                                {
                                                    (yyval.node) = makeNode(_DECL_VAR);
                                                    (yyval.node)->name = strdup((yyvsp[0].name));
                                                    (yyval.node)->type = strdup((yyvsp[-1].name));
                                                    (yyval.node)->param = 1;
                                                }
#line 1328 "src/gram.tab.c"
    break;

  case 16: /* Corps: '{' DeclVars SuiteInstr '}'  */
#line 110 "src/gram.y"
                                                {
                                                    (yyval.node)=makeNode(_BODY);
                                                    addChild((yyval.node), (yyvsp[-2].node)); addChild((yyval.node), (yyvsp[-1].node));
                                                }
#line 1337 "src/gram.tab.c"
    break;

  case 17: /* DeclVars: DeclVars TYPE Declarateurs ';'  */
#line 116 "src/gram.y"
                                                {
                                                    if ((yyvsp[-3].node) != NULL) {
                                                        (yyval.node) = (yyvsp[-3].node);
                                                        addSibling((yyval.node), (yyvsp[-1].node));
                                                    }else
                                                        (yyval.node) = (yyvsp[-1].node);
                                                    Node* t = (yyvsp[-1].node);
                                                    while(t != NULL) {
                                                        if (t->label == _ASSIGN) {
                                                            t->firstChild->type = strdup((yyvsp[-2].name));
                                                        }else
                                                            t->type = strdup((yyvsp[-2].name));
                                                        t = t->nextSibling;
                                                    }
                                                }
#line 1357 "src/gram.tab.c"
    break;

  case 18: /* DeclVars: %empty  */
#line 131 "src/gram.y"
                                                {(yyval.node)=NULL;}
#line 1363 "src/gram.tab.c"
    break;

  case 19: /* Declarateurs: Declarateurs ',' IDENT  */
#line 134 "src/gram.y"
                                                {
                                                    (yyval.node) = (yyvsp[-2].node);
                                                    Node* t = makeNode(_DECL_VAR);
                                                    t->name = strdup((yyvsp[0].name));
                                                    addSibling((yyval.node), t);
                                                }
#line 1374 "src/gram.tab.c"
    break;

  case 20: /* Declarateurs: Declarateurs ',' IDENT '=' Exp  */
#line 140 "src/gram.y"
                                                {
                                                    (yyval.node) = (yyvsp[-4].node);
                                                    Node* a = makeNode(_ASSIGN);
                                                    Node* t = makeNode(_DECL_VAR);
                                                    addChild(a, t);
                                                    addChild(a, (yyvsp[0].node));
                                                    t->name = strdup((yyvsp[-2].name));
                                                    addSibling((yyval.node), a);
                                                }
#line 1388 "src/gram.tab.c"
    break;

  case 21: /* Declarateurs: IDENT '=' Exp  */
#line 149 "src/gram.y"
                                                {
                                                    (yyval.node) = makeNode(_ASSIGN);
                                                    Node* t = makeNode(_DECL_VAR);
                                                    t->name = strdup((yyvsp[-2].name));
                                                    addChild((yyval.node), t);
                                                    addChild((yyval.node), (yyvsp[0].node));
                                                }
#line 1400 "src/gram.tab.c"
    break;

  case 22: /* Declarateurs: IDENT  */
#line 156 "src/gram.y"
                                                {
                                                    (yyval.node) = makeNode(_DECL_VAR);
                                                    (yyval.node)->name = strdup((yyvsp[0].name));
                                                }
#line 1409 "src/gram.tab.c"
    break;

  case 23: /* SuiteInstr: SuiteInstr Instr  */
#line 162 "src/gram.y"
                                                {
                                                    if((yyval.node) == NULL) {
                                                        (yyval.node)=(yyvsp[0].node);
                                                    } else {
                                                        (yyval.node) = (yyvsp[-1].node);
                                                        addSibling((yyval.node), (yyvsp[0].node));
                                                    }
                                                }
#line 1422 "src/gram.tab.c"
    break;

  case 24: /* SuiteInstr: %empty  */
#line 170 "src/gram.y"
                                                { (yyval.node)=NULL; }
#line 1428 "src/gram.tab.c"
    break;

  case 25: /* Instr: LValue '=' Exp ';'  */
#line 173 "src/gram.y"
                                                {
                                                    (yyval.node) = makeNode(_ASSIGN);
                                                    addChild((yyval.node), (yyvsp[-3].node));
                                                    addChild((yyval.node), (yyvsp[-1].node));
                                                }
#line 1438 "src/gram.tab.c"
    break;

  case 26: /* Instr: IF '(' Exp ')' Instr  */
#line 178 "src/gram.y"
                                                {
                                                    (yyval.node) = makeNode(_IF);
                                                    addChild((yyval.node), (yyvsp[-2].node));
                                                    addChild((yyval.node), (yyvsp[0].node));
                                                }
#line 1448 "src/gram.tab.c"
    break;

  case 27: /* Instr: IF '(' Exp ')' Instr ELSE Instr  */
#line 183 "src/gram.y"
                                                {
                                                    (yyval.node) = makeNode(_IF);
                                                    addChild((yyval.node), (yyvsp[-4].node));
                                                    addChild((yyval.node), (yyvsp[-2].node));
                                                    addChild((yyval.node), (yyvsp[0].node));
                                                }
#line 1459 "src/gram.tab.c"
    break;

  case 28: /* Instr: WHILE '(' Exp ')' Instr  */
#line 189 "src/gram.y"
                                                {
                                                    (yyval.node) = makeNode(_WHILE);
                                                    addChild((yyval.node), (yyvsp[-2].node));
                                                    addChild((yyval.node), (yyvsp[0].node));
                                                }
#line 1469 "src/gram.tab.c"
    break;

  case 29: /* Instr: IDENT '(' Arguments ')' ';'  */
#line 194 "src/gram.y"
                                                {
                                                    (yyval.node) = makeNode(_FUN);
                                                    (yyval.node)->name = strdup((yyvsp[-4].name));
                                                    addChild((yyval.node), (yyvsp[-2].node));
                                                }
#line 1479 "src/gram.tab.c"
    break;

  case 30: /* Instr: RETURN Exp ';'  */
#line 199 "src/gram.y"
                                                {
                                                    (yyval.node) = makeNode(_RETURN);
                                                    addChild((yyval.node), (yyvsp[-1].node));
                                                }
#line 1488 "src/gram.tab.c"
    break;

  case 31: /* Instr: RETURN ';'  */
#line 203 "src/gram.y"
                                                {
                                                    (yyval.node) = makeNode(_RETURN);
                                                }
#line 1496 "src/gram.tab.c"
    break;

  case 32: /* Instr: '{' SuiteInstr '}'  */
#line 206 "src/gram.y"
                                                {
                                                    (yyval.node) = (yyvsp[-1].node);
                                                }
#line 1504 "src/gram.tab.c"
    break;

  case 33: /* Instr: ';'  */
#line 209 "src/gram.y"
                                                {(yyval.node)=NULL;}
#line 1510 "src/gram.tab.c"
    break;

  case 34: /* Exp: Exp OR TB  */
#line 211 "src/gram.y"
                                                {
                                                    (yyval.node) = makeNode(_COMP);
                                                    (yyval.node)->name = strdup((yyvsp[-1].name));
                                                    addChild((yyval.node), (yyvsp[-2].node));
                                                    addChild((yyval.node), (yyvsp[0].node));
                                                }
#line 1521 "src/gram.tab.c"
    break;

  case 35: /* Exp: TB  */
#line 217 "src/gram.y"
                                                {(yyval.node)=(yyvsp[0].node);}
#line 1527 "src/gram.tab.c"
    break;

  case 36: /* TB: TB AND FB  */
#line 219 "src/gram.y"
                                                {
                                                    (yyval.node) = makeNode(_COMP);
                                                    (yyval.node)->name = strdup((yyvsp[-1].name));
                                                    addChild((yyval.node), (yyvsp[-2].node));
                                                    addChild((yyval.node), (yyvsp[0].node));
                                                }
#line 1538 "src/gram.tab.c"
    break;

  case 37: /* TB: FB  */
#line 225 "src/gram.y"
                                                {(yyval.node)=(yyvsp[0].node);}
#line 1544 "src/gram.tab.c"
    break;

  case 38: /* FB: FB EQ M  */
#line 227 "src/gram.y"
                                                {
                                                    (yyval.node) = makeNode(_COMP);
                                                    (yyval.node)->name = strdup((yyvsp[-1].name));
                                                    addChild((yyval.node), (yyvsp[-2].node));
                                                    addChild((yyval.node), (yyvsp[0].node));
                                                }
#line 1555 "src/gram.tab.c"
    break;

  case 39: /* FB: M  */
#line 233 "src/gram.y"
                                                {(yyval.node)=(yyvsp[0].node);}
#line 1561 "src/gram.tab.c"
    break;

  case 40: /* M: M ORDER E  */
#line 235 "src/gram.y"
                                                {
                                                    (yyval.node) = makeNode(_COMP);
                                                    (yyval.node)->name = strdup((yyvsp[-1].name));
                                                    addChild((yyval.node), (yyvsp[-2].node));
                                                    addChild((yyval.node), (yyvsp[0].node));
                                                }
#line 1572 "src/gram.tab.c"
    break;

  case 41: /* M: E  */
#line 241 "src/gram.y"
                                                {(yyval.node)=(yyvsp[0].node);}
#line 1578 "src/gram.tab.c"
    break;

  case 42: /* E: E ADDSUB T  */
#line 243 "src/gram.y"
                                                {
                                                    (yyval.node) = makeNode(_BIN_OP);
                                                    (yyval.node)->const_val = (yyvsp[-1].const_val);
                                                    addChild((yyval.node), (yyvsp[-2].node));
                                                    addChild((yyval.node), (yyvsp[0].node));
                                                }
#line 1589 "src/gram.tab.c"
    break;

  case 43: /* E: T  */
#line 249 "src/gram.y"
                                                {(yyval.node)=(yyvsp[0].node);}
#line 1595 "src/gram.tab.c"
    break;

  case 44: /* T: T DIVSTAR F  */
#line 251 "src/gram.y"
                                                {
                                                    (yyval.node) = makeNode(_BIN_OP);
                                                    (yyval.node)->const_val = (yyvsp[-1].const_val);
                                                    addChild((yyval.node), (yyvsp[-2].node));
                                                    addChild((yyval.node), (yyvsp[0].node));
                                                }
#line 1606 "src/gram.tab.c"
    break;

  case 45: /* T: F  */
#line 257 "src/gram.y"
                                                {(yyval.node)=(yyvsp[0].node);}
#line 1612 "src/gram.tab.c"
    break;

  case 46: /* F: ADDSUB F  */
#line 259 "src/gram.y"
                                                {
                                                    // NEED TO BE FIX
                                                    (yyval.node) = makeNode(_BIN_OP);
                                                    (yyval.node)->const_val = (yyvsp[-1].const_val);
                                                    addChild((yyval.node), (yyvsp[0].node));
                                                }
#line 1623 "src/gram.tab.c"
    break;

  case 47: /* F: '!' F  */
#line 265 "src/gram.y"
                                                {
                                                    (yyval.node) = makeNode(_NON);
                                                    addChild((yyval.node), (yyvsp[0].node));
                                                }
#line 1632 "src/gram.tab.c"
    break;

  case 48: /* F: '(' Exp ')'  */
#line 269 "src/gram.y"
                                                {(yyval.node)=(yyvsp[-1].node);}
#line 1638 "src/gram.tab.c"
    break;

  case 49: /* F: NUM  */
#line 270 "src/gram.y"
                                                {
                                                    (yyval.node) = makeNode(_CONST);
                                                    (yyval.node)->const_val = (yyvsp[0].const_val);
                                                }
#line 1647 "src/gram.tab.c"
    break;

  case 50: /* F: CHARACTER  */
#line 274 "src/gram.y"
                                                {
                                                    (yyval.node) = makeNode(_CONST_CHAR);
                                                    (yyval.node)->const_val = (yyvsp[0].const_val);
                                                }
#line 1656 "src/gram.tab.c"
    break;

  case 51: /* F: LValue  */
#line 278 "src/gram.y"
                                                {(yyval.node) = (yyvsp[0].node);}
#line 1662 "src/gram.tab.c"
    break;

  case 52: /* F: IDENT '(' Arguments ')'  */
#line 279 "src/gram.y"
                                                {
                                                    (yyval.node) = makeNode(_FUN);
                                                    (yyval.node)->name = strdup((yyvsp[-3].name));
                                                    addChild((yyval.node), (yyvsp[-1].node));
                                                }
#line 1672 "src/gram.tab.c"
    break;

  case 53: /* LValue: IDENT  */
#line 286 "src/gram.y"
                                                {
                                                    (yyval.node) = makeNode(_VAR);
                                                    (yyval.node)->name = strdup((yyvsp[0].name));
                                                }
#line 1681 "src/gram.tab.c"
    break;

  case 54: /* Arguments: ListExp  */
#line 292 "src/gram.y"
                                                {(yyval.node)=(yyvsp[0].node);}
#line 1687 "src/gram.tab.c"
    break;

  case 55: /* Arguments: %empty  */
#line 293 "src/gram.y"
                                                {(yyval.node) = NULL;}
#line 1693 "src/gram.tab.c"
    break;

  case 56: /* ListExp: ListExp ',' Exp  */
#line 296 "src/gram.y"
                                                {
                                                    (yyval.node)=(yyvsp[-2].node);
                                                    addSibling((yyval.node), (yyvsp[0].node));
                                                }
#line 1702 "src/gram.tab.c"
    break;

  case 57: /* ListExp: Exp  */
#line 300 "src/gram.y"
                                                {(yyval.node)=(yyvsp[0].node);}
#line 1708 "src/gram.tab.c"
    break;


#line 1712 "src/gram.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 302 "src/gram.y"


int yyerror(char * msg) {
    printf("%s at line %d (after char %d)\n", msg, lineno, charno);
    return 0;
}
