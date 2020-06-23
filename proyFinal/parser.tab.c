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
#line 3 "parser.y" /* yacc.c:339  */


#include <stdio.h>
#include <string.h>
#include "list.h"
#include "tabla_tipos.h"
#include "codigo_intermedio.h"
#include "tools.h"

u16 dir_g, salida_ciclo_g;
u8 argc, dim;
struct tipo *tipo_g;
struct list_head *tt_stack, *ts_stack, *dir_stack, *code_list, *tt_actual,
    *ts_actual;

void init();
void destroy();
void yyerror(char *str);

extern int yylineno;
extern char* yytext;

#line 89 "parser.tab.c" /* yacc.c:339  */

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
    INT = 258,
    FLOAT = 259,
    CHAR = 260,
    VOID = 261,
    STRUCT = 262,
    IF = 263,
    ELSE = 264,
    WHILE = 265,
    DO = 266,
    FOR = 267,
    SWITCH = 268,
    CASE = 269,
    BREAK = 270,
    DEFAULT = 271,
    FUNCT = 272,
    RETURN = 273,
    PRINT = 274,
    TRUE = 275,
    FALSE = 276,
    CCHAR = 277,
    STR = 278,
    NUMERO = 279,
    DP = 280,
    PYC = 281,
    LI = 282,
    LD = 283,
    COMA = 284,
    ASIG = 285,
    OR = 286,
    AND = 287,
    EQ = 288,
    NEQ = 289,
    LT = 290,
    LE = 291,
    GT = 292,
    GE = 293,
    MAS = 294,
    MEN = 295,
    MUL = 296,
    DIV = 297,
    MOD = 298,
    NOT = 299,
    PTO = 300,
    CI = 301,
    CD = 302,
    PI = 303,
    PD = 304,
    ID = 305
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 26 "parser.y" /* yacc.c:355  */

    struct {
        enum TT tipo;
        char sval[16];
        union {
            int i;
            float f;
        } val;
    } num;
    // apunta a alguna entrada en la tabla de tipos
    struct tipo *tipo;
    struct {
        enum TT tipo;
        // stack de direcciones siguientes
        struct list_head *next;
    } sent;
    struct {
        // Almacena si es cierta (1) o falsa (0)
        u8 val;
        // Almacena un stack de direcciones que almacena el numero de las
        // instrucciones que deben de incluir la etiqueta verdadra o falsa
        struct list_head * true, *false;
    } cond;
    struct {
        enum TT tipo;
        size_t tam;
        char dir[16];
    } expr;
    char str16[16];

#line 208 "parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 225 "parser.tab.c" /* yacc.c:358  */

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   230

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  97
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  186

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   104,   104,   104,   114,   114,   120,   120,   126,   132,
     133,   134,   135,   137,   137,   162,   172,   183,   191,   193,
     198,   205,   193,   218,   220,   221,   222,   224,   224,   251,
     251,   272,   272,   273,   275,   275,   282,   284,   287,   291,
     284,   301,   305,   301,   321,   325,   321,   338,   341,   345,
     338,   364,   365,   369,   370,   375,   382,   387,   391,   396,
     397,   399,   400,   402,   411,   412,   432,   450,   468,   481,
     494,   507,   520,   533,   537,   538,   539,   542,   542,   560,
     561,   563,   566,   570,   570,   578,   578,   586,   590,   591,
     596,   601,   615,   616,   617,   618,   619,   620
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "FLOAT", "CHAR", "VOID", "STRUCT",
  "IF", "ELSE", "WHILE", "DO", "FOR", "SWITCH", "CASE", "BREAK", "DEFAULT",
  "FUNCT", "RETURN", "PRINT", "TRUE", "FALSE", "CCHAR", "STR", "NUMERO",
  "DP", "PYC", "LI", "LD", "COMA", "ASIG", "OR", "AND", "EQ", "NEQ", "LT",
  "LE", "GT", "GE", "MAS", "MEN", "MUL", "DIV", "MOD", "NOT", "PTO", "CI",
  "CD", "PI", "PD", "ID", "$accept", "programa", "$@1", "declaraciones",
  "$@2", "$@3", "tipo", "tipo_reg", "$@4", "lista", "arreglo", "funciones",
  "$@5", "$@6", "$@7", "argumentos", "lista_argumentos", "$@8", "$@9",
  "parte_arreglo", "$@10", "sentencias", "$@11", "sentencia", "$@12",
  "@13", "$@14", "@15", "$@16", "@17", "$@18", "$@19", "@20", "$@21",
  "casos", "predeterminado", "parte_izquierda", "var_arreglo", "expresion",
  "@22", "parametros", "lista_param", "condicion", "$@23", "$@24",
  "relacional", YY_NULLPTR
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
     305
};
# endif

#define YYPACT_NINF -81

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-81)))

