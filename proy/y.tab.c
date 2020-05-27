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

#line 3 "parser.y"
#include <stdio.h>
extern int yylex();
void yyerror(char *s);
extern int linea;
#line 9 "parser.y"
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
#define PT 261
#define ESTRUCT 262
#define INICIO 263
#define FIN 264
#define DEF 265
#define SI 266
#define ENTC 267
#define SINO 268
#define MIENT 269
#define HACER 270
#define SEGUN 271
#define ESCRIBE 272
#define LEER 273
#define DEVOL 274
#define TERMI 275
#define CASO 276
#define PRED 277
#define VERDAD 278
#define FALSO 279
#define MAS 280
#define MNS 281
#define OR 282
#define MUL 283
#define DIV 284
#define PRC 285
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
#define DOUBLE 300
#define CAR 301
#define SIN 302
#define ID 303
#define NUM 304
#define CARACT 305
#define CAD 306
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    1,    1,    1,    5,    3,    6,    6,    6,    6,
    6,    7,    7,    4,    4,    2,    2,    8,    8,   10,
   10,   11,   12,   13,   13,    9,    9,   14,   14,   14,
   14,   14,   14,   14,   14,   14,   14,   14,   14,   17,
   17,   18,   18,   15,   15,   15,   15,   15,   15,   20,
   20,   20,   20,   20,   20,   20,   19,   19,   19,   19,
   19,   19,   19,   19,   19,   19,   16,   21,   21,   21,
   22,   22,   23,   23,   24,   24,   25,   25,
};
static const YYINT yylen[] = {                            2,
    2,    4,    4,    0,    4,    2,    1,    1,    1,    1,
    1,    4,    0,    3,    1,   11,    0,    1,    1,    3,
    1,    2,    2,    3,    0,    2,    1,    5,    7,    5,
    5,    8,    4,    3,    3,    2,    3,    2,    3,    5,
    4,    3,    0,    3,    3,    2,    1,    1,    1,    3,
    3,    3,    3,    3,    3,    1,    3,    3,    3,    3,
    3,    3,    1,    1,    1,    1,    2,    1,    1,    3,
    3,    0,    4,    3,    1,    0,    3,    1,
};
static const YYINT yydefred[] = {                         0,
    0,    7,    8,    9,   10,   11,    0,    0,    0,    0,
    0,    0,    0,    1,   15,    0,    0,    0,    6,    0,
    0,    0,    0,    0,    0,    5,    0,    2,   14,    3,
    0,    0,   12,    0,    0,    0,    0,   21,    0,    0,
   23,    0,    0,   22,    0,    0,   20,   24,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   27,    0,    0,   48,   49,    0,    0,   64,   66,   65,
    0,   63,    0,    0,    0,    0,    0,    0,    0,   36,
    0,   38,    0,    0,   67,    0,    0,    0,   26,    0,
   39,   46,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   34,   35,   37,    0,    0,    0,    0,    0,    0,   16,
    0,   57,    0,    0,   45,    0,    0,   58,   59,   60,
   50,   52,   51,   53,   54,   55,    0,    0,    0,   70,
    0,   74,   71,    0,   33,   28,    0,   30,   31,    0,
    0,   73,    0,    0,    0,   29,    0,    0,    0,    0,
    0,   32,    0,   42,   40,
};
static const YYINT yydgoto[] = {                          7,
    8,   14,    9,   16,   10,   11,   19,   36,   60,   37,
   38,   39,   41,   61,   71,   72,  155,  159,   73,   74,
   85,   86,   87,  115,  116,
};
static const YYINT yysindex[] = {                      -223,
 -257,    0,    0,    0,    0,    0,    0, -234, -280, -280,
 -259, -223, -158,    0,    0, -144,  -99, -252,    0, -217,
 -235, -223, -221, -223, -209,    0, -233,    0,    0,    0,
 -259,   32,    0,    0, -216, -204, -163,    0, -200, -192,
    0, -137, -158,    0, -216, -223,    0,    0,  -77,  -77,
   50,   50,  -77, -159,  -67, -170, -232, -108, -195, -118,
    0,  -92,  -88,    0,    0,   50,  -67,    0,    0,    0,
 -246,    0,   99,   75, -201,  -69, -170, -191,  -49,    0,
 -173,    0,  -67,  -67,    0,  -71,  -81, -234,    0,  -67,
    0,    0,   77,  -77,   50,   50,  -67,  -67,  -67,  -67,
  -67,  -67,  -67,  -67,  -67,  -67,  -67,  -77,   50,  -78,
    0,    0,    0,   99,  -74,  -36,  -50,  -80,  -67,    0,
   -1,    0, -214,  -62,    0, -102, -102,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  -24, -199,  -42,    0,
  -67,    0,    0,   38,    0,    0,  -77,    0,    0,  -51,
   99,    0,  -23,  -59,  -31,    0,  -11,    9,   -6,  -77,
  -77,    0,  -51,    0,    0,
};
static const YYINT yyrindex[] = {                         3,
    0,    0,    0,    0,    0,    0,    0,  260,    0,    0,
  -41,   -3,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    1,    0,    1,    0,    0,    0,    0,    0,    0,
  -41,    0,    0, -236,  -40,    0,  -14,    0,    0,    0,
    0,    0,    0,    0,  -40,   22,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -161,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   57, -248,    0,    0,    0,    0,    0,    0,
    0,    0,   -9,    0,    0, -120,  -79,  260,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0, -242,    0,    4,    0,    0,    0,    0,
    0,    0,    0,  -83,    0,  -38,   20,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 -240,    0,    0,    0,   25,    0,    0,    0,    0,    0,
    0,    0, -244,    0,    0,
};
static const YYINT yygindex[] = {                         0,
    2,  210,  290,  295,    0,   -2,  276,    0,    0,    0,
  273,    0,  275,  -43,  -39,  -45,  163,    0,  -55,  271,
    0,    0,    0,    0,    0,
};
#define YYTABLESIZE 384
static const YYINT yytable[] = {                         78,
    4,   81,    4,   62,   62,   12,   63,   62,   47,   76,
   79,   93,   75,   20,   62,   78,   89,   77,   47,   41,
   94,   47,   15,   28,   80,   30,   92,  114,  117,   35,
   13,  110,   41,   47,  121,   95,   18,   47,    1,   96,
   35,  126,  127,  128,  129,  130,   26,   49,   62,  146,
  123,   25,   78,  147,   77,  124,  125,  149,   19,   11,
   32,   67,   62,  144,  137,  111,   11,   27,  108,  138,
   59,   68,   69,   70,    2,    3,    4,    5,    6,   40,
   95,   29,   95,  113,   96,  151,   96,   31,   97,   98,
   42,   99,  100,  101,   43,   72,   72,   72,   83,   72,
   84,   62,   44,  153,   45,   72,   97,   98,   72,   99,
  100,  101,   22,   23,   62,   62,  163,  164,   72,   72,
   72,   72,   72,   72,   72,   46,   72,   72,   72,   72,
   72,   72,   59,   72,   77,   72,   68,   68,   68,    2,
    3,    4,    5,    6,   50,   88,   68,   51,   82,   68,
   52,   53,   54,   55,   56,   57,   58,   24,   23,   68,
   68,   68,   68,   68,   68,   68,   90,   68,   68,   68,
   68,   68,   68,   44,   68,   91,   68,   69,   69,   69,
   99,  100,  101,   44,   59,   50,   44,   69,   51,  118,
   69,   52,   53,   54,   55,   56,   57,   58,   44,  109,
   69,   69,   69,   69,   69,   69,   69,  112,   69,   69,
   69,   69,   69,   69,  119,   69,  139,   69,   61,   61,
  140,  141,  143,   96,  154,   59,   67,  150,   61,   97,
   98,   61,   99,  100,  101,   59,   68,   69,   70,  148,
  156,   61,   61,   61,  157,  158,  142,   61,  160,   61,
   61,   61,   61,   61,   61,  145,   61,  162,   61,   17,
    4,   13,   25,    4,    4,    4,    4,    4,  161,    4,
    4,    4,    4,    4,    4,    4,   62,   62,   97,   98,
   18,   99,  100,  101,    4,   76,   62,    4,   43,   62,
    4,    4,    4,    4,    4,    4,    4,  120,   75,   62,
   62,   62,   21,    4,   17,   62,   33,   62,   62,   62,
   62,   62,   62,   56,   62,   47,   62,   97,   98,   48,
   99,  100,  101,   56,    4,  165,   56,   64,   65,    2,
    3,    4,    5,   34,  152,    0,   66,    0,   56,    0,
    0,    0,   56,   67,   56,   56,   56,   56,   56,   56,
    0,    0,   59,   68,   69,   70,   97,   98,    0,   99,
  100,  101,  102,  103,  104,  105,  106,  107,    0,    0,
    0,  122,  131,  132,  133,  134,  135,  136,   97,   98,
    0,   99,  100,  101,
};
static const YYINT yycheck[] = {                         55,
    0,   57,    0,   49,   50,  263,   50,   53,  257,   53,
   56,   67,   52,   12,   60,  258,   60,  258,  267,  264,
  267,  270,  303,   22,  257,   24,   66,   83,   84,   32,
  265,   77,  277,  282,   90,  282,  296,  286,  262,  286,
   43,   97,   98,   99,  100,  101,  264,   46,   94,  264,
   94,  304,  295,  268,  295,   95,   96,  257,  295,  296,
  294,  294,  108,  119,  108,  257,  303,  303,  270,  109,
  303,  304,  305,  306,  298,  299,  300,  301,  302,  296,
  282,  303,  282,  257,  286,  141,  286,  297,  280,  281,
  295,  283,  284,  285,  258,  257,  258,  259,  294,  261,
  296,  147,  303,  147,  297,  267,  280,  281,  270,  283,
  284,  285,  257,  258,  160,  161,  160,  161,  280,  281,
  282,  283,  284,  285,  286,  263,  288,  289,  290,  291,
  292,  293,  303,  295,  294,  297,  257,  258,  259,  298,
  299,  300,  301,  302,  263,  264,  267,  266,  257,  270,
  269,  270,  271,  272,  273,  274,  275,  257,  258,  280,
  281,  282,  283,  284,  285,  286,  259,  288,  289,  290,
  291,  292,  293,  257,  295,  264,  297,  257,  258,  259,
  283,  284,  285,  267,  303,  263,  270,  267,  266,  261,
  270,  269,  270,  271,  272,  273,  274,  275,  282,  269,
  280,  281,  282,  283,  284,  285,  286,  257,  288,  289,
  290,  291,  292,  293,  296,  295,  295,  297,  257,  258,
  295,  258,  303,  286,  276,  303,  294,  270,  267,  280,
  281,  270,  283,  284,  285,  303,  304,  305,  306,  264,
  264,  280,  281,  282,  304,  277,  297,  286,  260,  288,
  289,  290,  291,  292,  293,  257,  295,  264,  297,    0,
  264,  303,  303,  263,  264,  265,  266,  265,  260,  269,
  270,  271,  272,  273,  274,  275,  257,  258,  280,  281,
  295,  283,  284,  285,  263,  295,  267,  266,  264,  270,
  269,  270,  271,  272,  273,  274,  275,   88,  295,  280,
  281,  282,   13,  303,   10,  286,   31,  288,  289,  290,
  291,  292,  293,  257,  295,   43,  297,  280,  281,   45,
  283,  284,  285,  267,  303,  163,  270,  278,  279,  298,
  299,  300,  301,  302,  297,   -1,  287,   -1,  282,   -1,
   -1,   -1,  286,  294,  288,  289,  290,  291,  292,  293,
   -1,   -1,  303,  304,  305,  306,  280,  281,   -1,  283,
  284,  285,  288,  289,  290,  291,  292,  293,   -1,   -1,
   -1,  295,  102,  103,  104,  105,  106,  107,  280,  281,
   -1,  283,  284,  285,
};
#define YYFINAL 7
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 306
#define YYUNDFTOKEN 334
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"PYC","COMA","DPI","DP","PT",
"ESTRUCT","INICIO","FIN","DEF","SI","ENTC","SINO","MIENT","HACER","SEGUN",
"ESCRIBE","LEER","DEVOL","TERMI","CASO","PRED","VERDAD","FALSO","MAS","MNS",
"OR","MUL","DIV","PRC","AND","NOT","MAY","MAYI","MEN","MENI","DIF","IGUAL",
"PARI","PARD","CORI","CORD","INT","FLOAT","DOUBLE","CAR","SIN","ID","NUM",
"CARACT","CAD",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"illegal-symbol",
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
"base : DOUBLE",
"base : CAR",
"base : SIN",
"tipo_arr : CORI NUM CORD tipo_arr",
"tipo_arr :",
"list_var : list_var COMA ID",
"list_var : ID",
"func : DEF tipo ID PARI argum PARD INICIO declara sentencs FIN func",
"func :",
"argum : list_arg",
"argum : SIN",
"list_arg : list_arg COMA arg",
"list_arg : arg",
"arg : tipo_arg ID",
"tipo_arg : base param_arr",
"param_arr : CORI CORD param_arr",
"param_arr :",
"sentencs : sentencs sentenc",
"sentencs : sentenc",
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
"e_bool : relac",
"e_bool : VERDAD",
"e_bool : FALSO",
"relac : relac MAY relac",
"relac : relac MEN relac",
"relac : relac MAYI relac",
"relac : relac MENI relac",
"relac : relac DIF relac",
"relac : relac IGUAL relac",
"relac : expr",
"expr : PARI expr PARD",
"expr : expr MUL expr",
"expr : expr DIV expr",
"expr : expr PRC expr",
"expr : expr MAS expr",
"expr : expr MNS expr",
"expr : var",
"expr : NUM",
"expr : CAD",
"expr : CARACT",
"var : ID var_comp",
"var_comp : dato_est_sim",
"var_comp : arreglo",
"var_comp : PARI param PARD",
"dato_est_sim : dato_est_sim PT ID",
"dato_est_sim :",
"arreglo : arreglo CORI expr CORD",
"arreglo : CORI expr CORD",
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
#line 112 "parser.y"

void yyerror(char *s){
	printf("Linea %d: %s\n",linea,s);
}


#line 444 "y.tab.c"

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
