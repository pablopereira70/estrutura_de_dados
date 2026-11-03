#include <iostream>   
#include <string>       
#include <cstring>   
#include <cstdlib> 

using namespace std;

class No{ 
 public: 
  char nome; 
  No *prox; 
  No(char n){ 
   nome = n; 
   prox = NULL; 
  } 
}; 
 
class Pilha{ 
 public: 
  No *topo; 
   
  Pilha(){ 
   topo = NULL; 
  } 
   
  void push(char n){ 
   No *novo = new No(n); 
   if(topo == NULL){ 
    topo = novo; 
   }else{ 
    novo->prox = topo; 
    topo = novo; 
   } 
  } 
 
  char nomeTopo(){
   return topo->nome; 
  } 
  char pop(){ 
   No *temp; 
   char popped; 
   if(topo != NULL){ 
    temp = topo; 
    popped = temp->nome; 
    topo = topo->prox; 
    free(temp); 
   } 
   return popped; 
  } 
           int isEmpty(){ 
   return (topo == NULL);  // retorna 1 se for verdadeiro 
  }    
}; 
 
void verify(string str){ 
 //Você pode declarar mais variáveis, se achar necessário 
 char par[3][2]; 
 strcpy(par[0], "()"); 
 
 strcpy(par[1], "[]"); 
 strcpy(par[2], "{}"); 
  
 Pilha *pilha = new Pilha();  
 
 for(int i = 0; i < str.length(); i++){ 
  if(str[i] == par[0][0]){ //( 
  // item A- complete o algoritmo 
  pilha->push(str[i]);

  }else if(str[i] == par[1][0]){ 
  // item B- complete o algoritmo 
  pilha->push(str[i]);
 
  }else if(str[i] == par[2][0]){ 
  // item C- complete o algoritmo 
  pilha->push(str[i]);
  
  } 
 
  if(str[i] == par[0][1]){ 
              // item D- complete o algoritmo
  if(pilha->isEmpty()) pilha->push('F');
  else if (pilha->nomeTopo() == par[0][0]) pilha->pop();
 
  }else if(str[i] == par[1][1]){ 
  // item E- complete o algoritmo 
  if(pilha->isEmpty()) pilha->push('F');
  else if(pilha->nomeTopo() == par[1][0]) pilha->pop();
 
  }else if(str[i] == par[2][1]){ 
  // item F- complete o algoritmo
  if(pilha->isEmpty()) pilha->push('F');
  else if(pilha->nomeTopo() == par[2][0]) pilha->pop(); 
 
  } 
  
 } 
  // item G- complete o algoritmo 
  if(pilha->isEmpty()) cout << str << "\nEsta balanceada" << endl;
  else cout << str << "\nNao esta balanceada" << endl;
 
} 
 
main(){ 
        string str("{a + [b + (2*c*d + 2)]"); 
        verify(str); 
        string str2("a + [b + (2*c*d + 2)]"); 
        verify(str2); 
        string str3("a + b + 2*c*d + 2)]"); 
        verify(str3); 
        string str4("a + b + 2*c*d + 2]");
        verify(str4);
        string str5("a + [b + (2*c*d + 2])");
        verify(str5);
}