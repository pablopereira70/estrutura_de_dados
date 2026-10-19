#include "lista.h"

int soma(Lista L){
    if(L == NULL) return 0;
    return L->item + soma(L->prox);
}


int main(void){
    Lista L = no(1, no(2, no(3, NULL)));
    printf(fmt, soma(L));
    return 0;
}