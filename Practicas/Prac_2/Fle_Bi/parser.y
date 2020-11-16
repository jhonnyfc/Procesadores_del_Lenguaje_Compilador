/* Reverse polish notation calculator.  */
%{
	#include <stdio.h>
	#include <math.h>
    extern FILE *yyin;
	int yylex (void);
	void yyerror (char const *);
%}

%token TK_PR_CONTINUAR		// CONTINUAR
%token TK_PR_DE				// DE
%token TK_PR_DEV			// DEV
%token TK_PR_ENT			// ENT
%token TK_PR_INOUT			// E/S
%token TK_PR_HACER			// HACER
%token TK_PR_HASTA			// HASTA
%token TK_PR_REF			// REF
%token TK_PR_SAL			// SAL
%token TK_PR_VERDADERO      // VERDADERO 
%token TK_PR_FALSO          // FALSO

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
%token TK_PR_SUBRANGO		// ..
%token TK_PR_DEFVAL			// :
%token TK_PR_ABRIRPAR		// (
%token TK_PR_CERRARPAR		// )
//%token TK_PR_ABRIRLLAVE		// {
//%token TK_PR_CERRARLLAVE	// }

%left TK_PR_SUMA			// +
%left TK_PR_MULT			// *
%left TK_PR_RESTA			// -
%left TK_PR_BARRA			// /
%left TK_PR_DIV             // DIV
%left TK_PR_MOD		    	// MOD
%nonassoc TK_PR_MAYOR       // >
%nonassoc TK_PR_MENOR	    // <
%nonassoc TK_PR_MAYIGU		// >=
%nonassoc TK_PR_MENIGU		// <=
%nonassoc TK_PR_IGUAL		// =
%nonassoc TK_PR_DIST        // <>
%left TK_PR_O				// O
%left TK_PR_Y				// Y
%token TK_PR_NO				// NO

//%token TK_LETRA				// [A-Z]
//%token TK_CIFRA				// [0-9]
//%token TK_DELIM				// [ \t\n]

//%token TK_LETRA_O_CIFRA
%token TK_ID_OTHER
%token TK_ID_ARI
%token TK_ID_BOL


%token TK_LIT_ENTERO		// Entero con exponente
%token TK_LIT_REAL			// Real con exponente
%token TK_LIT_BOOL			// ("VERDADERO"|"FALSO")

%token TK_LIT_CARAC			// Caracter
%token TK_LIT_CADE			// Cadena
%token TK_LIT_COMENTARIO	// Comentario

%union {
    double          num_real;
    long int        num_entero;
    char            *string;
    char            caracter;
    int             boolean;
};

%% /* Grammar rules and actions follow.  */

desc_algoritmo:
	TK_PR_ALGORIT TK_ID_OTHER TK_PR_SECUEN cabecera_alg bloque_alg TK_PR_FALGORI TK_PR_PUNTO {
		printf("#_ Parser: Estructura de algoritmo detectada.\n");
	}
;

cabecera_alg:
    decl_globales decl_a_f decl_ent_sal TK_LIT_COMENTARIO{
        printf("#_ Parser: Estructura de cabecera_alg detectada.\n");
    }
;
bloque_alg:
    bloque TK_LIT_COMENTARIO{
         printf("#_ Parser: Estructura de bloque_alg detectada.\n");
    }
;   
decl_globales:
    declaracion_tipo decl_globales{
        printf("#_ Parser: Estructura de decl_globales detectada 1.\n");
    } 
    | declaracion_cte decl_globales{
        printf("#_ Parser: Estructura de decl_globales detectada 2.\n");
    } 
    | %empty {
        printf("#_ Parser: Estructura de decl_globales detectada: VACIO 3.\n");
    }
;
decl_a_f:
    accion_d decl_a_f{
        printf("#_ Parser: Estructura de decl_a_f detectada 1.\n");
    } 
    | funcion_d decl_a_f{
        printf("#_ Parser: Estructura de decl_a_f detectada 2.\n");
    }
    | %empty {
        printf("#_ Parser: Estructura de decl_a_f detectada: VACIO 3.\n");
    }
;  
bloque:
    declaraciones instrucciones{
        printf("#_ Parser: Estructura de bloque detectada.\n");
    } 
