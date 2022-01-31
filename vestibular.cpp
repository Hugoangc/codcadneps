#include <iostream>
using namespace std;
int main() {
    int n, res = 0;
    string s, d;
    cin >> n >> s >> d;
    for (int i = 0; i < n; i++){
        if(s[i] == d[i]){
            res++;
        }
    }
    cout << res;
 return 0;
}
