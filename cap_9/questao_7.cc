#include "lista.h"

int igual(Lista A, Lista B){
    if(A == NULL && B== NULL) return 1;
    if(A == NULL || B == NULL) return 0;
    if(A->item != B->item) return 0;
    return igual(A->prox,B->prox);
}


int main(void){
    Lista I = no(1, no(2, no(3, NULL)));
    Lista J = no(1, no(2, no(3, NULL)));
    Lista K = no(1, no(3, no(3, NULL)));
    Lista E = no(1, no(3, no(3, no(4, NULL))));
    printf(fmt, igual(I, J));
    printf(fmt, igual(I, K));
    printf(fmt, igual(I, E));
    return 0;
}
