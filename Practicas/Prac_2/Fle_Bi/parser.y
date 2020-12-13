/* Reverse polish notation calculator.  */
%{
    #include <stdio.h>
    #include <stdarg.h>
    #include <string.h>
    #include "utiles.h"
    #include "tab_sim.h"
    #include "tab_cua.h"
    #include "bool_tools.h"

    extern FILE *yyin;
    extern int yylineno;

    symTab      miSimTab;
    quadTab     miQuadTab;

    int yylex (void);
    void yyerror (char const *, ...);

    int temp_id;
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
%token <ty_string> TK_ID_ARI
%token <ty_string> TK_ID_BOL

%token <ty_caracter> TK_LIT_CARAC			// Caracter
%token <ty_string> TK_LIT_CADE			// Cadena
%token <ty_string> TK_LIT_COMENTARIO	// Comentario

%token <ty_num_entero> TK_LIT_ENTERO		// Entero con exponente
%token <ty_num_real> TK_LIT_REAL			// Real con exponente
%token <ty_boolean> TK_LIT_BOOL			// ("VERDADERO"|"FALSO")

// Tipos
%type <ty_tipo> d_tipo
%type <ty_tipo> lista_d_var
%type <ty_listaID> lista_id

%type <ty_st_exp> expresion

%type <ty_st_ari> operando_ari
%type <ty_st_ari> exp_a

%type <ty_st_bool> operando_bool
%type <ty_st_bool> exp_b

%type <ty_tipo> aux_b
%type <ty_tipo> compop

%union {
    float      ty_num_real;
    long int    ty_num_entero;
    char        *ty_string;
    char        ty_caracter;
    int         ty_boolean;

    int         ty_tipo;

    st_arit     ty_st_ari;
    st_bool     ty_st_bool;

    st_exp      ty_st_exp;

    st_listID   ty_listaID;
};

%% /* Grammar rules and actions follow.  */

desc_algoritmo:
	TK_PR_ALGORIT TK_ID_ARI TK_PR_SECUEN cabecera_alg bloque_alg TK_PR_FALGORI TK_PR_PUNTO {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de algoritmo detectada.\n"); 
        #endif
	}
;

cabecera_alg:
    decl_globales decl_a_f decl_ent_sal TK_LIT_COMENTARIO{
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de cabecera_alg detectada.\n"); 
        #endif
    }
;

bloque_alg:
    bloque TK_LIT_COMENTARIO{
         #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de bloque_alg detectada.\n"); 
        #endif
    }
;   

decl_globales:
    declaracion_tipo decl_globales{
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de decl_globales detectada 1.\n"); 
        #endif
    } 
    | declaracion_cte decl_globales{
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de decl_globales detectada 2.\n"); 
        #endif
    } 
    | %empty {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de decl_globales detectada: VACIO 3.\n"); 
        #endif
    }
;

decl_a_f:
    accion_d decl_a_f{
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de decl_a_f detectada 1.\n"); 
        #endif
    } 
    | funcion_d decl_a_f{
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de decl_a_f detectada 2.\n"); 
        #endif
    }
    | %empty {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de decl_a_f detectada: VACIO 3.\n"); 
        #endif
    }
;

bloque:
    declaraciones instrucciones{
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de bloque detectada.\n"); 
        #endif
    } 
;

declaraciones:
    declaracion_tipo declaraciones{
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de declaraciones detectada 1.\n"); 
        #endif
    }
    | declaracion_cte declaraciones{
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de declaraciones detectada 2.\n"); 
        #endif
    }
    | declaracion_var declaraciones{
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de declaraciones detectada 3.\n"); 
        #endif
    }
    | %empty{
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de declaraciones detectada: VACIO 4.\n"); 
        #endif
    }
;

/*pag 6*/

declaracion_tipo:
	TK_PR_TIPO lista_d_tipo TK_PR_FTIPO TK_PR_SECUEN{
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de declaracion_tipo encontrada.\n"); 
        #endif
	}
;

declaracion_cte:
	TK_PR_CONST lista_d_cte TK_PR_FCONST TK_PR_SECUEN {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de declaracion_cte encontrada.\n"); 
        #endif
	}
;

declaracion_var:
	TK_PR_VAR lista_d_var TK_PR_FVAR TK_PR_SECUEN {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de declaracion_var encontrada.\n"); 
        #endif
	}
;

lista_d_tipo:
	TK_ID_ARI TK_PR_IGUAL d_tipo TK_PR_SECUEN lista_d_tipo {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura lista_d_tipo encontrada 1.\n"); 
        #endif
	}
	| %empty {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura lista_d_tipo encontrada: VACIO 2.\n"); 
        #endif
    }
;

d_tipo:
	TK_PR_TUPLA lista_campos TK_PR_FTUPLA {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_tipo encontrada 1.\n"); 
        #endif
        $$ = T_DESC;
	}
	| TK_PR_TABLA TK_PR_INIARRA expresion_t TK_PR_SUBRANGO expresion_t TK_PR_FINARRA TK_PR_DE d_tipo{
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_tipo encontrada 2.\n"); 
        #endif
        $$ = T_DESC;
	}
	| TK_ID_ARI {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_tipo encontrada 3.\n"); 
        #endif
        $$ = T_DESC;
	}
    | TK_ID_BOL {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_tipo encontrada 3.\n"); 
        #endif
        $$ = T_DESC;
	}
	| expresion_t TK_PR_SUBRANGO expresion_t {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_tipo encontrada 4.\n"); 
        #endif
        $$ = T_DESC;
	}
	| TK_PR_REF d_tipo {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_tipo encontrada 5.\n"); 
        #endif
        $$ = T_DESC;
	}
	| TK_PR_ENTERO {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_tipo econtrada int 6.\n"); 
        #endif
        $$ = T_ENTERO;
	}
	| TK_PR_BOOL {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_tipo econtrada bool 7.\n"); 
        #endif
        $$ = T_BOOL;
	}
	| TK_PR_CHAR {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_tipo econtrada char 8.\n"); 
        #endif
        $$ = T_CHAR;
	}
	| TK_PR_REAL {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_tipo econtrada real 9.\n"); 
        #endif
        $$ = T_REAL;
	}
	| TK_PR_CADENA {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_tipo econtrada cadena 10.\n"); 
        #endif
        $$ = T_CADENA;
	}
;

expresion_t:
	expresion {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura expreasion_t econtrada 1.\n"); 
        #endif
	}
	| TK_LIT_CARAC {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura expreasion_t econtrada 2.\n"); 
        #endif
	}
;

lista_campos:
	TK_ID_ARI TK_PR_IGUAL d_tipo TK_PR_SECUEN lista_campos {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura lista_campos econtrada 1.\n"); 
        #endif
	}
	| %empty {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura lista_campos econtrada:VACIO 2.\n"); 
        #endif
    }
;

lista_d_cte:
	TK_ID_ARI TK_PR_IGUAL literal TK_PR_SECUEN lista_d_cte {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura lista_d_cte econtrada 1.\n"); 
        #endif
	}
	| %empty {
            #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura lista_d_cte econtrada: VACIO 7.\n"); 
        #endif
    }
;

literal:
    TK_LIT_BOOL {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura TK_LIT_BOOL econtrada 1 -> %d.\n",$1); 
        #endif
	}
	| TK_LIT_CADE {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura TK_LIT_CADE econtrada 2 -> %s.\n",$1); 
        #endif
	}
	| TK_LIT_CARAC {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura TK_LIT_CARAC econtrada 3 -> %c.\n",$1); 
        #endif
	}
	| TK_LIT_COMENTARIO {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura TK_LIT_COMENTARIO econtrada 4.\n"); 
        #endif
	}
	| TK_LIT_ENTERO {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura TK_LIT_ENTERO econtrada 5 -> %ld.\n",$1); 
        #endif
	}
	| TK_LIT_REAL {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura TK_LIT_REAL econtrada 6 -> %f.\n",$1); 
        #endif
	}
;

/* pag 7 */

lista_d_var:
    lista_id TK_PR_SECUEN lista_d_var {
        /*Hemos bajado 'TK_PR_DEFVAL d_tipo' a lista_id */
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de lista_d_var detectada 1.\n");
        #endif
        $$ = $1.idList;
        inc_idLista();
    }
    | %empty{ 
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de lista_d_var detectada: VACIO 2.\n"); 
        #endif
    }
;

lista_id:
    TK_ID_ARI TK_PR_DEFVAL d_tipo {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de lista_id detectada 1 -> %s.\n",$1); 
        #endif
        if (inserHead_tsym(&miSimTab,$1,$3,get_idList()) == ERR_YA_EXISTE_VAR)
            yyerror("!! Variable (%s) ya definida.",$1);
        
        $$.idList = get_idList();
        $$.tipo = $3;
    }
    | TK_ID_BOL TK_PR_DEFVAL d_tipo {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de lista_id detectada 3.\n"); 
        #endif
        if (inserHead_tsym(&miSimTab,$1,$3,get_idList()) == ERR_YA_EXISTE_VAR)
            yyerror("!! Variable (%s) ya definida.",$1);

        $$.idList = get_idList();
        $$.tipo = $3;
    }
    | TK_ID_ARI TK_PR_COMA lista_id {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de lista_id detectada 5.\n"); 
        #endif
        if (inserHead_tsym(&miSimTab,$1,$3.tipo,get_idList()) == ERR_YA_EXISTE_VAR)
            yyerror("!! Variable (%s) ya definida.",$1);
        
        $$ = $3;
    }
    | TK_ID_BOL TK_PR_COMA lista_id {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de lista_id detectada 6.\n"); 
        #endif
        if (inserHead_tsym(&miSimTab,$1,$3.tipo,get_idList()) == ERR_YA_EXISTE_VAR)
            yyerror("!! Variable (%s) ya definida.",$1);
        
        $$ = $3;
    }
;

decl_ent_sal:
    decl_ent{
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de decl_ent_sal detectada 1.\n"); 
        #endif
    }
    | decl_ent decl_sal {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de decl_ent_sal detectada 2.\n"); 
        #endif
    }
    | decl_sal{
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de decl_ent_sal detectada 3.\n"); 
        #endif
    }
;

decl_ent:
    TK_PR_ENT lista_d_var {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de decl_ent detectada.\n"); 
        #endif
        set_ioType(&miSimTab,$2,DF_IN);
    }
;

decl_sal:
    TK_PR_SAL lista_d_var{
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de decl_sal detectada.\n"); 
        #endif
        set_ioType(&miSimTab,$2,DF_OUT);
    }
;

expresion:
    exp_a {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de expresion detectada 1.\n"); 
        #endif
        $$.tipo = EXP_ARI;
        $$.ari.id = $1.id;
        $$.ari.tipo = $1.tipo;
    }
    | exp_b {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de expresion detectada 2.\n"); 
        #endif
        $$.tipo = EXP_BOOL;
        $$.bool.trues = $1.trues;
        $$.bool.falses = $1.falses;
    }
    | funcion_ll {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de expresion detectada 3.\n"); 
        #endif
    }
;

exp_a:
    exp_a TK_PR_SUMA exp_a{
        /*hacemos solo pra enteros con entero y real con real o mezcaloms int real */
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_a detectada 1.\n"); 
        #endif
        if ($1.tipo == T_ENTERO && $3.tipo == T_ENTERO){
            char idTemp[10];
            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;

            int id_res = newTemp(&miSimTab,idTemp,T_ENTERO);
            gen(&miQuadTab,OP_SUMA_INT,$1.id,$3.id,id_res);

            $$.id = id_res;
            $$.tipo = T_ENTERO;
        } else if ($1.tipo == T_REAL && $3.tipo == T_REAL) {
            char idTemp[10];
            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int id_res = newTemp(&miSimTab,idTemp,T_REAL);
            gen(&miQuadTab,OP_SUMA_REAL,$1.id,$3.id,id_res);
            
            $$.id = id_res;
            $$.tipo = T_REAL;
        } else if ($1.tipo == T_REAL && $3.tipo == T_ENTERO) {
            char idTemp[10];
            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int op1 = newTemp(&miSimTab,idTemp,T_REAL);
            gen(&miQuadTab,OP_INT_TO_REAL,$3.id,OPERNDO_NULL,op1);

            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int id_res = newTemp(&miSimTab,idTemp,T_REAL);
            gen(&miQuadTab,OP_SUMA_REAL,$1.id,op1,id_res);

            $$.id = id_res;
            $$.tipo = T_REAL;
        } else if ($1.tipo == T_ENTERO && $3.tipo == T_REAL) {
            char idTemp[10];
            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int op1 = newTemp(&miSimTab,idTemp,T_REAL);
            gen(&miQuadTab,OP_INT_TO_REAL,$1.id,OPERNDO_NULL,op1);

            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int id_res = newTemp(&miSimTab,idTemp,T_REAL);
            gen(&miQuadTab,OP_SUMA_REAL,$3.id,op1,id_res);

            $$.id = id_res;
            $$.tipo = T_REAL;
        } else {
            yyerror("!! El tipo %s y el %s no son compatibles para la suma.",DF_NAMES[$1.tipo],DF_NAMES[$3.tipo]);
        }
    }
    | exp_a TK_PR_RESTA exp_a {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_a detectada 2.\n"); 
        #endif
        if ($1.tipo == T_ENTERO && $3.tipo == T_ENTERO){
            char idTemp[10];
            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int id_res = newTemp(&miSimTab,idTemp,T_ENTERO);
            gen(&miQuadTab,OP_RESTA_INT,$1.id,$3.id,id_res);

            $$.id = id_res;
            $$.tipo = T_ENTERO;
        } else if ($1.tipo == T_REAL && $3.tipo == T_REAL) {
            char idTemp[10];
            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int id_res = newTemp(&miSimTab,idTemp,T_REAL);
            gen(&miQuadTab,OP_RESTA_REAL,$1.id,$3.id,id_res);
            
            $$.id = id_res;
            $$.tipo = T_REAL;
        } else if ($1.tipo == T_REAL && $3.tipo == T_ENTERO) {
            char idTemp[10];
            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int op1 = newTemp(&miSimTab,idTemp,T_REAL);
            gen(&miQuadTab,OP_INT_TO_REAL,$3.id,OPERNDO_NULL,op1);

            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int id_res = newTemp(&miSimTab,idTemp,T_REAL);
            gen(&miQuadTab,OP_RESTA_REAL,$1.id,op1,id_res);

            $$.id = id_res;
            $$.tipo = T_REAL;
        } else if ($1.tipo == T_ENTERO && $3.tipo == T_REAL) {
            char idTemp[10];
            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int op1 = newTemp(&miSimTab,idTemp,T_REAL);
            gen(&miQuadTab,OP_INT_TO_REAL,$1.id,OPERNDO_NULL,op1);

            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int id_res = newTemp(&miSimTab,idTemp,T_REAL);
            gen(&miQuadTab,OP_RESTA_REAL,$3.id,op1,id_res);

            $$.id = id_res;
            $$.tipo = T_REAL;
        } else {
            yyerror("!! El tipo %s y el %s no son compatibles para la resta.",DF_NAMES[$1.tipo],DF_NAMES[$3.tipo]);
        }
    }
    | exp_a TK_PR_MULT exp_a{
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_a detectada 3.\n"); 
        #endif
        if ($1.tipo == T_ENTERO && $3.tipo == T_ENTERO){
            char idTemp[10];
            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int id_res = newTemp(&miSimTab,idTemp,T_ENTERO);
            gen(&miQuadTab,OP_MULT_INT,$1.id,$3.id,id_res);

            $$.id = id_res;
            $$.tipo = T_ENTERO;
        } else if ($1.tipo == T_REAL && $3.tipo == T_REAL) {
            char idTemp[10];
            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int id_res = newTemp(&miSimTab,idTemp,T_REAL);
            gen(&miQuadTab,OP_MULT_REAL,$1.id,$3.id,id_res);
            
            $$.id = id_res;
            $$.tipo = T_REAL;
        } else if ($1.tipo == T_REAL && $3.tipo == T_ENTERO) {
            char idTemp[10];
            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int op1 = newTemp(&miSimTab,idTemp,T_REAL);
            gen(&miQuadTab,OP_INT_TO_REAL,$3.id,OPERNDO_NULL,op1);

            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int id_res = newTemp(&miSimTab,idTemp,T_REAL);
            gen(&miQuadTab,OP_MULT_REAL,$1.id,op1,id_res);

            $$.id = id_res;
            $$.tipo = T_REAL;
        } else if ($1.tipo == T_ENTERO && $3.tipo == T_REAL) {
            char idTemp[10];
            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int op1 = newTemp(&miSimTab,idTemp,T_REAL);
            gen(&miQuadTab,OP_INT_TO_REAL,$1.id,OPERNDO_NULL,op1);

            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int id_res = newTemp(&miSimTab,idTemp,T_REAL);
            gen(&miQuadTab,OP_MULT_REAL,$3.id,op1,id_res);

            $$.id = id_res;
            $$.tipo = T_REAL;
        }  else {
            yyerror("!! El tipo %s y el %s no son compatibles para la multiplicacion.",DF_NAMES[$1.tipo],DF_NAMES[$3.tipo]);
        }
    }
    | exp_a TK_PR_BARRA exp_a{
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_a detectada 4.\n"); 
        #endif
        if ($1.tipo == T_ENTERO && $3.tipo == T_ENTERO){
            char idTemp[10];
            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int op1 = newTemp(&miSimTab,idTemp,T_REAL);
            gen(&miQuadTab,OP_INT_TO_REAL,$1.id,OPERNDO_NULL,op1);
            
            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int op2 = newTemp(&miSimTab,idTemp,T_REAL);
            gen(&miQuadTab,OP_INT_TO_REAL,$3.id,OPERNDO_NULL,op2);

            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int id_res = newTemp(&miSimTab,idTemp,T_REAL);
            gen(&miQuadTab,OP_MULT_INT,op1,op2,id_res);

            $$.id = id_res;
            $$.tipo = T_REAL;
        } else if ($1.tipo == T_REAL && $3.tipo == T_REAL) {
            char idTemp[10];
            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int id_res = newTemp(&miSimTab,idTemp,T_REAL);
            gen(&miQuadTab,OP_DIV_REAL,$1.id,$3.id,id_res);
            
            $$.id = id_res;
            $$.tipo = T_REAL;
        } else if ($1.tipo == T_REAL && $3.tipo == T_ENTERO) {
            char idTemp[10];
            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int op1 = newTemp(&miSimTab,idTemp,T_REAL);
            gen(&miQuadTab,OP_INT_TO_REAL,$3.id,OPERNDO_NULL,op1);

            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int id_res = newTemp(&miSimTab,idTemp,T_REAL);
            gen(&miQuadTab,OP_DIV_REAL,$1.id,op1,id_res);

            $$.id = id_res;
            $$.tipo = T_REAL;
        } else if ($1.tipo == T_ENTERO && $3.tipo == T_REAL) {
            char idTemp[10];
            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int op1 = newTemp(&miSimTab,idTemp,T_REAL);
            gen(&miQuadTab,OP_INT_TO_REAL,$1.id,OPERNDO_NULL,op1);

            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int id_res = newTemp(&miSimTab,idTemp,T_REAL);
            gen(&miQuadTab,OP_DIV_REAL,$3.id,op1,id_res);

            $$.id = id_res;
            $$.tipo = T_REAL;
        }  else {
            yyerror("!! El tipo %s y el %s no son compatibles para la division.",DF_NAMES[$1.tipo],DF_NAMES[$3.tipo]);
        }
    }
    | exp_a TK_PR_MOD exp_a{
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_a detectada 5.\n"); 
        #endif
        /*solo con entero*/
        if ($1.tipo == T_ENTERO && $3.tipo == T_ENTERO){
            char idTemp[10];
            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int id_res = newTemp(&miSimTab,idTemp,T_ENTERO);
            gen(&miQuadTab,OP_MOD,$1.id,$3.id,id_res);

            $$.id = id_res;
            $$.tipo = T_ENTERO;
        } else {
            yyerror("!! El tipo %s y el %s no son compatibles para el resto , solo int.",DF_NAMES[$1.tipo],DF_NAMES[$3.tipo]);
        }
    }
    | exp_a TK_PR_DIV exp_a{
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_a detectada 6.\n"); 
        #endif
        /*solo con enteros*/
        if ($1.tipo == T_ENTERO && $3.tipo == T_ENTERO){
            char idTemp[10];
            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int id_res = newTemp(&miSimTab,idTemp,T_ENTERO);
            gen(&miQuadTab,OP_DIV_INT,$1.id,$3.id,id_res);

            $$.id = id_res;
            $$.tipo = T_ENTERO;
        }  else {
            yyerror("!! El tipo %s y el %s no son compatibles para la division entera.",DF_NAMES[$1.tipo],DF_NAMES[$3.tipo]);
        }
    }
    | TK_PR_ABRIRPAR exp_a TK_PR_CERRARPAR{
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_a detectada 7.\n"); 
        #endif
        $$ = $2;
    }
    | operando_ari{
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_a detectada 8.\n"); 
        #endif
        $$ = $1;
    }
    | TK_LIT_ENTERO {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_a detectada 9.\n"); 
        #endif
        char idTemp[10];
        sprintf(idTemp, "temp%d", temp_id);
        temp_id++;
        $$.id = newTemp(&miSimTab,idTemp,T_ENTERO);
        $$.tipo = T_ENTERO;
    }
    | TK_LIT_REAL {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_a detectada 10.\n"); 
        #endif
        char idTemp[10];
        sprintf(idTemp, "temp%d", temp_id);
        temp_id++;
        $$.id = newTemp(&miSimTab,idTemp,T_REAL);
        $$.tipo = T_REAL;
    }
    | TK_PR_RESTA exp_a{ 
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_a detectada 11.\n"); 
        #endif
        if ($2.tipo == T_ENTERO) {
            char idTemp[10];
            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int id_res = newTemp(&miSimTab, idTemp, T_ENTERO);
            gen(&miQuadTab, OP_TO_NEG_INT, $2.id, OPERNDO_NULL, id_res);

            $$.id = id_res;
            $$.tipo = T_ENTERO;
        } else if ($2.tipo == T_REAL) {
            char idTemp[10];
            sprintf(idTemp, "temp%d", temp_id);
            temp_id++;
            int id_res = newTemp(&miSimTab, idTemp, T_REAL);
            gen(&miQuadTab, OP_TO_NEG_REAL, $2.id, OPERNDO_NULL, id_res);

            $$.id = id_res;
            $$.tipo = T_REAL;
        }   else {
            yyerror("!! El tipo %s es compatibles para la opearcion negativo .",DF_NAMES[$2.tipo]);
        }
    }
;

exp_b:
    exp_b TK_PR_Y aux_b exp_b{
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_b detectada 1.\n"); 
        #endif
        backpatch(&miQuadTab,$1.trues,$3);
        $$.trues = merge($1.falses,$4.falses);
        $$.falses = $4.falses;
    }
    | exp_b TK_PR_O aux_b exp_b{
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_b detectada 2.\n"); 
        #endif
        backpatch(&miQuadTab,$1.trues,$3);
        $$.trues = merge($1.falses,$4.falses);
        $$.falses = $4.falses;
    }
    | TK_PR_NO exp_b{
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_b detectada 3.\n"); 
        #endif
        $$.trues = $2.falses;
        $$.falses = $2.trues;
    }
    | operando_bool{
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_b detectada 4.\n"); 
        #endif
        $$ = $1;
    }
    | TK_PR_VERDADERO {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_b detectada 5.\n"); 
        #endif
    }
    | TK_PR_FALSO{ 
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_b detectada 6.\n"); 
        #endif
    }
    | expresion compop expresion{ 
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_b detectada 7.\n"); 
        #endif
        $$.trues = makelist(miQuadTab.nextQua);
        $$.falses = makelist(miQuadTab.nextQua);

        gen(&miQuadTab,$2,$1.ari.id,$3.ari.id,OPERNDO_NULL);
        gen(&miQuadTab,OP_GOTO,OPERNDO_NULL,OPERNDO_NULL,OPERNDO_NULL);
    }
    | TK_PR_ABRIRPAR exp_b TK_PR_CERRARPAR{ 
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de exp_b detectada 8.\n"); 
        #endif
    }
;

compop:
    TK_PR_MAYOR { 
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de compop detectada 1.\n"); 
        #endif
        $$ = OP_MAYOR;
    }
    | TK_PR_MENOR { 
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de compop detectada 2.\n"); 
        #endif
        $$ = OP_MENOR;
    }
    | TK_PR_MAYIGU { 
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de compop detectada 3.\n"); 
        #endif
        $$ = OP_MAYOR_IGUAL;
    }
    | TK_PR_MENIGU {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de compop detectada 4.\n"); 
        #endif
        $$ = OP_MENOR_IGUAL;
    }
    |TK_PR_IGUAL { 
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de compop detectada 5.\n"); 
        #endif
        $$ = OP_DISTINTO;
    }
    | TK_PR_DIST { 
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de compop detectada 6.\n"); 
        #endif
        $$ = OP_IGUAL;
    }
;

aux_b:
    %empty{
        $$ = miQuadTab.nextQua;
    }
;

operando_ari:
    TK_ID_ARI {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de operando_ari detectada 1.\n"); 
        #endif
        nodeTab *nodo = find_tsym_by_name(&miSimTab,$1);
        $$.id = nodo->id;
        $$.tipo = nodo->type;
    }
    | operando_ari TK_PR_PUNTO operando_ari {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de operando_ari detectada 2.\n"); 
        #endif
    }
    | operando_ari TK_PR_INIARRA expresion TK_PR_FINARRA {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de operando_ari detectada 3.\n"); 
        #endif
    }   
    | operando_ari TK_PR_REF{
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de operando_ari detectada 4.\n"); 
        #endif
    }
;

operando_bool:
    TK_ID_BOL {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de operando_bool detectada 1.\n"); 
        #endif
        $$.trues = makelist(miQuadTab.nextQua);
        $$.falses = makelist(miQuadTab.nextQua+1);

        nodeTab *nodo = find_tsym_by_name(&miSimTab,$1);
        gen(&miQuadTab,OP_GOTO_CONDI,nodo->id,OPERNDO_NULL,OPERNDO_NULL);
        gen(&miQuadTab,OP_GOTO,OPERNDO_NULL,OPERNDO_NULL,OPERNDO_NULL);
    }
    | operando_bool TK_PR_PUNTO operando_bool {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de operando_bool detectada 2.\n"); 
        #endif
    }
    | operando_bool TK_PR_INIARRA expresion TK_PR_FINARRA {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de operando_bool detectada 3.\n"); 
        #endif
    }   
    | operando_bool TK_PR_REF{
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de operando_bool detectada 4.\n"); 
        #endif
    }
;

instrucciones:
    instruccion TK_PR_SECUEN instrucciones{
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de instrucciones detectada 1.\n"); 
        #endif
    }
    | instruccion{
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de instrucciones detectada 2.\n"); 
        #endif
    }
;

instruccion:
    TK_PR_CONTINUAR{
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de instruccion detectada 1.\n"); 
        #endif
    }
    | asignacion{
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de instruccion detectada 2.\n"); 
        #endif
    }
    | alternativa{
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de instruccion detectada 3.\n"); 
        #endif
    }
    | iteracion{
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de instruccion detectada 4.\n"); 
        #endif
    }
    | accion_ll{
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de instruccion detectada 5.\n"); 
        #endif
    }
;

asignacion:
    operando_ari TK_PR_ASIG expresion{
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de asignacion detectada.\n"); 
        #endif
        if ($3.tipo == EXP_ARI && $1.tipo == $3.ari.tipo){

            gen(&miQuadTab,OP_ASIGNA,$3.ari.id,OPERNDO_NULL,$1.id);
        } else {
            yyerror("!! El tipo %s no se puede asignar al %s.", DF_NAMES[$3.ari.tipo],DF_NAMES[$1.tipo]);
        }
    }
    | operando_bool TK_PR_ASIG expresion{
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de asignacion detectada 2.\n"); 
        #endif
        if ($3.tipo == EXP_BOOL){
            $1.trues = $3.bool.trues;
            $1.falses = $3.bool.falses;
        } else {
            yyerror("!! El tipo %s no se puede asignar al tipo bool", DF_NAMES[$3.tipo]);
        }
    }
;

alternativa:
    TK_PR_SI expresion TK_PR_ENTONCES instrucciones lista_opciones TK_PR_FSI{
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de alternativa detectada.\n"); 
        #endif
    }
;

lista_opciones:
    TK_PR_ELSE expresion TK_PR_ENTONCES instrucciones lista_opciones {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de lista_opciones detectada 1.\n"); 
        #endif
    }
    | %empty {
       #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de lista_opciones detectada: VACIO 2.\n"); 
        #endif
    }
;

iteracion:
    it_cota_fija{
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de iteracion detectada 1.\n"); 
        #endif
    }
    | it_cota_exp{
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de iteracion detectada 2.\n"); 
        #endif
    }
;

it_cota_exp:
    TK_PR_MIENTRAS expresion TK_PR_HACER instrucciones TK_PR_FMIENTR{
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de it_cota_exp detectada.\n"); 
        #endif
    }
;

it_cota_fija:
    TK_PR_PARA TK_ID_ARI TK_PR_ASIG expresion TK_PR_HASTA expresion TK_PR_HACER instrucciones TK_PR_FPARA{
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de it_cota_fija detectada.\n"); 
        #endif
    }
;
/* pag 8*/

accion_d:
	TK_PR_ACCION a_cabecera bloque TK_PR_FACCIO {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura accion_d econtrada.\n"); 
        #endif
	}
;

funcion_d: 
	TK_PR_FUNCION f_cabecera bloque TK_PR_DEV expresion TK_PR_FFUNCION {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura funcion_d econtrada.\n"); 
        #endif
	}
;

a_cabecera: 
	TK_ID_ARI TK_PR_ABRIRPAR d_par_form TK_PR_CERRARPAR TK_PR_SECUEN {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura funcion_d econtrada .\n"); 
        #endif
	}
;

f_cabecera:
	TK_ID_ARI TK_PR_ABRIRPAR lista_d_var TK_PR_CERRARPAR TK_PR_DEV d_tipo TK_PR_SECUEN {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura f_cabecera econtrada.\n"); 
        #endif
	}
;

d_par_form:
	d_p_form TK_PR_SECUEN d_par_form {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_par_form econtrada 1.\n"); 
        #endif
	}
	| %empty {
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_par_form econtrada:VACIO 2.\n"); 
        #endif
    }
;

d_p_form:
	TK_PR_ENT lista_id TK_PR_DEFVAL d_tipo {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_p_form econtrada 1.\n"); 
        #endif
	}
	| TK_PR_SAL lista_id TK_PR_DEFVAL d_tipo {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_p_form econtrada 2.\n"); 
        #endif 
	}
	| TK_PR_INOUT lista_id TK_PR_DEFVAL d_tipo {
		#ifdef DEBUG_MOD
            printf("#_ Parser: Estructura d_p_form econtrada 3.\n"); 
        #endif 
	}
;

accion_ll:
    TK_ID_ARI TK_PR_ABRIRPAR l_ll TK_PR_CERRARPAR{
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de accion_ll detectada.\n"); 
        #endif
    }
;

funcion_ll:
    TK_ID_ARI TK_PR_ABRIRPAR l_ll TK_PR_CERRARPAR{
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de funcion_ll detectada.\n"); 
        #endif
    }
;

l_ll:
    expresion TK_PR_COMA l_ll{
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de ll_ll detectada 1.\n"); 
        #endif
    }
    | expresion{
        #ifdef DEBUG_MOD
            printf("#_ Parser: Estructura de ll_ll detectada 2.\n"); 
        #endif
    }
;

%%

void yyerror (char const *s, ...){
    va_list args;
    fprintf(stderr, "\n!! Error en la linea %d: \n", yylineno);
    va_start(args, s);
    vfprintf(stderr, s, args);
    va_end(args);
    printf("\n\n");
}

int main (int argc, char **argv){
    ++argv, --argc;

    printf("\nCRERADORES 04-09-2020\n");
	printf("\t @Daniel del Barrio\n");
	printf("\t @Jhonny F. Chicaiza\n");

    temp_id = 0;

	if ( argc > 0 ){
		printf("\n");
		yyin = fopen( argv[0], "r" );
	}else{
		printf("\nInserte por teclado para comprobar\n");
		printf("Ctr + d para salir\n\n");
		yyin = stdin;
	}

    //mostrar_tqua(&miQuadTab);
    ini_tsym(&miSimTab);
    ini_tqua(&miQuadTab);

    yyparse();

    print_tsym(&miSimTab);
    print_tqua(&miQuadTab);

    print_3dir_tqua(&miQuadTab,&miSimTab);
	return 0;
}