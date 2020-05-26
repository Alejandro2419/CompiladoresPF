#define PYC 257
#define PARI 258
#define PARD 259
#define CORI 260
#define CORD 261
#define COMA 262
#define DPI 263
#define DP 264
#define PRC 265
#define PT 266
#define ESTRUCT 267
#define INICIO 268
#define FIN 269
#define DEF 270
#define SI 271
#define ENTC 272
#define SINO 273
#define MIENT 274
#define HACER 275
#define SEGUN 276
#define ESCRIBE 277
#define LEER 278
#define DEVOL 279
#define TERMI 280
#define CASO 281
#define PRED 282
#define OR 283
#define AND 284
#define NOT 285
#define VERDAD 286
#define FALSO 287
#define MAY 288
#define MAYI 289
#define MEN 290
#define MENI 291
#define DIF 292
#define IGUAL 293
#define MAS 294
#define MNS 295
#define MUL 296
#define DIV 297
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
