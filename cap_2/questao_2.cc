#include <stdio.h>
#include "pilha.h" // pilha de float

int main(void) {
Pilha P = pilha (100); // reserva o espaço na memória
empilha (8,P); // pilha {} <- 8
while(topo (P)>0) empilha (topo (P)/2,P); // pilha {8} <- 4,2,1,0
while(!vaziap (P)) printf("%d\n", desempilha(P)); // pilha{} -> 8,4,2,1,0
return 0;
}

/* Saída

0
1
2
3
4
8

*/