#define YYTABLE_NINF -26

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -81,     7,   188,   -81,   -81,   -81,   -81,   -81,   -81,    -8,
     -81,   -81,    23,   163,   -81,   -34,   -34,   188,   -14,    27,
      26,   108,    46,    42,    68,   -81,   188,    50,   188,   -81,
     -81,    49,   -81,    27,   -81,   198,    27,   -81,    62,    56,
      76,    98,   -81,   -81,   -81,   163,    94,   118,    96,   112,
     -81,   188,   -81,   -81,   120,    94,    94,    57,   -81,   -81,
     139,   140,   134,    22,   -20,   -81,   -81,   -81,   120,   160,
     161,   -81,   179,   165,    25,   -81,   -81,   -81,   -81,    57,
      57,   -81,   138,     9,    57,   120,   120,   -20,   -81,   -81,
     110,   115,   184,   164,   -20,   -81,   -81,   120,   -20,   -20,
     -81,   -20,   -20,   -20,   -20,   -20,   -81,   -11,   -81,   -81,
     -81,   -81,   -81,   -81,   -20,   -81,   -81,   120,    -3,   203,
     -81,    44,   -81,   -81,   -81,   -81,    79,   -20,    -8,   -81,
     122,   143,   -16,   -16,   -81,   -81,   -81,   -81,   157,    57,
      57,   -81,   -81,   -81,    57,   204,   -81,   157,   167,   189,
     -81,   -81,   -81,   185,   -81,   210,   120,    57,    78,   206,
     -81,   -20,   -81,   -81,    82,   -81,   197,   207,   157,   120,
     -81,   120,   199,   200,   194,   -81,   177,   120,   120,   -81,
     -81,   206,   -81,   120,   -81,   -81
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     8,     1,     9,    10,    11,    12,    13,    23,
       4,     6,     0,     0,     3,     0,     0,     8,     0,    18,
       0,     0,     0,     0,     0,    16,     8,     0,     8,    14,
      19,     0,     5,    18,     7,    26,    18,    15,    12,     0,
       0,    24,    17,    29,    20,     0,    33,     0,     0,     0,
      30,     8,    27,    31,     0,    33,    33,     0,    41,    44,
       0,     0,     0,     0,     0,    74,    75,    73,     0,    63,
      34,    36,    76,    64,     0,    28,    32,    89,    90,     0,
       0,    76,     0,    37,     0,     0,     0,     0,    52,    56,
       0,     0,    34,     0,     0,    77,    21,     0,     0,     0,
      58,     0,     0,     0,     0,     0,    87,     0,    96,    97,
      92,    93,    94,    95,     0,    83,    85,     0,     0,     0,
      47,     0,    55,    57,    53,    65,     0,    80,    23,    35,
       0,     0,    68,    69,    70,    71,    72,    88,    91,     0,
       0,    38,    42,    45,     0,     0,    66,    82,     0,    79,
      22,    54,    67,    84,    86,     0,     0,     0,     0,    60,
      78,     0,    39,    43,     0,    48,     0,    62,    81,     0,
      46,     0,     0,     0,     0,    40,     0,     0,     0,    51,
      49,    60,    61,     0,    59,    50
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -81,   -81,   -81,    -4,   -81,   -81,   -12,   -81,   -81,   211,
     174,   100,   -81,   -81,   -81,   -81,   -81,   -81,   -81,     6,
     -81,   162,   -81,   -80,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,    48,   -81,   -54,   -81,   -45,   -81,
     -81,   -81,   -69,   -81,   -81,   -81
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     9,    15,    16,    10,    11,    12,    20,
      25,    14,    35,    47,   128,    40,    41,    55,    46,    50,
      56,    70,    97,    71,   117,   155,   169,    84,   156,    85,
     157,   144,   171,   183,   167,   174,    81,    73,    74,   127,
     148,   149,    83,   139,   140,   114
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      72,    18,    65,    66,    67,   119,   120,     3,   142,    13,
     106,   107,    82,    22,    72,   118,    19,   129,    90,    91,
     115,   116,    32,    39,    34,   103,   104,   105,   115,   116,
      69,    72,    72,    48,    82,    82,    23,   141,   137,    82,
     115,   116,   121,    72,    65,    66,    67,    54,    89,   126,
      17,   100,    26,   130,   131,    27,   132,   133,   134,   135,
     136,    75,    76,    72,   101,   102,   103,   104,   105,   138,
     153,   154,    69,    24,    29,   158,   163,    77,    78,    65,
      66,    67,   147,   101,   102,   103,   104,   105,   164,   175,
      30,   176,    31,   145,    82,    82,    36,   181,   182,    82,
      33,    79,    72,   185,   165,    80,    43,    69,   170,   115,
     116,   -25,    82,   115,   116,    72,   168,    72,   101,   102,
     103,   104,   105,    72,    72,    44,   146,    45,    57,    72,
      58,    59,    60,    61,    28,    62,   122,    27,    63,    64,
      49,   123,    65,    66,    67,    51,    52,    68,   151,   101,
     102,   103,   104,   105,   101,   102,   103,   104,   105,    53,
      88,   101,   102,   103,   104,   105,     4,     5,     6,     7,
      69,   108,   109,   110,   111,   112,   113,   101,   102,   103,
     104,   105,   101,   102,   103,   104,   105,    86,    87,    96,
     152,     4,     5,     6,     7,     8,   101,   102,   103,   104,
     105,     4,     5,     6,    38,    93,    94,    37,    95,    98,
      42,    99,   124,   143,   125,   159,   160,   116,   161,   162,
     166,   172,   179,   173,   177,   178,   180,    21,   150,   184,
      92
};

