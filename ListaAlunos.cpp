#include <stdio.h>
#include <iostream>
using namespace std;

typedef struct aluno{
	int mat;
	string nome;	
}Aluno; 

int qtd = 0;
Aluno lista[30];


void incluirDesordenado(Aluno e){
	if (qtd < 30) {
		lista[qtd] = e;
		qtd++;
	}
}

//retorna a posicao do elemento procurado
int procura(int mat){
	for(int i = 0; i < qtd; i++) {
		if (lista[i].mat == mat) {
			return i;
		}
	}
	return -1;
}

//recebe a posicao e imprime o elemento na tela
void mostrar(int pos){
	cout << "Matricula: " << lista[pos].mat << endl;
	cout << "Nome: " << lista[pos].nome << endl;
}

//mostra TODOS os elementos da lista
void mostra(){	
	for(int i = 0; i < qtd; i++) {
		cout << "Matricula: " << lista[i].mat << endl;
		cout << "Nome: " << lista[i].nome << endl;
	}
}

//estrat�gia 1: colocar o ultimo elemento da lista na posi��o do elemento removido
void remover00(int pos){
	if (pos >= 0 && pos < qtd) {
		qtd--;
		lista[pos] = lista[qtd];
	}
}

//estrat�gia 2: mover TODOS os elementos que est�o AP�S  o elemento que deve ser removido UMA POSI��O A FRENTE.
void remover01(int pos){
	if (pos >= 0 && pos < qtd) {
		qtd--;
		for(int i = pos; i < qtd; i++) {
			lista[i] = lista[i + 1];
		}
	}
}

int main(){
	Aluno novoaluno;
	novoaluno.mat = 123;
	novoaluno.nome = "cleitinho";
	incluirDesordenado(novoaluno);
	novoaluno.mat = 456;
	novoaluno.nome = "clecio";
	incluirDesordenado(novoaluno);
	novoaluno.mat = 345;
	novoaluno.nome = "Gabriel";
	incluirDesordenado(novoaluno);
	novoaluno.mat = 789;
	novoaluno.nome = "thiago com h";
	incluirDesordenado(novoaluno);
	novoaluno.mat = 347;
	novoaluno.nome = "cris";
	incluirDesordenado(novoaluno);
	novoaluno.mat = 244;
	novoaluno.nome = "maria";
	incluirDesordenado(novoaluno);

    cout << "<< listagem >>" << endl;
	mostra();
    cout << endl;

	cout << "<<Aluno>>" << endl;
	mostrar(3);
	cout << endl;

	int indice = procura(123);
	cout << "<<Aluno>>" << endl;
	cout << indice << endl;
	cout << endl;

	remover00(5);
	cout << "<< listagem >>" << endl;
	mostra();
	cout << endl;

	remover00(2);
	cout << "<< listagem >>" << endl;
	mostra();
	cout << endl;

	remover01(0);
	cout << "<< listagem >>" << endl;
	mostra();
	cout << endl;

	indice = procura(456);
	cout << "<<Aluno>>" << endl;
	cout << indice << endl;
	cout << endl;
	return 0;
}
	
	
	

