#ifndef tab_cua_h
#define tab_cua_h

#include "tab_sim.h"
#include "utiles.h"

typedef struct {
    int table[NROWS][NCOL];
    int nextQua;
} quadTab;

void ini_tqua(quadTab *qTabla);

void print_tqua(quadTab *qTabla);

void gen(quadTab *qTabla, int operac, int op1, int op2, int dest);

void print_3dir_tqua(quadTab *qTabla, symTab *tabla);

#endif