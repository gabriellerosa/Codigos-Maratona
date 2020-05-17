#include <iostream>

using namespace std;

int main(){

    int c;
    cin >> c;

    while(c--){
        int n;        
        cin >> n;

        if(n < 4){
            cout << "-1\n";
            continue;      
        }else{
            if(n % 2 == 0){
                //imprimir tds os impares
                for(int i = n - 1; i >= 1; i -= 2){
                    cout << i << " "; 
                }
                //imprimir tds os pares
                cout << "4 ";
                for(int i = 2; i <= n; i += 2){
                    if(i == 4) continue;                    
                    cout << i << " "; 
                }
                cout << endl;
            }else{        
                
                //imprimir tds os impares
                for(int i = n; i >= 1; i -= 2){
                    cout << i << " "; 
                }
                //imprimir tds os pares
                cout << "4 ";
                for(int i = 2; i < n; i += 2){
                    if(i == 4) continue;
                    cout << i << " "; 
                }
                cout << endl;
            }
        }
    }

    return 0;
}