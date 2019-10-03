#include<bits/stdc++.h>

using namespace std;
 //         x   x   x   x   x   x   x
/*  y 0 -> 0,0 0,0 0,0 0,0 0,0 0,0 0,0
    y 0 -> 0 0 0 0 0 0 0
    y 0 -> 0 0 0 0 0 0 0
    y 0 -> 0 0 0 0 0 0 0 
    y 0 -> 0 0 0 0 0 0 0
    y 0 -> 0 0 0 0 0 0 0
    y 0 -> 0 0 0 0 0 0 0
    y 0 -> 0 0 0 0 0 0 0 */ 
typedef struct{

   int x, y;
 
}ponto;

vector <vector< pair<int, int> > > grafo; 
vector<pair<int, int> > movPossivel;  
ponto i, f;

int bfs(){

    ponto atual, aux;  
    queue<ponto> fila;

    fila.push(i);

    while(!fila.empty()){

        ponto atual, aux;
        atual = fila.front();
        fila.pop();

        if(atual.x == f.x && atual.y == f.y ){
            return grafo[atual.x][atual.y].second;
        }

        if(grafo[atual.x][atual.y].first == 0){   // se o vertice pai não foi visitado ainda
            grafo[atual.x][atual.y].first = 1;    // vai pra visitados
            for(int i = 0; i < movPossivel.size(); i++){ // vou percorrer os filhos do pai [ATUAL] filho é o [AUX]
                
                aux.x = atual.x + movPossivel[i].first;
                aux.y = atual.y + movPossivel[i].second;    
            
                if((aux.x >= 0 && aux.x < 8) && (aux.y >= 0 && aux.y < 8)){ // se tiver entre os intervalos requeridos
                    
                    if(grafo[aux.x][aux.y].first == 0){
                       grafo[aux.x][aux.y].second = grafo[atual.x][atual.y].second + 1; // vai ser a distancia do pai + 1 
                       fila.push(aux);
                    }
                }
                

            }
        }
    }
    return grafo[atual.x][atual.y].second;
}

int main(){
    string o, d;
    
    movPossivel.push_back(make_pair(-1, -2)); movPossivel.push_back(make_pair(-1, +2));
    movPossivel.push_back(make_pair(+1, -2)); movPossivel.push_back(make_pair(+1, +2));
    movPossivel.push_back(make_pair(-2, -1)); movPossivel.push_back(make_pair(-2, +1));
    movPossivel.push_back(make_pair(+2, -1)); movPossivel.push_back(make_pair(+2, +1));

    while(cin >> o >> d){

    i.y = o[0] - 'a'; // x vai ser a linha e y vai ser a coluna
    i.x = o[1] - '1';
    f.y = d[0] - 'a';
    f.x = d[1] - '1'; 
    
    grafo.assign(8, vector< pair <int, int> >(8, make_pair(0, 0)));
    
    cout << "To get from " << o << " to " << d << " takes " << bfs() << " knight moves." << endl;  
    }
    return 0;
}