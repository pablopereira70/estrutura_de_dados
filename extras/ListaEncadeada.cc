#include <stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
typedef struct elemento{
	int cod;
	char nome[23];
	elemento *prox;
};


struct elemento *inicio=NULL,*fim=NULL;

//anexar a lista B ao final da Lista A
void anexa(struct elemento *A, struct elemento *B) {
	
} 

struct elemento *no(int v,char n[23],struct elemento *p) {
	   
	   struct elemento *novo= (struct elemento *)malloc(sizeof(struct elemento));	

	   novo->cod=v;
	   strcpy(novo->nome,n);
	   novo->prox=p;
	   return novo;
	
}
// adicionar ao final da lista
//complete o codigo
void addFinal(int c,char n[23]){
    struct elemento *novo= no(c,n,NULL);
	// dois casos: lista vazia ou não vazia
	if (inicio == NULL) {
		inicio = novo;
	} else {
		fim -> prox = novo;
	}
	fim = novo; //ambos os casos
}
// adicionar no inicio da lista
//complete o codigo
void addInicio(int c,char n[23]){
    struct elemento *novo= no(c,n,NULL);

	//dois casos: lista vazia ou não vazia
	if(inicio == NULL) {
		inicio = novo;
		fim = novo;
	} else {
		novo -> prox = inicio;
		inicio = novo;
	}
}


//adicionar ordenado (use codigo como a chave de ordenacao)
//complete o codigo
void addOrdenado(int c, char n[23]){
	struct elemento *novo= no(c,n,NULL);
	 
	if(inicio == NULL) { // lista vazia
		inicio = novo;
		fim = novo;
	} else if(inicio -> cod > novo -> cod){ // cod do inicio é maior que o cod do novo
		novo -> prox = inicio;
		inicio = novo;
	} else if (fim -> cod < novo -> cod) { // cod do final é menor que o cod do novo
		fim -> prox = novo;
		fim = novo;
	} else { // no meio da lista
		struct elemento *aux = inicio;
		struct elemento *ultimo;

		while(aux -> cod < novo -> cod) {
			ultimo = aux;
			aux = aux -> prox;
		}
			
		ultimo -> prox = novo;
		novo -> prox = aux;
	}
}

//mostrar todos os elementos da lista (do inicio ao final)
//complete o codigo
void mostrar(){
	struct elemento *aux = inicio;
	while(aux != NULL) {
		std::cout << "Cód: " << aux->cod << endl;
		std::cout << "Nome: " << aux->nome << endl;
		aux = aux -> prox;
	}	
}

// remover um elemento da lista (procure o elemento pelo codigo)
// "cod" recebe o valor procurado
//complete o codigo
void remove(int cod){ 
	struct elemento *aux = inicio;
	if(inicio -> cod == cod) {
		inicio = inicio -> prox;
		free(aux);
	} else {
		struct elemento *ultimo;
		while(aux -> cod != cod and aux -> prox != NULL) {
			ultimo = aux;
			aux = aux -> prox;
		}
		if(aux -> prox == NULL and aux -> cod == cod) {
			fim = ultimo;
			ultimo -> prox = NULL;
			free(aux);
		} else if(aux -> cod == cod){
			ultimo -> prox = aux -> prox;
			free(aux);
		}
	}
			} 

// procura a ocorrencia de um elemento na lista
// "cod" � o valor procurado
//complete o codigo		
int procura(int cod){
	struct elemento *aux = inicio;
	while(aux != NULL) {
		if(aux -> cod == cod){
			return 1;
		}
		aux = aux -> prox;
	}
	return 0;
}

//destruir a lista completa
//complete o codigo

void destroi(struct elemento *a){	    
	struct elemento *aux = inicio;
	struct elemento *ultimo;
	while(aux != NULL) {
		ultimo = aux;
		free(ultimo);
		aux = aux -> prox;
	}
	inicio = NULL;
	fim = NULL;
}

//complete o codigo
void inverterLista(){
	struct elemento *current = inicio;
	struct elemento *previous = NULL;
	struct elemento *next;
	while(current != NULL) {
		next = current -> prox; //guarda o proximo nó
		current -> prox = previous; // faz o nó atual apontar para o nó anterior
		previous = current; // atualiza o nó anterior
		current = next; // passa para o próximo nó
	}
	inicio = fim;
	fim = previous;
}

int main(){
	
    //complete com o teste das funcoes criadas
	addFinal(10, "Ana");
    addFinal(30, "Carlos");
    addInicio(5, "Bruno");

    cout << "--- Lista Inicial ---" << endl;
    mostrar();

    // 2. Testando a função de busca
    int buscaCod = 30;
    if (procura(buscaCod)) {
        cout << "Elemento com código " << buscaCod << " encontrado!" << endl;
    } else {
        cout << "Elemento não encontrado." << endl;
    }

    // 3. Testando a inversão da lista
    inverterLista();
    cout << "\n--- Lista Apos Inverter ---" << endl;
    mostrar();

    return 0;
}
