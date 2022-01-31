#include <algorithm>
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main(){
    int tam,cont=0;
    cin >> tam;
    int vet[tam], vot[tam], cent[tam];
    for (int i = 0; i < tam; i++){
        cin >> vet[i];
        vot[i] = vet[i];
    }
    sort(vot,vot+tam);
    for (int i = 0; i < tam; i++){
        if(vot[i] != vet[i]){
            cent[cont] = vet[i];
            cont++;
        }
    }
    sort(cent, cent+cont);
    cout << cont << endl;
    for (int i = 0; i < cont; i++) cout << cent[i] << " ";
    cout << endl;
}
