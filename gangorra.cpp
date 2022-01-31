#include <iostream>
using namespace std;
int main(){
	int P1, P2, C1, C2, crianca1, crianca2;
	
	cin >> P1 >> C1 >> P2 >> C2;
	crianca1 = P1 * C1;
	crianca2 = P2 * C2;
	if(crianca1 == crianca2){
		cout << "0" << endl;
	return 0;
	}
	if(crianca1 > crianca2){
		cout << "-1" << endl;
	}else{
		cout << "1" << endl;
	}
return 0;
}
