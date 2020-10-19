/* Reverse polish notation calculator.  */

%{
	#include <stdio.h>
	#include <math.h>
	int yylex (void);
	void yyerror (char const *);
	#define YYSTYPE double
%}


%token NUM

%token TK_PR_CONTINUAR		// CONTINUAR
%token TK_PR_DE				// DE
%token TK_PR_DEV			// DEV
%token TK_PR_ENT			// ENT
%token TK_PR_INOUT			// E/S
%token TK_PR_HACER			// HACER
%token TK_PR_HASTA			// HASTA
%token TK_PR_REF			// REF
%token TK_PR_SAL			// SAL

%token TK_PR_FUNCION		// FUNCION
%token TK_PR_FFUNCION		// FFUNCION
%token TK_PR_ACCION			// ACCION
%token TK_PR_FACCIO			// FACCION
%token TK_PR_ALGORIT		// ALGORITMO
%token TK_PR_FALGORI		// FALGORITMO
%token TK_PR_MIENTRAS		// MIENTRAS
%token TK_PR_FMIENTR		// FMIENTRAS
%token TK_PR_PARA			// PARA
%token TK_PR_FPARA			// FPARA
%token TK_PR_SI				// SI
%token TK_PR_FSI			// FSI

%token TK_PR_TIPO			// TIPO
%token TK_PR_FTIPO			// FTIPO
%token TK_PR_TUPLA			// TUPLA
%token TK_PR_FTUPLA			// FTUPLA
%token TK_PR_VAR			// VAR
%token TK_PR_FVAR			// FVAR
%token TK_PR_REAL			// REAL
%token TK_PR_ENTERO			// ENTERO
%token TK_PR_BOOL			// BOLEANO
%token TK_PR_CADENA			// CADENA
%token TK_PR_CHAR			// CARACTER
%token TK_PR_CONST			// CONST
%token TK_PR_FCONST			// FCONST
%token TK_PR_TABLA			// TABLA

%token TK_PR_ASIG			// :=
%token TK_PR_SECUEN			// ;
%token TK_PR_ELSE			// []
%token TK_PR_INIARRA		// [
%token TK_PR_FINARRA		// ]
%token TK_PR_ENTONCES		// ->
%token TK_PR_COMA			// ,
%token TK_PR_PUNTO			// .
%token TK_PR_SUBRANGO		//..
%token TK_PR_DEFVAL			// :
%token TK_PR_BARRA			// /
%token TK_PR_ABRIRPAR		// (
%token TK_PR_CERRARPAR		// )
%token TK_PR_ABRIRLLAVE		// {
%token TK_PR_CERRARLLAVE	// }

%token TK_PR_SUMA			// +
%token TK_PR_MULT			// *
%token TK_PR_RESTA			// -
%token TK_PR_DIV			// DIV
%token TK_PR_MAYOR			// >
%token TK_PR_MENOR			// <
%token TK_PR_MAYIGU			// >=
%token TK_PR_MENIGU			// <=
%token TK_PR_IGUAL			// =
%token TK_PR_O				// O
%token TK_PR_Y				// Y
%token TK_PR_MOD			// MOD
%token TK_PR_NO				// NO

%token TK_LETRA				// [A-Z]
%token TK_CIFRA				// [0-9]
%token TK_DELIM				// [ \t\n]

%token TK_LETRA_O_CIFRA
%token TK_ID

%token TK_LIT_ENTERO		// Entero con exponente
%token TK_LIT_REAL			// Real con exponente
%token TK_LIT_BOOL			// ("VERDADERO"|"FALSO")

%token TK_LIT_CARAC			// Caracter
%token TK_LIT_CADE			// Cadena
%token TK_LIT_COMENTARIO	// Comentario

%% /* Grammar rules and actions follow.  */

desc_algoritmo:
	TK_PR_ALGORIT TK_ID TK_PR_SECUEN cabecera_alg bloque_alg TK_PR_FALGORI TK_PR_PUNTO {
		printf("$~ Parser: Estructura de algoritmo detectada.\n");
	}
;

/*pag 6*/

