#include <iostream>
#include <vector>

using namespace std;

vector<int> corrida[120];

int main(){

    int s, g, p; // g = qtd corridas, p = qtd pilotos, s = qtd d sistema d pontuaçao

    cin >> g >> p;

    for(int i = 0; i < g; i++){
        int aux;
    
        cin >> aux;
        corrida[i].push_back(aux);

    }

    cin >> s;
    
    for(int i = 0; i < s; i++){
        int x;        
        cin >> x;
    
    }    

    return 0;
}