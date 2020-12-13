#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tab_sim.h"

int idLista;

void ini_tsym(symTab *tabla){
    idLista = 1;
    tabla->size = 0;
    tabla->first = NULL;
    tabla->last = NULL;
}

int newTemp(symTab *tabla, char *nombre, int tipo) {
     if (strcmp("", nombre) != 0 && find_tsym_by_name(tabla, nombre) != NULL) {
        return ERR_YA_EXISTE_VAR;
    }

    nodeTab *newNodo;
    newNodo = (nodeTab *)malloc(sizeof(nodeTab));

    newNodo->id = tabla->size;
    newNodo->name = (char *) malloc(sizeof(char) * strlen(nombre));
    strcpy(newNodo->name, nombre);
    newNodo->type = tipo;
    newNodo->idList = 0;
    newNodo->ioType = DF_INTER;
    newNodo->next = NULL;

    // y lo metemos en la cola
    return insert_tsym(tabla,newNodo);
}

int inserHead_tsym(symTab *tabla, char *nombre, int tipo, int listId) {
     if (strcmp("", nombre) != 0 && find_tsym_by_name(tabla, nombre) != NULL) {
        nodeTab *auxNo;
        auxNo = find_tsym_by_name(tabla, nombre);
        if (auxNo->ioType == DF_IN || DF_OUT == auxNo->ioType){
            if (auxNo->ioType == DF_IN)
                auxNo->ioType = DF_IO;
            return 0;
        }
        return ERR_YA_EXISTE_VAR;
    }

    nodeTab *newNodo;
    newNodo = (nodeTab *)malloc(sizeof(nodeTab));

    newNodo->id = tabla->size;
    newNodo->name = (char *) malloc(sizeof(char) * strlen(nombre));
    strcpy(newNodo->name, nombre);
    newNodo->type = tipo;
    newNodo->idList = listId;
    newNodo->ioType = DF_INTER;
    newNodo->next = NULL;

    // y lo metemos en la cola
    return insert_tsym(tabla,newNodo);
}

int insert_tsym(symTab *tabla, nodeTab *nodo){
    if (tabla->first == NULL && tabla->last == NULL){
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

    printf("\nTAbla de simbolos %s\n",DF_NAMES[29]);
    printf("\tid \t\tname \t\ttype    \t?e/s\n");
    while (temp != NULL){
        printf("\t%d \t\t%s \t\t%s \t%s\n",temp->id,temp->name,DF_NAMES[temp->type],DF_NAMES[temp->ioType]);
        temp = temp->next;
    }
}

nodeTab *find_tsym_by_name(symTab *tabla, char *nombre){
    nodeTab *temp = tabla->first;

    while (temp != NULL){
        if ( strcmp(temp->name,nombre) == 0)
            return temp;
        temp = temp->next;
    }

    return NULL;
}

nodeTab *find_tsym_by_id(symTab *tabla, int id){
    nodeTab *temp = tabla->first;

    while (temp != NULL){
        if ( temp->id == id)
            return temp;
        temp = temp->next;
    }

    return NULL;
}

void set_ioType(symTab *tabla, int listId, int ioType){
    nodeTab *aux = tabla->first;

    while (aux != NULL) {
        if(aux->idList == listId){
            aux->ioType = ioType;
        }
        aux = aux->next;
    }
}

int inc_idLista(){
    return idLista++;
}

int get_idList(){
    return idLista;
}

int print_var_io(symTab *tabla, int ioType){
    nodeTab *aux = tabla->first;

    while (aux != NULL) {
        if(aux->ioType == DF_IO && ioType == DF_IN){
            printf("\t Input %s\n",aux->name);
        } else if (aux->ioType == DF_IO && ioType == DF_OUT){
            printf("\t Output %s\n",aux->name);
        } else if (aux->ioType == ioType && ioType == DF_IN) {
            printf("\t Input %s\n",aux->name);
        } else if (aux->ioType == ioType && ioType == DF_OUT){
            printf("\t Output %s\n",aux->name);
        }
        aux = aux->next;
    }
}