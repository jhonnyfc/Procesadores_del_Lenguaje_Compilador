#include "tab_sim.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void ini_Tab(symTab *tabla){
    tabla->size = 0;
    tabla->first = NULL;
    tabla->last = NULL;
}

int newTemp(symTab *tabla, char *name, int tipo){
    nodeTab *newNnodo;
    newNnodo = (nodeTab *)malloc(sizeof(nodeTab))

    newNnodo->name = name;
    newNnodo->type = tipo;
    newNnodo->next = null;

    // y lo metemos en la cola

}

int insert_sym(symTab *tabla, nodeTab *nodo){
    if (tabla->first == null && tabla->last == null){

    } else{
            tabla->last->next = nodo;
    }
}