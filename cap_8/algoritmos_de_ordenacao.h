#include "stdlib.h"

#define troca(a, b){ int x=a; a=b; b=x; }

void bubble_sort(int v[], int n){
    for(int i = 1; i <= n-1; i++){
        for(int j = 0; j < n - i; j++){
            if(v[j] > v[j+1]) troca(v[j], v[j+1]);
        }
    }
}

/*Ordenação por trocas

"v" é o vetor;
"n" é o tamanho do vetor

O algoritmo percorre a lista n vezes fazendo n-1 comparações
*/

int seleciona(int v[], int n){
    int i = 0;
    for(int j=1; j<n; j++){
        if(v[i]<v[j]) i = j;
    }
    return i;
}


void selection_sort(int v[], int n){
    while(n>1){
        troca(v[seleciona(v, n)], v[n-1]);
        n--;
    }
}

/*Ordenação por seleção

"v" é o vetor;
"n" é o tamanho do vetor

O algoritmo percorre a lista n vezes e seleciona a 
cada vez o maior elemento e joga ele pro final da lista
*/

void insere(int x, int v[], int n){
    while(n>0 && x<v[n-1]){
        v[n] = v[n-1];
        n--;
    }
    v[n] = x;
}


void insertion_sort(int v[], int n){
    for(int i=0; i<n; i++) insere(v[i], v, i);
}

/*Ordenação por seleção
"x" é o item a ser inserido
"v" é o vetor
"n" é o tamanho do vetor

O algoritmo começa no item 0 e vai inserido os demais de maneira ordenada
*/

void intercala(int v[], int p, int m, int u){
    int *w = (int*)malloc((u-p+1)*sizeof(int));
    if(w == NULL) abort();
    int i = p, j = m + 1, k = 0;
    while(i <= m && j<= u){
        if(v[i] < v[j]) w[k++] = v[i++];
        else w[k++] = v[j++];
    }
    while(j<=m) w[k++] = v[i++];
    while(j<=u) w[k++] = v[j++];
    for(k=0; k<=u-p; k++) v[p+k] = w[k];
    free(w);
}


void merge_sort(int v[], int p, int u){
    if(p == u) return;
    int m = (p+u)/2;
    merge_sort(v, p, m);
    merge_sort(v, m+1, u);
    intercala(v, p, m, u);
}

/*Ordenação por intercalação

"p" é o inicio do vetor
"u" é o fim do vetor
"m" é o meio do vetor

Vai quebrando os vetores em partes
*/