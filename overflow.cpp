#include <iostream>
using namespace std;
int main() {
    int N, P, Q, total;
    char o;

    cin >> N >> P >> o >> Q;
  
    if (o == '+')
        total = P + Q;
    else total = P * Q;

    if (total > N)
        cout << "OVERFLOW" << endl;
    else cout << "OK" << endl;

    return 0;
}
