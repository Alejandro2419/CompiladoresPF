# CompiladoresPF
Proyecto final de la clase de Compiladores

Alumno: Hernández García Alejandro Manuel

Compilacion
byacc -d -v  parser.y
flex lexer.l
gcc y.tab.c lex.yy.c main.c -o compi -lfl

Ejecucion
./compi prueba.txt
