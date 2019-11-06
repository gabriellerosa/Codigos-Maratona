#include <iostream>

using namespace std;

int v[2000055];

int main(){

    int n, d, esq = 1, dir = 1, res = 0, totSand = 0;

    scanf("%d %d", &n, &d);//cin >> n >> d;
    
    for(int i = 1; i <= n; i++){
        scanf("%d", &v[i]);//cin >> v[i];

        v[i + n] = v[i];  //fazendo o ciclo ex 12345; Fica->1234512345 
        totSand += v[i]; //se somar tudo e for menor que o pedido, nao tem como resposta alguma
    }
    
    if(totSand < d){
        printf("0\n");//cout << "0\n";
        return 0; //exit(0);
    }
    
    int soma = v[1];

    while(esq <= n && dir <= 2 * n){

        if(soma == d){
            res++;  //vou somar no resultado
            soma -= v[esq]; // retiro o esq atual, pq eu ja achei o DIR para ele
            esq++; // ando ele, pq ja a posição certa p/ ele
        }else
            if(soma < d){
                dir++;
                soma += v[dir];                
            }else if(soma > d){
                soma -= v[esq];
                esq++;
            }
           
    }
    
    printf("%d\n", res);//cout << res << endl;

    return 0;
}