#ifndef tab_sim_h
#define tab_sim_h

#include <stdio.h>
#include <stdlib.h>

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
#define OP_TO_NEG_INT 16
#define OP_TO_NEG_REAL 17
#define OP_INT_TO_REAL 18
#define OP_ASIGNA 19



// Estructuras de uso para los operadores
typedef struct {
    int id;
    int tipo;
} st_arit;

typedef struct {
    
} st_bool;

typedef struct {
    int tipo;
    st_arit ari;
    st_bool bool;
} st_exp;

///////
/*
typdef struct {
    char *name;
    var_tipo vtyp;
} variable;

typdef union {
    variable var;
} symbol;

typdfe enum {

} symType;*/

// Cola symTable

typedef struct nodeTab {
    int id; 
    char *name;
    int type;
    /*
    symType styp;
    symbol simb;*/
    struct nodeTab *next;
} nodeTab;

typedef struct {
    int size;
    nodeTab *first;
    nodeTab *last;
} symTab;

void ini_tsym(symTab *tabla);

int newTemp(symTab *tabla, char *nombre, int tipo);

int insert_tsym(symTab *tabla, nodeTab *nodo);

void print_tsym(symTab *tabla);

nodeTab *find_tsym(symTab *tabla, char *nombre);

#endif




