#include <iostream>
using namespace std;

int main(){
    int N, final = 0, limit = 0;
    unsigned int A = 0, contador = 0;
    cin >> N;
    if( N > 1000){
        return 0;
    }
    int i = 0;
    while (i < N){
        cin >> A;
        if (A > 1000000){
            return 0;
        }
        contador = contador + A;
        if (contador >= 1000000 && limit == 0){
            final = i+1;
            limit++;
        }
        i++;
    }
    cout << final << endl;
    return 0;
}