;
declaraciones:
    declaracion_tipo declaraciones{
        printf("#_ Parser: Estructura de declaraciones detectada 1.\n");
    }
    | declaracion_cte declaraciones{
        printf("#_ Parser: Estructura de declaraciones detectada 2.\n");
    }
    | declaracion_var declaraciones{
        printf("#_ Parser: Estructura de declaraciones detectada 3.\n");
    }
    | %empty{
        printf("#_ Parser: Estructura de declaraciones detectada: VACIO 4.\n");
    }
;

/*pag 6*/

declaracion_tipo:
	TK_PR_TIPO lista_d_tipo TK_PR_FTIPO TK_PR_SECUEN{
		printf("#_ Parser: Estructura de declaracion_tipo encontrada.\n");
	}
;

declaracion_cte:
	TK_PR_CONST lista_d_cte TK_PR_FCONST TK_PR_SECUEN{
		printf("#_ Parser: Estructura de declaracion_cte encontrada.\n");
	}
;

declaracion_var:
	TK_PR_VAR lista_d_var TK_PR_FVAR TK_PR_SECUEN{
		printf("#_ Parser: Estructura de declaracion_var encontrada.\n");
	}
;

lista_d_tipo:
	TK_ID_OTHER TK_PR_IGUAL d_tipo TK_PR_SECUEN lista_d_tipo {
		printf("#_ Parser: Estructura lista_d_tipo encontrada 1.\n");
	}
	| %empty {
        printf("#_ Parser: Estructura lista_d_tipo encontrada: VACIO 2.\n");
    }
;

d_tipo:
	TK_PR_TUPLA lista_campos TK_PR_FTUPLA {
		printf("#_ Parser: Estructura d_tipo encontrada 1.\n");
	}
	| TK_PR_TABLA TK_PR_INIARRA expresion_t TK_PR_SUBRANGO expresion_t TK_PR_FINARRA TK_PR_DE d_tipo{
		printf("#_ Parser: Estructura d_tipo encontrada 2.\n");
	}
	| TK_ID_OTHER {
		printf("#_ Parser: Estructura d_tipo encontrada 3.\n");
	}
	| expresion_t TK_PR_SUBRANGO expresion_t {
		printf("#_ Parser: Estructura d_tipo encontrada 4.\n");
	}
	| TK_PR_REF d_tipo {
		printf("#_ Parser: Estructura d_tipo encontrada 5.\n");
	}
	| TK_PR_ENTERO {
		printf("#_ Parser: Estructura d_tipo econtrada int 6.\n");
	}
	| TK_PR_BOOL {
		printf("#_ Parser: Estructura d_tipo econtrada bool 7.\n");
	}
	| TK_PR_CHAR {
		printf("#_ Parser: Estructura d_tipo econtrada char 8.\n");
	}
	| TK_PR_REAL {
		printf("#_ Parser: Estructura d_tipo econtrada real 9.\n");
	}
	| TK_PR_CADENA {
		printf("#_ Parser: Estructura d_tipo econtrada cadena 10.\n");
	}
;

expresion_t:
	expresion {
		printf("#_ Parser: Estructura expreasion_t econtrada 1.\n");
	}
	| TK_LIT_CARAC {
		printf("#_ Parser: Estructura expreasion_t econtrada 2.\n");
	}
;

lista_campos:
	TK_ID_OTHER TK_PR_IGUAL d_tipo TK_PR_SECUEN lista_campos {
		printf("#_ Parser: Estructura lista_campos econtrada 1.\n");
	}
	| %empty {
        printf("#_ Parser: Estructura lista_campos econtrada:VACIO 2.\n");
    }
;

