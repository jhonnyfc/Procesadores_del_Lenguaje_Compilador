#ifndef tab_cua_h
#define tab_cua_h

#define NCOL 4
#define NROWS 100

typedef struct {
    int table[NCOL][NROWS];
    int nextQua;
} quadTab;


void gen(quadTab *qTabla, int operac, int op1, int op2, int dest);

#endif