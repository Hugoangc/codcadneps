#include <iostream>
#define TAM 100000
using namespace std;
int main(){
    int vet[TAM], zeros[TAM], N, j = 0, menor;
    cin >> N;
    for(int i = 0; i<N; i++){
        cin >> vet[i];
        if(vet[i] == 0)
        {
            zeros[j]=i;
            j++;
        }
    }
    for(int i = 0; i<N; i++){
        if(vet[i] == -1){
            menor = abs(i - zeros[0]);
            for(int z = 1; z<j; z++){
                if(menor>abs(i - zeros[z])) menor = abs(i - zeros[z]);
                else break;
            }
            if(menor <=9) cout << menor << " ";
            else cout << "9 ";
        }
        else cout << "0 ";
    }
    return 0;
}