lista_d_cte:
	TK_ID_OTHER TK_PR_IGUAL TK_LIT_BOOL TK_PR_SECUEN lista_d_cte {
		printf("#_ Parser: Estructura lista_d_cte econtrada 1.\n");
	}
	| TK_ID_OTHER TK_PR_IGUAL TK_LIT_CADE TK_PR_SECUEN lista_d_cte {
		printf("#_ Parser: Estructura lista_d_cte econtrada 2.\n");
	}
	| TK_ID_OTHER TK_PR_IGUAL TK_LIT_CARAC TK_PR_SECUEN lista_d_cte {
		printf("#_ Parser: Estructura lista_d_cte econtrada 3.\n");
	}
	| TK_ID_OTHER TK_PR_IGUAL TK_LIT_COMENTARIO TK_PR_SECUEN lista_d_cte {
		printf("#_ Parser: Estructura lista_d_cte econtrada 4.\n");
	}
	| TK_ID_OTHER TK_PR_IGUAL TK_LIT_ENTERO TK_PR_SECUEN lista_d_cte {
		printf("#_ Parser: Estructura lista_d_cte econtrada 5.\n");
	}
	| TK_ID_OTHER TK_PR_IGUAL TK_LIT_REAL TK_PR_SECUEN lista_d_cte {
		printf("#_ Parser: Estructura lista_d_cte econtrada 6.\n");
	}
	| %empty {
            printf("#_ Parser: Estructura lista_d_cte econtrada: VACIO 7.\n");
    }
;

/* pag 7 */
lista_d_var:
    lista_id TK_PR_DEFVAL d_tipo TK_PR_SECUEN lista_d_var{
        printf("#_ Parser: Estructura de lista_d_var detectada 1.\n");
    }
    | %empty{ 
        printf("#_ Parser: Estructura de lista_d_var detectada: VACIO 2.\n");
    }
;
lista_id:
    TK_ID_OTHER TK_PR_COMA lista_id{
        printf("#_ Parser: Estructura de lista_id detectada 1.\n");
    }
    | TK_ID_OTHER{
        printf("#_ Parser: Estructura de lista_id detectada 2.\n");
    }
    | TK_ID_ARI TK_PR_COMA lista_id{
        printf("#_ Parser: Estructura de lista_id detectada 3.\n");
    }
    | TK_ID_ARI {
        printf("#_ Parser: Estructura de lista_id detectada 4.\n");
    }
    | TK_ID_BOL TK_PR_COMA lista_id{
        printf("#_ Parser: Estructura de lista_id detectada 5.\n");
    }
    | TK_ID_BOL {
        printf("#_ Parser: Estructura de lista_id detectada 6.\n");
    }
;
decl_ent_sal:
    decl_ent{
        printf("#_ Parser: Estructura de decl_ent_sal detectada 1.\n");
    }
    | decl_ent decl_sal{
        printf("#_ Parser: Estructura de decl_ent_sal detectada 2.\n");
    }
    | decl_sal{
        printf("#_ Parser: Estructura de decl_ent_sal detectada 3.\n");
    }
;
decl_ent:
    TK_PR_ENT lista_d_var{
        printf("#_ Parser: Estructura de decl_ent detectada.\n");
    }
;
decl_sal:
    TK_PR_SAL lista_d_var{
        printf("#_ Parser: Estructura de decl_sal detectada.\n");
    }
;
expresion:
    exp_a {
        printf("#_ Parser: Estructura de expresion detectada 1.\n");
    }
    | exp_b {
        printf("#_ Parser: Estructura de expresion detectada 2.\n");
    }
    | funcion_ll {
        printf("#_ Parser: Estructura de expresion detectada 3.\n");
    }
;
exp_a:
    exp_a TK_PR_SUMA exp_a{
        printf("#_ Parser: Estructura de exp_a detectada 1.\n");
    }
    | exp_a TK_PR_RESTA exp_a{
        printf("#_ Parser: Estructura de exp_a detectada 2.\n");
    }
    | exp_a TK_PR_MULT exp_a{
        printf("#_ Parser: Estructura de exp_a detectada 3.\n");
    }
    | exp_a TK_PR_BARRA exp_a{
        printf("#_ Parser: Estructura de exp_a detectada 4.\n");
    }
    | exp_a TK_PR_MOD exp_a{
        printf("#_ Parser: Estructura de exp_a detectada 5.\n");
    }
    | exp_a TK_PR_DIV exp_a{
        printf("#_ Parser: Estructura de exp_a detectada 6.\n");
    }
    | TK_PR_ABRIRPAR exp_a TK_PR_CERRARPAR{
        printf("#_ Parser: Estructura de exp_a detectada 7.\n");
    }
    | operando_ari{
        printf("#_ Parser: Estructura de exp_a detectada 8.\n");
    }
    | TK_LIT_ENTERO{ /* LITERAL NUMERICO??? */
        printf("#_ Parser: Estructura de exp_a detectada 9.\n");
    }
    | TK_PR_REAL{ /* LITERAL NUMERICO??? */
        printf("#_ Parser: Estructura de exp_a detectada 10.\n");
    }
    | TK_PR_RESTA exp_a{ 
        printf("#_ Parser: Estructura de exp_a detectada 11.\n");
    }
