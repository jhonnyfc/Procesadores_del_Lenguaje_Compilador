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

int newTemp(symTab *tabla);

#endif