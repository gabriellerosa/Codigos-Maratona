#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

vector<string> lista;

int main(){

    int n, pos;

    cin >> n >> pos;

    for(int i = 0; i < n; i++){
        string aux;
        cin >> aux;

        lista.push_back(aux);        
    }

    sort(lista.begin(), lista.end());

    cout << lista[--pos] << "\n";    

    return 0;

}