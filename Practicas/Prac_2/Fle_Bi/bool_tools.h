#ifndef bool_tools_h
#define bool_tools_h

#include "utiles.h"
#include "tab_cua.h"

bool_ids_list makelist(int id);

void backpatch(quadTab *qTabla, bool_ids_list listaIds, int id_res);

bool_ids_list merge(bool_ids_list A, bool_ids_list B);

#endif