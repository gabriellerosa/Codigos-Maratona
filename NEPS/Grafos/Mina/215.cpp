#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#define inf 999999

using namespace std;

typedef pair<int, int> ii;
typedef pair<int , ii> iii; 

int m[110][110], n;
int  dis[110][110];
vector<pair<int, int>> movs;

int didi(){

    //setand dis pra inf
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){

            dis[i][j] = inf;            

        }
    }

    dis[0][0] = 0;

    iii atual;
    priority_queue< iii, vector<iii>, greater<iii> >fila;

    fila.push(make_pair(0, make_pair(0, 0)));

    while(!fila.empty()){
        
        atual = fila.top();
        fila.pop();

        int dist = atual.first; //dist até aquele vertice no grafo
        int lin =  atual.second.first; //linha
        int col = atual.second.second; //coluna
        
        if(dist == dis[lin][col]){ // podem ter distancias diferentes para o mesmo vertice, isso garantirá que vamos pegar a menor q fixamos na priority
            
            if( lin == n-1 && col == n-1){
                return dis[lin][col];                
            }            

            for(int i = 0; i < movs.size(); i++){ // vou percorrer os filhos
              int x, y;         
              x = lin + movs[i].first; //monitorando os indices
              y = col + movs[i].second;    
            
              if((x >= 0 && x < n) && (y >= 0 && y < n)){ // se tiver entre os intervalos requeridos
                  // fazer a conta da distancia -> dist do atual + o peso desse filho < a antiga distancia ate esse filho.
                  if(dis[lin][col] + m[x][y] < dis[x][y] ){
                        
                     fila.push(make_pair(dis[lin][col] + m[x][y] , make_pair(x, y)));
                     dis[x][y] = dis[lin][col] + m[x][y];    //att a dis do filho
   
                  } 
               }
            }

        }        

    }

    return 0;
}

int main(){

    cin >> n;

    movs.push_back(make_pair(0,1)); movs.push_back(make_pair(0,-1));
    movs.push_back(make_pair(1,0)); movs.push_back(make_pair(-1,0));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){

            cin >> m[i][j];            

        }
    }

    cout << didi() << "\n";

    return 0;

}