#include <iostream>
#include <map>
#include <set>

using namespace std;

int main(){
    
    int c;
    cin >> c;

    while(c--){
        
        int ans = 0;
        set<int> dif;
        map<int, int> iguais;
        int tam;
        cin >> tam;

        for(int i = 0; i < tam; i++){
            int aux;
            cin >> aux;

            dif.insert(aux);
            iguais[aux]++;            

        }

        int maior = 0;        
        for(auto x: iguais){
        
            maior = max(maior, x.second);

        }
        
        int value = dif.size();
        
        ans = max(min(maior, value-1), min(maior-1, value));
        cout << ans << "\n";

    }    

    return 0;
}