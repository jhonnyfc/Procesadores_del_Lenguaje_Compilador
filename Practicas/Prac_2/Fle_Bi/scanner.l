	/*Scanner para el lenguaje descrito en la practica*/
	
	/* Flaga para hacer minusculas y mayusculas indistinguibles*/
	/*%option caseless -> se puede utilizar este en vez de poner -> ?i:*/
%{
/* Constantes manisfiestas */
 #include parser.tab.c
%}
/*Exprasiones regulares*/

ER_PR_CONTINUAR		?i:"CONTINUAR"
ER_PR_DE			?i:"DE"
ER_PR_DEV			?i:"DEV"
ER_PR_ENT			?i:"ENT"
ER_PR_INOUT			?i:"E/S"
ER_PR_HACER			?i:"HACER"
ER_PR_HASTA			?i:"HASTA"
ER_PR_REF			?i:"REF"
ER_PR_SAL			?i:"SAL"
ER_PR_VERDADERO		?i:"VERDADERO"
ER_PR_FALSO			?i:"FALSO"

ER_PR_FUNCION		?i:"FUNCION"
ER_PR_FFUNCION		?i:"FFUNCION"
ER_PR_ACCION		?i:"ACCION"
ER_PR_FACCIO		?i:"FACCION"
ER_PR_ALGORIT		?i:"ALGORITMO"
ER_PR_FALGORI		?i:"FALGORITMO"
ER_PR_MIENTRAS		?i:"MIENTRAS"
ER_PR_FMIENTR		?i:"FMIENTRAS"
ER_PR_PARA			?i:"PARA"
ER_PR_FPARA			?i:"FPARA"
ER_PR_SI			?i:"SI"
ER_PR_FSI			?i:"FSI"

ER_PR_TIPO			?i:"TIPO"
ER_PR_FTIPO			?i:"FTIPO"
ER_PR_TUPLA			?i:"TUPLA"
ER_PR_FTUPLA		?i:"FTUPLA"
ER_PR_VAR			?i:"VAR"
ER_PR_FVAR			?i:"FVAR"
ER_PR_REAL			?i:"REAL"
ER_PR_ENTERO		?i:"ENTERO"
ER_PR_BOOL			?i:"BOLEANO"
ER_PR_CADENA		?i:"CADENA"
ER_PR_CHAR			?i:"CARACTER"
ER_PR_CONST			?i:"CONST"
ER_PR_FCONST		?i:"FCONST"
ER_PR_TABLA			?i:"TABLA"

ER_PR_ASIG			":="
ER_PR_SECUEN		";"
ER_PR_ELSE			"[]"
ER_PR_INIARRA		"["
ER_PR_FINARRA		"]"
ER_PR_ENTONCES		"->"
ER_PR_COMA			","
ER_PR_PUNTO			"."
ER_PR_SUBRANGO		".."
ER_PR_DEFVAL		":"
ER_PR_ABRIRPAR		"("
ER_PR_CERRARPAR		")"
ER_PR_ABRIRLLAVE	"{"
ER_PR_CERRARLLAVE	"}"

ER_PR_SUMA			"+"
ER_PR_MULT			"*"
ER_PR_RESTA			"-"
ER_PR_BARRA			"/"
ER_PR_DIV			?i:"DIV"
ER_PR_MOD			?i:"MOD"
ER_PR_MAYOR			">"
ER_PR_MENOR			"<"
ER_PR_MAYIGU		">="
ER_PR_MENIGU		"<="
ER_PR_IGUAL			"="
ER_PR_DIST			"<>"
ER_PR_O				?i:"O"
ER_PR_Y				?i:"Y"
ER_PR_NO			?i:"NO"

ER_LETRA			?i:[A-Z]
ER_CIFRA			?i:[0-9]
ER_DELIM			?i:[ \t\n]

ER_LETRA_O_CIFRA	{ER_LETRA}|{ER_CIFRA}
/*ER_ID				{ER_LETRA}({ER_LETRA}|{ER_CIFRA})* */
ER_ID_OTHER			?i:"O_"({ER_LETRA}|{ER_CIFRA})*
ER_ID_ARI			?i:"A_"({ER_LETRA}|{ER_CIFRA})*
ER_ID_BOOL			?i:"B_"({ER_LETRA}|{ER_CIFRA})*

ER_LIT_ENTERO		(\+|\-)?{ER_CIFRA}{ER_CIFRA}*((e|E){ER_CIFRA}{ER_CIFRA}*)?
ER_LIT_REAL			(\+|\-)?{ER_CIFRA}{ER_CIFRA}*(\.{ER_CIFRA}{ER_CIFRA}*)?((e|E){ER_CIFRA}{ER_CIFRA}*)?
ER_LIT_BOOL			{ER_PR_VERDADERO}|{ER_PR_FALSO}

