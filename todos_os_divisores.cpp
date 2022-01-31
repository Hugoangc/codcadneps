#include <iostream>
using namespace std;
int main(){
    int x;
    cin >> x;
    if (x < 2 || x > 1000000000){
        return 0;
    }
    for (int i = 1; i <= x; i++){
        if(x%i == 0){
            printf("%d ",i);
            continue;
        }
    }
    return 0;
}
