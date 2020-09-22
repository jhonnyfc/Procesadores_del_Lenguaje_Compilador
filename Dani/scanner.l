
%{


%}

ER_CIFRA    		[0-9]
ER_LETRA    		[A-Za-z]
ER_DELIM    		[ \t\n]

ER_LETRA_O_CIFRA 	{ER_LETRA}|{ER_CIFRA}
ER_ID	    		{ER_LETRA}({ER_LETRA}|{ER_CIFRA})*
ER_LIT_REAL			(\+|\-)?{ER_CIFRA}{ER_CIFRA}*(\.{ER_CIFRA}{ER_CIFRA}*)?((e|E){ER_CIFRA}{ER_CIFRA}*)?
ER_LIT_CARAC		\".\"
ER_LIT_CADE			\"({ER_LETRA}|{ER_CIFRA}|{ER_DELIM})*\"
ER_LIT_COMENTARIO	\{({ER_LETRA}|{ER_CIFRA}|{ER_DELIM})*\}

%%

{ER_LIT_REAL}        {
        printf( "Real: %s (%f)\n", yytext, atof( yytext ) );
}

{ER_LETRA}    {
        printf( "Letra: %s \n", yytext);
}

{ER_ID}	{
		printf( "Id: %s \n", yytext );
}

{ER_LIT_CARAC}	{
		printf( "Literal caracter: %s \n", yytext );
}

{ER_LIT_CADE}	{
		printf( "Literal cadena: %s \n", yytext );
}

{ER_LIT_COMENTARIO}	{
		printf( "Comentario: %s \n", yytext );
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