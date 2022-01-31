#include <iostream>
using namespace std;

int main(){
    int A = 0, B = 0;
    int cont, L;

    cin >> cont;
    if (cont < 2 || cont > 100000)
        return 0;
    for (int i = 0; i < cont; i++){
        cin >> L;
        if(L == 1){
            if (A == 1){
                A = 0;
            }else {
                A = 1;
            }
        }else if (L == 2){
            if (A == 1 && B == 1){
                A = 0;
                B = 0;
            }else if (A == 0 && B == 0){
                A = 1;
                B = 1;
            }else if ( A == 1 && B == 0){
                A = 0;
                B = 1;
            }else {
                A = 1;
                B = 0;
            }

        }else{
            L = 0;
            continue;}
    }
    cout << A << endl << B << endl;

    return 0;
}
