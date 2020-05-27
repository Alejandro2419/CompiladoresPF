/*Hernandez Garcia Alejandro 26/05 */
%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "y.tab.h"
int linea=1;
%}

esp [\t\r]*
id ([a-zA-Z]|_)([a-zA-Z0-9_])*
entero ["+"-]?[1-9][0-9]*|0
exp ([eE]["+"-]?[0-9]+)?
real ["+"-]?(("."[0-9]+|[0-9]+"."[0-9]+){exp}|[0-9]+{exp})[fF]?
num {entero}|{real}
especial [!#$%&()*+,-./:;<=>?@[\]^_{}|~]
simb [a-zA-Z0-9]|{especial}|" "
cad \"(({simb}|{esp})*)\"
caract \'{simb}\'

%%

"\n" {linea++;}

"sin" {printf("\nTipo: %s ",yytext); yylval.tipo = 0;
	return SIN;}
"ent" {printf("\nTipo: %s ",yytext); yylval.tipo = 1;
	return INT;}
"real" {printf("\nTipo: %s ",yytext); yylval.tipo = 2;
	return FLOAT;}
"dreal" {printf("\nTipo: %s ",yytext); yylval.tipo = 3;
	return DOUBLE;}
"car" {printf("\nTipo: %s ",yytext); yylval.tipo = 4;
	return CAR;}

"estructura" {printf("\n%s ",yytext); return ESTRUCT;}
"inicio" {printf("\n%s\n",yytext); return INICIO;}
"fin" {printf("\n%s ",yytext); return FIN;}
"def" {printf("\n%s ",yytext); return DEF;}
"si" {printf("\n%s ",yytext); return SI;}
"entonces" {printf(" %s\n",yytext); return ENTC;}
"sino" {printf("\n%s\n",yytext); return SINO;}
"mientras" {printf("\n%s ",yytext); return MIENT;}
"hacer" {printf("\n%s\n",yytext); return HACER;}
"segun" {printf("\n%s ",yytext); return SEGUN;}
"caso" {printf("\n%s ",yytext); return CASO;}
"leer" {printf("\n%s ",yytext); return LEER;}
"escribir" {printf("\n%s ",yytext); return ESCRIBE;}
"devolver" {printf("\n%s ",yytext); return DEVOL;}
"terminar" {printf("\n%s\n",yytext); return TERMI;}
"pred" {printf("\n%s ",yytext); return PRED;}

"o" {printf(" %s ",yytext); return OR;}
"y" {printf(" %s ",yytext); return AND;}
"no" {printf(" %s ",yytext); return NOT;}

"verdadero" {printf(" %s ",yytext); return VERDAD;}
"falso" {printf(" %s ",yytext); return FALSO;}

";" {printf("\n"); return PYC;}
"[" {return CORI;}
"]" {return CORD;}
"(" {return PARI;}
")" {return PARD;}
"," {return COMA;}
":=" {printf(" asigna: "); return DPI;}
":" {return DP;}
"%" {return PRC;}
"." {return PT;}

">" {printf(" %s ",yytext); return MAY;}
">=" {printf(" %s ",yytext); return MAYI;}
"<" {printf(" %s ",yytext); return MEN;}
"<=" {printf(" %s ",yytext); return MENI;}
"!=" {printf(" %s ",yytext); return DIF;}
"=" {printf(" %s ",yytext); return IGUAL;}

"+" {printf(" %s ",yytext); return MAS;}
"-" {printf(" %s ",yytext); return MNS;}
"*" {printf(" %s ",yytext); return MUL;}
"/" {printf(" %s ",yytext); return DIV;}

{num} {	
 yylval.num = atof(yytext);
 printf(" %s ",yytext);
 return NUM;
}
{cad} {	
 if(yyleng>100){
 printf("Error lexico %s excede la longitud permitida\n",yytext);
 return -1;
 }
 strcpy(yylval.cadena,yytext);
 printf(" %s ",yytext);
 return CAD;
}
{caract} {	
 if(yyleng>1){
 printf("Error lexico %s no es un caracter\n",yytext);
 return -1;
 }
 strcpy(yylval.c,yytext);
 printf(" %s ",yytext);
 return CAD;
}

{id} {	
 if(yyleng>32){
 printf("Error lexico %s excede la longitud permitida\n",yytext);
 return -1;
 }
 strcpy(yylval.id,yytext);
 printf(" %s ",yytext);
 return ID;
}

{esp} {}

%%
int yywrap(){
	return 1;
}


