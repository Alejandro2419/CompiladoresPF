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
#define COMA 258
#define DPI 259
#define DP 260
#define PRC 261
#define PT 262
#define ESTRUCT 263
#define INICIO 264
#define FIN 265
#define DEF 266
#define SI 267
#define ENTC 268
#define SINO 269
#define MIENT 270
#define HACER 271
#define SEGUN 272
#define ESCRIBE 273
#define LEER 274
#define DEVOL 275
#define TERMI 276
#define CASO 277
#define PRED 278
#define VERDAD 279
#define FALSO 280
#define MAS 281
#define MNS 282
#define OR 283
#define MUL 284
#define DIV 285
#define AND 286
#define NOT 287
#define MAY 288
#define MAYI 289
#define MEN 290
#define MENI 291
#define DIF 292
#define IGUAL 293
#define PARI 294
#define PARD 295
#define CORI 296
#define CORD 297
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
    0,    0,    0,   46,   47,    0,    0,    0,   61,   63,
   62,    0,   60,    0,    0,    0,    0,    0,    0,    0,
    0,   33,    0,   35,    0,    0,    0,    0,    0,   36,
   43,    0,    0,    0,    0,    0,    0,    0,   65,   66,
   67,   68,    0,   50,   52,   51,   53,   54,   55,    0,
    0,    0,    0,    0,   31,   32,   34,    0,   15,    0,
   71,    0,   44,   58,    0,    0,    0,    0,    0,   42,
    0,    0,    0,    0,    0,    0,   73,   30,   74,   64,
    0,   25,    0,   27,   28,    0,    0,    0,    0,    0,
   26,    0,    0,    0,    0,    0,   29,    0,   39,   37,
};
static const YYINT yydgoto[] = {                          6,
    7,   13,    8,   15,    9,   10,   18,   35,   59,   36,
   37,   38,   40,   72,   73,  150,  154,   74,   75,  110,
  103,  126,   61,   62,  127,
};
static const YYINT yysindex[] = {                      -191,
 -244,    0,    0,    0,    0,    0, -224, -278, -278, -259,
 -191, -161,    0,    0, -160, -103, -248,    0, -201, -255,
 -191, -232, -191, -222,    0, -210,    0,    0,    0, -259,
  -13,    0,    0, -214, -209, -137,    0, -172, -162,    0,
 -122, -161,    0, -214, -191,    0,    0, -123, -123,   79,
   79, -123, -149,   32, -140, -242,  -88, -121,  -94,  -83,
  -81, -116,  -79,    0,    0,   79,   79, -246,    0,    0,
    0, -245,    0,  -24,   50, -183,  -87, -140,   32,   40,
  -62,    0,   66,    0,   32, -224,   32, -106,   32,    0,
    0, -269,  -51,   32, -123,   79,   79,   32,    0,    0,
    0,    0,   32,    0,    0,    0,    0,    0,    0,   32,
 -123,   79,  -78,  -51,    0,    0,    0,  -58,    0,   71,
    0,   -2,    0,    0,  -24,  -77,  -46, -233,  -70,    0,
  -24,  -24,   50,  -36, -218,  -52,    0,    0,    0,    0,
   32,    0, -123,    0,    0,  -56,  -24,  -33,  -68,  -40,
    0,  -38,  -19,  -29, -123, -123,    0,  -56,    0,    0,
};
static const YYINT yyrindex[] = {                         3,
    0,    0,    0,    0,    0,    0,  242,    0,    0,  -49,
  -14,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    1,    0,    1,    0,    0,    0,    0,    0,    0,  -49,
    0,    0, -206,  -47,    0,  -32,    0,    0,    0,    0,
    0,    0,    0,  -47,  -82,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -241,    0,    0,
 -166, -125,    0,    0,    0,    0,    0,  -84,    0,    0,
    0,    0,    0,   21,   13,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  242,    0,    0,    0,    0,
    0,    0,   86,  -31,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -252,    0,   -5,    0,   62,    0,
 -212,  -43,   34,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -229,    0,    0,   -9,
    0,    0,    0,    0,    0,    0,    0, -256,    0,    0,
};
static const YYINT yygindex[] = {                         0,
   83,  176,  281,  285,    0,  -12,  268,    0,  -42,    0,
  258,    0,  262,  -39,  -44,  157,    0,  -54,  208,    0,
    0,    0,    0,    0,    0,
};
#define YYTABLESIZE 384
static const YYINT yytable[] = {                         80,
    4,   83,    4,   60,   60,   78,   63,   60,   38,   77,
   81,   76,   93,   96,   82,   72,   97,   72,   34,   11,
   72,   38,   95,   14,  114,  123,   91,   92,   77,   34,
  118,  142,  120,  113,  122,  143,   17,   96,  145,  125,
   97,   12,   78,  131,   57,   57,   26,   94,  132,   85,
   60,   79,  128,   72,   24,   57,  129,  130,   57,   68,
   69,   70,   71,   25,   96,   77,   60,   97,  134,   28,
   57,    1,  135,   57,   30,   57,   57,   57,   57,   57,
   57,   39,   57,   31,   57,   41,  147,  111,   18,   10,
   69,   69,   69,   19,   69,   10,   21,   22,   60,   96,
  148,   69,   97,   27,   69,   29,    2,    3,    4,    5,
   60,   60,  158,  159,   69,   69,   69,   69,   69,   69,
   42,   69,   69,   69,   69,   69,   69,   48,   69,   43,
   69,   70,   70,   70,   44,   70,    2,    3,    4,    5,
   49,   45,   70,   50,   78,   70,   51,   52,   53,   54,
   55,   56,   57,   23,   22,   70,   70,   70,   70,   70,
   70,   58,   70,   70,   70,   70,   70,   70,   84,   70,
   86,   70,   59,   59,   85,   87,   59,   72,   58,   89,
   88,    4,  112,   59,    4,   90,   59,    4,    4,    4,
    4,    4,    4,    4,  116,  121,   59,   59,   59,   59,
   59,   59,   98,   59,   59,   59,   59,   59,   59,   98,
   59,  141,   59,   56,   56,   97,  136,  140,  146,    4,
  149,  155,   99,  100,   56,  101,  102,   56,  144,   99,
  100,  151,  101,  102,  152,  157,   98,  153,  137,   56,
  156,   16,   56,  124,   56,   56,   56,   56,   56,   56,
    4,   56,   12,   56,   24,   40,   99,  100,   98,  101,
  102,  119,   17,   76,    4,    4,    4,    4,    4,   45,
    4,    4,    4,    4,    4,    4,    4,   49,   99,  100,
   45,  101,  102,   45,    2,    3,    4,   33,   49,   75,
   48,   49,   20,   16,  139,   45,  115,   32,   45,   46,
   98,   48,    4,   49,   48,   47,   49,   45,   49,   49,
   49,   49,   49,   49,  160,   49,   48,  133,   41,   48,
   99,  100,  117,  101,  102,   79,   98,  138,   48,   41,
    0,   98,   41,   68,   69,   70,   71,  104,  105,  106,
  107,  108,  109,    0,   41,    0,   99,  100,    0,  101,
  102,   99,  100,    0,  101,  102,   41,   64,   65,    0,
    0,    0,    0,    0,    0,   66,    0,    0,   49,    0,
    0,   49,   67,   49,   49,   49,   49,   49,   49,    0,
   68,   69,   70,   71,
};
static const YYINT yycheck[] = {                         54,
    0,   56,    0,   48,   49,  258,   49,   52,  265,   52,
   55,   51,   67,  283,  257,  257,  286,  259,   31,  264,
  262,  278,  268,  302,   79,  295,   66,   67,  258,   42,
   85,  265,   87,   78,   89,  269,  296,  283,  257,   94,
  286,  266,  295,   98,  257,  258,  302,  294,  103,  296,
   95,  294,   95,  295,  303,  268,   96,   97,  271,  302,
  303,  304,  305,  265,  283,  295,  111,  286,  111,  302,
  283,  263,  112,  286,  297,  288,  289,  290,  291,  292,
  293,  296,  295,  294,  297,  295,  141,  271,  295,  296,
  257,  258,  259,   11,  261,  302,  257,  258,  143,  283,
  143,  268,  286,   21,  271,   23,  298,  299,  300,  301,
  155,  156,  155,  156,  281,  282,  283,  284,  285,  286,
  258,  288,  289,  290,  291,  292,  293,   45,  295,  302,
  297,  257,  258,  259,  297,  261,  298,  299,  300,  301,
  264,  264,  268,  267,  294,  271,  270,  271,  272,  273,
  274,  275,  276,  257,  258,  281,  282,  283,  284,  285,
  286,  302,  288,  289,  290,  291,  292,  293,  257,  295,
  265,  297,  257,  258,  296,  259,  261,  262,  302,  296,
  262,  264,  270,  268,  267,  265,  271,  270,  271,  272,
  273,  274,  275,  276,  257,  302,  281,  282,  283,  284,
  285,  286,  261,  288,  289,  290,  291,  292,  293,  261,
  295,  258,  297,  257,  258,  286,  295,  295,  271,  302,
  277,  260,  281,  282,  268,  284,  285,  271,  265,  281,
  282,  265,  284,  285,  303,  265,  261,  278,  297,  283,
  260,    0,  286,  295,  288,  289,  290,  291,  292,  293,
  265,  295,  302,  297,  302,  265,  281,  282,  261,  284,
  285,   86,  295,  295,  264,  265,  266,  267,  266,  257,
  270,  271,  272,  273,  274,  275,  276,  257,  281,  282,
  268,  284,  285,  271,  298,  299,  300,  301,  268,  295,
  257,  271,   12,    9,  297,  283,  257,   30,  286,   42,
  261,  268,  302,  283,  271,   44,  286,  295,  288,  289,
  290,  291,  292,  293,  158,  295,  283,  110,  257,  286,
  281,  282,  257,  284,  285,  294,  261,  257,  295,  268,
   -1,  261,  271,  302,  303,  304,  305,  288,  289,  290,
  291,  292,  293,   -1,  283,   -1,  281,  282,   -1,  284,
  285,  281,  282,   -1,  284,  285,  295,  279,  280,   -1,
   -1,   -1,   -1,   -1,   -1,  287,   -1,   -1,  283,   -1,
   -1,  286,  294,  288,  289,  290,  291,  292,  293,   -1,
  302,  303,  304,  305,
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
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"PYC","COMA","DPI","DP","PRC",
"PT","ESTRUCT","INICIO","FIN","DEF","SI","ENTC","SINO","MIENT","HACER","SEGUN",
"ESCRIBE","LEER","DEVOL","TERMI","CASO","PRED","VERDAD","FALSO","MAS","MNS",
"OR","MUL","DIV","AND","NOT","MAY","MAYI","MEN","MENI","DIF","IGUAL","PARI",
"PARD","CORI","CORD","INT","FLOAT","CAR","SIN","ID","NUM","CARACT","CAD",0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
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
#line 100 "parser.y"

void yyerror(char *s){
	printf("%s\n",s);
}


#line 439 "y.tab.c"

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
