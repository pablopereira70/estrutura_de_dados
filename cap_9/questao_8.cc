#include "lista.h"

int enesimo(int n, Lista L){
    if(L == NULL) {puts("n invalido"); abort();}
    if(n == 1) return L->item;
    return enesimo(n - 1, L->prox);
}


int main(void){
    Lista L = no(1, no(3, no(3, NULL)));
    printf(fmt, enesimo(3, L));
    printf(fmt, enesimo(4, L));
}