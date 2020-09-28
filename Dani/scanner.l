
/*Indicar a Fitxi de que usamos esta opcion*/
%option caseless 
%{


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
ER_PR_HACER			"HACER"
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
ER_PR_ASIG			\:\=
ES_PR_SECUEN		";"
ES_PR_ELSE			\[\]
ES_PR_INIARRA		\[
ES_PR_FINARRA		\]
ES_PR_ENTONCES		\-\>
ES_PR_COMA			","
ES_PR_SUBRANGO		".."
ES_PR_DEFVAL		":"
ES_PR_IGUAL			"="	

ES_PR_BARRA 		"/"
ES_PR_ABRIRPAR		"("
ES_PR_CERRARPAR		")"
ES_PR_SUMA			"+"
ES_PR_MULT			"*"
ES_PR_RESTA			"-"
ES_PR_ABRIRLLAVE	"{"
ES_PR_CERRARLLAVE	"}"
ES_PR_MAYOR			">"
ES_PR_MENOR			"<"
ES_PR_MAYIGU		">="
ES_PR_MENIGU		"<="

ER_CIFRA    		[0-9]
ER_LETRA    		[A-Za-z]
ER_DELIM    		[ \t\n]
  
ER_LETRA_O_CIFRA 	{ER_LETRA}|{ER_CIFRA}
ER_ID	    		{ER_LETRA}({ER_LETRA}|{ER_CIFRA})*
ER_LIT_REAL		(\+|\-)?{ER_CIFRA}{ER_CIFRA}*(\.{ER_CIFRA}{ER_CIFRA}*)?((e|E){ER_CIFRA}{ER_CIFRA}*)?
ER_LIT_CARAC		\".\"
ER_LIT_CADE		\"({ER_LETRA}|{ER_CIFRA}|{ER_DELIM})*\"
ER_LIT_COMENTARIO	\{([^}]|(\/\}[^}])*)*\}*\}


%%

{ER_PR_ACCION} {printf("$: Palabra reservada 'ACCION': %s \n", yytext );}
{ER_PR_ALGORIT} {printf("$: Palabra reservada 'ALGORITMO': %s \n", yytext );}
{ER_PR_BOOL} {printf("$: Palabra reservada 'BOLEANO': %s \n", yytext );}
{ER_PR_CADENA} {printf("$: Palabra reservada 'CADENA': %s \n", yytext );}
{ER_PR_CHAR} {printf("$: Palabra reservada 'CHAR': %s \n", yytext );}
{ER_PR_CONST} {printf("$: Palabra reservada 'CONST': %s \n", yytext );}
{ER_PR_CONTINUAR} {printf("$: Palabra reservada 'CONTINUAR': %s \n", yytext );}
{ER_PR_DE} {printf("$: Palabra reservada 'DE': %s \n", yytext );}
{ER_PR_DEV} {printf("$: Palabra reservada 'DEV': %s \n", yytext );}
{ER_PR_DIV} {printf("$: Palabra reservada 'DIV': %s \n", yytext );}
{ER_PR_ENT} {printf("$: Palabra reservada 'ENT': %s \n", yytext );}
{ER_PR_ENTERO} {printf("$: Palabra reservada 'ENTERO': %s \n", yytext );}
{ER_PR_INOUT} {printf("$: Palabra reservada 'E/S': %s \n", yytext );}
{ER_PR_FACCIO} {printf("$: Palabra reservada 'FACCION': %s \n", yytext );}
{ER_PR_FALGORI} {printf("$: Palabra reservada 'FALGORITMO': %s \n", yytext );}
{ER_PR_FALSO} {printf("$: Palabra reservada 'FALSO': %s \n", yytext );}
{ER_PR_VERDADERO} {printf("$: Palabra reservada 'VERDADERO': %s \n", yytext );}
{ER_PR_FCONST} {printf("$: Palabra reservada 'FCONST': %s \n", yytext );}
{ER_PR_FFUNCION} {printf("$: Palabra reservada 'FFUNCION': %s \n", yytext );}
{ER_PR_FMIENTR} {printf("$: Palabra reservada 'FMIENTRAS': %s \n", yytext );}
{ER_PR_FPARA} {printf("$: Palabra reservada 'FPARA': %s \n", yytext );}
{ER_PR_FSI} {printf("$: Palabra reservada 'FSI': %s \n", yytext );}
{ER_PR_FTIPO} {printf("$: Palabra reservada 'FTIPO': %s \n", yytext );}
{ER_PR_FTUPLA} {printf("$: Palabra reservada 'FTUPLA': %s \n", yytext );}
{ER_PR_FUNCION} {printf("$: Palabra reservada 'FUNCION': %s \n", yytext );}
{ER_PR_FMIENTR} {printf("$: Palabra reservada 'FVAR': %s \n", yytext );}
{ER_PR_HACER} {printf("$: Palabra reservada 'HACER': %s \n", yytext );}
{ER_PR_HASTA} {printf("$: Palabra reservada 'HASTA': %s \n", yytext );}
{ER_PR_MIENTRAS} {printf("$: Palabra reservada 'MIENTRAS': %s \n", yytext );}
{ER_PR_MOD} {printf("$: Palabra reservada 'MOD': %s \n", yytext );}
{ER_PR_NO} {printf("$: Palabra reservada 'NO': %s \n", yytext );}
{ER_PR_O} {printf("$: Palabra reservada 'O': %s \n", yytext );}
{ER_PR_PARA} {printf("$: Palabra reservada 'PARA': %s \n", yytext );}
{ER_PR_REAL} {printf("$: Palabra reservada 'REAL': %s \n", yytext );}
{ER_PR_REF} {printf("$: Palabra reservada 'REF': %s \n", yytext );}
{ER_PR_SAL} {printf("$: Palabra reservada 'SAL': %s \n", yytext );}
{ER_PR_SI} {printf("$: Palabra reservada 'SI': %s \n", yytext );}
{ER_PR_TABLA} {printf("$: Palabra reservada 'TABLA': %s \n", yytext );}
{ER_PR_TIPO} {printf("$: Palabra reservada 'TIPO': %s \n", yytext );}
{ER_PR_TUPLA} {printf("$: Palabra reservada 'TUPLA': %s \n", yytext );}
{ER_PR_VAR} {printf("$: Palabra reservada 'VAR': %s \n", yytext );}
{ER_PR_Y} {printf("$: Palabra reservada 'Y': %s \n", yytext );}

