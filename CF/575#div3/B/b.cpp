#include <iostream>
#include <vector>

using namespace std;

int main(){

    int q;

    cin >> q;

    while(q--){

        int n, k, imp = 0;
        cin >> n >> k;

        vector<int> v(n);

        for(int i = 0; i < n; i++){  // preciso contar qntos impar
            cin >> v[i];
             
            if(v[i] % 2 != 0){
                imp++;
            }
        }    
        
        if(imp < k || (imp % 2 != 0 && k % 2 == 0) || ((imp % 2 == 0 && k % 2 != 0)) ){ // precisar haver pelo menos 1 primo em cada segmento ou 
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;

        for(int i = 0; i < n; ++i){
            
            if(k == 1){
                break;
            }
            if(v[i] % 2 == 1){
                cout << i + 1 << " ";
                --k;    
            }
        }

        cout << n << endl;  // o ultimo sempre vai ser n
    }

    return 0;
}