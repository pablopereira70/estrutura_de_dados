int linear_search(int x, int v[],  int n){
    for(int i=0; i<n; i++){
        if(x == v[i]) return 1;
    }
    return 0;
}

/*Busca linear
"x" é o elemento a ser encontrado
"v" é o vetor
"n" é o tamanho do vetor

Procura o elemento do inicio ao fim
*/

int binary_search(int x, int v[], int n){
    int p = 0;
    int u = n - 1;
    while(p <= u){
        int m = (p+u) / 2;
        if(x == v[m]) return 1;
        if(x < v[m]) u = m - 1;
        else p = m + 1;
    }
    return 0;
}

/*Busca binária
"x" é o elemento a ser encontrado
"v" é o vetor
"n" é o tamanho do vetor

Procura o elemento quebrando em partes, exigindo que o vetor esteja ordenado
*/