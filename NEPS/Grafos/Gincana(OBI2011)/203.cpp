#include<vector>
#include<iostream>

using namespace std;

vector<int> grafo[1010];
bool vis[1010] = {false};

void dfs(int v){

    vis[v] = true;    
    
    for(int i = 0; i < grafo[v].size(); i++){
        int k = grafo[v][i];        
        if(!vis[k]){ //visitar o filho só se ele nao foi visitado ainda
           dfs(k); 
        }
    }
    
}

int main(){

    int n, m, comp = 0;

    cin >> n >> m;

    for(int i = 0; i < m; i++){ //preenchendo o grafo
        int a, b;
        cin >> a >> b;
        a--; b--;

        grafo[a].push_back(b);
        grafo[b].push_back(a);
    }

    for(int i = 0; i < n; i++){ // preciso iterar por tds os vertices do grafo        
        if(!vis[i]){ // porem só devo visitar se ele nao foi visitado ainda
            comp++;
            dfs(i);
        }
    }

    cout << comp << "\n";

    return 0;
}