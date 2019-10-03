// BFS Graph 
// feito por: Gabrielle Rosa :D

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<bool> visitados;
vector<int> grafo[1000];

void bfs(int v){
    
    queue<int> fila;
    int atual;    

    fila.push(v);    
    
    while(!fila.empty()){
        
        atual = fila.front();
        fila.pop();
        
        if(visitados[atual] == false){    
            visitados[atual] = true; //faz a msm coisa que a linha 34

            cout << "Visitando os filhos de " << atual << endl;
            for(int i = 0; i < grafo[atual].size(); i++){
               
                cout << " " << grafo[atual][i];
                if(visitados[grafo[atual][i]] == false){
    
                    //visitados[grafo[atual][i]] = true;     
                    fila.push(grafo[atual][i]);                           
                }
            }
        }
        cout << endl;
    }    
    
}

int main(){
    
    int t, v, e, ori, des;

    //scanf("%d", &t);    

    //while(t--){

        scanf("%d %d", &v, &e);        
    
        visitados.assign(v, false);        
        
        for(int i = 0; i < e; i++){
            
            scanf("%d %d", &ori, &des);            
            grafo[ori].push_back(des);
            grafo[des].push_back(ori);
        }
        
        for(int i = 0; i < v; i++){
            printf("%d -> ", i);
            for(int j = 0; j < grafo[i].size(); j++){
                printf("%d->", grafo[i][j]);    
            } 
            printf("\n");  
        }
        printf("\n");
       
        bfs(0);
    //}

    return 0;
}