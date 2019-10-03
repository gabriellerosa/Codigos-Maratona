#include <iostream>
#define INF 100000000

using namespace std;

int main(){
    
    int n, m, tot[105] = {0}, aux, index, menor = INF, k = 0, final[4];
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> aux;
            tot[i] += aux;
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < n; j++){
            if(tot[j] < menor){
                menor = tot[j];
                index = j;
            }
        }
        final[k] = index;
        tot[index] = INF;        
        menor = INF;
        k++;
    }

    for(int j = 0; j < 3; j++){
         cout << final[j]+1 << endl;
    }

    return 0;
}