#include <iostream>
using namespace std;
int main(){
	int P, R;
	cin >> P >> R;
	
	if (P == 0){
		cout << "C\n";
	}
	else if ((P == 1) and (R == 1)){
		cout << "A\n";
	}else 
		cout << "B\n";
	
	return 0;
}
