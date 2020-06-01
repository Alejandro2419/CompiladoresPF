typedef struct simbolo SYM;
typedef struct lista_argumentos ARGS;
typedef struct argumento ARG;
typedef struct tabla_simbolos SYMTAB;

struct simbolo{
	int dir;
	int tipo;
	char id[32];
	int var;
	ARGS *args;
	SYM *next;
}

struct lista_argumentos{
	ARG *cima;
	int numArgs;
}

struct argumento{
	int tipo;
	ARG *next;
}

struct tabla_simbolos{
	SYM *cima;
	int numSym;
	SYMTAB *next;
	TYPETAB *tabTipos;
}

typedef struct tipo TYPE;
typedef struct tipo_base TBASE;
typedef struct tabla_tipos TYPETAB;

struct tipo{
	int id;
	char nombre[16];
	int tamaño;
	TBASE *tbase;
	TYPE *next;
}

struct tipo_base{
	int tipo;
	int numVar;
	SYMTAB *tabEstrc;
}

struct tabla_tipos{
	TYPE *cima;
	int numTipos;
}





