{ER_PR_ASIG} {printf("$: Token: %s \n", yytext );}
{ES_PR_SECUEN} {printf("$: Token: %s \n", yytext );}
{ES_PR_ELSE} {printf("$: Token: %s \n", yytext );}
{ES_PR_INIARRA} {printf("$: Token: %s \n", yytext );}
{ES_PR_ENTONCES} {printf("$: Token: %s \n", yytext );}
{ES_PR_COMA} {printf("$: Token: %s \n", yytext );}
{ES_PR_SUBRANGO} {printf("$: Token: %s \n", yytext );}
{ES_PR_DEFVAL} {printf("$: Token: %s \n", yytext );}
{ES_PR_IGUAL} {printf("$: Token: %s \n", yytext );}
{ES_PR_BARRA} {printf("$: Token: %s \n", yytext );}
{ES_PR_ABRIRPAR} {printf("$: Token: %s \n", yytext );}
{ES_PR_CERRARPAR} {printf("$: Token: %s \n", yytext );}ç
{ES_PR_SUMA} {printf("$: Token: %s \n", yytext );}
{ES_PR_MULT} {printf("$: Token: %s \n", yytext );}
{ES_PR_RESTA} {printf("$: Token: %s \n", yytext );}
{ES_PR_ABRIRLLAVE} {printf("$: Token: %s \n", yytext );}
{ES_PR_CERRARLLAVE} {printf("$: Token: %s \n", yytext );}
{ES_PR_MAYOR} {printf("$: Token: %s \n", yytext );}
{ES_PR_MENOR} {printf("$: Token: %s \n", yytext );}
{ES_PR_MAYIGU} {printf("$: Token: %s \n", yytext );}
{ES_PR_MENIGU} {printf("$: Token: %s \n", yytext );}




{ER_LETRA} {
        printf("$: Letra: %s \n", yytext);
}

{ER_ID} {
		printf("$: Id: %s \n", yytext );
}

{ER_LIT_REAL} {
        printf("$: Real: %s (%f)\n", yytext, atof( yytext ) );
}

{ER_LIT_CARAC} {
		printf("$: Literal caracter: %s \n", yytext );
}

{ER_LIT_CADE} {
		printf("$: Literal cadena: %s \n", yytext );
}

{ER_LIT_COMENTARIO} {
		printf("$: Comentario: %s \n", yytext );
}




%%

int main( int argc, char **argv ){
	++argv, --argc;  /* skip over program name */
	if ( argc > 0 )
		yyin = fopen( argv[0], "r" );
	else
		yyin = stdin;

	yylex();
	}  
