%{
#include <stdio.h>
extern int yylex();
void yyerror(char *s);
int tipo;
%}

%union{
	int tipo;
	char id[32];
	float num;
	char c[3];
	char cadena[100];
}

%token PYC PARI PARD CORI CORD COMA DPI DP PRC PT
%token ESTRUCT INICIO FIN DEF SI ENTC SINO MIENT HACER SEGUN ESCRIBE LEER DEVOL TERMI CASO PRED
%token OR AND NOT VERDAD FALSO
%token MAY MAYI MEN MENI DIF IGUAL
%token MAS MNS MUL DIV
%token<tipo> INT FLOAT CAR SIN
%token<id> ID
%token<num> NUM
%token<c> CARACT
%token<cadena> CAD

%start prog

%%
prog: declara func;
declara: tipo list_var PYC declara
	| tipo_reg list_var PYC declara
	| ;
tipo_reg: ESTRUCT INICIO declara FIN;
tipo: base tipo_arr;
base: INT | FLOAT | CAR | SIN;
tipo_arr: CORI NUM CORD tipo_arr
	| ;
list_var: list_var COMA ID
	| ID;
func: DEF tipo ID PARI argum PARD INICIO declara sentenc FIN func
	| ;
argum: list_arg
	| SIN;
list_arg: list_arg COMA arg
	| arg;
arg: tipo_arg ID;
tipo_arg: base param_arr;
param_arr: CORI CORD param_arr
	| ;
sentenc: SI e_bool ENTC sentenc FIN
	| SI e_bool ENTC sentenc SINO sentenc FIN
	| MIENT e_bool HACER sentenc FIN
	| HACER sentenc MIENT e_bool PYC
	| SEGUN PARI var PARD HACER casos predet FIN
	| var DPI expr PYC
	| ESCRIBE expr PYC
	| LEER var PYC
	| DEVOL PYC
	| DEVOL expr PYC
	| TERMI PYC
	| INICIO sentenc FIN;
casos: CASO NUM DP sentenc casos
	| CASO NUM DP sentenc;
predet: PRED DP sentenc
	| ;
e_bool: e_bool OR e_bool
	| e_bool AND e_bool
	| NOT e_bool
	| PARI e_bool PARD
	| relac
	| VERDAD
	| FALSO;
relac: relac op_rel relac
	| expr;
op_rel: MAY | MEN | MAYI | MENI | DIF | IGUAL;
expr: expr op_arit expr
	| expr PRC expr
	| PARI expr PARD
	| ID | var | NUM | CAD | CARACT
	| ID PARI param PARD;
op_arit: MAS | MNS | MUL | DIV;
var: dato_est_sim
	| arreglo;
dato_est_sim: dato_est_sim PT ID
	| ID;
arreglo: ID CORI expr CORD
	| arreglo CORI expr CORD;
param: list_param
	| ;
list_param: list_param COMA expr
	| expr;

%%

void yyerror(char *s){
	printf("%s\n",s);
}


