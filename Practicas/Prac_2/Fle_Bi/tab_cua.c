#include <stdio.h>
#include <stdlib.h>
#include "tab_cua.h"
//#include "tab_sim.h"


void ini_tqua(quadTab *qTabla) {
    qTabla->nextQua = 0;
}

void print_tqua(quadTab *qTabla) {
    printf("\nTAbla de Cuadruplas\n");
    printf("\tpos \tOperacio \t\tid_Op1 \tid_Op2 \tidResu \n");
    for (int i = 0; i < qTabla->nextQua; i++) {
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

void print_3dir_tqua(quadTab *qTabla, symTab *tabla) {
    nodeTab *temp1;
    nodeTab *temp2;
    nodeTab *temp3;

    printf("\nCOdigo 3 direcciones\n");

    print_var_io(tabla,DF_IN);
    printf("\n");

    for (int i = 0; i < qTabla->nextQua; i++) {
        switch (qTabla->table[i][OPERACION]){
            case OP_GOTO:
                printf("\t %s: ?\n",DF_SIMBOLS[OP_GOTO - OP_SUMA_INT]);
            break;
            case OP_GOTO_CONDI:
                temp1 = find_tsym_by_id(tabla,qTabla->table[i][OP1_ID]);
                printf("\t %s: %s\n",DF_SIMBOLS[OP_GOTO_CONDI - OP_SUMA_INT],temp1->name);
            break;
            case OP_ASIGNA:
                temp1 = find_tsym_by_id(tabla,qTabla->table[i][OP1_ID]);
                temp2 = find_tsym_by_id(tabla,qTabla->table[i][RESUL_ID]);
                printf("\t %s %s %s\n",
                    temp2->name,
                    DF_SIMBOLS[qTabla->table[i][OPERACION] - OP_SUMA_INT],
                    temp1->name);
            break;
            case OP_INT_TO_REAL:
                temp1 = find_tsym_by_id(tabla,qTabla->table[i][OP1_ID]);
                temp2 = find_tsym_by_id(tabla,qTabla->table[i][RESUL_ID]);
                printf("\t %s %s %s\n",
                    temp2->name,
                    DF_SIMBOLS[qTabla->table[i][OPERACION] - OP_SUMA_INT],
                    temp1->name);
            break;
            case OP_TO_NEG_INT:
                temp1 = find_tsym_by_id(tabla,qTabla->table[i][OP1_ID]);
                temp2 = find_tsym_by_id(tabla,qTabla->table[i][RESUL_ID]);
                printf("\t %s %s %s\n",
                    temp2->name,
                    DF_SIMBOLS[qTabla->table[i][OPERACION] - OP_SUMA_INT],
                    temp1->name);
            break;
            case OP_TO_NEG_REAL:
                temp1 = find_tsym_by_id(tabla,qTabla->table[i][OP1_ID]);
                temp2 = find_tsym_by_id(tabla,qTabla->table[i][RESUL_ID]);
                printf("\t %s %s %s\n",
                    temp2->name,
                    DF_SIMBOLS[qTabla->table[i][OPERACION] - OP_SUMA_INT],
                    temp1->name);
            break;
            case OP_MAYOR:
                temp1 = find_tsym_by_id(tabla,qTabla->table[i][OP1_ID]);
                temp2 = find_tsym_by_id(tabla,qTabla->table[i][OP2_ID]);
                printf("\t %s %s %s\n",
                    temp1->name,
                    DF_SIMBOLS[qTabla->table[i][OPERACION] - OP_SUMA_INT],
                    temp2->name);
            break;
            case OP_MENOR:
                temp1 = find_tsym_by_id(tabla,qTabla->table[i][OP1_ID]);
                temp2 = find_tsym_by_id(tabla,qTabla->table[i][OP2_ID]);
                printf("\t %s %s %s\n",
                    temp1->name,
                    DF_SIMBOLS[qTabla->table[i][OPERACION] - OP_SUMA_INT],
                    temp2->name);
            break;
            break;
            case OP_MAYOR_IGUAL:
                temp1 = find_tsym_by_id(tabla,qTabla->table[i][OP1_ID]);
                temp2 = find_tsym_by_id(tabla,qTabla->table[i][OP2_ID]);
                printf("\t %s %s %s\n",
                    temp1->name,
                    DF_SIMBOLS[qTabla->table[i][OPERACION] - OP_SUMA_INT],
                    temp2->name);
            break;
            break;
            case OP_MENOR_IGUAL:
                temp1 = find_tsym_by_id(tabla,qTabla->table[i][OP1_ID]);
                temp2 = find_tsym_by_id(tabla,qTabla->table[i][OP2_ID]);
                printf("\t %s %s %s\n",
                    temp1->name,
                    DF_SIMBOLS[qTabla->table[i][OPERACION] - OP_SUMA_INT],
                    temp2->name);
            break;
            break;
            case OP_DISTINTO:
                temp1 = find_tsym_by_id(tabla,qTabla->table[i][OP1_ID]);
                temp2 = find_tsym_by_id(tabla,qTabla->table[i][OP2_ID]);
                printf("\t %s %s %s\n",
                    temp1->name,
                    DF_SIMBOLS[qTabla->table[i][OPERACION] - OP_SUMA_INT],
                    temp2->name);
            break;
            break;
            case OP_IGUAL:
                temp1 = find_tsym_by_id(tabla,qTabla->table[i][OP1_ID]);
                temp2 = find_tsym_by_id(tabla,qTabla->table[i][OP2_ID]);
                printf("\t %s %s %s\n",
                    temp1->name,
                    DF_SIMBOLS[qTabla->table[i][OPERACION] - OP_SUMA_INT],
                    temp2->name);
            break;
            break;
            default:
                temp1 = find_tsym_by_id(tabla,qTabla->table[i][OP1_ID]);
                temp2 = find_tsym_by_id(tabla,qTabla->table[i][OP2_ID]);
                temp3 = find_tsym_by_id(tabla,qTabla->table[i][RESUL_ID]);
                printf("\t %s := %s %s %s\n",
                    temp3->name,
                    temp1->name,
                    DF_SIMBOLS[qTabla->table[i][OPERACION] - OP_SUMA_INT],
                    temp2->name);
            break;
        }
        
    }

    printf("\n");
    print_var_io(tabla,DF_OUT);
    printf("\n");
}