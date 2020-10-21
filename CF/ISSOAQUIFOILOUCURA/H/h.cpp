#include <iostream>
#include <vector>

using namespace std;

vector<int> grafo[200005];

int main(){

    int n, num_folhas = 0;
    cin >> n;
    
    // lendo os vertices e arestas
    for(int i = 0; i < n - 1; i++){
    
        int o, f;
        cin >> o >> f;
        grafo[o].push_back(f);
        grafo[f].push_back(o);
    }    
    
    for(int i = 1; i <= n; i++){
        
        // Folha se tiver 1 vertice adjacente
        if(grafo[i].size() == 1){
            num_folhas++;
        }
    }
    //cout << num_folhas << endl;
    cout << (num_folhas + 1) / 2 << endl;
    
    return 0;
}