/*
Estrutura base da fila definida pelo livro
*/

#include "stdio.h"
#include <iostream>

#define avanca(i) (i = i + 1 % F -> max)

using namespace std;

typedef struct fila{
    int max;
    int total;
    int inicio;
    int final;
    char *item;
}*Fila;


Fila fila(int m){
    Fila F = (struct fila*)malloc(sizeof(struct fila));
    F -> max = m;
    F -> total = 0;
    F -> inicio = 0;
    F -> final = 0;
    F -> item = (char*)malloc(m*sizeof(char));
    return F;
}


int vaziaf(Fila F){
    return (F->total == 0);
}


int cheiaf(Fila F){
    return (F->total == F-> max);
}


void enfileira(char x, Fila F){
    if(cheiaf(F)) {
        puts("fila cheia!"); 
        abort();
    }

    F -> item[F->final] = x;
    avanca(F->final);
    F->total++;
}


char desenfileira(Fila F){
    if(vaziaf(F)) {
        puts("fila vazia!");
        abort();
    }
    char x = F->item[F->inicio];
    avanca(F->inicio);
    F -> total--;
    return x;
}

void destroif(Fila *F){
    free((*F) -> item);
    free(*F);
    *F = NULL;
}