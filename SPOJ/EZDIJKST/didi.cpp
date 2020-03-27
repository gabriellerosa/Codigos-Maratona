#include <iostream>
#include <vector>
#include <queue>
#include <utility>

#define inf 999999

using namespace std;

vector< pair<int, int> > grafo[100050];
int vis[100050], dis[100050];

int didi(int ini, int fim){

    vis[ini] = 1;

    pair<int, int> atual;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>> > fila;
    
    fila.push(make_pair(0, ini));

    while(!fila.empty()){

        atual = fila.top(); // pegar o c menor peso
        int vertice = atual.second;
        int dista = atual.first; /*distancia do inicio ate o vertice atual*/        


        fila.pop();        

        /*if(atual.first < dis[atual.second){
           continue; poderia fazer assim, ou englobar td como eu vou fazer agr
        }   */
        if(dista == dis[vertice]){
            if(vertice == fim){
                    return dis[vertice];
            } 
    
            for(int i = 0; i < grafo[vertice].size(); i++){ // olhar os filhos 

                int filho = grafo[vertice][i].second;
                int peso_arest = grafo[vertice][i].first;

                if(vis[filho] == 0){ //se o vertice nao foi visitado    
        
                   if(dis[vertice] + peso_arest/*quero o peso da aresta*/ < dis[filho]){
        
                      fila.push(make_pair(dis[vertice] + peso_arest, filho));
                      dis[filho] = dis[vertice] + peso_arest;    //att a dis do filho      

                   }
                }
            }
        }
    }
    return 0;
}

int main(){

    int qtd;

    cin >> qtd;

    while(qtd--){
        int v, k, start, fim;
        cin >> v >> k;
    
        //zerando os vis e setando a galera como inf
        for(int i = 1; i <= v; i++){
            vis[i] = 0;
            dis[i] = inf;
            grafo[i].clear();
        }    

        for(int i = 1; i <= k; i++){
            int ve, ar, pe;
            cin >> ve >> ar >> pe;
            
            grafo[ve].push_back( make_pair(pe, ar)); // vou querer ordenar pelos pesos, logo ele vem na frente
        }
               
        cin >> start >> fim;
    
        dis[start] = 0;        
        
        didi(start, fim);
      
        if(dis[fim] == inf){
            cout << "NO\n";
        }else{
            cout << dis[fim] << endl;
        }
    }

    return 0;

}