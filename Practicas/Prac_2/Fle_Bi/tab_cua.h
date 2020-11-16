#ifndef tab_cua_h
#define tab_cua_h

#define NCOL 4
#define NROWS 100

typdef struct {
    int table[NCOL][NROWS];
    int nextQua;
} quadTab;

#endif