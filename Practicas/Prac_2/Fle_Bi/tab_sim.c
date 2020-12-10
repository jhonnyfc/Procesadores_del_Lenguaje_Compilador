#include "tab_sim.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void ini_tsym(symTab *tabla){
    tabla->size = 0;
    tabla->first = NULL;
    tabla->last = NULL;
}

int newTemp(symTab *tabla, char *nombre, int tipo){
    printf("XPPPPPPPPPPPPPPPPPPP-%s-\n",nombre);
     if (strcmp("", nombre) != 0 && find_tsym(tabla, nombre) != NULL) {
        return ERR_YA_EXISTE_VAR;
    }

    nodeTab *newNodo;
    newNodo = (nodeTab *)malloc(sizeof(nodeTab));

    newNodo->id = tabla->size;
    newNodo->name = (char *) malloc(sizeof(char) * strlen(nombre));
    strcpy(newNodo->name, nombre);
    newNodo->type = tipo;
    newNodo->next = NULL;

    // y lo metemos en la cola
    return insert_tsym(tabla,newNodo);
}

int insert_tsym(symTab *tabla, nodeTab *nodo){
    if (tabla->first == NULL && tabla->last != NULL){
        tabla->first = nodo;
        tabla->last = nodo;
    } else {
        tabla->last->next = nodo;
        tabla->last = nodo;
    }
    tabla->size++;

    return tabla->size - 1;
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

nodeTab *find_tsym(symTab *tabla, char *nombre){
    nodeTab *temp = tabla->first;

    while (temp != NULL){
        if ( strcmp(temp->name,nombre) == 0)
            return temp;
        temp = temp->next;
    }

    return NULL;
}