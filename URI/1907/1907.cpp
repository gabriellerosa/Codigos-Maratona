#include <iostream>
#include <vector>
#include <utility>

using namespace std;

char grafo[1100][1100];
int vis[1100][1100];
vector<pair <int, int> > movs;
int l, c;

void dfs(int lin, int col){

    vis[lin][col] = 1; // visitei o local agora

    for(int i = 0; i < movs.size(); i++){ // vou percorrer os filhos
       int x, y;         
       x = lin + movs[i].first; //monitorando os indices
       y = col + movs[i].second;    
            
       if((x >= 0 && x < l) && (y >= 0 && y < c)){ // se tiver entre os intervalos requeridos
                    
          if(vis[x][y] == 0){
             if(grafo[x][y] == '.')
               dfs(x, y);
          }
       }
    }

}

int main(){    

    movs.push_back(make_pair(0,1)); movs.push_back(make_pair(0,-1));
    movs.push_back(make_pair(1,0)); movs.push_back(make_pair(-1,0));

    cin >> l >> c;

    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){

            cin >> grafo[i][j];           
            vis[i][j] = 0; // setando pra tds nao visitados ainda
        }
    }

    int cores = 0;

    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            
            if(vis[i][j] == 0 && grafo[i][j] != 'o'){           
                
                cores++;
                dfs(i, j);
                
            }

        }
    }

    cout << cores << "\n";

    return 0;
}