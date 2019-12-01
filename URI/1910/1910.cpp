#include <iostream>
#include <queue>
//#include <set>

using namespace std;

int vis[100050], dist[100050];
//set<int> proibido;

int bfs(int v, int fim){

    queue<int> fila;
    int atual;

    fila.push(v);

    while(!fila.empty()){

        atual = fila.front();
        fila.pop();

        if(atual == fim){
            return dist[atual]; 
        }

        if((atual % 2 == 0) && (atual / 2 > 0) && vis[atual / 2] == 0 /*&& proibido.count(atual / 2) == 0*/){ // para canal /2
            fila.push(atual/2);
            dist[atual/2] = dist[atual] + 1;
            vis[atual/2] = 1;
        }

        if( (atual + 1) <= 100000 && vis[atual+1] == 0 /*&& proibido.count(atual + 1) == 0*/){ // para canal +1
            fila.push(atual + 1);
            dist[atual + 1] = dist[atual] + 1;
            vis[atual + 1] = 1;
        }  

        if( (atual - 1 > 0) && vis[atual - 1] == 0 /*&& proibido.count(atual - 1) == 0*/){ // para canal -1
            fila.push(atual - 1);
            dist[atual - 1] = dist[atual] + 1;
            vis[atual - 1] = 1;
        }  

        if( (atual * 2 <= 100000) && vis[atual * 2] == 0 /*&& proibido.count(atual * 2) == 0*/){ // para canal *2
            fila.push(atual * 2);
            dist[atual * 2] = dist[atual] + 1;
            vis[atual * 2] = 1;
        }
    
        if( (atual * 3 <= 100000) && vis[atual * 3] == 0 /*&& proibido.count(atual * 3) == 0*/){ // para canal *3
            fila.push(atual * 3);
            dist[atual * 3] = dist[atual] + 1;
            vis[atual * 3] = 1;
        }

    }

}

int main(){

    int o, d, k;

    while(cin >> o >> d >> k, d && o){

        for(int i = 0; i < 100050; i++){ // zerar dis e visitados
            vis[i] = 0;
            dist[i] = 0;
        }

        //proibido.clear();

        for(int i = 0; i < k; i++){
            int aux;
            cin >> aux;
            //proibido.insert(aux);
            vis[aux] = 1;
        }
        
        int ans = 0;
        ans = bfs(o, d);
       
        if(vis[d] == 0){
            cout << "-1\n";
        }else{
            cout << dist[d] << "\n";
        }

    }

    return 0;
}