declaracion_tipo:
	TK_PR_TIPO lista_d_tipo TK_PR_FTIPO TK_PR_SECUEN{
		printf("$~ Parser: Estructura de declaracion_tipo encontrada.\n");
	}
;

declaracion_cte:
	TK_PR_CONST lista_d_cte TK_PR_FCONST TK_PR_SECUEN{
		printf("$~ Parser: Estructura de declaracion_cte encontrada.\n");
	}
;

declaracion_var:
	TK_PR_VAR lista_d_var TK_PR_FVAR TK_PR_SECUEN{
		printf("$~ Parser: Estructura de declaracion_var encontrada.\n");
	}
;

lista_d_tipo:
	TK_ID TK_PR_IGUAL d_tipo TK_PR_SECUEN lista_d_tipo {
		printf("$~ Parser: Estructura lista_d_tipo encontrada 1.\n");
	}
	| %empty {}
;

d_tipo:
	TK_PR_TUPLA lista_campos TK_PR_FTUPLA {
		printf("$~ Parser: Estructura d_tipo encontrada 1.\n");
	}
	| TK_PR_TABLA TK_PR_INIARRA expresion_t TK_PR_SUBRANGO expresion_t {
		printf("$~ Parser: Estructura d_tipo encontrada 2.\n");
	}
	| TK_ID {
		printf("$~ Parser: Estructura d_tipo encontrada 3.\n");
	}
	| expresion_t TK_PR_SUBRANGO expresion_t {
		printf("$~ Parser: Estructura d_tipo encontrada 4.\n");
	}
	| TK_PR_REF d_tipo {
		printf("$~ Parser: Estructura d_tipo encontrada 5.\n");
	}
	| TK_PR_ENTERO {
		printf("$~ Parser: Estructura d_tipo econtrada int 6.\n");
	}
	| TK_PR_BOOL {
		printf("$~ Parser: Estructura d_tipo econtrada bool 7.\n");
	}
	| TK_PR_CHAR {
		printf("$~ Parser: Estructura d_tipo econtrada char 8.\n");
	}
	| TK_PR_REAL {
		printf("$~ Parser: Estructura d_tipo econtrada real 9.\n");
	}
	| TK_PR_CADENA {
		printf("$~ Parser: Estructura d_tipo econtrada cadena 10.\n");
	}
;

expresion_t:
	expresion {
		printf("$~ Parser: Estructura expreasion_t econtrada 1.\n");
	}
	| TK_LIT_CARAC {
		printf("$~ Parser: Estructura expreasion_t econtrada 2.\n");
	}
;

lista_campos:
	TK_ID TK_PR_IGUAL d_tipo TK_PR_SECUEN lista_campos {
		printf("$~ Parser: Estructura lista_campos econtrada.\n");
	}
	| %empty {}
;

lista_d_cte:
	| TK_ID TK_PR_IGUAL TK_LIT_BOOL TK_PR_SECUEN lista_d_cte {

	}
	| TK_ID TK_PR_IGUAL TK_LIT_BOOL TK_PR_SECUEN lista_d_cte {

	}
	| TK_ID TK_PR_IGUAL TK_LIT_BOOL TK_PR_SECUEN lista_d_cte {

	}
	| TK_ID TK_PR_IGUAL TK_LIT_BOOL TK_PR_SECUEN lista_d_cte {

	}
	| %empty {}
;
%%

#include <stdio.h>

/* Called by yyparse on error.  */
void yyerror (char const *s){
	fprintf (stderr, "%s\n", s);
}

/* The lexical analyzer returns a double floating point
   number on the stack and the token NUM, or the numeric code
   of the character read if not a number.  It skips all blanks
   and tabs, and returns 0 for end-of-input.  */

#include <ctype.h>
int yylex (void){
	int c;

	/* Skip white space.  */
	while ((c = getchar ()) == ' ' || c == '\t')
		continue;
	
	/* Process numbers.  */
	if (c == '.' || isdigit (c)){
		ungetc (c, stdin);
		scanf ("%lf", &yylval);
		return NUM;
	}

	/* Return end-of-input.  */
	if (c == EOF)
		return 0;
	/* Return a single char.  */
	return c;
}

int main (void){
	return yyparse ();
}
