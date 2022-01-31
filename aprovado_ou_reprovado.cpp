#include <iostream>
using namespace std;
int main(){
	double nota1, nota2, media;
	cin >> nota1 >> nota2;
	media = (nota1 + nota2)/2;
	
	if (media > 7){
		cout << "Aprovado\n";
	}
	else if (media < 4){
		cout << "Reprovado\n";
	}else 
		cout << "Recuperacao\n";
	
return 0;
}
