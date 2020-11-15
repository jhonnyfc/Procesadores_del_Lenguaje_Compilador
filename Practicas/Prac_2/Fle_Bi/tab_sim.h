#ifndef tab_sim_h
#define tab_sim_h

#include <stdio.h>
#include <stdlib.h>

typdef struct {
    char *name;
    var_tipo vtyp;
} variable;

typdef union {
    variable var;
} symbol;

typdfe enum {

} symType;

typdef struct tabNodo {
    int id;
    symType styp;
    symbol simb;
    struct tabNodo *sig;
} tabNodo;

typdef struct {
    int size;
    tabNodo *first;
    tabNodo *last;
} symTab;

void ini_Tab(symTab *tabla);

int newTemp(symTab *tabla);

#endif