#include "lista.h"

int ultimo(Lista L){
    int ultimo = -1;

    while(L != NULL){
        ultimo = L->item;
        L = L->prox;
    }

    return ultimo;
}


int main(void){
    Lista L = no(1, no(2, no(3, NULL)));
    printf(fmt, ultimo(L));
    return 0;
}