	/*Scanner para el lenguaje descrito en la practica*/
	
	/* Flaga para hacer minusculas y mayusculas indistinguibles*/
	/*%option caseless -> se puede utilizar este en vez de poner -> ?i:*/
%{
	/*Constantes Manifiestas*/
	#include "utiles.h"
	#include "tab_sim.h"
	#include "tab_cua.h"
	#include "bool_tools.h"
	#include "parser.tab.h"
%}

/*Exprasiones regulares*/
%option yylineno

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
ER_ID_ARI			?i:"A_"({ER_LETRA}|{ER_CIFRA})*
ER_ID_BOOL			?i:"B_"({ER_LETRA}|{ER_CIFRA})*

ER_LIT_CARAC		(\".\")
ER_LIT_CADE			(\"([^"]|(\/\"[^"])*)*\"*\")
ER_LIT_COMENTARIO	(\{([^}]|(\/\}[^}])*)*\}*\})

ER_LIT_ENTERO		(\+|\-)?{ER_CIFRA}{ER_CIFRA}*((e|E){ER_CIFRA}{ER_CIFRA}*)?
ER_LIT_REAL			(\+|\-)?{ER_CIFRA}{ER_CIFRA}*(\.{ER_CIFRA}{ER_CIFRA}*)?((e|E){ER_CIFRA}{ER_CIFRA}*)?
ER_LIT_BOOL			{ER_PR_VERDADERO}|{ER_PR_FALSO}

ER_CARAC_DESCO		.

%%

