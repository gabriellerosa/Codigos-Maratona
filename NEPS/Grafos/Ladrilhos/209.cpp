#include<iostream>
#include <vector>
#include <utility>

using namespace std;

//              GRAFO
//         y y y y y y y y   
/*  x ->   3 3 3 1 1 0 0 0
    x ->   3 1 1 0 2 2 0 1
    x ->   3 3 3 0 0 2 1 1
*/ 

int h, l, matriz[210][210];
int vis[210][210],cont, cor;

vector<pair<int, int>> movPossivel;

void dfs(int lin, int col){

    vis[lin][col] = 1 ;
    cont++;
    cor = matriz[lin][col];

    for(int i = 0; i < movPossivel.size(); i++){ // vou percorrer os filhos
       int x, y;         
       x = lin + movPossivel[i].first; //monitorando os indices
       y = col + movPossivel[i].second;    
            
       if((x >= 0 && x < h) && (y >= 0 && y < l)){ // se tiver entre os intervalos requeridos
                    
          if(vis[x][y] == -1){
             if(cor == matriz[x][y])
               dfs(x, y);
          }
       }
    }

}

int main(){

    int ans = 1000000;

    //vis[210][210] = {-1};

    movPossivel.push_back(make_pair(0,1)); movPossivel.push_back(make_pair(0,-1));
    movPossivel.push_back(make_pair(1,0)); movPossivel.push_back(make_pair(-1,0));

    scanf("%d %d", &h, &l);

    for(int i = 0; i < h; i++){ // linha
        for(int j = 0; j <l; j++){ // coluna
            scanf("%d", &matriz[i][j]);
            vis[i][j] = -1;
        }
    }
    
    for(int i = 0; i < h; i++){ // linha
        for(int j = 0; j < l; j++){ // coluna
            //preciso fazer uma dfs pra cada ponto nao visitado
            if(vis[i][j] == -1){  
                cont = 0;
                dfs(i, j);
                ans = min(ans, cont);
            }
        }
    }

    printf("%d\n", ans);

    return 0;
}