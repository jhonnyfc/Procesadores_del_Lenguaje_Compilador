/* Reverse polish notation calculator.  */

%{
    #include <stdio.h>
    #include <math.h>
    int yylex (void);
    void yyerror (char const *);
    #define YYSTYPE double
%}


%token TK_PR_CONTINUAR      // CONTINUAR
%token TK_PR_DE             // DE
%token TK_PR_DEV		    // DEV
%token TK_PR_ENT			// ENT
%token TK_PR_INOUT			// E/S
%token TK_PR_HACER			// HACER
%token TK_PR_HASTA			// HASTA
%token TK_PR_REF			// REF
%token TK_PR_SAL			// SAL

%token TK_PR_FUNCION		// FUNCION
%token TK_PR_FFUNCION		// FFUNCION
%token TK_PR_ACCION         // ACCION
%token TK_PR_FACCIO	        // FACCION
%token TK_PR_ALGORIT		// ALGORITMO
%token TK_PR_FALGORI		// FALGORITMO
%token TK_PR_MIENTRAS		// MIENTRAS
%token TK_PR_FMIENTR		// FMIENTRAS
%token TK_PR_PARA			// PARA
%token TK_PR_FPARA			// FPARA
%token TK_PR_SI             // SI
%token TK_PR_FSI			// FSI

%token TK_PR_TIPO			// TIPO
%token TK_PR_FTIPO			// FTIPO
%token TK_PR_TUPLA			// TUPLA
%token TK_PR_FTUPLA         // FTUPLA
%token TK_PR_VAR			// VAR
%token TK_PR_FVAR			// FVAR
%token TK_PR_REAL			// REAL
%token TK_PR_ENTERO         // ENTERO
%token TK_PR_BOOL			// BOLEANO
%token TK_PR_CADENA         // CADENA
%token TK_PR_CHAR			// CARACTER
%token TK_PR_CONST			// CONST
%token TK_PR_FCONST         // FCONST
%token TK_PR_TABLA			// TABLA
%token TK_PR_VERDADERO      // VERDADERO 
%token TK_PR_FALSO          // FALSO

%token TK_PR_ASIG			// :=
%token TK_PR_SECUEN			// ;
%token TK_PR_ELSE			// []
%token TK_PR_INIARRA		// [
%token TK_PR_FINARRA		// ]
%token TK_PR_ENTONCES		// ->
%token TK_PR_COMA			// ,
%token TK_PR_PUNTO          // ./* Ponerlo en la prac_1*/
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
%token TK_PR_DIST           // <>
%token TK_PR_O				// O
%token TK_PR_Y				// Y
%token TK_PR_MOD			// MOD
%token TK_PR_NO				// NO

%token TK_LETRA				// [A-Z]
%token TK_CIFRA				// [0-9]
%token TK_DELIM				// [ \t\n]

%token TK_LETRA_O_CIFRA
%token TK_ID

%token TK_LIT_ENTERO
%token TK_LIT_REAL
%token TK_LIT_BOOL			// ("VERDADERO"|"FALSO")

%token TK_LIT_CARAC
%token TK_LIT_CADE
%token TK_LIT_COMENTARIO

%% /* Grammar rules and actions follow.  */

/* Pagina 5 */
desc_algoritmo: 
    TK_PR_ALGORIT TK_ID TK_PR_SECUEN cabecera_alg bloque_alg TK_PR_FALGORI {
        printf("$~ Parser: Estructura de algoritmo detectada.\n")
    }
;
cabecera_alg:
    dec_globales decl_a_f decl_ent_sal TK_LIT_COMENTARIO{
        printf("$~ Parser: Estructura de cabecera_alg detectada.\n")
    }
;
bloque_alg:
    bloque TK_LIT_COMENTARIO{
         printf("$~ Parser: Estructura de bloque_alg detectada.\n")
    }
;   
decl_globales:
    declaracion_tipo decl_globales{
        printf("$~ Parser: Estructura de decl_globales detectada 1.\n")
    } 
    | declaracion_const decl_globales{
        printf("$~ Parser: Estructura de decl_globales detectada 2.\n")
    } 
    | %empty {}
;
decl_a_f:
    accion_d decl_a_f{
        printf("$~ Parser: Estructura de decl_a_f detectada 1.\n")
    } 
    | funciond decl_a_f{
        printf("$~ Parser: Estructura de decl_a_f detectada 2.\n")
    }
    | %empty {}
