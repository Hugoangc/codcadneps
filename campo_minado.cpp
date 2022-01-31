#include <iostream>
using namespace std;
#define TAM 50
int main (){
    int tam = 0;
    int gabs[TAM];
    cin >> tam;
    if (tam > 50)
        return 0;
    for (int i = 0; i < tam; i++){
        cin >> gabs[i];
    }
    int quantidade;
    for (int i = 0; i < tam; i++){
        quantidade = 0;
        quantidade+=gabs[i];
        if (i < tam-1)
            quantidade+=gabs[i+1];
        if(i > 0)
            quantidade+=gabs[i-1];

        cout << quantidade;
    }

    return 0;
}
