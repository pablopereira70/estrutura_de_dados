#include "pilha.h"
#include "..\utils\style.h"
#include "..\utils\input.h"


string inverter_letras_das_palavras(string frase){ // lógica de inversão usando pilha
    Pilha P = pilha(frase.size());

    for(int i = 0; i < frase.size(); i++){ // insere todas as letras na pilha
        empilha(frase[i], P);
    }

    string palavraInvertida;
    string fraseInvertida;

    while(!vaziap(P)){ // enquanto a pilha não for vazia
        char c = desempilha(P); // desempilha
        if(c == ' ') { // se é espaço
            fraseInvertida = palavraInvertida + ' ' + fraseInvertida; // acabou a palavra
            palavraInvertida = ""; // reseto a palavra
        } else { // se não é um espaço
            palavraInvertida += c; // soma normalmente
        }
    }

    fraseInvertida = palavraInvertida + ' ' + fraseInvertida; // insero a última palavra
    return fraseInvertida;
}

int main() {
    string frase;
    string fraseInvertida;

    exibir_cabecalho("INVERSOR DE LETRAS DAS PALAVRAS");

    frase = obter_frase();
    fraseInvertida = inverter_letras_das_palavras(frase);

    cout << "frase invertida: " << fraseInvertida << endl;

    exibir_rodape(20);

    return 1;
}