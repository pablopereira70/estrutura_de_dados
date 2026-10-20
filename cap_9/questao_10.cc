#include "lista.h"

void enfileira(int x, Lista *L){
    if(*L == NULL){
        struct no *novo = no(x, NULL);
        novo -> prox = novo;
        *L = novo;
    } else {
        struct no *inicio = (*L) -> prox;
        (*L) -> prox = no(x, inicio);
        *L = (*L) -> prox; 
    }
}


int desenfileira(Lista *L){
    if(*L == NULL) {puts("fila vazia!"); abort();}

    struct no *aux = *L;
    int x;

    if((*L)->prox == *L){
        aux = *L;
        *L = NULL;
    } else {
        aux = aux -> prox;
        (*L) -> prox = aux -> prox;
    }
    
    x = aux -> item;
    free(aux);
    return x;
}


int main(void){
    struct no *f = NULL;
    enfileira(3, &f);
    enfileira(4, &f);
    enfileira(5, &f);
    printf(fmt, desenfileira(&f));
    printf(fmt, desenfileira(&f));
    printf(fmt, desenfileira(&f));
    printf(fmt, desenfileira(&f));
}