ER_LIT_CARAC		(\".\")
ER_LIT_CADE			(\"([^"]|(\/\"[^"])*)*\"*\")
ER_LIT_COMENTARIO	(\{([^}]|(\/\}[^}])*)*\}*\})

ER_CARAC_DESCO		.

%%

{ER_PR_ACCION}		{printf("$: Palabra reservada 'ACCION': %s \n", yytext );}
{ER_PR_ALGORIT}		{printf("$: Palabra reservada 'ALGORITMO': %s \n", yytext );}
{ER_PR_BOOL}		{printf("$: Palabra reservada 'BOLEANO': %s \n", yytext );}
{ER_PR_CADENA}		{printf("$: Palabra reservada 'CADENA': %s \n", yytext );}
{ER_PR_CHAR}		{printf("$: Palabra reservada 'CHAR': %s \n", yytext );}
{ER_PR_CONST}		{printf("$: Palabra reservada 'CONST': %s \n", yytext );}
{ER_PR_CONTINUAR}	{printf("$: Palabra reservada 'CONTINUAR': %s \n", yytext );}
{ER_PR_DE}			{printf("$: Palabra reservada 'DE': %s \n", yytext );}
{ER_PR_DEV}			{printf("$: Palabra reservada 'DEV': %s \n", yytext );}
{ER_PR_DIV}			{printf("$: Palabra reservada 'DIV': %s \n", yytext );}
{ER_PR_ENT}			{printf("$: Palabra reservada 'ENT': %s \n", yytext );}
{ER_PR_ENTERO}		{printf("$: Palabra reservada 'ENTERO': %s \n", yytext );}
{ER_PR_INOUT}		{printf("$: Palabra reservada 'E/S': %s \n", yytext );}
{ER_PR_FACCIO}		{printf("$: Palabra reservada 'FACCION': %s \n", yytext );}
{ER_PR_FALGORI}		{printf("$: Palabra reservada 'FALGORITMO': %s \n", yytext );}
{ER_PR_FCONST}		{printf("$: Palabra reservada 'FCONST': %s \n", yytext );}
{ER_PR_FFUNCION}	{printf("$: Palabra reservada 'FFUNCION': %s \n", yytext );}
{ER_PR_FMIENTR}		{printf("$: Palabra reservada 'FMIENTRAS': %s \n", yytext );}
{ER_PR_FPARA}		{printf("$: Palabra reservada 'FPARA': %s \n", yytext );}
{ER_PR_FSI}			{printf("$: Palabra reservada 'FSI': %s \n", yytext );}
{ER_PR_FTIPO}		{printf("$: Palabra reservada 'FTIPO': %s \n", yytext );}
{ER_PR_FTUPLA}		{printf("$: Palabra reservada 'FTUPLA': %s \n", yytext );}
{ER_PR_FUNCION}		{printf("$: Palabra reservada 'FUNCION': %s \n", yytext );}
{ER_PR_FVAR}		{printf("$: Palabra reservada 'FVAR': %s \n", yytext );}
{ER_PR_HACER}		{printf("$: Palabra reservada 'HACER': %s \n", yytext );}
{ER_PR_HASTA}		{printf("$: Palabra reservada 'HASTA': %s \n", yytext );}
{ER_PR_MIENTRAS}	{printf("$: Palabra reservada 'MIENTRAS': %s \n", yytext );}
{ER_PR_MOD}			{printf("$: Palabra reservada 'MOD': %s \n", yytext );}
{ER_PR_NO}			{printf("$: Palabra reservada 'NO': %s \n", yytext );}
{ER_PR_O}			{printf("$: Palabra reservada 'O': %s \n", yytext );}
{ER_PR_PARA}		{printf("$: Palabra reservada 'PARA': %s \n", yytext );}
{ER_PR_REAL}		{printf("$: Palabra reservada 'REAL': %s \n", yytext );}
{ER_PR_REF}			{printf("$: Palabra reservada 'REF': %s \n", yytext );}
{ER_PR_SAL}			{printf("$: Palabra reservada 'SAL': %s \n", yytext );}
{ER_PR_SI}			{printf("$: Palabra reservada 'SI': %s \n", yytext );}
{ER_PR_TABLA}		{printf("$: Palabra reservada 'TABLA': %s \n", yytext );}
{ER_PR_TIPO}		{printf("$: Palabra reservada 'TIPO': %s \n", yytext );}
{ER_PR_TUPLA}		{printf("$: Palabra reservada 'TUPLA': %s \n", yytext );}
{ER_PR_VAR}			{printf("$: Palabra reservada 'VAR': %s \n", yytext );}
{ER_PR_Y}			{printf("$: Palabra reservada 'Y': %s \n", yytext );}
{ER_PR_ASIG}		{printf("$: Token: %s \n", yytext );}
{ER_PR_SECUEN}		{printf("$: Token: %s \n", yytext );}
{ER_PR_ELSE}		{printf("$: Token else: %s \n", yytext );}
{ER_PR_INIARRA}		{printf("$: Token: %s \n", yytext );}
{ER_PR_ENTONCES}	{printf("$: Token: %s \n", yytext );}
{ER_PR_COMA}		{printf("$: Token: %s \n", yytext );
					return TK_PR_COMA;}
{ER_PR_PUNTO}		{printf("$: Token: %s \n", yytext );
					return TK_PR_PUNTO;}
{ER_PR_SUBRANGO}	{printf("$: Token: %s \n", yytext );
					return TK_PR_SUBRANGO;}
{ER_PR_DEFVAL}		{printf("$: Token: %s \n", yytext );
					return TK_PR_DEFVAL}
{ER_PR_IGUAL}		{printf("$: Token: %s \n", yytext );
					return TK_PR_IGUAL}
{ER_PR_DIST}		{printf("$: Token: %s \n", yytext );
					return TK_PR_DIST}
{ER_PR_BARRA}		{printf("$: Token: %s \n", yytext );
					return TK_PR_BARRA;}
{ER_PR_ABRIRPAR}	{printf("$: Token: %s \n", yytext );
					return TK_PR_ABRIRPAR;}
{ER_PR_CERRARPAR}	{printf("$: Token: %s \n", yytext );
					return TK_PR_CERRARPAR}
{ER_PR_SUMA}		{printf("$: Token: %s \n", yytext );
					return TK_PR_SUMA;}
{ER_PR_MULT}		{printf("$: Token: %s \n", yytext );
					return TK_PR_MULT;}
{ER_PR_RESTA}		{printf("$: Token: %s \n", yytext );
					return TK_PR_RESTA;}
{ER_PR_ABRIRLLAVE}	{printf("$: Token: %s \n", yytext );}
{ER_PR_CERRARLLAVE}	{printf("$: Token: %s \n", yytext );}

