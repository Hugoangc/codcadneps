#include <iostream>
#include <cmath>
using namespace std;
int main (){
    double x, y;
    cout.precision(4);
    cout.setf(ios::fixed);
    cin >> x >> y;
    double k;
    k = pow(x, y);

    cout << k << endl;

    return 0;
}
