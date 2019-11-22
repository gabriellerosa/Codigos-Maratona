#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int vis[200020], dist[200020];

int inverte(int num){

    int lembrar, inverso = 0;

    while(num > 0){
        
        lembrar = num % 10;
        inverso = inverso * 10 + lembrar;
        num /= 10;

    }

    return inverso;
}

int bfs(int v, int fim){
    
    queue<int> fila;
    int atual;

    fila.push(v);  //preciso colocar o homi na fila

    while(!fila.empty()){
         
        atual = fila.front(); //preciso pegar o primeiro da fila
        fila.pop(); 

        if(atual == fim){
            return dist[atual];
        }
           
        if(vis[atual+1] == 0){
           fila.push(atual + 1);
           dist[atual+1] = dist[atual] + 1;
           vis[atual+1] = 1;
        }

        if(vis[inverte(atual)] == 0){
           fila.push( inverte(atual) );
           dist[inverte(atual)] = dist[atual] + 1;
           vis[inverte(atual)] = 1; 
        }
            
    }
}

int main(){

    int t, a, b;

    scanf("%d", &t);

    while(t--){

        scanf("%d %d", &a, &b);        
            
        for(int i = 0; i < 200010; i++){
            vis[i] = 0;
            dist[i] = 0;
        }

        cout << bfs(a, b) << "\n";
        
    }

    return 0;
}