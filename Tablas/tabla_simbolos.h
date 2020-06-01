#ifndef SYMTAB_H
#define SYMTAB_H
#include <stdlib.h>
#include "estructuras.h"

ARG *init_arg(int dato);

ARGS *init_args();

SYM *init_sym();

SYMTAB *init_symtab();

void append_arg(ARGS* args, int arg);

void append_sym(SYMTAB *t, SYM *s);

#endif