{ER_PR_ACCION}		{
	#ifdef DEBUG_MOD
		printf("$: Palabra reservada 'ACCION': %s \n", yytext ); 
	#endif
	return TK_PR_ACCION;
}
{ER_PR_ALGORIT}		{
	#ifdef DEBUG_MOD
		printf("$: Palabra reservada 'ALGORITMO': %s \n", yytext ); 
	#endif
	return TK_PR_ALGORIT;
}
{ER_PR_BOOL}		{
	#ifdef DEBUG_MOD
		printf("$: Palabra reservada 'BOLEANO': %s \n", yytext ); 
	#endif
	return TK_PR_BOOL;
}
{ER_PR_CADENA}		{
	#ifdef DEBUG_MOD
		printf("$: Palabra reservada 'CADENA': %s \n", yytext ); 
	#endif
	return TK_PR_CADENA;
}
{ER_PR_CHAR}		{
	#ifdef DEBUG_MOD
		printf("$: Palabra reservada 'CHAR': %s \n", yytext ); 
	#endif
	return TK_PR_CHAR;
}
{ER_PR_CONST}		{
	#ifdef DEBUG_MOD
		printf("$: Palabra reservada 'CONST': %s \n", yytext ); 
	#endif
	return TK_PR_CONST;
}
{ER_PR_CONTINUAR}	{
	#ifdef DEBUG_MOD
		printf("$: Palabra reservada 'CONTINUAR': %s \n", yytext ); 
	#endif
	return TK_PR_CONTINUAR;
}
{ER_PR_DE}			{
	#ifdef DEBUG_MOD
		printf("$: Palabra reservada 'DE': %s \n", yytext );
	#endif
	return TK_PR_DE;
}
{ER_PR_DEV}			{
	#ifdef DEBUG_MOD
		printf("$: Palabra reservada 'DEV': %s \n", yytext );
	#endif
	return TK_PR_DEV;
}
{ER_PR_DIV}			{
	#ifdef DEBUG_MOD
		printf("$: Palabra reservada 'DIV': %s \n", yytext );
	#endif
	return TK_PR_DIV;
}
{ER_PR_ENT}			{
	#ifdef DEBUG_MOD
		printf("$: Palabra reservada 'ENT': %s \n", yytext );
	#endif
	return TK_PR_ENT;
}
{ER_PR_ENTERO}		{
	#ifdef DEBUG_MOD
		printf("$: Palabra reservada 'ENTERO': %s \n", yytext );
	#endif
	return TK_PR_ENTERO;
}
{ER_PR_INOUT}		{
	#ifdef DEBUG_MOD
		printf("$: Palabra reservada 'E/S': %s \n", yytext );
	#endif
	return TK_PR_INOUT;
}
{ER_PR_FACCIO}		{
	#ifdef DEBUG_MOD
		printf("$: Palabra reservada 'FACCION': %s \n", yytext );
	#endif
	return TK_PR_FACCIO;
}
{ER_PR_FALGORI}		{
	#ifdef DEBUG_MOD
		printf("$: Palabra reservada 'FALGORITMO': %s \n", yytext );
	#endif
	return TK_PR_FALGORI;
}
{ER_PR_FCONST}		{
	#ifdef DEBUG_MOD
		printf("$: Palabra reservada 'FCONST': %s \n", yytext );
	#endif
	return TK_PR_FCONST;
}
{ER_PR_FFUNCION}	{
	#ifdef DEBUG_MOD
		printf("$: Palabra reservada 'FFUNCION': %s \n", yytext );
	#endif
	return TK_PR_FFUNCION;
}
{ER_PR_FMIENTR}		{
	#ifdef DEBUG_MOD
		printf("$: Palabra reservada 'FMIENTRAS': %s \n", yytext );
	#endif
	return TK_PR_FMIENTR;
}
{ER_PR_FPARA}		{
	#ifdef DEBUG_MOD
		printf("$: Palabra reservada 'FPARA': %s \n", yytext );
	#endif
	return TK_PR_FPARA;
}
{ER_PR_FSI}			{
	#ifdef DEBUG_MOD
		printf("$: Palabra reservada 'FSI': %s \n", yytext );
	#endif
	return TK_PR_FSI;
}
{ER_PR_FTIPO}		{
	#ifdef DEBUG_MOD
		printf("$: Palabra reservada 'FTIPO': %s \n", yytext );
	#endif
	return TK_PR_FTIPO;
}
{ER_PR_FTUPLA}		{
	#ifdef DEBUG_MOD
		printf("$: Palabra reservada 'FTUPLA': %s \n", yytext );
	#endif
	return TK_PR_FTUPLA;
}
{ER_PR_FUNCION}		{
	#ifdef DEBUG_MOD
		printf("$: Palabra reservada 'FUNCION': %s \n", yytext );
	#endif
	return TK_PR_FUNCION;
}
{ER_PR_FVAR}		{
	#ifdef DEBUG_MOD
		printf("$: Palabra reservada 'FVAR': %s \n", yytext );
	#endif
	return TK_PR_FVAR;
}
{ER_PR_HACER}		{
	#ifdef DEBUG_MOD
		printf("$: Palabra reservada 'HACER': %s \n", yytext );
	#endif
	return TK_PR_HACER;
}
{ER_PR_HASTA}		{
	#ifdef DEBUG_MOD
		printf("$: Palabra reservada 'HASTA': %s \n", yytext );
	#endif
	return TK_PR_HASTA;
}
{ER_PR_MIENTRAS}	{
	#ifdef DEBUG_MOD
		printf("$: Palabra reservada 'MIENTRAS': %s \n", yytext );
	#endif
	return TK_PR_MIENTRAS;
}
{ER_PR_MOD}			{
	#ifdef DEBUG_MOD
		printf("$: Palabra reservada 'MOD': %s \n", yytext );
	#endif
	return TK_PR_MOD;
}
{ER_PR_NO}			{
	#ifdef DEBUG_MOD
		printf("$: Palabra reservada 'NO': %s \n", yytext );
	#endif
	return TK_PR_NO;
}
{ER_PR_O}			{
	#ifdef DEBUG_MOD
		printf("$: Palabra reservada 'O': %s \n", yytext );
	#endif
	return TK_PR_O;
}
{ER_PR_PARA}		{
	#ifdef DEBUG_MOD
		printf("$: Palabra reservada 'PARA': %s \n", yytext );
	#endif
	return TK_PR_PARA;
}
{ER_PR_REAL}		{
	#ifdef DEBUG_MOD
		printf("$: Palabra reservada 'REAL': %s \n", yytext );
	#endif
	return TK_PR_REAL;
}
{ER_PR_REF}			{
	#ifdef DEBUG_MOD
		printf("$: Palabra reservada 'REF': %s \n", yytext );
	#endif
	return TK_PR_REF;
}
{ER_PR_SAL}			{
	#ifdef DEBUG_MOD
		printf("$: Palabra reservada 'SAL': %s \n", yytext );
	#endif
	return TK_PR_SAL;
}
{ER_PR_SI}			{
	#ifdef DEBUG_MOD
		printf("$: Palabra reservada 'SI': %s \n", yytext );
	#endif
	return TK_PR_SI;
}
{ER_PR_TABLA}		{
	#ifdef DEBUG_MOD
		printf("$: Palabra reservada 'TABLA': %s \n", yytext );
	#endif
	return TK_PR_TABLA;
}
{ER_PR_TIPO}		{
	#ifdef DEBUG_MOD
		printf("$: Palabra reservada 'TIPO': %s \n", yytext );
	#endif
	return TK_PR_TIPO;
}
{ER_PR_TUPLA}		{
	#ifdef DEBUG_MOD
		printf("$: Palabra reservada 'TUPLA': %s \n", yytext );
	#endif
	return TK_PR_TUPLA;
}
{ER_PR_VAR}			{
	#ifdef DEBUG_MOD
		printf("$: Palabra reservada 'VAR': %s \n", yytext );
	#endif
	return TK_PR_VAR;
}
{ER_PR_Y}			{
	#ifdef DEBUG_MOD
		printf("$: Palabra reservada 'Y': %s \n", yytext );
	#endif
	return TK_PR_Y;
}
{ER_PR_ASIG}		{
	#ifdef DEBUG_MOD
		printf("$: Token: %s \n", yytext );
	#endif
	return TK_PR_ASIG;
}
{ER_PR_SECUEN}		{
	#ifdef DEBUG_MOD
		printf("$: Token: %s \n", yytext );
	#endif
	return TK_PR_SECUEN;
}
{ER_PR_ELSE}		{
	#ifdef DEBUG_MOD
		printf("$: Token else: %s \n", yytext );
	#endif
	return TK_PR_ELSE;
}
{ER_PR_INIARRA}		{
	#ifdef DEBUG_MOD
		printf("$: Token: %s \n", yytext );
	#endif
	return TK_PR_INIARRA;
}
{ER_PR_ENTONCES}	{
	#ifdef DEBUG_MOD
		printf("$: Token: %s \n", yytext );
	#endif
	return TK_PR_ENTONCES;
}
{ER_PR_COMA}		{
	#ifdef DEBUG_MOD
		printf("$: Token: %s \n", yytext );
	#endif
	return TK_PR_COMA;
}
{ER_PR_PUNTO}		{
	#ifdef DEBUG_MOD
		printf("$: Token: %s \n", yytext );
	#endif
	return TK_PR_PUNTO;
}
{ER_PR_SUBRANGO}	{
	#ifdef DEBUG_MOD
		printf("$: Token: %s \n", yytext );
	#endif
	return TK_PR_SUBRANGO;
}
{ER_PR_DEFVAL}		{
	#ifdef DEBUG_MOD
		printf("$: Token: %s \n", yytext );
	#endif
	return TK_PR_DEFVAL;
}
{ER_PR_IGUAL}		{
	#ifdef DEBUG_MOD
		printf("$: Token: %s \n", yytext );
	#endif
	return TK_PR_IGUAL;
}
{ER_PR_DIST}		{
	#ifdef DEBUG_MOD
		printf("$: Token: %s \n", yytext );
	#endif
	return TK_PR_DIST;
}
{ER_PR_BARRA}		{
	#ifdef DEBUG_MOD
		printf("$: Token: %s \n", yytext );
	#endif
	return TK_PR_BARRA;
}
{ER_PR_ABRIRPAR}	{
	#ifdef DEBUG_MOD
		printf("$: Token: %s \n", yytext );
	#endif
	return TK_PR_ABRIRPAR;
}
{ER_PR_CERRARPAR}	{
	#ifdef DEBUG_MOD
		printf("$: Token: %s \n", yytext );
	#endif
	return TK_PR_CERRARPAR;
}
{ER_PR_SUMA}		{
	#ifdef DEBUG_MOD
		printf("$: Token: %s \n", yytext );
	#endif
	return TK_PR_SUMA;
}
{ER_PR_MULT}		{
	#ifdef DEBUG_MOD
		printf("$: Token: %s \n", yytext );
	#endif
	return TK_PR_MULT;
}
{ER_PR_RESTA}		{
	#ifdef DEBUG_MOD
		printf("$: Token: %s \n", yytext );
	#endif
	return TK_PR_RESTA;
}