;  
bloque:
    declaraciones instrucciones{
        printf("$~ Parser: Estructura de bloque detectada.\n")
    } 
;
declaraciones:
    declaracion_tipo declaraciones{
        printf("$~ Parser: Estructura de declaraciones detectada 1.\n")
    }
    | declaracion_const declaraciones{
        printf("$~ Parser: Estructura de declaraciones detectada 2.\n")
    }
    | declaracion_var declaraciones{
        printf("$~ Parser: Estructura de declaraciones detectada 3.\n")
    }
    | %empty{}
;

/* Pagina 7 */
lista_d_var:
    lista_id TK_PR_DEFVAL TK_ID TK_PR_SECUEN lista_d_var{
        printf("$~ Parser: Estructura de lista_d_var detectada 1.\n")
    }
    | lista_id TK_PR_DEFVAL d_tipo TK_PR_SECUEN lista_d_var{
        printf("$~ Parser: Estructura de lista_d_var detectada 2.\n")
    }
    | empty{}
;
lista_id:
    TK_ID TK_PR_COMA lista_id{
        printf("$~ Parser: Estructura de lista_id detectada 1.\n")
    }
    | TK_ID{
        printf("$~ Parser: Estructura de lista_id detectada 2.\n")
    }
;
decl_ent_sal:
    decl_ent{
        printf("$~ Parser: Estructura de decl_ent_sal detectada 1.\n")
    }
    | decl_ent decl_salida{
        printf("$~ Parser: Estructura de decl_ent_sal detectada 2.\n")
    }
    | decl_salida{
        printf("$~ Parser: Estructura de decl_ent_sal detectada 3.\n")
    }
;
decl_ent:
    TK_PR_ENT lista_d_var{
        printf("$~ Parser: Estructura de decl_ent detectada.\n")
    }
;
decl_sal:
    TK_PR_SAL lista_d_var{
        printf("$~ Parser: Estructura de decl_sal detectada.\n")
    }
;
expresion:
    exp_a{
        printf("$~ Parser: Estructura de expresion detectada 1.\n")
    }
    | exp_b{
        printf("$~ Parser: Estructura de expresion detectada 2.\n")
    }
    | funcion_ll{
        printf("$~ Parser: Estructura de expresion detectada 3.\n")
    }
;
exp_a:
    exp_a TK_PR_SUMA exp_a{
        printf("$~ Parser: Estructura de exp_a detectada 1.\n")
    }
    | exp_a TK_PR_RESTA exp_a{
        printf("$~ Parser: Estructura de exp_a detectada 2.\n")
    }
    | exp_a TK_PR_MULT exp_a{
        printf("$~ Parser: Estructura de exp_a detectada 3.\n")
    }
    | exp_a TK_PR_BARRA exp_a{
        printf("$~ Parser: Estructura de exp_a detectada 4.\n")
    }
    | exp_a TK_PR_MOD exp_a{
        printf("$~ Parser: Estructura de exp_a detectada 5.\n")
    }
    | exp_a TK_PR_DIV exp_a{
        printf("$~ Parser: Estructura de exp_a detectada 6.\n")
    }
    | TK_PR_ABRIRPAR exp_a TK_PR_CERRARPAR{
        printf("$~ Parser: Estructura de exp_a detectada 7.\n")
    }
    | operando{
        printf("$~ Parser: Estructura de exp_a detectada 8.\n")
    }
    | TK_LIT_ENTERO{ /* LITERAL NUMERICO??? */
        printf("$~ Parser: Estructura de exp_a detectada 9.\n")
    }
    | TK_PR_REAL{ /* LITERAL NUMERICO??? */
        printf("$~ Parser: Estructura de exp_a detectada 10.\n")
    }
    | TK_PR_RESTA exp_a{ 
        printf("$~ Parser: Estructura de exp_a detectada 11.\n")
    }
