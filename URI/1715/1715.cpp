#include <iostream>

using namespace std;

int main(){

    int n, m, tot = 0, totReal = 0;
    
    cin >> n >> m;

    for(int i = 0; i < n; i++){ // linha
        tot = 0;
        for(int j = 0; j < m; j++){
            int aux;
                        
            cin >> aux;

            //cout << "aux :" << aux << endl;
            if(aux > 0) 
               tot++;
        }
        
        //cout << "tot :" << tot << endl;
        //cout << "m :" << m << endl;
        if(tot == m)
            totReal++;
    }

    cout << totReal << "\n";

    return 0;
}