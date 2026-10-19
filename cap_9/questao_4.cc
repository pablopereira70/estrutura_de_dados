#include "lista.h"

Lista inversa(Lista L){
    if(L == NULL || L->prox == NULL) return L;
    struct no *anterior = NULL;
    struct no *atual = L;
    struct no *proximo;

    while(atual != NULL) {
        proximo = atual -> prox;
        atual -> prox = anterior;
        anterior = atual;
        atual = proximo;
    }

    return anterior;
}


int main(void){
    Lista L = no(1, no(2, no(3, NULL)));
    L = inversa(L);
    exibe(L);
    return 0;
}