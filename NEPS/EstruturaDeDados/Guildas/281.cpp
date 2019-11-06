#include <iostream>

using namespace std;

int pai[100010], n, m;
int p[100010]; // vetor de pontos
int tot;

int find(int x){
    
   
    // se x for o patriarca, retorne x
    if(pai[x]==x){
        return x;
    }

    // se não, retorne o valor do patriarca de seu pai
    return pai[x]=find(pai[x]);

}

void join(int x, int y){

    p[find(y)] += p[find(x)];  // o peso do futuro pai de x vai receber o peso dele e do x
    pai[find(x)] = find(y);

}

int main(){

    int q, a, b;

    while(cin >> n >> m, m != 0){

        int g = 0;

        for(int i = 1; i <= n; i++){
            cin >> p[i];
        }
        //TEM Q SETAR TDS COMO PAIS DE SI MESMO
        for(int i = 1; i <= n; i++){
            pai[i] = i;
        }
    
        for(int i = 1; i <= m; i++){
            cin >> q >> a >> b;
    
            if(q == 1){
    
                join(a, b);
    
            }else{
                //cout << p[find(a)] << " " << p[find(b)] << "\n";
                if(find(1) == find(a) && p[find(a)] > p[find(b)]){
                    g++;
                }
                if(find(1) == find(b) && p[find(b)] > p[find(a)]){
                    g++;
                }
            }
        }
        cout << g << "\n";
    }
    return 0;
}