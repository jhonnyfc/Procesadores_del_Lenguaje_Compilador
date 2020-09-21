	/* scanner for a toy Pascal-like language */

%{
/* Constantes manisfiestas */
#include <math.h>
%}
ER_LETRA		[a-zA-Z]
ER_CIFRA  		[0-9]
ER_DELIM		[ \t\n]

ER_LIT_ENTERO	(\+|\-)?{ER_CIFRA}{ER_CIFRA}*((e|E){ER_CIFRA}{ER_CIFRA}*)?
ER_LIT_BOOL		"verdadero"|"falso"
%%

{ER_LIT_ENTERO}		{
		printf( "$: Entero: %s (%f)\n", yytext, atof( yytext ) );
}

{ER_LIT_BOOL}		{
		printf( "$: Boleano: %s \n", yytext);
}


%%

int main( int argc, char **argv ){
	++argv, --argc;  /* skip over pogram name */
	if ( argc > 0 )
		yyin = fopen( argv[0], "r" );
	else
		yyin = stdin;

	yylex();
}