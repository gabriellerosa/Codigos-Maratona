#include <iostream>

using namespace std;

int main(){

    int c;
    cin >> c;

    while(c--){

        int n, k;
        cin >> n >> k;

        // Vamos checar para os números ímpares, onde devemos pegar k - 1 numeros 1's para
        // preencher o número (n), se o que sobrar for ímpar e maior que 0 então funciona
        int numImpar = n - (k - 1);
        if(numImpar > 0 && numImpar % 2 != 0){
            cout << "YES\n";
            for(int i = 0; i < (k - 1); i++){
                cout << "1 ";
            }
            cout << numImpar << "\n";
            continue;    
        }
        
        // Raciocínio similar
        // Vamos checar para os números pares, onde devemos pegar k - 1 numeros 2's para
        // preencher o número (n), se o que sobrar for par e maior que 0 então funciona
        int numPar = n - 2 * (k - 1);
        if(numPar > 0 && numPar % 2 == 0){
            cout << "YES\n";
            for(int i = 0; i < (k - 1); i++){
                cout << "2 ";
            }
            cout << numPar << "\n";
            continue;    
        }
        
        cout << "NO\n";
    }

    return 0;
}