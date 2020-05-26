/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140715

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "parser.y"
#include <stdio.h>
extern int yylex();
void yyerror(char *s);
int tipo;
#line 8 "parser.y"
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union{
	int tipo;
	char id[32];
	float num;
	char c[3];
	char cadena[100];
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 41 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define PYC 257
#define PARI 258
#define PARD 259
#define CORI 260
#define CORD 261
#define COMA 262
#define DPI 263
#define DP 264
#define PRC 265
#define PT 266
#define ESTRUCT 267
#define INICIO 268
#define FIN 269
#define DEF 270
#define SI 271
#define ENTC 272
#define SINO 273
#define MIENT 274
#define HACER 275
#define SEGUN 276
#define ESCRIBE 277
#define LEER 278
#define DEVOL 279
#define TERMI 280
#define CASO 281
#define PRED 282
#define OR 283
#define AND 284
#define NOT 285
#define VERDAD 286
#define FALSO 287
#define MAY 288
#define MAYI 289
#define MEN 290
#define MENI 291
#define DIF 292
#define IGUAL 293
#define MAS 294
#define MNS 295
#define MUL 296
#define DIV 297
#define INT 298
#define FLOAT 299
#define CAR 300
#define SIN 301
#define ID 302
#define NUM 303
#define CARACT 304
#define CAD 305
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    1,    1,    1,    5,    3,    6,    6,    6,    6,
    7,    7,    4,    4,    2,    2,    8,    8,   10,   10,
   11,   12,   13,   13,    9,    9,    9,    9,    9,    9,
    9,    9,    9,    9,    9,    9,   16,   16,   17,   17,
   14,   14,   14,   14,   14,   14,   14,   19,   19,   20,
   20,   20,   20,   20,   20,   18,   18,   18,   18,   18,
   18,   18,   18,   18,   21,   21,   21,   21,   15,   15,
   23,   23,   24,   24,   22,   22,   25,   25,
};
static const YYINT yylen[] = {                            2,
    2,    4,    4,    0,    4,    2,    1,    1,    1,    1,
    4,    0,    3,    1,   11,    0,    1,    1,    3,    1,
    2,    2,    3,    0,    5,    7,    5,    5,    8,    4,
    3,    3,    2,    3,    2,    3,    5,    4,    3,    0,
    3,    3,    2,    3,    1,    1,    1,    3,    1,    1,
    1,    1,    1,    1,    1,    3,    3,    3,    1,    1,
    1,    1,    1,    4,    1,    1,    1,    1,    1,    1,
    3,    1,    4,    4,    1,    0,    3,    1,
};
static const YYINT yydefred[] = {                         0,
    0,    7,    8,    9,   10,    0,    0,    0,    0,    0,
    0,    0,    1,   14,    0,    0,    0,    6,    0,    0,
    0,    0,    0,    0,    5,    0,    2,   13,    3,    0,
    0,   11,    0,    0,    0,    0,   20,    0,    0,   22,
    0,    0,   21,    0,    0,   19,   23,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   46,   47,    0,   61,   63,
   62,    0,   60,    0,    0,    0,    0,    0,    0,    0,
    0,   33,    0,   35,    0,    0,    0,    0,    0,   36,
    0,    0,    0,    0,    0,    0,    0,    0,   65,   66,
   67,   68,    0,   50,   52,   51,   53,   54,   55,    0,
    0,    0,    0,    0,   31,   32,   34,    0,   15,    0,
   71,    0,   44,   58,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   73,   30,   74,   64,
    0,   25,    0,   27,   28,    0,    0,    0,    0,    0,
   26,    0,    0,    0,    0,    0,   29,    0,   39,   37,
};
static const YYINT yydgoto[] = {                          6,
    7,   13,    8,   15,    9,   10,   18,   35,   59,   36,
   37,   38,   40,   72,   73,  150,  154,   74,   75,  110,
  103,  126,   61,   62,  127,
};
static const YYINT yysindex[] = {                      -215,
 -237,    0,    0,    0,    0,    0, -233, -257, -257, -213,
 -215,  -80,    0,    0, -238, -234, -249,    0, -206, -224,
 -215, -209, -215, -158,    0, -133,    0,    0,    0, -213,
    6,    0,    0, -115, -102, -103,    0, -139,  -92,    0,
  -98,  -80,    0, -115, -215,    0,    0,   64,   64, -198,
 -198,   64,  -85, -223, -126, -231,  -79,  -88,  -89,  -82,
  -81,  -83,  -66, -198, -198,    0,    0, -258,    0,    0,
    0, -174,    0,   -3,  -25, -140,  -90, -126, -223, -200,
  -71,    0, -157,    0, -223, -233, -223,  -76, -223,    0,
 -193, -253, -245, -223,   64, -198, -198, -223,    0,    0,
    0,    0, -223,    0,    0,    0,    0,    0,    0, -223,
   64, -198,  -45, -253,    0,    0,    0,  -86,    0, -129,
    0,  -48,    0,    0,   -3,  -43,  -40, -147, -245, -245,
   -3,   -3,  -25,  -31, -208,  -36,    0,    0,    0,    0,
 -223,    0,   64,    0,    0,  -37,   -3,  -28,  -61,  -29,
    0,  -19,  -14,  -15,   64,   64,    0,  -37,    0,    0,
};
static const YYINT yyrindex[] = {                         3,
    0,    0,    0,    0,    0,    0,  255,    0,    0,  -13,
    5,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    1,    0,    1,    0,    0,    0,    0,    0,    0,  -13,
    0,    0, -246,  -12,    0,   29,    0,    0,    0,    0,
    0,    0,    0,  -12,   93,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  -59,    0,    0,
 -142, -101,    0,    0,    0,    0,    0,  -60,    0,    0,
    0,    0,    0,  -32,  103,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  255,    0,    0,    0,    0,
    0,  114, -239,   36,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -135,    0,   37,    0, -141,   26,
   25,   62,  117,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -130,    0,    0,   30,
    0,    0,    0,    0,    0,    0,    0, -260,    0,    0,
};
static const YYINT yygindex[] = {                         0,
   47,  216,  298,  302,    0,  -10,  282,    0,  -42,    0,
  278,    0,  281,  -35,  -44,  164,    0,  -39,  217,    0,
    0,    0,    0,    0,    0,
};
#define YYTABLESIZE 407
static const YYINT yytable[] = {                         94,
    4,   85,    4,   60,   60,  124,   63,   60,   38,   77,
   81,   98,   18,   10,   80,   76,   83,   43,   21,   43,
   34,   38,   23,   22,   92,   82,   79,   22,   91,   93,
   11,   34,   43,  113,   79,   43,   12,   96,   97,  114,
   99,  100,  101,  102,   14,  118,   17,  120,  145,  122,
   60,    1,  128,   24,  125,   10,  115,   19,  131,   64,
  129,  130,   25,  132,   98,  123,   60,   27,  134,   29,
   68,   69,   70,   71,   96,   97,  135,   26,   68,   69,
   70,   71,    2,    3,    4,    5,   65,   66,   67,   96,
   97,   48,   28,   99,  100,  101,  102,   95,   60,  117,
  148,  147,   30,   68,   69,   70,   71,   98,   96,   97,
   60,   60,  158,  159,   69,   41,   69,   41,   69,   69,
   69,  142,   69,   78,   31,  143,   78,  138,   77,   69,
   41,   77,   69,   41,  111,   98,   99,  100,  101,  102,
   69,   69,   96,   97,   39,   69,   69,   69,   69,   69,
   69,   69,   69,   69,   69,   70,   41,   70,   42,   70,
   70,   70,   43,   70,   99,  100,  101,  102,   44,   45,
   70,   85,   78,   70,  137,   58,   89,   84,   98,   86,
   87,   70,   70,  112,   88,  116,   70,   70,   70,   70,
   70,   70,   70,   70,   70,   70,   59,   72,   59,   72,
   59,   59,   90,   72,   59,   72,   72,   99,  100,  101,
  102,   59,  139,  136,   59,  140,   98,    2,    3,    4,
    5,  141,   59,   59,   49,  121,   49,   59,   59,   59,
   59,   59,   59,   59,   59,   59,   59,  144,  146,   49,
  151,  152,   49,  149,  155,   99,  100,  101,  102,  156,
   49,   49,  153,  157,   16,   49,   49,   49,   49,   49,
   49,   98,  104,  105,  106,  107,  108,  109,    4,    4,
    4,    4,    4,    4,    4,    4,    4,    4,    4,    4,
    4,   57,   42,   57,   42,   57,   57,   17,   12,   24,
   99,  100,  101,  102,   76,   75,   57,   42,   40,   57,
   42,  119,    4,    2,    3,    4,   33,   57,   57,   20,
   16,   32,   57,   57,   57,   57,   57,   57,   56,   46,
   56,  160,   56,   56,   47,    0,  133,    0,    0,    0,
    0,   49,    0,   56,   50,    0,   56,   51,   52,   53,
   54,   55,   56,   57,   56,   56,    0,    0,    0,   56,
   56,   56,   56,   56,   56,    0,    0,    0,    0,   45,
    4,   45,    0,    4,    0,   58,    4,    4,    4,    4,
    4,    4,    4,   48,   45,   48,    0,   45,    0,    0,
    0,    0,    0,    0,    0,   45,   45,    0,   48,    0,
    0,   48,    0,    0,    4,    0,   49,   49,    0,   48,
   48,   49,   49,   49,   49,   49,   49,
};
static const YYINT yycheck[] = {                        258,
    0,  260,    0,   48,   49,  259,   49,   52,  269,   52,
   55,  265,  259,  260,   54,   51,   56,  257,  257,  259,
   31,  282,  257,  262,   64,  257,  258,  262,   64,   65,
  268,   42,  272,   78,  258,  275,  270,  283,  284,   79,
  294,  295,  296,  297,  302,   85,  260,   87,  257,   89,
   95,  267,   95,  303,   94,  302,  257,   11,   98,  258,
   96,   97,  269,  103,  265,  259,  111,   21,  111,   23,
  302,  303,  304,  305,  283,  284,  112,  302,  302,  303,
  304,  305,  298,  299,  300,  301,  285,  286,  287,  283,
  284,   45,  302,  294,  295,  296,  297,  272,  143,  257,
  143,  141,  261,  302,  303,  304,  305,  265,  283,  284,
  155,  156,  155,  156,  257,  257,  259,  259,  261,  262,
  263,  269,  265,  259,  258,  273,  262,  257,  259,  272,
  272,  262,  275,  275,  275,  265,  294,  295,  296,  297,
  283,  284,  283,  284,  260,  288,  289,  290,  291,  292,
  293,  294,  295,  296,  297,  257,  259,  259,  262,  261,
  262,  263,  302,  265,  294,  295,  296,  297,  261,  268,
  272,  260,  258,  275,  261,  302,  260,  257,  265,  269,
  263,  283,  284,  274,  266,  257,  288,  289,  290,  291,
  292,  293,  294,  295,  296,  297,  257,  257,  259,  259,
  261,  262,  269,  263,  265,  266,  266,  294,  295,  296,
  297,  272,  261,  259,  275,  259,  265,  298,  299,  300,
  301,  262,  283,  284,  257,  302,  259,  288,  289,  290,
  291,  292,  293,  294,  295,  296,  297,  269,  275,  272,
  269,  303,  275,  281,  264,  294,  295,  296,  297,  264,
  283,  284,  282,  269,    0,  288,  289,  290,  291,  292,
  293,  265,  288,  289,  290,  291,  292,  293,  268,  269,
  270,  271,  270,  269,  274,  275,  276,  277,  278,  279,
  280,  257,  257,  259,  259,  261,  262,  259,  302,  302,
  294,  295,  296,  297,  259,  259,  272,  272,  269,  275,
  275,   86,  302,  298,  299,  300,  301,  283,  284,   12,
    9,   30,  288,  289,  290,  291,  292,  293,  257,   42,
  259,  158,  261,  262,   44,   -1,  110,   -1,   -1,   -1,
   -1,  268,   -1,  272,  271,   -1,  275,  274,  275,  276,
  277,  278,  279,  280,  283,  284,   -1,   -1,   -1,  288,
  289,  290,  291,  292,  293,   -1,   -1,   -1,   -1,  257,
  268,  259,   -1,  271,   -1,  302,  274,  275,  276,  277,
  278,  279,  280,  257,  272,  259,   -1,  275,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  283,  284,   -1,  272,   -1,
   -1,  275,   -1,   -1,  302,   -1,  283,  284,   -1,  283,
  284,  288,  289,  290,  291,  292,  293,
};
#define YYFINAL 6
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 305
#define YYUNDFTOKEN 333
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"PYC","PARI","PARD","CORI","CORD",
"COMA","DPI","DP","PRC","PT","ESTRUCT","INICIO","FIN","DEF","SI","ENTC","SINO",
"MIENT","HACER","SEGUN","ESCRIBE","LEER","DEVOL","TERMI","CASO","PRED","OR",
"AND","NOT","VERDAD","FALSO","MAY","MAYI","MEN","MENI","DIF","IGUAL","MAS",
"MNS","MUL","DIV","INT","FLOAT","CAR","SIN","ID","NUM","CARACT","CAD",0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : prog",
"prog : declara func",
"declara : tipo list_var PYC declara",
"declara : tipo_reg list_var PYC declara",
"declara :",
"tipo_reg : ESTRUCT INICIO declara FIN",
"tipo : base tipo_arr",
"base : INT",
"base : FLOAT",
"base : CAR",
"base : SIN",
"tipo_arr : CORI NUM CORD tipo_arr",
"tipo_arr :",
"list_var : list_var COMA ID",
"list_var : ID",
"func : DEF tipo ID PARI argum PARD INICIO declara sentenc FIN func",
"func :",
"argum : list_arg",
"argum : SIN",
"list_arg : list_arg COMA arg",
"list_arg : arg",
"arg : tipo_arg ID",
"tipo_arg : base param_arr",
"param_arr : CORI CORD param_arr",
"param_arr :",
"sentenc : SI e_bool ENTC sentenc FIN",
"sentenc : SI e_bool ENTC sentenc SINO sentenc FIN",
"sentenc : MIENT e_bool HACER sentenc FIN",
"sentenc : HACER sentenc MIENT e_bool PYC",
"sentenc : SEGUN PARI var PARD HACER casos predet FIN",
"sentenc : var DPI expr PYC",
"sentenc : ESCRIBE expr PYC",
"sentenc : LEER var PYC",
"sentenc : DEVOL PYC",
"sentenc : DEVOL expr PYC",
"sentenc : TERMI PYC",
"sentenc : INICIO sentenc FIN",
"casos : CASO NUM DP sentenc casos",
"casos : CASO NUM DP sentenc",
"predet : PRED DP sentenc",
"predet :",
"e_bool : e_bool OR e_bool",
"e_bool : e_bool AND e_bool",
"e_bool : NOT e_bool",
"e_bool : PARI e_bool PARD",
"e_bool : relac",
"e_bool : VERDAD",
"e_bool : FALSO",
"relac : relac op_rel relac",
"relac : expr",
"op_rel : MAY",
"op_rel : MEN",
"op_rel : MAYI",
"op_rel : MENI",
"op_rel : DIF",
"op_rel : IGUAL",
"expr : expr op_arit expr",
"expr : expr PRC expr",
"expr : PARI expr PARD",
"expr : ID",
"expr : var",
"expr : NUM",
"expr : CAD",
"expr : CARACT",
"expr : ID PARI param PARD",
"op_arit : MAS",
"op_arit : MNS",
"op_arit : MUL",
"op_arit : DIV",
"var : dato_est_sim",
"var : arreglo",
"dato_est_sim : dato_est_sim PT ID",
"dato_est_sim : ID",
"arreglo : ID CORI expr CORD",
"arreglo : arreglo CORI expr CORD",
"param : list_param",
"param :",
"list_param : list_param COMA expr",
"list_param : expr",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 95 "parser.y"

void yyerror(char *s){
	printf("%s\n",s);
}


#line 443 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    YYERROR_CALL("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    YYERROR_CALL("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
