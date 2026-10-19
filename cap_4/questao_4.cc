#include "fila.h"

#define tempo 3

int main(void){
    Fila F = fila(5);
    enfileira(17, F); // p1
    enfileira(25, F); // p2
    enfileira(39, F); // p3
    enfileira(46, F); //p4
    while(!vaziaf(F)){
        int x = desenfileira(F); 
        int p = x/10; // numero do processo
        int t = x%10; // tempo de execucao total do processo
        if(t>3) enfileira(p*10 + (t - tempo), F);
        else printf("Processo %d concluido\n", p);
    }
    destroif(&F);
    return 0;
}

/* Ordem de execução

processo(tempo)

e | desenfileira    enfileira
x | p1(7)    ->     p1(4)
e | p2(5)    ->     p2(2)
c | p3(9)    ->     p3(6)
u | p4(6)    ->     p4(3)
ç | p1(4)    ->     p1(1)
ã | p2(2)    ->     p2 [concluído]
o | p3(6)    ->     p3(3)
  | p4(3)    ->     p4 [concluído]
  | p1(1)    ->     p1 [concluído]
  | p3(3)    ->     p3 [concluído]
*/