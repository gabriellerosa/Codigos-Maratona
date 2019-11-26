#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int n, m[1020][1020], soma_colunas[1020] = {0}, soma_linhas[1020] = {0};    

    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){

            cin >> m[i][j];    
        
        }
    }

    //calcular as linhas primeiramente
    for(int i = 0; i < n; i++){  //linhas 
        for(int j = 0; j < n; j++){ //colunas

            soma_linhas[i] += m[i][j];    
        
        }
    }

    //calcular as colunas primeiramente    
    for(int j = 0; j < n; j++){  // colunas
        for(int i = 0; i < n; i++){ //linhas

            soma_colunas[j] += m[i][j];    
        
        }
    }

    /*for(int j = 0; j < n; j++){ //colunas
       cout << soma_linhas[j] << " ";    
    }

    cout << "\n";

    for(int j = 0; j < n; j++){ //colunas
       cout << soma_colunas[j] << " ";    
    }*/
    int atual = 0;

    for(int i = 0; i < n; i++){  //linhas 
        for(int j = 0; j < n; j++){ //colunas

            atual = max(atual, ( soma_linhas[i] + soma_colunas[j] - m[i][j]*2 ) );                               
            
        }
    }

    cout << atual << "\n";

    return 0;
}