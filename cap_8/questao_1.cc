#include "../utils/vetor.h"

#define troca(a, b){ float  x=a; a=b; b=x; };

void bubble_sort(float vetor[], int tamanho){
    for(int i = 1; i <= tamanho-1; i++){
        int trocas = 0;
        for(int j = 0; j < tamanho - i; j++){
            if(vetor[j] > vetor[j+1]) {
                troca(vetor[j], vetor[j+1]);
                trocas++;
            }
        }
        if(trocas = 0) return;
    }
}

int main(){
    float numeros[5] = {3.4, 3.23, 3.75, 3.22, 3.221};
    cout << "Vetor (desordenado): ";
    exibir_float(numeros, 5);
    bubble_sort(numeros, 5);
    cout << "Vetor (ordenado): ";
    exibir_float(numeros, 5);
    return 0;
}