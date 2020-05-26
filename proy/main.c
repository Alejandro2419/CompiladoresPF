#include <stdio.h>
extern int yyparse();
extern FILE *yyin;

int main(int argc, char** argv){
	FILE *f;
	if(argc <2){
		printf("Faltan argumentos");
		return -1;
}
f = fopen(argv[1], "r");
if(!f){
	printf("El archivo no se puede abrir");
	return -1;
}

yyin = f;
yyparse();
fclose(f);

}

