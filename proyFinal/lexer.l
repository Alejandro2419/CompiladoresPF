%{

#include <stdio.h>
#include "tabla_tipos.h"
#include "parser.h"

%}

%option noyywrap
%option yylineno
%x COMMENT

id [a-zA-Z_][0-9a-zA-Z_]*

digito [0-9]
entero [1-9]{digito}*|0
decimal {entero}\.{digito}*|entero?\.digito+
exponente [Ee][+-]?digito+
real {decimal}{exponente}?|{entero}{exponente}
flotante {entero}f|{real}

ascii [[:graph:]]|[[:space:]]|[[:cntrl:]]

%%

    /* Comentarios */
"!*"                {BEGIN COMMENT  ;}
<COMMENT>[^*]       {}
<COMMENT>"*"/[^?]   {}
<COMMENT>"*?"       {BEGIN 0        ;}
    /* Palabras reservadas */
    /* Tipos de dato */
"ent"     {return INT     ;}
"real"    {return FLOAT   ;}
"car"     {return CHAR    ;}
"sin"     {return VOID    ;}
"estructura"    {return STRUCT  ;}
    /* Control de flujo */
"sino"      {return ELSE    ;}
"si"        {return IF      ;}
"mientras"  {return WHILE   ;}
"hacer"     {return DO      ;}
"segun"     {return FOR     ;}
"elegir"    {return SWITCH  ;}
"caso"      {return CASE    ;}
"pred"      {return DEFAULT ;}
"terminar"  {return BREAK   ;}
    /* Funciones */
"def"       {return FUNCT   ;}
"devolver"  {return RETURN  ;}
"escribir"  {return PRINT   ;}
    /* Constantes */
        /* Boleanas */
"verdadero"    {return TRUE    ;}
"falso"     {return FALSE   ;}

    /* Operadores */
"("     {return PI  ;}
")"     {return PD  ;}
"["     {return CI  ;}
"]"     {return CD  ;}
"."     {return PTO ;}
"no"    {return NOT ;}
"*"     {return MUL ;}
"/"     {return DIV ;}
"%"     {return MOD ;}
"+"     {return MAS ;}
"-"     {return MEN ;}
"<"     {return LT  ;}
"<="    {return LE  ;}
">"     {return GT  ;}
">="    {return GE  ;}
"="     {return EQ  ;}
"<>"    {return NEQ ;}
"y"     {return AND ;}
"o"     {return OR  ;}
","     {return COMA;}

":="    {return ASIG;}
":"         {return DP      ;}
";"         {return PYC     ;}
"inicio"    {return LI      ;}
"fin"       {return LD      ;}
        /* Caracteres y cadenas */
\'{ascii}?\' {strncpy(yylval.str16, yytext, 16); return CCHAR;}
\"{ascii}*\" {strncpy(yylval.str16, yytext, 16); return STR  ;}

        /* Numeros */
{entero} {
    yylval.num.tipo = TT_INT;
    strncpy(yylval.num.sval, yytext, 16);
    yylval.num.val.i = (int) strtol(yytext, NULL, 0);
    return NUMERO;
}
{flotante} {
    yylval.num.tipo = TT_FLOAT;
    strncpy(yylval.num.sval, yytext, 16);
    yylval.num.val.f = (float) strtod(yytext, NULL);
    return NUMERO;
}
    /* Espacios en blanco */
[ \t\r\n]+ {}
    /* Identificadores */
{id} { strncpy(yylval.str16, yytext, 16); return ID;}

. {printf("Error lexico en la linea %d\n", yylineno); exit(-1);}

%%


