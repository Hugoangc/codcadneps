#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int n;
    cin >> n;
    int numero, cont[10] = {0};
    string m;
    for (int i = 0; i < n; i++){
        cin >> numero;
        m+= to_string(numero);
    }
    char num[m.size()-1];
    strcpy(num, m.c_str());
    for (int i = 0; i < m.size(); i++){
        if (num[i] == '0') cont[0]++;
        else if (num[i] == '1') cont[1]++;
        else if (num[i] == '2') cont[2]++;
        else if (num[i] == '3') cont[3]++;
        else if (num[i] == '4') cont[4]++;
        else if (num[i] == '5') cont[5]++;
        else if (num[i] == '6') cont[6]++;
        else if (num[i] == '7') cont[7]++;
        else if (num[i] == '8') cont[8]++;
        else cont[9]++;
    }
    for (int i = 0; i < 10; i++) cout << i << " - " << cont[i] << endl;
}
