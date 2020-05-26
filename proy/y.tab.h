#define PYC 257
#define COMA 258
#define DPI 259
#define DP 260
#define PRC 261
#define PT 262
#define ESTRUCT 263
#define INICIO 264
#define FIN 265
#define DEF 266
#define SI 267
#define ENTC 268
#define SINO 269
#define MIENT 270
#define HACER 271
#define SEGUN 272
#define ESCRIBE 273
#define LEER 274
#define DEVOL 275
#define TERMI 276
#define CASO 277
#define PRED 278
#define VERDAD 279
#define FALSO 280
#define MAS 281
#define MNS 282
#define OR 283
#define MUL 284
#define DIV 285
#define AND 286
#define NOT 287
#define MAY 288
#define MAYI 289
#define MEN 290
#define MENI 291
#define DIF 292
#define IGUAL 293
#define PARI 294
#define PARD 295
#define CORI 296
#define CORD 297
#define INT 298
#define FLOAT 299
#define CAR 300
#define SIN 301
#define ID 302
#define NUM 303
#define CARACT 304
#define CAD 305
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union{
	int tipo;
	char id[32];
	float num;
	char c[3];
	char cadena[100];
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
extern YYSTYPE yylval;
