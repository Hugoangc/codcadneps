#include <iostream>
#define N 10
using namespace std;
int main () {
  int i, j, n, s, p, vet[N][N];
  cin >> n;
  for (i = 0; i < n; i++) 
    for (j = 0; j < n; j++) 
      cin >> vet[i][j];

  s = 0;
  for (i = 0; i < n; i++) s += vet[0][i];

  for (i = 1; i < n && s != -1; i++) {
    p = 0;
    for (j = 0; j < n; j++)
      p += vet[i][j];
    if (p != s) s = -1;
  }

  for (j = 0; j < n && s != -1; j++) {
    p = 0;
    for (i = 0; i < n; i++)
      p += vet[i][j];
    if (p != s) s = -1;
  }
  p = 0;
  for (i = 0; i < n && s != -1; i++)
    p += vet[i][i];
  if (p != s) s = -1;
  p = 0;
  for (i = 0; i < n && s != -1; i++)
    p += vet[i][n - i - 1];
  if (p != s) s = -1;
  cout << s << endl;
}
