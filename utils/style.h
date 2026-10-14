#include <iostream>

using namespace std;


void exibir_cabecalho(string titulo){
    cout << "<< " << titulo << " >>" << endl;
}

void exibir_rodape(int tamanho) {
    for(int i=0;i < tamanho; i++) {
        cout << '_';
    }
    cout << endl;
}