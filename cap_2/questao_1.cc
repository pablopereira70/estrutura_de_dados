#include <stdio.h>
#include "pilha.h" // pilha

int main(void) {
    Pilha P = pilha(3); // reserva o espaço na memória
    empilha(1,P); //pilha {} <- 1
    empilha(2,P); //pilha {1} <- 2
    printf("%d\n",desempilha(P)); //pilha{1} -> 2
    printf("%d\n",desempilha(P)); //pilha{} -> 1
    printf("%d\n",desempilha(P)); //pilha{} -> {}
    return 0;
}

/* Saída

2
1
pilha vazia!

*/