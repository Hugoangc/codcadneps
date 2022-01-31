#include <algorithm>
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main(){
    string nome, temp, test;
    cin >> nome;
    unsigned int tam = nome.size();
    for (int i = 0; i < tam; i++){
        if (nome[i] == 'a' || nome[i] == 'e' || nome[i] == 'i' || nome[i] == 'o' || nome[i] == 'u')
            test += nome[i];
    }
    for (int i = tam-1; i>=0; i--){
        if (nome[i] == 'a' || nome[i] == 'e' || nome[i] == 'i' || nome[i] == 'o' || nome[i] == 'u')
            temp += nome[i];
    }
    (temp == test) ? cout << "S" << endl : cout << "N" << endl;
    return 0;
}
