#include "pilha.h"
#include "../utils/style.h"

void inserirNumOrdenado(char num,Pilha &a, Pilha &b){
    if(vaziap(a)) {
        empilha(num, a);
    } else {
        while(!vaziap(a) && a->item[a->topo] > num){
            empilha(desempilha(a), b);
        }
        empilha(num, a);

        while(!vaziap(b)){
            empilha(desempilha(b), a);
        }
    }
}

Pilha pedir_n_numeros(){
    int n;

    cout << "quantos numeros? ";
    cin >> n;
    cout << endl;

    Pilha a = pilha(n);
    Pilha b = pilha (n);
    char x;

    for(int i=0; i < n; i++){
        cout << i + 1 <<  ") " << "numero: ";
        cin >> x;
        cout << endl;
        inserirNumOrdenado(x,a,b);
    }
    return a;
}

int main() {
    exibir_cabecalho("DUAS PILHAS");
    Pilha a = pedir_n_numeros();

    while(!vaziap(a)){
        cout << desempilha(a) << endl;
    }

    exibir_rodape(20);
    return 1;
}