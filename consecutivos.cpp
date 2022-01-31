#include <iostream>
using namespace std;
int main(){
    int quantidade, numero = 0, numero_ant = 0, maior = 0, repeticoes = 1;
    cin >> quantidade;
    for (int i = 0; i < quantidade; i++){
        cin >> numero;
        if (numero == numero_ant)
            repeticoes++;
        if (repeticoes > maior)
            maior = repeticoes;
        if (numero != numero_ant)
            repeticoes = 1;
        numero_ant = numero;
    }
    cout << maior;
    return 0;
}
