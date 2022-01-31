#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n=-1, teste=1;
    while(n!=0){
        cin >> n;
        if (n == 0) break;
        cout << "Teste " << teste++ << endl << (int)pow(2, n) - 1 <<endl;
    }
}
