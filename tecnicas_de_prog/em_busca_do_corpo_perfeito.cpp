#include <iostream>
#include <cstring>
using namespace std;

#define N 2200
int max(int a, int b){ // funcao auxiliar pra decidir o maior valor do retorno;
    return (a>b) ? a : b;
}
int n, m, peso[N], proteina[N], tabela[N][N];

int knapsack(int obj, int aguenta){ //funcao da neps "Problema da Mochila"
    // se já calculamos esse estado da dp, retornamos o resultado salvo
    if(tabela[obj][aguenta]>=0) return tabela[obj][aguenta];

    // se não houver mais pedacos ou nao aguenta mais, retorno 0, pois não posso comer mais nada
    if(obj >n) return tabela[obj][aguenta]=0;
    int comer;

    //tento comer, mais o espaco pro proximo, se nao tiver espaco, como 0
    if(peso[obj]<=aguenta) comer = proteina[obj]+ knapsack(obj+1, aguenta-peso[obj]);
    else comer = 0;

    int nao_comer = knapsack(obj+1, aguenta); // testar para o próximo
    return tabela[obj][aguenta]=max(comer, nao_comer); // retorna o maior valor
}

int main(){
    cin >> m >> n; // quantas gramas e quantos pedacos serao
    memset(tabela, -1, sizeof(tabela)); // funcao auxiliar pra marcar tudo como -1 na tabela, pra funcionar o primeiro if da knapsack (requer cstring)
    for (int i = 0; i < n; i++) cin >> peso[i] >> proteina[i];
    cout << knapsack(0, m);
}
