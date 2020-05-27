#define PYC 257
#define COMA 258
#define DPI 259
#define DP 260
#define PT 261
#define ESTRUCT 262
#define INICIO 263
#define FIN 264
#define DEF 265
#define SI 266
#define ENTC 267
#define SINO 268
#define MIENT 269
#define HACER 270
#define SEGUN 271
#define ESCRIBE 272
#define LEER 273
#define DEVOL 274
#define TERMI 275
#define CASO 276
#define PRED 277
#define VERDAD 278
#define FALSO 279
#define MAS 280
#define MNS 281
#define OR 282
#define MUL 283
#define DIV 284
#define PRC 285
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
#define DOUBLE 300
#define CAR 301
#define SIN 302
#define ID 303
#define NUM 304
#define CARACT 305
#define CAD 306
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