;
exp_b:
    exp_b TK_PR_Y exp_b{
        printf("#_ Parser: Estructura de exp_b detectada 1.\n");
    }
    | exp_b TK_PR_O exp_b{
        printf("#_ Parser: Estructura de exp_b detectada 2.\n");
    }
    | TK_PR_NO exp_b{
        printf("#_ Parser: Estructura de exp_b detectada 3.\n");
    }
    | operando_bool{
        printf("#_ Parser: Estructura de exp_b detectada 4.\n");
    }
    | TK_PR_VERDADERO{
        printf("#_ Parser: Estructura de exp_b detectada 5.\n");
    }
    | TK_PR_FALSO{ 
        printf("#_ Parser: Estructura de exp_b detectada 6.\n");
    }
    | expresion TK_PR_MAYOR expresion{ 
        printf("#_ Parser: Estructura de exp_b detectada 7.\n");
    }
    | expresion TK_PR_MENOR expresion{ 
        printf("#_ Parser: Estructura de exp_b detectada 8.\n");
    }
    | expresion TK_PR_MAYIGU expresion{ 
        printf("#_ Parser: Estructura de exp_b detectada 9.\n");
    }
    | expresion TK_PR_MENIGU expresion{  
        printf("#_ Parser: Estructura de exp_b detectada 10.\n");
    }
    | expresion TK_PR_IGUAL expresion{ 
        printf("#_ Parser: Estructura de exp_b detectada 11.\n");
    }
    | expresion TK_PR_DIST expresion{ 
        printf("#_ Parser: Estructura de exp_b detectada 12.\n");
    }
    | TK_PR_ABRIRPAR exp_b TK_PR_CERRARPAR{ 
        printf("#_ Parser: Estructura de exp_b detectada 13.\n");
    }
;
operando_ari:
    TK_ID_ARI {
        printf("#_ Parser: Estructura de operando detectada 1.\n");
    }
    | operando_ari TK_PR_PUNTO operando_ari {
        printf("#_ Parser: Estructura de operando detectada 2.\n");
    }
    | operando_ari TK_PR_INIARRA expresion TK_PR_FINARRA {
        printf("#_ Parser: Estructura de operando detectada 3.\n");
    }   
    | operando_ari TK_PR_REF{
        printf("#_ Parser: Estructura de operando detectada 4.\n");
    }
;
operando_bool:
    TK_ID_BOL {
        printf("#_ Parser: Estructura de operando detectada 1.\n");
    }
    | operando_bool TK_PR_PUNTO operando_bool {
        printf("#_ Parser: Estructura de operando detectada 2.\n");
    }
    | operando_bool TK_PR_INIARRA expresion TK_PR_FINARRA {
        printf("#_ Parser: Estructura de operando detectada 3.\n");
    }   
    | operando_bool TK_PR_REF{
        printf("#_ Parser: Estructura de operando detectada 4.\n");
    }
;
instrucciones:
    instruccion TK_PR_SECUEN instrucciones{
        printf("#_ Parser: Estructura de instrucciones detectada 1.\n");
    }
    | instruccion{
        printf("#_ Parser: Estructura de instrucciones detectada 2.\n");
    }
;
instruccion:
    TK_PR_CONTINUAR{
        printf("#_ Parser: Estructura de instruccion detectada 1.\n");
    }
    | asignacion{
        printf("#_ Parser: Estructura de instruccion detectada 2.\n");
    }
    | alternativa{
        printf("#_ Parser: Estructura de instruccion detectada 3.\n");
    }
    | iteracion{
        printf("#_ Parser: Estructura de instruccion detectada 4.\n");
    }
    | accion_ll{
        printf("#_ Parser: Estructura de instruccion detectada 5.\n");
    }
;
asignacion:
    operando_ari TK_PR_ASIG expresion{
        printf("#_ Parser: Estructura de asignacion detectada.\n");
    }
    | operando_bool TK_PR_ASIG expresion{
        printf("#_ Parser: Estructura de asignacion detectada.\n");
    }
