# CompiladoresPF
Proyecto final de la clase de Compiladores

Compilacion:

bison parser.y

flex lexer.l

gcc stack.c tabla_tipos.c tabla_simbolos.c parser.tab.c lex.yy.c main.c -o compilador -lfl

Ejecucion

./compilador prueba.txt
