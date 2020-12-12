#include <stdio.h>
#include <stdlib.h>

#include "bool_tools.h"

bool_ids_list makelist(int id){
    bool_ids_list aux;
    aux.size = 1;
    aux.list = malloc(sizeof(int));
    aux.list[0] = id;
    return aux;
}

void backpatch(quadTab *qTabla, bool_ids_list listaIds, int id_res){
    for (int i = 0; i < listaIds.size; i++){
        qTabla->table[listaIds.list[i]][RESUL_ID] = id_res;
    }
}

bool_ids_list merge(bool_ids_list A, bool_ids_list B){
    bool_ids_list auxLis;
    auxLis.size = A.size + B.size;
    auxLis.list = malloc(auxLis.size*sizeof(int));

    for (int i = 0; i < A.size; i++){
        auxLis.list[i] = A.list[i];
    }

    for (int i = 0; i < B.size; i++){
        auxLis.list[A.size + i] = B.list[i];
    }

    return auxLis;
}