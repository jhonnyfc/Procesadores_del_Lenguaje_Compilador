#include "tab_cua.h"
#include <stdio.h>
#include <stdlib.h>

void gen(quadTable *qTabla, int *cosas){
    qTabla->table[qTabla->nextQua][0] = cosas[0];
    qTabla->table[qTabla->nextQua][1] = cosas[1];
    qTabla->table[qTabla->nextQua][2] = cosas[2];
    qTabla->table[qTabla->nextQua][3] = cosas[3];
    qTabla->nextQua ++;
}