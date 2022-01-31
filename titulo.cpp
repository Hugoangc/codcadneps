#include <iostream>
using namespace std;
string title(string s);
int main(){
    string S;
    getline(cin, S);
    cout << title(S) << endl;
}
string title(string s){
    for (int i = 0; i < s.size(); i++) s[i] = tolower(s[i]);
    for (int i = 0; i < s.size(); i++)
        if (s[i] == ' ') s[i + 1] = toupper(s[i + 1]);
    s[0] = toupper(s[0]);
    return s;
}
