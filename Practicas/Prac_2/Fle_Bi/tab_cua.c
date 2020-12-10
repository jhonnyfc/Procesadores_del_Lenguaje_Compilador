#include "tab_cua.h"
#include <stdio.h>
#include <stdlib.h>
#include "tab_sim.h"

/*Revisar codigo!!!*/

void ini_tqua(quadTab *qTabla) {
    qTabla->nextQua = 0;
}

void mostrar_tqua(quadTab *qTabla) {
    int i;
    printf("\n");
    for (i = 0; i < qTabla->nextQua; i++) {
        printf("Cuadrupla # %d: opera: %2d, op1: %2d, op2: %2d, resu: %2d\n", 
        	i+1,
            qTabla->table[i][0],
            qTabla->table[i][1],
            qTabla->table[i][2],
            qTabla->table[i][3]);
    }
}

void gen(quadTab *qTabla, int operac, int op1, int op2, int dest){
    qTabla->table[qTabla->nextQua][0] = operac;
    qTabla->table[qTabla->nextQua][1] = op1;
    qTabla->table[qTabla->nextQua][2] = op2;
    qTabla->table[qTabla->nextQua][3] = dest;
    qTabla->nextQua++;
}

