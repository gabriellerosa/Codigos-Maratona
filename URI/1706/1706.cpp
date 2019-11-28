#include <iostream>
#include <vector>

using namespace std;

vector<int> grafo[2050];
char notas[2050];
int vis[2050];

int main(){

    int n, m;

    while(cin >> n >> m){

        for(int i = 1; i <= n; i++){
            grafo[i].clear();
            vis[i] = 0;
            notas[i] = '';
        }//zerar grafo e vis e notas

        for(int i = 0; i < n; i++){
            cin >> notas[i + 1];
        }
    
        for(int i = 0; i < m; i++){
            int a, b;
            cin >> a >> b;
    
            grafo[a].push_back(b);
            //grafo[b].push_back(a);         
        }

        
    }

    return 0;
}