#include "lista.h"

int ocorrencias(int x, Lista L){
    int ocorrencias = 0;

    while(L != NULL) {
        if(L -> item == x) ocorrencias++;
        L = L -> prox;
    }

    return ocorrencias;
}


int main(void){
    Lista L = no(1,no(2, no(1, no(5,NULL))));
    printf(fmt, ocorrencias(1, L));
    return 0;
}