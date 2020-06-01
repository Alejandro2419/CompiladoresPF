#include "tabla_simbolos.h"

ARG *init_arg(int dato){
	ARG *aux= (ARG*)malloc(sizeof(ARG));
	aux->tipo= dato;
	aux->next= NULL;
	return aux;
}

ARGS *init_args(){
	ARGS *aux= (ARGS*)malloc(sizeof(ARGS));
	aux->cima= NULL;
	aux->numArgs=0;
	return aux;
}

SYM *init_sym(){
	SYM *aux= (SYM*)malloc(sizeof(SYM));
	aux->args= NULL;
	aux->next= NULL;
	return aux;
}

SYMTAB *init_symtab(){
	SYMTAB *aux= (SYMTAB*)malloc(sizeof(SYMTAB));
	aux->numSym= 0;
	aux->cima= NULL;
	aux->next= NULL;
	aux->tabTipos= NULL;
}

void append_arg(ARGS* args, int arg){
	ARG *aux = args->cima;
	if(aux==NULL){
		args->cima= init_arg(arg);
		args->numArgs=1;
	}
	else{
		for(int i=1;i<args->numArgs) aux= aux->next;
		aux->next= init_arg(arg);
		args->numArgs +=1;
	}
}

void append_sym(SYMTAB *t, SYM *s){
	SYM *aux= t->cima;
	if(aux==NULL){
		t->cima= s;
		t->numSym= 1;
	}
	else{
		for(int i=1;i<numSym;i++) aux= aux->next;
		aux->next= s;
		t->numSym+= 1;
	}
}


