%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "y.tab.h"
%}

esp [\n\t\r]*
id ([a-zA-Z]|_)([a-zA-Z_0-9])*
num [0-9]+|([0-9]+).([0-9]+)
especial [!#$%&()*+,-./:;<=>?@[\]^_{}|~]
simb [a-zA-Z0-9]|{especial}|" "
cad \"(({simb}|{esp})*)\"
caract \'{simb}\'

%%

"sin" {yylval.tipo = 0;
	printf("Sin tipo\n");
	return SIN;}
"ent" {yylval.tipo = 1;
	printf("Tipo ent\n");
	return INT;}
"real" {yylval.tipo = 2;
	printf("Tipo real\n");
	return FLOAT;}
"car" {yylval.tipo = 3;
	printf("Tipo car\n");
	return CAR;}

"estructura" {return ESTRUCT;}
"inicio" {return INICIO;}
"fin" {return FIN;}
"def" {return DEF;}
"si" {return SI;}
"entonces" {return ENTC;}
"sino" {return SINO;}
"mientras" {return MIENT;}
"hacer" {return HACER;}
"segun" {return SEGUN;}
"caso" {return CASO;}
"leer" {return LEER;}
"escribir" {return ESCRIBE;}
"devolver" {return DEVOL;}
"terminar" {return TERMI;}
"pred" {return PRED;}


"verdadero" {return VERDAD;}
"falso" {return FALSO;}

{num} {	
 yylval.num = atof(yytext);
 return NUM;
}
{cad} {	
 if(yyleng>100){
 printf("Error lexico %s excede la longitud permitida\n",yytext);
 return -1;
 }
 strcpy(yylval.cadena,yytext);
 return CAD;
}
{caract} {	
 if(yyleng>1){
 printf("Error lexico %s no es un caracter\n",yytext);
 return -1;
 }
 strcpy(yylval.c,yytext);
 return CAD;
}

{id} {	
 if(yyleng>32){
 printf("Error lexico %s excede la longitud permitida\n",yytext);
 return -1;
 }
 strcpy(yylval.id,yytext);
 return ID;
}

";" {return PYC;}
"[" {return CORI;}
"]" {return CORD;}
"(" {return PARI;}
")" {return PARD;}
"," {return COMA;}
":=" {return DPI;}
":" {return DP;}
"%" {return PRC;}
"." {return PT;}

"||" {return OR;}
"&&" {return AND;}
"!" {return NOT;}

">" {return MAY;}
">=" {return MAYI;}
"<" {return MEN;}
"<=" {return MENI;}
"!=" {return DIF;}
"==" {return IGUAL;}

"+" {return MAS;}
"-" {return MNS;}
"*" {return MUL;}
"/" {return DIV;}

{esp} {}

%%
int yywrap(){
	return 1;
}


