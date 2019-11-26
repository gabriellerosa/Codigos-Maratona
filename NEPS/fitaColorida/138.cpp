#include <iostream>
#define MAXN 10050
#define INF 999999999
#include <algorithm>

using namespace std;

int main(){

    int n, fita[MAXN], esq[MAXN], dir[MAXN];

    cin >> n;

    for(int i = 1; i <= n; i++)
        cin >> fita[i];
    

    for(int i = 0; i <= n + 1; i++)
        esq[i] = dir[i] = INF;
        
    for(int i = 1; i <= n; i++){ // olhando as distancias para a esqr

        if(fita[i] == 0)
            esq[i] = 0;
        else
            esq[i] = esq[i-1] + 1;
            
    }

    for(int i = n; i > 0; i--){ // olhando as distancias para a esqr

        if(fita[i] == 0)
            dir[i] = 0;
        else
            dir[i] = dir[i+1] + 1;
    }

    for(int i=1; i<=n; i++) 
        printf("%d ", min(9, min(esq[i], dir[i])));

    cout << "\n";
    
    return 0;

}