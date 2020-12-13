#include <stdio.h>
#include <stdlib.h>
#include "tab_cua.h"


void ini_tqua(quadTab *qTabla) {
    qTabla->nextQua = 0;
}

void print_tqua(quadTab *qTabla) {
    int i;
    printf("\nTAbla de Cuadruplas\n");
    printf("\tpos \tOperacio \t\tid_Op1 \tid_Op2 \tidResu \n");
    for (i = 0; i < qTabla->nextQua; i++) {
        printf("\t%d \t%s \t\t%d \t%d \t%d\n", 
        	i+1,
            DF_NAMES[qTabla->table[i][OPERACION]],
            qTabla->table[i][OP1_ID],
            qTabla->table[i][OP2_ID],
            qTabla->table[i][RESUL_ID]);
    }
}

void gen(quadTab *qTabla, int operac, int op1, int op2, int dest){
    qTabla->table[qTabla->nextQua][OPERACION] = operac;
    qTabla->table[qTabla->nextQua][OP1_ID] = op1;
    qTabla->table[qTabla->nextQua][OP2_ID] = op2;
    qTabla->table[qTabla->nextQua][RESUL_ID] = dest;
    qTabla->nextQua++;
}

