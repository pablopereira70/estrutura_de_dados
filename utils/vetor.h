#include <iostream>

using namespace std;

void exibir_float(float vetor[], int tamanho){
    for(int i = 0; i < tamanho; i++) {
        cout << vetor[i]; 
        if(i != tamanho - 1) cout << " - ";
    }
    cout << endl;
}


void exibir_string(char vetor[][50], int tamanho){
    for(int i = 0; i < tamanho; i++){
        cout << vetor[i];
        if(i != tamanho - 1) cout << " - ";
    }
    cout << endl;
}