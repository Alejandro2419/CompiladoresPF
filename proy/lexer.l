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
{id} {	
 if(yyleng>32){
 printf("Error lexico %s excede la longitud permitida\n",yytext);
 return -1;
 }
 strcpy(yylval.id,yytext);
 return ID;
}
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

"void" {yylval.tipo = 0;
	return SIN;}
"int" {yylval.tipo = 1;
	return INT;}
"float" {yylval.tipo = 2;
	return FLOAT;}
"char" {yylval.tipo = 3;
	return CAR;}

"struct" {return ESTRUCT;}
"inicio" {return INICIO;}
"fin" {return FIN;}
"define" {return DEF;}
"if" {return SI;}
"entonces" {return ENTC;}
"else" {return SINO;}
"while" {return MIENT;}
"hacer" {return HACER;}
"switch" {return SEGUN;}
"case" {return CASO;}
"leer" {return LEER;}
"escribir" {return ESCRIBE;}
"return" {return DEVOL;}
"break" {return TERMI;}
"default" {return PRED;}

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
"true" {return VERDAD;}
"false" {return FALSO;}

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


