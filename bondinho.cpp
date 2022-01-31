#include <iostream>
using namespace std;
int main(){
	int A, M;
	cin >> A >> M;
	if (A > 50 || A < 1 || M > 50 || M < 1){
		return 0;
	}
		
	if (A+M > 50){
		cout << "N" << endl;
	}else{ 
		cout << "S" << endl;
	}
	return 0;
}