;
alternativa:
    TK_PR_SI expresion TK_PR_ENTONCES instrucciones lista_opciones TK_PR_FSI{
        printf("#_ Parser: Estructura de alternativa detectada.\n");
    }
;
lista_opciones:
    TK_PR_ELSE expresion TK_PR_ENTONCES instrucciones lista_opciones {
        printf("#_ Parser: Estructura de lista_opciones detectada 1.\n");
    }
    | %empty {
       printf("#_ Parser: Estructura de lista_opciones detectada: VACIO 2.\n");
    }
;
iteracion:
    it_cota_fija{
        printf("#_ Parser: Estructura de iteracion detectada 1.\n");
    }
    | it_cota_exp{
        printf("#_ Parser: Estructura de iteracion detectada 2.\n");
    }
;
it_cota_exp:
    TK_PR_MIENTRAS expresion TK_PR_HACER instrucciones TK_PR_FMIENTR{
        printf("#_ Parser: Estructura de it_cota_exp detectada.\n");
    }
;
it_cota_fija:
    TK_PR_PARA TK_ID_OTHER TK_PR_ASIG expresion TK_PR_HASTA expresion TK_PR_HACER instrucciones TK_PR_FPARA{
        printf("#_ Parser: Estructura de it_cota_fija detectada.\n");
    }
;
/* pag 8*/

accion_d:
	TK_PR_ACCION a_cabecera bloque TK_PR_FACCIO {
		printf("#_ Parser: Estructura accion_d econtrada.\n");
	}
;

funcion_d: 
	TK_PR_FUNCION f_cabecera bloque TK_PR_DEV expresion TK_PR_FFUNCION {
		printf("#_ Parser: Estructura funcion_d econtrada.");
	}
;

a_cabecera: 
	TK_ID_OTHER TK_PR_ABRIRPAR d_par_form TK_PR_CERRARPAR TK_PR_SECUEN {
		printf("#_ Parser: Estructura funcion_d econtrada .");
	}
;

f_cabecera:
	TK_ID_OTHER TK_PR_ABRIRPAR lista_d_var TK_PR_CERRARPAR TK_PR_DEV d_tipo TK_PR_SECUEN {
		printf("#_ Parser: Estructura f_cabecera econtrada.");
	}
;

d_par_form:
	d_p_form TK_PR_SECUEN d_par_form {
		printf("#_ Parser: Estructura d_par_form econtrada 1.");
	}
	| %empty {
        printf("#_ Parser: Estructura d_par_form econtrada:VACIO 2.");
    }
;

d_p_form:
	TK_PR_ENTERO lista_id TK_PR_DEFVAL d_tipo {
		printf("#_ Parser: Estructura d_p_form econtrada 1.");
	}
	| TK_PR_SAL lista_id TK_PR_DEFVAL d_tipo {
		printf("#_ Parser: Estructura d_p_form econtrada 2.");
	}
	| TK_PR_INOUT lista_id TK_PR_DEFVAL d_tipo {
		printf("#_ Parser: Estructura d_p_form econtrada 3.");
	}
;

accion_ll:
    TK_ID_OTHER TK_PR_ABRIRPAR l_ll TK_PR_CERRARPAR{
        printf("#_ Parser: Estructura de accion_ll detectada.\n");
    }
;
funcion_ll:
    TK_ID_OTHER TK_PR_ABRIRPAR l_ll TK_PR_CERRARPAR{
        printf("#_ Parser: Estructura de funcion_ll detectada.\n");
    }
;
l_ll:
    expresion TK_PR_COMA l_ll{
        printf("#_ Parser: Estructura de ll_ll detectada 1.\n");
    }
    | expresion{
        printf("#_ Parser: Estructura de ll_ll detectada 2.\n");
    }
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

int main (int argc, char **argv){
    ++argv, --argc;

    printf("\nCRERADORES 04-09-2020\n");
	printf("\t @Daniel del Barrio\n");
	printf("\t @Jhonny F. Chicaiza\n");

	if ( argc > 0 ){
		printf("\n");
		yyin = fopen( argv[0], "r" );
	}else{
		printf("\nInserte por teclado para comprobar\n");
		printf("Ctr + d para salir\n\n");
		yyin = stdin;
	}

	return yyparse ();
}
