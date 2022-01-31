#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> marcador;
    int R, tam, n = 0;
    cin >> tam;
    for (int i = 0; i < tam; i++){
        cin >> n;
        marcador.push_back(n);
    }
    cin >> R; // quantidade de elementos a serem removidos
    for(int i = 0; i < R; i++){
        cin >> n;
        remove(marcador.begin(), marcador.end(), n); // remove entre o inicio ao fim do vetor o elemento N
        marcador.resize(tam-i-1);
    }
    for (int i = 0; i < tam-R; i++) cout << marcador[i] << " ";
    cout << endl;
    return 0;
}