{ER_PR_MAYOR}		{printf("$: Token: %s \n", yytext );
					return TK_PR_MAYOR;}
{ER_PR_MENOR}		{printf("$: Token: %s \n", yytext );
					return TK_PR_MENOR}
{ER_PR_MAYIGU}		{printf("$: Token: %s \n", yytext );
					return TK_PR_MAYIGU;}
{ER_PR_MENIGU}		{printf("$: Token: %s \n", yytext );
					return TK_PR_MENIGU;}
{ER_LIT_BOOL}		{printf("$: Boleano: %s \n", yytext);
					return TK_ID_BOL;}
{ER_ID_OTHER}		{printf("$: Id general: %s \n", yytext );
					return TK_ID_OTHER;}
{ER_ID_ARI}			{printf("$: Id ari: %s \n", yytext );
					return TK_ID_ARI;}
{ER_ID_BOOL}		{printf("$: Id bool: %s \n", yytext );
					return TK_LIT_BOOL;}
{ER_LIT_ENTERO}		{printf("$: Entero: %d\n", (int)atof( yytext ) );
					return TK_LIT_ENTERO;}
{ER_LIT_REAL}		{printf("$: Real: %f\n", atof( yytext ) );
					return TK_LIT_REAL;}
{ER_LIT_CARAC}		{printf("$: Literal caracter: %s \n", yytext );
					return TK_LIT_CARAC;}
{ER_LIT_CADE}		{printf("$: Literal cadena: %s \n", yytext );
					return TK_LIT_CADE;}
{ER_LIT_COMENTARIO}	{printf("$: Literal comentario: %s \n", yytext );
					return TK_LIT_COMENTARIO;}

{ER_DELIM}			{}
{ER_CARAC_DESCO}	{printf("%%: Caracter desconocido: %s \n", yytext );}

%%

int main( int argc, char **argv ){
	printf("\nCRERADORES 04-09-2020\n");
	printf("\t @Daniel del Barrio\n");
	printf("\t @Jhonny F. Chicaiza\n");

	++argv, --argc;  /* skip over pogram name */
	if ( argc > 0 ){
		printf("\n");
		yyin = fopen( argv[0], "r" );
	}else{
		printf("\nInserte por teclado para comprobar\n");
		printf("Ctr + d para salir\n\n");
		yyin = stdin;
	}
	yylex();
}