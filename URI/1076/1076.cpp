#include <iostream>
#include <vector>

using namespace std;

vector<int> grafo[10050];
int vis[10050];
int tot;

void dfs(int v){
        
    vis[v] = 1;

    //cout << "Visitando os filhos de " << v << "\n";
    for(int i = 0; i < grafo[v].size(); i++){
        int atual = grafo[v][i];

        if(vis[atual] == 0){
            //cout << "Atual " << atual << "\n";
            dfs(atual);
            tot += 2;
        }
    }  
}

int main(){

    int t, n, a, v;

    cin >> t;

    while(t--){
         
        tot = 0;
        cin >> n >> a >> v; //a o num d vertices e v de arestar hehe troquei
    
        for(int i = 0; i < a; i++) {
            grafo[i].clear(); 
            vis[i] = 0;
        }       

        for(int i = 0; i < v; i++){
            int o, d;            
            cin >> o >> d;

            grafo[o].push_back(d);
            grafo[d].push_back(o);
        }   

        dfs(n);

        cout << tot << "\n";           
    }

    return 0;
}