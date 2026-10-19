#include "pilha.h"
#include "../utils/style.h"

Pilha verificar_balanceamento(Pilha a, string expressao){
    char empilhar[3] = {'(','[','{'};
    char desempilhar[3] = {')',']','}'};
    bool flag = true;

      for(int i = 0; i < expressao.size() && flag; i++){ // para cada letra
        for(int j = 0; j < 3 && flag; j++){
            if(expressao[i] == empilhar[j]){ // compara se é igual a algumas das expressões de desempilhar
                empilha(expressao[i], a); // se sim, empilha
            } else if(expressao[i] == desempilhar[j]){ // se não, verificar se é igual a alguma de desempilhar
                if(!vaziap(a) && a->item[a->topo] == empilhar[j]){ // antes de desemplihar verifica se a pliha não está vazia e se o item do topo e igual a expressão que abri
                    desempilha(a);
                } else { // se não
                    empilha('f', a); // força a pliha não ficar vazia 
                    flag = false; // quebra os loops
                }
            }
        }
      }

      return a;
}

int main(){
    exibir_cabecalho("EH_BALANCEADA");

    string expressao;

    cout << "expressao: ";

    getline(cin, expressao);

    cout << endl;

    Pilha a = pilha(expressao.size());

    a = verificar_balanceamento(a, expressao);

    if(vaziap(a)){
        cout << "Esta balanceada" << endl;
    } else {
        cout << "Nao esta balanceada" << endl;
    }
    return 0;
}