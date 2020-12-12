#ifndef tab_sim_h
#define tab_sim_h

#include "utiles.h"


// Cola Tabla de simbolos
typedef struct nodeTab {
    int id; 
    char *name;
    int type;
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




