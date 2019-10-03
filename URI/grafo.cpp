#include<bits/stdc++.h>
 
using namespace std;
 
vector<vector<int> > grafo;
vector<bool> visita;
 
/*
1 -> 2, 3, 4
3 -> 1, 2
4 -> 3, 2, 5
6 -> 7
 
fila: 1
fila: x, 2, 3, 4
fila: x, x, 3, 4
fila: x, x, x, 4
fila: x, x, x, x, 5
fila: x, x, x, x, x
*/
 
void bfs(int v){
queue<int> fila;
int atual;
 
 
    for(int i = 0; i < v; i++){
        if(visita[i] == false){
        fila.push(i);
            while(!fila.empty()){
                atual = fila.front();
                fila.pop();
             
                if(visita[atual] == false){
                    visita[atual] = true;
                 
                    cout << "Visitando os filhos de " << atual << endl;
                    for(int i = 0; i < grafo[atual].size(); i++){
                        cout << grafo[atual][i] << ", ";
                 
                        if(visita[grafo[atual][i]] == false)
                        fila.push(grafo[atual][i]);
                    }
                    cout << endl;
                }
            }
        }
    }
}
 
void dfs(int atual){
    if(visita[atual] == true){
        return;
    }
 
    cout << "Visitando os filhos de " << atual << endl;
    visita[atual] = true;
    for(int i = 0; i < grafo[atual].size(); i++){
    dfs(grafo[atual][i]);
    }
}
 
int main(){
    int v, a, o, d;
 
    cin >> v >> a;
 
    grafo.assign(v, vector<int>());
    visita.assign(v, false);
     
    while(a--){
        cin >> o >> d;
         
        grafo[o].push_back(d);
        grafo[d].push_back(o);
    }
     
    bfs(v);
    
    return 0;
}