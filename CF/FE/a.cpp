#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <utility>

typedef long long ll;

using namespace std;

vector<pair<ll, ll >> grafo[100005];
vector<bool> visitadosMain;
vector<bool> visitadosBfs;
ll dist[100005], n;

bool primo(ll num){

    if(num == 1){
        return false;
    }

    for(ll i = 2; i * i <= num; i++){

        if(num % i == 0){
            return false;
        }
    }
    return true;
    
}

void bfs(ll v){

    visitadosBfs.assign(n + 1, false);

    for(ll i = 0; i <= n; i++){
        dist[i] = 0;
    }    
    
    queue<ll> fila;
    ll atual;
    fila.push(v);

    while(!fila.empty()){

        atual = fila.front();
        fila.pop();

        if(visitadosBfs[atual] == false ){

            visitadosBfs[atual] = true;
            visitadosMain[atual] = true;
                
            //visitando seus filhos
            for(ll i = 0; i < grafo[atual].size(); i++){

                if(visitadosBfs[grafo[atual][i].first] == false){   
                    fila.push(grafo[atual][i].first);
                    //a distancia do filho é a distancia do pai mais o valor da aresta do filho
                    dist[grafo[atual][i].first] = dist[atual] + grafo[atual][i].second;                           
                }
            }
        }    
    }
}

ll diametro(ll no){

    bfs(no);
    ll maiorDist = 0, indiceVertice = no;

    for(ll i = 1; i <= n; i++){

       if(maiorDist < dist[i]){
           maiorDist = dist[i];
           indiceVertice = i;     
       }           
    }

    bfs(indiceVertice);

    maiorDist = 0;
    for(ll i = 1; i <= n; i++){

       if(maiorDist < dist[i]){
           maiorDist = dist[i];   
       }           
    }

    return maiorDist;    
}

int main(){

    cin >> n;
    visitadosMain.assign(n + 1, false);

    for(ll i = 0; i < (n - 1); i++){
        ll o, d, p;    
        cin >> o >> d >> p;

        if(primo(p)){

            grafo[o].push_back(make_pair(d, p));
            grafo[d].push_back(make_pair(o, p));

        }
    }

    ll resp = 0;
    for(ll i = 1; i <= n; i++){
        if(!visitadosMain[i]){
            resp = max(resp, diametro(i));
        }
    }        
    
    cout << resp << "\n";

    return 0;   
}