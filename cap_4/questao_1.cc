#include "fila.h"

int main(){

    Fila F = fila(5); // cria uma fila de 5 espaços
    enfileira(1, F); // fila {} <- 1
    enfileira(2, F); // fila {1} <- 2
    enfileira(3, F); // fila {1,2} <- 3
    enfileira(desenfileira(F),F); // fila 1 <- {2,3} <- 1
    enfileira(desenfileira(F),F); // fila 2 <- {3,1} <- 2
    printf("%d\n", desenfileira(F)); // fila 3 <- {1,2}

    return 0;
}

/* Saída
3
*/