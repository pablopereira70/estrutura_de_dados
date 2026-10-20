#include "lista.h"

void empilha(int x, Lista *L){
     Lista n = no(x, NULL);
     n -> prox = *L;
     *L = n;
}


int desempilha(Lista *L){
    struct no *aux = *L;
    int n = (*L) -> item;
    *L = (*L) -> prox;
    free(aux);
    return n;
}


int main(void) {
    Lista L = no(1, no(3, no(3, NULL)));
    empilha(6, &L);
    exibe(L);
    empilha(8, &L);
    exibe(L);
    desempilha(&L);
    exibe(L);
}