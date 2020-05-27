/*Hernandez Garcia Alejandro 26/05 */
%{
#include <stdio.h>
extern int yylex();
void yyerror(char *s);
extern int linea;
%}

%union{
	int tipo;
	char id[32];
	float num;
	char c[3];
	char cadena[100];
}

%token PYC COMA DPI DP PT
%token ESTRUCT INICIO FIN DEF SI ENTC SINO MIENT HACER SEGUN ESCRIBE LEER DEVOL TERMI CASO PRED
%token VERDAD FALSO

%left MAS MNS OR
%left MUL DIV PRC AND
%left NOT
%left MAY MAYI MEN MENI DIF IGUAL
%left PARI PARD CORI CORD

%token<tipo> INT FLOAT DOUBLE CAR SIN
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
base: INT
	| FLOAT
	| DOUBLE
	| CAR
	| SIN;
tipo_arr: CORI NUM CORD tipo_arr
	| ;
list_var: list_var COMA ID
	| ID
func: DEF tipo ID PARI argum PARD INICIO declara sentencs FIN func
	| ;
argum: list_arg
	| SIN;
list_arg: list_arg COMA arg
	| arg;
arg: tipo_arg ID;
tipo_arg: base param_arr;
param_arr: CORI CORD param_arr
	| ;
sentencs: sentencs sentenc | sentenc;
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
	| relac
	| VERDAD
	| FALSO;
relac: relac MAY relac
	| relac MEN relac
	| relac MAYI relac
	| relac MENI relac
	| relac DIF relac
	| relac IGUAL relac
	| expr;
expr: PARI expr PARD
	| expr MUL expr
	| expr DIV expr
	| expr PRC expr
	| expr MAS expr
	| expr MNS expr
	| var | NUM | CAD | CARACT;
var: ID var_comp;
var_comp: dato_est_sim
	| arreglo
	| PARI param PARD;
dato_est_sim: dato_est_sim PT ID
	| ;
arreglo: arreglo CORI expr CORD
	| CORI expr CORD;
param: list_param
	| ;
list_param: list_param COMA expr
	| expr;

%%

void yyerror(char *s){
	printf("Linea %d: %s\n",linea,s);
}


