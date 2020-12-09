#ifndef tab_sim_h
#define tab_sim_h

#include <stdio.h>
#include <stdlib.h>

#define T_DESC 0
#define T_ENTERO 1
#define T_REAL 2
#define T_BOOL 3
#define T_CHAR 4
#define T_CADENA 5

#define EXP_ARI 6
#define EXP_BOOL 7

#define OP_SUMA_INT 15
#define OP_SUMA_REAL 16
#define OP_RESTA_INT 17
#define OP_RESTA_REAL 18

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

void ini_Tab(symTab *tabla);

int newTemp(symTab *tabla, char *name, int tipo);

int insert_sym(symTab *tabla, nodeTab *nodo);

#endif




