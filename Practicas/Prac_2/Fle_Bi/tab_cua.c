#include "tab_cua.h"
#include <stdio.h>
#include <stdlib.h>
#include "tab_sim.h"

void gen(quadTab *qTabla, int operac, int op1, int op2, int dest){
    qTabla->table[qTabla->nextQua][0] = operac;
    qTabla->table[qTabla->nextQua][1] = op1;
    qTabla->table[qTabla->nextQua][2] = op2;
    qTabla->table[qTabla->nextQua][3] = dest;
    qTabla->nextQua++;
}

