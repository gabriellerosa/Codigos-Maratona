#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> grafo[10050];
int vis[10050], esp;

void dfs(int v, int profundidade){
    
    vis[v] = 1; //visitei    

    //procurar pelos filhos de v 
    for(int i = 0; i < grafo[v].size(); i++){
      
        int filho = grafo[v][i];
        for(int i = 0; i < profundidade; i++){
            cout << "  ";
        }
        cout << v << "-" << filho; 

        if(vis[filho] == 0){ //só vou visitar se nao foi ainda
            cout << " pathR(G," << filho << ")\n";
            dfs(filho, profundidade + 1);
        }else{
            cout << "\n";
        }
    } 

    if(grafo[v].size() > 0){
        if(profundidade == 1){
                cout << "\n";
        }  
    }
}

int main(){

    int n, v, e, caso = 1;

    cin >> n;

    while(n--){
        cin >> v >> e;
        
        for(int i = 0; i < v; i++){ //zerar o visitados e o grafo
            grafo[i].clear();
            vis[i] = 0;    
        }

        for(int i = 0; i < e; i++){
            
            int o, d;
            cin >> o >> d;
            
            grafo[o].push_back(d);
                       
        }
        
        for(int i = 0; i < v; i++){
           sort(grafo[i].begin(), grafo[i].end()); 
        }

        cout << "Caso " << caso++ << ":\n";
        for(int i = 0; i < v; i++){
           if(vis[i] == 0){            
              dfs(i, 1);
           }
        }
    }

    return 0;
}