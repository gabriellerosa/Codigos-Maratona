#include <iostream>
#include <vector>
 
using namespace std;
 
vector<int> grafo[100200];
 
/* Os estados possiveis são:
   0 - Noh ainda nao foi visitado
   1 - Noh foi visitado, mas ainda nao foi fechado
   2 - Noh foi visitado e foi fechado */
int estado[100200];
 
int ciclo;

//complexidade O( v + e ) 
void dfs(int v){
     
    estado[v] = 1;  // ja visitei o v
 
    for(int i = 0; i < grafo[v].size(); i++){
        int filho;
        filho = grafo[v][i];
 
        if(estado[filho] == 0){  // ou seja , nao foi visitado
 
            dfs(filho);
 
            /*
                dfs(1){
                    dfs(2){
                        dfs(4){
                            dfs(1)*
                        }
                    }
                }
            */
 
        }else if(estado[filho] == 1){  // se possui o msm filho e já foi vicitado possui um ciclo eu acho
   
            ciclo++;    
            //cout << " " << ciclo;
        }    
 
    }
   
    // Chamou recursao pra todos os filhos, agora vou fechar
    estado[v] = 2;
   
}
 
int main(){
 
    int t;
 
    cin >> t;
 
    while(t--){
 
        int n, m; // n = num doc, m = qtd depencencias
        ciclo = 0;
 
        cin >> n >> m;
       
        for(int i = 0; i <= n; i++){ // zerar grafo e vis
            grafo[i].clear();
            estado[i] = 0;
        }
       
        for(int i = 0; i < m; i++){
            int a, b;
 
            cin >> a >> b;
            grafo[a].push_back(b);
        }
 
        for(int i = 1; i <= n; i++){
   
           if(estado[i] == 0)
              dfs(i);
 
        }
        
        if(ciclo > 0){
            cout << "YES\n";
        }else
            cout << "NO\n";
 
    }
 
    return 0;
}