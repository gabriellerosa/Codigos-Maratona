#include <iostream>
#include <vector>

using namespace std;

vector<int> grafo[10020];
vector<int> transposto[10020];
vector<bool> vis;

void dfs(int v){

    vis[v] = true;

    for(int i = 0; i < grafo[v].size(); i++){
        int filho = grafo[v][i];  

        if(vis[filho] == false){      
            dfs(filho);
        }
    }
}

void dfstrans(int v){

    vis[v] = true;

    for(int i = 0; i < transposto[v].size(); i++){
        int filho = transposto[v][i];  

        if(vis[filho] == false){      
            dfstrans(filho);
        }
    }
}

int main(){

    int n, m;

    while(cin >> n >> m, n){
    
        int ver, w, p;
        
        //limpar os grafos
        for(int i = 0; i < n; i++){ //zerar o visitados e o grafo
            grafo[i].clear();
            transposto[i].clear();   
        }

        for(int i = 1; i <= m; i++){

            cin >> ver >> w >> p;
            
            if(p == 1){

                grafo[ver].push_back(w);            
                transposto[w].push_back(ver);        

            }else{
                
                grafo[ver].push_back(w);
                grafo[w].push_back(ver);

                transposto[w].push_back(ver);    
                transposto[ver].push_back(w);
    
            }                
        }

        vis.assign(n + 1, false);
        
        dfs(1);                
        bool possible = true;

        for(int i = 1; i <= n; i++){                                
            if(vis[i] == false){
                possible = false;            
                break;
            }
        } 

        vis.assign(n + 1, false);

        dfstrans(1);
    
        for(int i = 1; i <= n; i++){                                
            if(vis[i] == false){
                possible = false;            
                break;
            }
        }

        if(possible) 
          cout << "1\n";
        else
          cout << "0\n"; 

    }

    return 0;
}