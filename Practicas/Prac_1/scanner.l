	/*Scanner para el lenguaje descrito en la practica*/

%option caseless
%{
/* Constantes manisfiestas */
%}
/*Exprasiones regulares*/
ER_PR_ACCION		"ACCION"
ER_PR_ALGORIT		"ALGORTIMO"
ER_PR_BOOL			"BOLEANO"
ER_PR_CADENA		"CADENA"
ER_PR_CHAR			"CARACTER"
ER_PR_CONST			"CONST"
ER_PR_CONTINUAR		"CONTINUAR"
ER_PR_DE			"DE"
ER_PR_DEV			"DEV"
ER_PR_DIV			"DIV"
ER_PR_ENT			"ENT"
ER_PR_ENTERO		"ENTERO"
ER_PR_INOUT			"E/S"
ER_PR_FACCIO		"FACCION"
ER_PR_FALGORI		"FALGORITMO"
ER_PR_FALSO			"FALSO"
ER_PR_VERDADERO		"VERDADERO"
ER_PR_FCONST		"FCONST"
ER_PR_FFUNCION		"FFUNCION"
ER_PR_FMIENTR		"FMIENTRAS"
ER_PR_FPARA			"FPARA"
ER_PR_FSI			"FSI"
ER_PR_FTIPO			"FTIPO"
ER_PR_FTUPLA		"FTUPLA"
ER_PR_FUNCION		"FUNCION"
ER_PR_FVAR			"FVAR"
ER_PR_HACER			"HACER"ls
ER_PR_HASTA			"HASTA"
ER_PR_MIENTRAS		"MIENTRAS"
ER_PR_MOD			"MOD"
ER_PR_NO			"NO"
ER_PR_O				"O"
ER_PR_PARA			"PARA"
ER_PR_REAL			"REAL"
ER_PR_REF			"REF"
ER_PR_SAL			"SAL"
ER_PR_SI			"SI"
ER_PR_TABLA			"TABLA"
ER_PR_TIPO			"TIPO"
ER_PR_TUPLA			"TUPLA"
ER_PR_VAR			"VAR"
ER_PR_Y				"Y"

ER_LETRA			[A-Z]
ER_CIFRA  			[0-9]
ER_DELIM			[ \t\n]


ER_LETRA_O_CIFRA 	{ER_LETRA}|{ER_CIFRA}
ER_ID	    		{ER_LETRA}({ER_LETRA}|{ER_CIFRA})*

ER_LIT_ENTERO		(\+|\-)?{ER_CIFRA}{ER_CIFRA}*((e|E){ER_CIFRA}{ER_CIFRA}*)?
ER_LIT_REAL			(\+|\-)?{ER_CIFRA}{ER_CIFRA}*(\.{ER_CIFRA}{ER_CIFRA}*)?((e|E){ER_CIFRA}{ER_CIFRA}*)?
ER_LIT_BOOL			{ER_PR_VERDADERO}|{ER_PR_FALSO}

ER_LIT_CARAC		\".\"
ER_LIT_CADE			\"({ER_LETRA}|{ER_CIFRA}|{ER_DELIM})*\"

%%

{ER_ID} {
		printf( "$: Id: %s \n", yytext );
}


{ER_LIT_ENTERO} {
		printf( "$: Entero: %s (%f)\n", yytext, atof( yytext ) );
}

{ER_LIT_REAL} {
        printf( "$: Real: %s (%f)\n", yytext, atof( yytext ) );
}

{ER_LIT_BOOL} {
		printf( "$: Boleano: %s \n", yytext);
}

{ER_LIT_CARAC} {
		printf("$: Literal caracter: %s \n", yytext );
}

{ER_LIT_CADE} {
		printf( "$: Literal cadena: %s \n", yytext );
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