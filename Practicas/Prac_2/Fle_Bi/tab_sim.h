#ifndef tab_sim_h
#define tab_sim_h

#include <stdio.h>
#include <stdlib.h>

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

typdef struct nodeTab {
    int id;
    char *name;
    /*
    symType styp;
    symbol simb;*/
    struct nodeTab *next;
} nodeTab;

typdef struct {
    int size;
    nodeTab *first;
} symTab;

void ini_Tab(symTab *tabla);

int newTemp(symTab *tabla);

#endif