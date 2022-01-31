#include <iostream>
#include <cmath>
using namespace std;
#define TAM 100000
int main (){
    int tam = 0;
    int gabs[TAM];
    cin >> tam;
    if (tam > 100000)
        return 0;
    int contador = 0;
    for (int i = 0; i < tam; i++){
        cin >> gabs[i];
    }
    for (int i = 0; i < tam-2; i++){
        if (gabs [i] == 1 && gabs[i+1] == 0 && gabs[i+2] == 0){
            contador++;
        }
    }
    cout << contador;

    return 0;
}
