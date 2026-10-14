#include <iostream>

using namespace std;

string obter_frase(){ // pede ao usuário que digite uma frase
    string frase;
    cout << "digite a frase: ";
    getline(cin, frase);
    cout << endl;
    return frase;
}