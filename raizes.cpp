#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int tam;
	double x = 0;

	cout.precision(4);
	cout.setf(ios::fixed);
	
	cin >> tam;
	if (tam < 1 || tam > 10000)
		return 0;
	for (int i = 0; i < tam; i++){
		cin >> x;

		cout << sqrt(x) << endl;
	}
	
	return 0;
}
