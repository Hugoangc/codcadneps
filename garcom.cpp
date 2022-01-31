#include <iostream>
using namespace std;

int main(){
    int N;
    int L, C;
    int contador = 0;
    cin >> N;
    int i = 0;
    while (i != N){
        cin >> L >> C;
        if(L < 0 || L > 100 || C < 0 || C > 100){
            return 0;
        }
        if (L > C){
            contador= contador +C;
        }
        i++;
    }
    cout << contador << endl;
    return 0;
}
