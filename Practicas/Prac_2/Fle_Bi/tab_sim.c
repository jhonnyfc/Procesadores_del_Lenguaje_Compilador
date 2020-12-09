#include "tab_sim.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void ini_tsym(symTab *tabla){
    tabla->size = 0;
    tabla->first = NULL;
    tabla->last = NULL;
}

int newTemp(symTab *tabla, char *nombre, int tipo){
    nodeTab *newNnodo;
    newNnodo = (nodeTab *)malloc(sizeof(nodeTab))

    newNnodo->name = (char *) malloc(sizeof(char) * strlen(nombre));
    strcpy(newNnodo->name, nombre);
    newNnodo->type = tipo;
    newNnodo->next = null;

    // y lo metemos en la cola
    insert_tsym(tabla,newNnodo);
}

int insert_tsym(symTab *tabla, nodeTab *nodo){
    if (tabla->first == null && tabla->last == null){
        tabla->first = nodo;
        tabla->last = nodo;
    } else {
        tabla->last->next = nodo;
        tabla->last = nodo;
    }
    tabla->size++;
}

void print_tsym(symTab *tabla){

    nodeTab *temp = tabla->first;

    printf("\nTAbla de simbolos\n");
    printf("id \t name \t type\n");
    while (temp != NULL){
        printf("%d \t %s \t %d\n",temp->id,temp->name,temp->type);
        temp = temp->next;
    }
}