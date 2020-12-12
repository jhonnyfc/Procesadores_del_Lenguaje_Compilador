#ifndef utiles_h
#define utiles_h

#define NCOL 4
#define NROWS 100
#define OPERACION 0
#define OP1_ID 1
#define OP2_ID 2
#define RESUL_ID 3


#define OPERNDO_NULL -5
#define ERR_YA_EXISTE_VAR -2

#define T_DESC 0
#define T_ENTERO 1
#define T_REAL 2
#define T_BOOL 3
#define T_CHAR 4
#define T_CADENA 5

#define EXP_ARI 6
#define EXP_BOOL 7

#define OP_SUMA_INT 8
#define OP_SUMA_REAL 9
#define OP_RESTA_INT 10
#define OP_RESTA_REAL 11
#define OP_MULT_INT 12
#define OP_MULT_REAL 13
#define OP_DIV_REAL 14
#define OP_DIV_INT 15
#define OP_MOD 16
#define OP_TO_NEG_INT 17
#define OP_TO_NEG_REAL 18
#define OP_INT_TO_REAL 19
#define OP_ASIGNA 20

#define OP_MAYOR 21
#define OP_MENOR 22
#define OP_MAYOR_IGUAL 23
#define OP_MENOR_IGUAL 24
#define OP_DISTINTO 25
#define OP_IGUAL 26

#define OP_GOTO_CONDI 27
#define OP_GOTO 28

const static char* DF_NAMES[] = {
    "Desconocido",
    "Entero",
    "Real",
    "Bool",
    "Char",
    "Cadena",

    "Expresoin Ari",
    "Expresion Bool"

    "Suma int",
    "Suma real",
    "Resta int",
    "Resta real",
    "Multi int",
    "Multi real",
    "Div real",
    "Div int",
    "Mod",
    "Negativo int",
    "Negativo real",
    "int To real",
    "Asignacion"
    "Mayor",
    "Menor",
    "Mayo igual",
    "Menor igual",
    "Distinto",
    "Igual"
};

// Estructura para  operadores aritmeticos
typedef struct {
    int id;
    int tipo;
} st_arit;

// Estructura para operadores booleanos
typedef struct {
    int size;
    int *list;
} bool_ids_list;

typedef struct {
    bool_ids_list trues;
    bool_ids_list falses;
} st_bool;

// Estructuras para los operadores
typedef struct {
    int tipo;
    st_arit ari;
    st_bool bool;
} st_exp;

#endif