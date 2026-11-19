#include <string.h>
#include "../utils/vetor.h"

using namespace std;

#define MAX 50

void insere(char x[], char v[][MAX], int n){
    while(n>0 && strcmp(x, v[n-1]) < 0){
        strcpy(v[n], v[n-1]);
        n--;
    }
    strcpy(v[n], x);
}


void insertion_sort(char v[][MAX], int n){
    char aux[MAX];
    for(int i=0; i<n; i++) {
        strcpy(aux, v[i]);
        insere(aux, v, i);
    }
}


int main(){
    char palavras[4][50] = {"melancia", "banana", "uva", "abacaxi"};
    cout << "vetor desordenado: ";
    exibir_string(palavras, 4);
    insertion_sort(palavras, 4);
    cout << "vetor ordenado: ";
    exibir_string(palavras, 4);
    return 0;
}