static const yytype_uint8 yycheck[] =
{
      54,    13,    22,    23,    24,    85,    86,     0,    11,    17,
      79,    80,    57,    17,    68,    84,    50,    97,    63,    64,
      31,    32,    26,    35,    28,    41,    42,    43,    31,    32,
      50,    85,    86,    45,    79,    80,    50,   117,    49,    84,
      31,    32,    87,    97,    22,    23,    24,    51,    26,    94,
      27,    26,    26,    98,    99,    29,   101,   102,   103,   104,
     105,    55,    56,   117,    39,    40,    41,    42,    43,   114,
     139,   140,    50,    46,    28,   144,   156,    20,    21,    22,
      23,    24,   127,    39,    40,    41,    42,    43,   157,   169,
      48,   171,    24,    49,   139,   140,    47,   177,   178,   144,
      50,    44,   156,   183,    26,    48,    50,    50,    26,    31,
      32,    49,   157,    31,    32,   169,   161,   171,    39,    40,
      41,    42,    43,   177,   178,    49,    47,    29,     8,   183,
      10,    11,    12,    13,    26,    15,    26,    29,    18,    19,
      46,    26,    22,    23,    24,    27,    50,    27,    26,    39,
      40,    41,    42,    43,    39,    40,    41,    42,    43,    47,
      26,    39,    40,    41,    42,    43,     3,     4,     5,     6,
      50,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    39,    40,    41,    42,    43,    48,    48,    28,
      47,     3,     4,     5,     6,     7,    39,    40,    41,    42,
      43,     3,     4,     5,     6,    45,    46,    33,    48,    30,
      36,    46,    28,    10,    50,    11,    49,    32,    29,     9,
      14,    24,    28,    16,    25,    25,    49,    16,   128,   181,
      68
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    52,    53,     0,     3,     4,     5,     6,     7,    54,
      57,    58,    59,    17,    62,    55,    56,    27,    57,    50,
      60,    60,    54,    50,    46,    61,    26,    29,    26,    28,
      48,    24,    54,    50,    54,    63,    47,    61,     6,    57,
      66,    67,    61,    50,    49,    29,    69,    64,    57,    46,
      70,    27,    50,    47,    54,    68,    71,     8,    10,    11,
      12,    13,    15,    18,    19,    22,    23,    24,    27,    50,
      72,    74,    87,    88,    89,    70,    70,    20,    21,    44,
      48,    87,    89,    93,    78,    80,    48,    48,    26,    26,
      89,    89,    72,    45,    46,    48,    28,    73,    30,    46,
      26,    39,    40,    41,    42,    43,    93,    93,    33,    34,
      35,    36,    37,    38,    96,    31,    32,    75,    93,    74,
      74,    89,    26,    26,    28,    50,    89,    90,    65,    74,
      89,    89,    89,    89,    89,    89,    89,    49,    89,    94,
      95,    74,    11,    10,    82,    49,    47,    89,    91,    92,
      62,    26,    47,    93,    93,    76,    79,    81,    93,    11,
      49,    29,     9,    74,    93,    26,    14,    85,    89,    77,
      26,    83,    24,    16,    86,    74,    74,    25,    25,    28,
      49,    74,    74,    84,    85,    74
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    53,    52,    55,    54,    56,    54,    54,    57,
      57,    57,    57,    59,    58,    60,    60,    61,    61,    63,
      64,    65,    62,    62,    66,    66,    66,    68,    67,    69,
      67,    71,    70,    70,    73,    72,    72,    75,    76,    77,
      74,    78,    79,    74,    80,    81,    74,    82,    83,    84,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    85,
      85,    86,    86,    87,    87,    87,    88,    88,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    90,    89,    91,
      91,    92,    92,    94,    93,    95,    93,    93,    93,    93,
      93,    93,    96,    96,    96,    96,    96,    96
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     3,     0,     5,     0,     5,     0,     1,
       1,     1,     1,     0,     5,     4,     2,     4,     0,     0,
       0,     0,    14,     0,     1,     1,     0,     0,     6,     0,
       4,     0,     4,     0,     0,     3,     1,     0,     0,     0,
       8,     0,     0,     6,     0,     0,     7,     0,     0,     0,
      11,     8,     2,     3,     4,     3,     2,     3,     2,     5,
       0,     3,     0,     1,     1,     3,     4,     4,     3,     3,
       3,     3,     3,     1,     1,     1,     1,     0,     5,     1,
       0,     3,     1,     0,     4,     0,     4,     2,     3,     1,
       1,     3,     1,     1,     1,     1,     1,     1
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
#line 104 "parser.y" /* yacc.c:1646  */
    {
                    init();
                }
#line 1448 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 106 "parser.y" /* yacc.c:1646  */
    {
                    code_imprimir(code_list);
                    // TODO: limpiar el desmadre
                    stack_imprimir(ts_stack, ts_imprimir_tabla);
                    stack_imprimir(tt_stack, tt_imprimir_tabla);
                    destroy();
                }
#line 1460 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 114 "parser.y" /* yacc.c:1646  */
    {
                    if ((yyvsp[0].tipo)->tipo == TT_VOID)
                        yyerror("Vacio no es un tipo de declaracion valido");
                    else
                        tipo_g = (yyvsp[0].tipo);
                }
#line 1471 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 120 "parser.y" /* yacc.c:1646  */
    {
                    if ((yyvsp[0].tipo)->tipo == TT_VOID)
                        yyerror("Vacio no es un tipo de declaracion valido");
                    else
                        tipo_g = (yyvsp[0].tipo);
                }
#line 1482 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 126 "parser.y" /* yacc.c:1646  */
    {
                    printf("fin declaraciones\n");
                    tt_imprimir_tabla(tt_actual);
                    ts_imprimir_tabla(ts_actual);
                }
#line 1492 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 132 "parser.y" /* yacc.c:1646  */
    {(yyval.tipo) = tt_buscar_id(tt_actual, TT_INT);}
#line 1498 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 133 "parser.y" /* yacc.c:1646  */
    {(yyval.tipo) = tt_buscar_id(tt_actual, TT_FLOAT);}
#line 1504 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 134 "parser.y" /* yacc.c:1646  */
    {(yyval.tipo) = tt_buscar_id(tt_actual, TT_CHAR);}
#line 1510 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 135 "parser.y" /* yacc.c:1646  */
    {(yyval.tipo) = tt_buscar_id(tt_actual, TT_VOID);}
#line 1516 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 137 "parser.y" /* yacc.c:1646  */
    {
                    ambito_crear(tt_stack, &tt_actual,
                                ts_stack, &ts_actual,
                                dir_stack, &dir_g);
                }
#line 1526 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 141 "parser.y" /* yacc.c:1646  */
    {
                    printf("Tablas de struct\n");
                    tt_imprimir_tabla(tt_actual);
                    ts_imprimir_tabla(ts_actual);

                    u16 dir_previa = dir_g;
                    struct list_head *tt_previa = stack_peek(tt_stack),
                                     *ts_previa = stack_peek(ts_stack);
                    ambito_restaurar(tt_stack, &tt_actual,
                                    ts_stack, &ts_actual,
                                    dir_stack, &dir_g, 0);

                    (yyval.tipo) = tt_insertar_tipo(tt_actual,
                                          TT_STRUCT,
                                          NULL,
                                          0,
                                          dir_previa,
                                          tt_previa,
                                          ts_previa);
                }
#line 1551 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 162 "parser.y" /* yacc.c:1646  */
    {
                    if (ts_buscar_id(ts_actual, (yyvsp[-1].str16)) == NULL) {
                        ts_insertar_simbolo(ts_actual,
                            (yyvsp[-1].str16), (yyvsp[0].tipo), TS_VAR, dir_g, 0,
                            (yyvsp[0].tipo)->tipo == TT_STRUCT ? (yyvsp[0].tipo)->ts : NULL);
                        dir_g += (yyvsp[0].tipo)->tam;
                    } else {
                        yyerror("El simbolo ya existe");
                    }
                }
#line 1566 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 172 "parser.y" /* yacc.c:1646  */
    {
                    if (ts_buscar_id(ts_actual, (yyvsp[-1].str16)) == NULL) {
                        ts_insertar_simbolo(ts_actual,
                            (yyvsp[-1].str16), (yyvsp[0].tipo), TS_VAR, dir_g, 0,
                            (yyvsp[0].tipo)->tipo == TT_STRUCT ? (yyvsp[0].tipo)->ts : NULL);
                        dir_g += (yyvsp[0].tipo)->tam;
                    } else {
                        yyerror("El simbolo ya existe");
                    }
                }
#line 1581 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 183 "parser.y" /* yacc.c:1646  */
    {
                    if ((yyvsp[-2].num).tipo == TT_INT && (yyvsp[-2].num).val.i > 0) {
                        (yyval.tipo) = tt_insertar_tipo(tt_actual,
                            TT_ARRAY, (yyvsp[0].tipo), 0, (yyvsp[-2].num).val.i, NULL, NULL);
                    } else {
                        yyerror("El indice debe ser entero mayor a 0");
                    }
                }
#line 1594 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 191 "parser.y" /* yacc.c:1646  */
    {(yyval.tipo) = tipo_g;}
#line 1600 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 193 "parser.y" /* yacc.c:1646  */
    {
                    ambito_crear(tt_stack, &tt_actual,
                                 ts_stack, &ts_actual,
                                 dir_stack, &dir_g);
                    argc = 0;
                }
#line 1611 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 198 "parser.y" /* yacc.c:1646  */
    {
                    struct list_head *ts_global = stack_peek(ts_stack);
                    if (ts_buscar_id(ts_global, (yyvsp[-4].str16)) == NULL) {
                        ts_insertar_simbolo(ts_global,
                            (yyvsp[-4].str16), (yyvsp[-5].tipo), TS_FUN, dir_g, argc, ts_actual);
                        code_push(code_list, "label", "", "", (yyvsp[-4].str16));
                    }
                }
#line 1624 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 205 "parser.y" /* yacc.c:1646  */
    {
                    if ((yyvsp[-1].sent).tipo != (yyvsp[-10].tipo)->tipo) {
                        yyerror("Tipo de retorno incorrecto");
                    }
                    ambito_restaurar(tt_stack, &tt_actual,
                                     ts_stack, &ts_actual,
                                     dir_stack, &dir_g, 0);
                    /* u16 inst = code_push(code_list, "label", "", "", "__"); */
                    /* dir_push($11.next, inst); */
                    /* code_backpatch(code_list, $11.next, etiqueta_crear()); */
                    // instruccion separadora
                    code_push(code_list, "--", "--", "--", "--");
                }
#line 1642 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 224 "parser.y" /* yacc.c:1646  */
    {
                    if ((yyvsp[-1].tipo)->tipo == TT_VOID) {
                        yyerror("tipo de parametro no valido");
                    } else {
                        // indica el numero de dimensiones de un arreglo
                        dim = 0;
                    }
                }
#line 1655 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 231 "parser.y" /* yacc.c:1646  */
    {
                    struct tipo *tipo_anterior = (yyvsp[-3].tipo);
                    if (dim) {
                        // no sabemos el tamaño de cada dimension, asi que
                        // suponemos el maximo (255)
                        for (int i = 0; i < dim; i++) {
                            tipo_anterior = tt_insertar_tipo(tt_actual,
                                TT_ARRAY, tipo_anterior, 0, 255, NULL, NULL);
                        }
                        // un arreglo mide solo la direccion del primer elemento
                    }
                    if (ts_buscar_id(ts_actual, (yyvsp[-2].str16)) == NULL) {
                        ts_insertar_simbolo(ts_actual,
                            (yyvsp[-2].str16), tipo_anterior, TS_PARAM, dir_g, 0, NULL);
                        dir_g += tipo_anterior->tam;
                        argc += 1;
                    } else {
                        yyerror("El simbolo ya existe");
                    }
                }
#line 1680 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 251 "parser.y" /* yacc.c:1646  */
    {dim = 0;}
#line 1686 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 251 "parser.y" /* yacc.c:1646  */
    {
                    struct tipo *tipo_anterior = (yyvsp[-3].tipo);
                    if (dim) {
                        // no sabemos el tamaño de cada dimension, asi que
                        // suponemos el maximo (255)
                        for (int i = 0; i < dim; i++) {
                            tipo_anterior = tt_insertar_tipo(tt_actual,
                                TT_ARRAY, tipo_anterior, 0, 255, NULL, NULL);
                        }
                        // un arreglo mide solo la direccion del primer elemento
                    }
                    if (ts_buscar_id(ts_actual, (yyvsp[-2].str16)) == NULL) {
                        ts_insertar_simbolo(ts_actual,
                            (yyvsp[-2].str16), tipo_anterior, TS_PARAM, dir_g, 0, NULL);
                        dir_g += tipo_anterior->tam;
                        argc += 1;
                    } else {
                        yyerror("El simbolo ya existe");
                    }
                }
#line 1711 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 272 "parser.y" /* yacc.c:1646  */
    {dim += 1;}
#line 1717 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 275 "parser.y" /* yacc.c:1646  */
    {
                    u16 inst = code_push(code_list, "label", "", "", "__");
                    dir_push((yyvsp[0].sent).next, inst);
                }
#line 1726 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 278 "parser.y" /* yacc.c:1646  */
    {
                    code_backpatch(code_list, (yyvsp[-2].sent).next, etiqueta_crear());
                    (yyval.sent) = (yyvsp[0].sent);
                }
#line 1735 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 282 "parser.y" /* yacc.c:1646  */
    {(yyval.sent) = (yyvsp[0].sent);}
#line 1741 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 284 "parser.y" /* yacc.c:1646  */
    {
                    u16 inst = code_push(code_list, "label", "", "", "__");
                    dir_push((yyvsp[0].cond).true, inst);
                }
#line 1750 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 287 "parser.y" /* yacc.c:1646  */
    {
                    u16 inst = code_push(code_list, "goto", "", "", "__");
                    (yyval.sent).next = list_new();
                    dir_push((yyval.sent).next, inst);
                }
#line 1760 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 291 "parser.y" /* yacc.c:1646  */
    {
                    u16 inst = code_push(code_list, "label", "", "", "__");
                    dir_push((yyvsp[-4].cond).false, inst);
                }
#line 1769 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 294 "parser.y" /* yacc.c:1646  */
    {
                    code_backpatch(code_list, (yyvsp[-6].cond).true, etiqueta_crear());
                    code_backpatch(code_list, (yyvsp[-6].cond).false, etiqueta_crear());
                    dir_push((yyvsp[0].sent).next, code_push(code_list, "label", "", "", "__"));
                    (yyval.sent).next = combinar((yyvsp[0].sent).next, combinar((yyvsp[-4].sent).next, (yyvsp[-3].sent).next));
                    code_backpatch(code_list, (yyval.sent).next, etiqueta_crear());
                }
#line 1781 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 301 "parser.y" /* yacc.c:1646  */
    {
                    u16 inst = code_push(code_list, "label", "", "", "__");
                    (yyval.sent).next = list_new();
                    dir_push((yyval.sent).next, inst);
                }
#line 1791 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 305 "parser.y" /* yacc.c:1646  */
    {
                    u16 inst = code_push(code_list, "label", "", "", "__");
                    dir_push((yyvsp[-1].cond).true, inst);
                }
#line 1800 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 309 "parser.y" /* yacc.c:1646  */
    {
                    char *et = etiqueta_crear();
                    (yyvsp[0].sent).next = combinar((yyvsp[0].sent).next, (yyvsp[-4].sent).next);
                    code_backpatch(code_list, (yyvsp[0].sent).next, et);
                    code_backpatch(code_list, (yyvsp[-3].cond).true, etiqueta_crear());
                    code_push(code_list, "goto", "", "", et);
                    (yyval.sent).next = (yyvsp[-3].cond).false;
                    if (salida_ciclo_g) {
                        dir_push((yyval.sent).next, salida_ciclo_g);
                        salida_ciclo_g = 0;
                    }
                }
#line 1817 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 321 "parser.y" /* yacc.c:1646  */
    {
                    u16 inst = code_push(code_list, "label", "", "", "__");
                    (yyval.sent).next = list_new();
                    dir_push((yyval.sent).next, inst);
                }
#line 1827 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 325 "parser.y" /* yacc.c:1646  */
    {
                    u16 inst = code_push(code_list, "label", "", "", "__");
                    dir_push((yyvsp[-1].sent).next, inst);
                }
#line 1836 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 328 "parser.y" /* yacc.c:1646  */
    {
                    (yyvsp[-1].cond).true = combinar((yyvsp[-5].sent).next, (yyvsp[-1].cond).true);
                    code_backpatch(code_list, (yyvsp[-1].cond).true, etiqueta_crear());
                    code_backpatch(code_list, (yyvsp[-4].sent).next, etiqueta_crear());
                    (yyval.sent).next = (yyvsp[-1].cond).false;
                    if (salida_ciclo_g) {
                        dir_push((yyval.sent).next, salida_ciclo_g);
                        salida_ciclo_g = 0;
                    }
                }
#line 1851 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 338 "parser.y" /* yacc.c:1646  */
    {
                    u16 inst = code_push(code_list, "label", "", "", "__");
                    dir_push((yyvsp[0].sent).next, inst);
                }
#line 1860 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 341 "parser.y" /* yacc.c:1646  */
    {
                    u16 inst = code_push(code_list, "label", "", "", "__");
                    (yyval.sent).next = list_new();
                    dir_push((yyval.sent).next, inst);
                }
#line 1870 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 345 "parser.y" /* yacc.c:1646  */
    {
                    u16 inst = code_push(code_list, "goto", "", "", "__");
                    dir_push((yyvsp[-1].sent).next, inst);
                    inst = code_push(code_list, "label", "", "", "__");
                    dir_push((yyvsp[-4].cond).true, inst);
                }
#line 1881 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 350 "parser.y" /* yacc.c:1646  */
    {
                    u16 inst = code_push(code_list, "goto", "", "", "__");
                    dir_push((yyvsp[-4].sent).next, inst);
                    (yyvsp[0].sent).next = combinar((yyvsp[0].sent).next, (yyvsp[-4].sent).next);
                    code_backpatch(code_list, (yyvsp[0].sent).next, etiqueta_crear());
                    (yyvsp[-8].sent).next = combinar((yyvsp[-8].sent).next, (yyvsp[-3].sent).next);
                    code_backpatch(code_list, (yyvsp[-8].sent).next, etiqueta_crear());
                    code_backpatch(code_list, (yyvsp[-6].cond).true, etiqueta_crear());
                    (yyval.sent).next = (yyvsp[-6].cond).false;
                    if (salida_ciclo_g) {
                        dir_push((yyval.sent).next, salida_ciclo_g);
                        salida_ciclo_g = 0;
                    }
                }
#line 1900 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 364 "parser.y" /* yacc.c:1646  */
    {}
#line 1906 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 365 "parser.y" /* yacc.c:1646  */
    {
                    (yyval.sent).next = list_new();
                    salida_ciclo_g = code_push(code_list, "goto", "", "", "__");
                }
#line 1915 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 369 "parser.y" /* yacc.c:1646  */
    {(yyval.sent) = (yyvsp[-1].sent);}
#line 1921 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 370 "parser.y" /* yacc.c:1646  */
    {
                    // TODO: Comprobar tipos
                    code_push(code_list, "=", (yyvsp[-1].expr).dir, "", (yyvsp[-3].expr).dir);
                    (yyval.sent).next = list_new();
                }
#line 1931 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 375 "parser.y" /* yacc.c:1646  */
    {
                    (yyval.sent).tipo = (yyvsp[-1].expr).tipo;
                    char *temp = temporal_crear();
                    code_push(code_list, "=", (yyvsp[-1].expr).dir, "", temp);
                    code_push(code_list, "return", temp, "", "");
                    (yyval.sent).next = list_new();
                }
#line 1943 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 382 "parser.y" /* yacc.c:1646  */
    {
                    (yyval.sent).tipo = TT_VOID;
                    code_push(code_list, "return", "", "", "");
                    (yyval.sent).next = list_new();
                }
#line 1953 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 387 "parser.y" /* yacc.c:1646  */
    {
                    (yyval.sent).tipo = TT_VOID;
                    (yyval.sent).next = list_new();
                }
#line 1962 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 391 "parser.y" /* yacc.c:1646  */
    {
                    (yyval.sent).tipo = (yyvsp[-1].expr).tipo;
                    (yyval.sent).next = list_new();
                }
#line 1971 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 402 "parser.y" /* yacc.c:1646  */
    {
                    struct simbolo *sim = ts_buscar_id(ts_actual, (yyvsp[0].str16));
                    if (sim != NULL) {
                        (yyval.expr).tipo = sim->tipo->id;
                        strncpy((yyval.expr).dir, (yyvsp[0].str16), 16);
                    } else {
                        yyerror("El simbolo no existe");
                    }
                }
#line 1985 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 411 "parser.y" /* yacc.c:1646  */
    {(yyval.expr) = (yyvsp[0].expr);}
#line 1991 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 412 "parser.y" /* yacc.c:1646  */
    {
                    struct simbolo *sim1 = ts_buscar_id(ts_actual, (yyvsp[-2].str16)), *sim2;
                    if (sim1 != NULL) {
                        if (sim1->tipo->tipo == TT_STRUCT) {
                            sim2 = ts_buscar_id(sim1->argv, (yyvsp[0].str16));
                            if (sim2 != NULL) {
                                (yyval.expr).tipo = sim2->tipo->id;
                                printf("\n\n%d\n\n", (yyval.expr).tipo);
                                snprintf((yyval.expr).dir, 16, "%s.%s", (yyvsp[-2].str16), (yyvsp[0].str16));
                            } else {
                                yyerror("no existe el miembro");
                            }
                        } else {
                            yyerror("el simbolo no es una estructura");
                        }
                    } else {
                        yyerror("El simbolo no existe");
                    }
                }
#line 2015 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 432 "parser.y" /* yacc.c:1646  */
    {
                    struct simbolo *sim = ts_buscar_id(ts_actual, (yyvsp[-3].str16));
                    if (sim != NULL) {
                        tipo_g = sim->tipo;
                        if (tipo_g->tipo == TT_ARRAY) {
                            if ((yyvsp[-1].expr).tipo == TT_INT) {
                                (yyval.expr).tipo = tipo_g->base->id;
                                snprintf((yyval.expr).dir, 16, "%s[%s]", (yyvsp[-3].str16), (yyvsp[-1].expr).dir);
                            } else {
                                yyerror("el indice debe ser entero");
                            }
                        } else {
                            yyerror("El simbolo no es un arreglo");
                        }
                    } else {
                        yyerror("El simbolo no existe");
                    }
                }
#line 2038 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 450 "parser.y" /* yacc.c:1646  */
    {
                    tipo_g = tipo_g->base;
                    if (tipo_g != NULL) {
                        if (tipo_g->tipo == TT_ARRAY) {
                            if ((yyvsp[-1].expr).tipo == TT_INT) {
                                (yyval.expr).tipo = tipo_g->id;
                                snprintf((yyval.expr).dir, 16, "%s[%s]", (yyvsp[-3].expr).dir, (yyvsp[-1].expr).dir);
                            } else {
                                yyerror("el indice debe ser entero");
                            }
                        } else {
                            yyerror("El simbolo no es un arreglo");
                        }
                    } else {
                        yyerror("dimensiones del arreglo excedidas");
                    }
                }
#line 2060 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 468 "parser.y" /* yacc.c:1646  */
    {
                    char *dir1, *dir2;
                    // TODO: Revisar que los tipos a operar son compatibles
                    (yyval.expr).tipo = tipo_max((yyvsp[-2].expr).tipo, (yyvsp[0].expr).tipo);
                    if ((yyval.expr).tipo) {
                        strncpy((yyval.expr).dir, temporal_crear(), 16);
                        dir1 = tipo_ampliar(code_list, (yyvsp[-2].expr).dir, (yyvsp[-2].expr).tipo, (yyval.expr).tipo);
                        dir2 = tipo_ampliar(code_list, (yyvsp[0].expr).dir, (yyvsp[0].expr).tipo, (yyval.expr).tipo);
                        code_push(code_list, "+", dir1, dir2, (yyval.expr).dir);
                    } else {
                        yyerror("Los tipos no son operables");
                    }
                }
#line 2078 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 481 "parser.y" /* yacc.c:1646  */
    {
                    char *dir1, *dir2;
                    // TODO: Revisar que los tipos a operar son compatibles
                    (yyval.expr).tipo = tipo_max((yyvsp[-2].expr).tipo, (yyvsp[0].expr).tipo);
                    if ((yyval.expr).tipo) {
                        strncpy((yyval.expr).dir, temporal_crear(), 16);
                        dir1 = tipo_ampliar(code_list, (yyvsp[-2].expr).dir, (yyvsp[-2].expr).tipo, (yyval.expr).tipo);
                        dir2 = tipo_ampliar(code_list, (yyvsp[0].expr).dir, (yyvsp[0].expr).tipo, (yyval.expr).tipo);
                        code_push(code_list, "-", dir1, dir2, (yyval.expr).dir);
                    } else {
                        yyerror("Los tipos no son operables");
                    }
                }
#line 2096 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 494 "parser.y" /* yacc.c:1646  */
    {
                    char *dir1, *dir2;
                    // TODO: Revisar que los tipos a operar son compatibles
                    (yyval.expr).tipo = tipo_max((yyvsp[-2].expr).tipo, (yyvsp[0].expr).tipo);
                    if ((yyval.expr).tipo) {
                        strncpy((yyval.expr).dir, temporal_crear(), 16);
                        dir1 = tipo_ampliar(code_list, (yyvsp[-2].expr).dir, (yyvsp[-2].expr).tipo, (yyval.expr).tipo);
                        dir2 = tipo_ampliar(code_list, (yyvsp[0].expr).dir, (yyvsp[0].expr).tipo, (yyval.expr).tipo);
                        code_push(code_list, "*", dir1, dir2, (yyval.expr).dir);
                    } else {
                        yyerror("Los tipos no son operables");
                    }
                }
#line 2114 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 507 "parser.y" /* yacc.c:1646  */
    {
                    char *dir1, *dir2;
                    // TODO: Revisar que los tipos a operar son compatibles
                    (yyval.expr).tipo = tipo_max((yyvsp[-2].expr).tipo, (yyvsp[0].expr).tipo);
                    if ((yyval.expr).tipo) {
                        strncpy((yyval.expr).dir, temporal_crear(), 16);
                        dir1 = tipo_ampliar(code_list, (yyvsp[-2].expr).dir, (yyvsp[-2].expr).tipo, (yyval.expr).tipo);
                        dir2 = tipo_ampliar(code_list, (yyvsp[0].expr).dir, (yyvsp[0].expr).tipo, (yyval.expr).tipo);
                        code_push(code_list, "/", dir1, dir2, (yyval.expr).dir);
                    } else {
                        yyerror("Los tipos no son operables");
                    }
                }
#line 2132 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 520 "parser.y" /* yacc.c:1646  */
    {
                    char *dir1, *dir2;
                    // TODO: Revisar que los tipos a operar son compatibles
                    (yyval.expr).tipo = tipo_max((yyvsp[-2].expr).tipo, (yyvsp[0].expr).tipo);
                    if ((yyval.expr).tipo) {
                        strncpy((yyval.expr).dir, temporal_crear(), 16);
                        dir1 = tipo_ampliar(code_list, (yyvsp[-2].expr).dir, (yyvsp[-2].expr).tipo, (yyval.expr).tipo);
                        dir2 = tipo_ampliar(code_list, (yyvsp[0].expr).dir, (yyvsp[0].expr).tipo, (yyval.expr).tipo);
                        code_push(code_list, "mod", dir1, dir2, (yyval.expr).dir);
                    } else {
                        yyerror("Los tipos no son operables");
                    }
                }
#line 2150 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 533 "parser.y" /* yacc.c:1646  */
    {
                    (yyval.expr).tipo = (yyvsp[0].num).tipo;
                    strncpy((yyval.expr).dir, (yyvsp[0].num).sval, 16);
                }
#line 2159 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 537 "parser.y" /* yacc.c:1646  */
    {}
#line 2165 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 538 "parser.y" /* yacc.c:1646  */
    {}
#line 2171 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 539 "parser.y" /* yacc.c:1646  */
    {
                    (yyval.expr) = (yyvsp[0].expr);
                }
#line 2179 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 542 "parser.y" /* yacc.c:1646  */
    {
                    struct simbolo *sim = ts_buscar_id(ts_actual, (yyvsp[-1].str16));
                    if (sim != NULL) {
                        if (sim->tipo_var == TS_FUN) {
                            (yyval.expr).tipo = sim->tipo->id;
                        } else {
                            yyerror("el simbolo no es una funcion");
                        }
                    } else {
                        yyerror("no existe el identificador");
                    }
                }
#line 2196 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 553 "parser.y" /* yacc.c:1646  */
    {
                    char *temp = temporal_crear();
                    code_push(code_list, "call", (yyvsp[-4].str16), "", temp);
                    (yyval.expr).tipo = (yyvsp[-2].expr).tipo;
                    strncpy((yyval.expr).dir, temp, 16);
                }
#line 2207 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 563 "parser.y" /* yacc.c:1646  */
    {
                    code_push(code_list, "param", (yyvsp[0].expr).dir, "", "");
                }
#line 2215 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 566 "parser.y" /* yacc.c:1646  */
    {
                    code_push(code_list, "param", (yyvsp[0].expr).dir, "", "");
                }
#line 2223 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 570 "parser.y" /* yacc.c:1646  */
    {
                    u16 inst = code_push(code_list, "label", "", "", "__");
                    dir_push((yyvsp[-1].cond).false, inst);
                }
#line 2232 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 573 "parser.y" /* yacc.c:1646  */
    {
                    code_backpatch(code_list, (yyvsp[-3].cond).false, etiqueta_crear());
                    (yyval.cond).true = combinar((yyvsp[-3].cond).true, (yyvsp[0].cond).true);
                    (yyval.cond).false = (yyvsp[0].cond).false;
                }
#line 2242 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 578 "parser.y" /* yacc.c:1646  */
    {
                    u16 inst = code_push(code_list, "label", "", "", "__");
                    dir_push((yyvsp[-1].cond).true, inst);
                }
#line 2251 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 581 "parser.y" /* yacc.c:1646  */
    {
                    code_backpatch(code_list, (yyvsp[-3].cond).true, etiqueta_crear());
                    (yyval.cond).false = combinar((yyvsp[-3].cond).false, (yyvsp[0].cond).false);
                    (yyval.cond).true = (yyvsp[0].cond).true;
                }
#line 2261 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 586 "parser.y" /* yacc.c:1646  */
    {
                    (yyval.cond).true = (yyvsp[0].cond).false;
                    (yyval.cond).false = (yyvsp[0].cond).true;
                }
#line 2270 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 590 "parser.y" /* yacc.c:1646  */
    {(yyval.cond) = (yyvsp[-1].cond);}
#line 2276 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 591 "parser.y" /* yacc.c:1646  */
    {
                    u16 inst = code_push(code_list, "goto", "", "", "__");
                    (yyval.cond).true = list_new();
                    dir_push((yyval.cond).true, inst);
                }
#line 2286 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 596 "parser.y" /* yacc.c:1646  */
    {
                    u16 inst = code_push(code_list, "goto", "", "", "__");
                    (yyval.cond).false = list_new();
                    dir_push((yyval.cond).false, inst);
                }
#line 2296 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 601 "parser.y" /* yacc.c:1646  */
    {
                    char *temp = temporal_crear();
                    code_push(code_list, (yyvsp[-1].str16), (yyvsp[-2].expr).dir, (yyvsp[0].expr).dir, temp);

                    u16 inst = code_push(code_list, "if", temp, "goto", "__");
                    (yyval.cond).true = list_new();
                    dir_push((yyval.cond).true, inst);

                    inst = code_push(code_list, "goto", "", "", "__");
                    (yyval.cond).false = list_new();
                    dir_push((yyval.cond).false, inst);
                }
#line 2313 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 615 "parser.y" /* yacc.c:1646  */
    {strncpy((yyval.str16), "<" , 3);}
#line 2319 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 616 "parser.y" /* yacc.c:1646  */
    {strncpy((yyval.str16), "<=", 3);}
#line 2325 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 617 "parser.y" /* yacc.c:1646  */
    {strncpy((yyval.str16), ">" , 3);}
#line 2331 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 618 "parser.y" /* yacc.c:1646  */
    {strncpy((yyval.str16), ">=", 3);}
#line 2337 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 619 "parser.y" /* yacc.c:1646  */
    {strncpy((yyval.str16), "==", 3);}
#line 2343 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 620 "parser.y" /* yacc.c:1646  */
    {strncpy((yyval.str16), "!=", 3);}
#line 2349 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2353 "parser.tab.c" /* yacc.c:1646  */
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
#line 621 "parser.y" /* yacc.c:1906  */


void yyerror(char * str) {
    printf("Error: En la linea %d, simbolo %s: %s\n", yylineno, yytext, str);
}

void init()
{
    /* Creando el stack de tablas de tipos */
    tt_stack  = stack_crear();
    tt_actual = tt_crear_tabla();
    /* Creando el stack de tablas de simbolos */
    ts_stack  = stack_crear();
    ts_actual = ts_crear_tabla();
    /* Creando el stack de direcciones */
    dir_stack = list_new();
    /* Creando la lista de codigo */
    code_list = list_new();

    if (!tt_stack || !ts_stack || !dir_stack || !code_list || !tt_actual ||
        !ts_actual) {
        printf("Error creando las estructuras de datos\n");
        exit(-1);
    }

    printf("Estructuras de datos inicializadas\n");

    stack_imprimir(tt_stack, tt_imprimir_tabla);
    stack_imprimir(ts_stack, ts_imprimir_tabla);
}

void destroy()
{
    stack_eliminar(&tt_stack, tt_eliminar_tabla);
    stack_eliminar(&ts_stack, ts_eliminar_tabla);
    dir_eliminar(&dir_stack);
    code_eliminar(&code_list);
}
