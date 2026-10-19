#include "lista.h"

void substitui(int x, int y, Lista L){
    if(L == NULL) return;
    if(L->item == x) L->item = y;
    substitui(x, y, L->prox);
}


int main(void){
    Lista L = no(1, no(2, no(3, no(1, NULL))));
    substitui(1, 5, L);
    exibe(L);
    return 0;
}