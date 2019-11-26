#include <iostream>

using namespace std;

int main(){

    int n, quad[11][11];
    bool funciona = true;

    cin >> n;

    for(int i = 0; i < n; i++){ // linha quad 
        for(int j = 0; j < n; j++){ // colun quad
        
            cin >> quad[i][j];                                                            
            
        }
    }

    int aux = 0, marca = 0;    

    //calculando a primeira linha
    for(int i = 0; i < 1; i++){ // linha quad 
        for(int j = 0; j < n; j++){ // colun quad
        
            aux += quad[i][j];                                                            
            
        }
    }    
  
    //fazendo o calculo das linhas
    for(int i = 1; i < n; i++){ // linha quad 
        for(int j = 0; j < n; j++){ // colun quad
        
            marca += quad[i][j];                                                            
            
        }
        //cout << "Marca " << marca << " Aux " << aux << "\n";
        if(marca != aux){
            funciona = false;
            marca = 0;
            break;        
        }
        marca = 0;
    }     
  
    //fazendo o calculo das colunas
    for(int j = 0; j < n; j++){ // colun quad 
        for(int i = 0; i < n; i++){ // linhas quad
        
            marca += quad[i][j];                                                            
            
        }
        //cout << "Marca " << marca << " Aux " << aux << "\n";
        if(marca != aux){
            funciona = false;
            marca = 0;
            break;        
        }
        marca = 0;
    } 

    // calculando a diagonal princiapl
    for(int i = 0; i < n; i++){ // linha quad 
        for(int j = 0; j < n; j++){ // colun quad

            if(i == j){
                marca += quad[i][j];                                                            
            }        
        }
    } 

    if(marca != aux){
       funciona = false;
       marca = 0;     
    }
    marca = 0;

    //calculando a diagonal inversa
    for(int i = 0; i < n; i++){ // linha quad 
        for(int j = 0; j < n; j++){ // colun quad

            if(i + j == n - 1){
                marca += quad[i][j];                                                            
            }        
        }
    }
    if(marca != aux){
        funciona = false;
        marca = 0; 
    }
    marca = 0;


    if(funciona){
        cout << aux << "\n";
    }else
        cout << "-1\n";     

    return 0;

}