;
exp_b:
    exp_b TK_PR_Y exp_b{
        printf("$~ Parser: Estructura de exp_b detectada 1.\n")
    }
    | exp_b TK_PR_O exp_b{
        printf("$~ Parser: Estructura de exp_b detectada 2.\n")
    }
    | TK_PR_NO exp_b{
        printf("$~ Parser: Estructura de exp_b detectada 3.\n")
    }
    | operando{
        printf("$~ Parser: Estructura de exp_b detectada 4.\n")
    }
    | TK_PR_VERDADERO{ 
        printf("$~ Parser: Estructura de exp_b detectada 5.\n")
    }
    | TK_PR_FALSO{ 
        printf("$~ Parser: Estructura de exp_b detectada 6.\n")
    }
    | expresion TK_PR_MAYOR expresion{ 
        printf("$~ Parser: Estructura de exp_b detectada 7.\n")
    }
    | expresion TK_PR_MENOR expresion{ 
        printf("$~ Parser: Estructura de exp_b detectada 8.\n")
    }
    | expresion TK_PR_MAYIGU expresion{ 
        printf("$~ Parser: Estructura de exp_b detectada 9.\n")
    }
    | expresion TK_PR_MENIGU expresion{  
        printf("$~ Parser: Estructura de exp_b detectada 10.\n")
    }
    | expresion TK_PR_IGUAL expresion{ 
        printf("$~ Parser: Estructura de exp_b detectada 11.\n")
    }
    | expresion TK_PR_DIST expresion{ 
        printf("$~ Parser: Estructura de exp_b detectada 12.\n")
    }
    | TK_PR_ABRIRPAR exp_b TK_PR_CERRARPAR{ 
        printf("$~ Parser: Estructura de exp_b detectada 13.\n")
    }
;
operando:
    TK_ID{
        printf("$~ Parser: Estructura de operando detectada 1.\n")
    }
    | operando TK_PR_PUNTO operando {
        printf("$~ Parser: Estructura de operando detectada 2.\n")
    }
    | operando TK_PR_INIARRA expresion TK_PR_FINARRA{
        printf("$~ Parser: Estructura de operando detectada 3.\n")
    }   
    | operando TK_PR_REF{
        printf("$~ Parser: Estructura de operando detectada 4.\n")
    }
;
instrucciones:
    instruccion TK_PR_SECUEN instrucciones{
        printf("$~ Parser: Estructura de instrucciones detectada 1.\n")
    }
    | instruccion{
        printf("$~ Parser: Estructura de instrucciones detectada 2.\n")
    }
;
instruccion:
    TK_PR_CONTINUAR{
        printf("$~ Parser: Estructura de instruccion detectada 1.\n")
    }
    | asignacion{
        printf("$~ Parser: Estructura de instruccion detectada 2.\n")
    }
    | alternativa{
        printf("$~ Parser: Estructura de instruccion detectada 3.\n")
    }
    | iteracion{
        printf("$~ Parser: Estructura de instruccion detectada 4.\n")
    }
    | accion.ll{
        printf("$~ Parser: Estructura de instruccion detectada 5.\n")
    }
;
asignacion:
    operando TK_PR_ASIG expresion{
        printf("$~ Parser: Estructura de asignacion detectada.\n")
    }
;
alternativa:
    TK_PR_SI expresion TK_PR_ENTONCES instrucciones lista_opciones TK_PR_FSI{
        printf("$~ Parser: Estructura de alternativa detectada.\n")
    }
;
lista.opciones:
    TK_PR_ELSE expresion TK_PR_ENTONCES instrucciones lista_opciones TK_PR_FSI{
        printf("$~ Parser: Estructura de lista.opciones detectada.\n")
    }
;
iteracion:
    it_cota_fija{
        printf("$~ Parser: Estructura de iteracion detectada 1.\n")
    }
    | it_cota_exp{
        printf("$~ Parser: Estructura de iteracion detectada 2.\n")
    }
;
it_cota_exp:
    TK_PR_MIENTRAS expresion TK_PR_HACER instrucciones TK_PR_FMIENTR{
        printf("$~ Parser: Estructura de it_cota_exp detectada.\n")
    }
;
it_cota_fija:
    TK_PR_PARA TK_ID TK_PR_ASIG expresion TK_PR_HASTA expresion TK_PR_HACER instrucciones TK_PR_FPARA{
        printf("$~ Parser: Estructura de it_cota_fija detectada.\n")
    }
;

/* Pagina 8 final */
accion_ll:
    TK_ID TK_PR_ABRIRPAR l_ll TK_PR_CERRARPAR{
        printf("$~ Parser: Estructura de accion_ll detectada.\n")
    }
;
funcion_ll:
    TK_ID TK_PR_ABRIRPAR l_ll TK_PR_CERRARPAR{
        printf("$~ Parser: Estructura de funcion_ll detectada.\n")
    }
;
l_ll:
    expresion TK_PR_COMA l_ll{
        printf("$~ Parser: Estructura de ll_ll detectada 1.\n")
    }
    | expresion{
        printf("$~ Parser: Estructura de ll_ll detectada 2.\n")
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