{ER_PR_ABRIRLLAVE}	{
	#ifdef DEBUG_MOD
		printf("$: Token: %s \n", yytext );
	#endif
}
{ER_PR_CERRARLLAVE}	{
	#ifdef DEBUG_MOD
		printf("$: Token: %s \n", yytext );
	#endif	
}

{ER_PR_MAYOR}		{
	#ifdef DEBUG_MOD
		printf("$: Token: %s \n", yytext );
	#endif
	return TK_PR_MAYOR;
}
{ER_PR_MENOR}		{
	#ifdef DEBUG_MOD
		printf("$: Token: %s \n", yytext );
	#endif
	return TK_PR_MENOR;
}
{ER_PR_MAYIGU}		{
	#ifdef DEBUG_MOD
		printf("$: Token: %s \n", yytext );
	#endif
	return TK_PR_MAYIGU;
}
{ER_PR_MENIGU}		{
	#ifdef DEBUG_MOD
		printf("$: Token: %s \n", yytext );
	#endif
	return TK_PR_MENIGU;
}
{ER_ID_ARI}			{
	#ifdef DEBUG_MOD
		printf("$: Id ari: %s \n", yytext );
	#endif
	yylval.ty_string = (char *)malloc(sizeof(char)*strlen(yytext));
	strcpy(yylval.ty_string, yytext);
	return TK_ID_ARI;
}
{ER_ID_BOOL}		{
	#ifdef DEBUG_MOD
		printf("$: Id bool: %s \n", yytext );
	#endif
	yylval.ty_string = (char *)malloc(sizeof(char)*strlen(yytext));
	strcpy(yylval.ty_string, yytext);
	return TK_LIT_BOOL;
}
{ER_LIT_ENTERO}		{
	#ifdef DEBUG_MOD
		printf("$: Entero: %d\n", (int)atof( yytext ) );
	#endif
	yylval.ty_num_entero =  (int)atof( yytext );
	return TK_LIT_ENTERO;
}
{ER_LIT_REAL}		{
	#ifdef DEBUG_MOD
		printf("$: Real: %f\n", atof( yytext ) );
	#endif
	yylval.ty_num_real = atof( yytext );
	return TK_LIT_REAL;
}
{ER_LIT_CARAC}		{
	#ifdef DEBUG_MOD
		printf("$: Literal caracter: %c \n", yytext[1] );
	#endif
	yylval.ty_caracter = yytext[1];
	return TK_LIT_CARAC;
}
{ER_LIT_CADE}		{
	#ifdef DEBUG_MOD
		printf("$: Literal cadena: %s \n", yytext );
	#endif
	yylval.ty_string = (char *)malloc(sizeof(char)*strlen(yytext));
	strcpy(yylval.ty_string, yytext);
	return TK_LIT_CADE;
}
{ER_LIT_COMENTARIO}	{
	#ifdef DEBUG_MOD
		printf("$: Literal comentario: %s \n", yytext );
	#endif
	return TK_LIT_COMENTARIO;
}
{ER_LIT_BOOL}		{
	#ifdef DEBUG_MOD
		printf("$: Boleano: %s \n", yytext);
	#endif
	int val = 0;
	if (strcmp(yytext,"VERDADERO") || strcmp(yytext,"verdadero")){
		val = 1;
	}
	yylval.ty_boolean = val;
	return TK_ID_BOL;
}

{ER_DELIM}			{}
{ER_CARAC_DESCO}	{
	//#ifdef DEBUG_MOD
		printf("$: Caracter desconocido: %s \n", yytext );
	//#endif
}

%%

/*
	aqui se declaran las funciones
*/