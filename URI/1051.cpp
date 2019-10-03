#include <iostream>

using namespace std;

int main(){
    
    float a, aux, ajus, valor, soma, ajus1;
    int k;
    cin >> a;

    if(a <= 2000){
        cout << "Isento" << endl;
    }else{
        aux = a - 2000;
        if( aux <= 1000 /* ou 999.99 vou ver dps*/){
            cout << aux*0.08 << endl;
        }else{
            k = aux/1000;
            valor = aux - 1000; 
            ajus = k*1000*0.08; // taxando o valor
            if(valor <= 1500){ // 1499
               cout << (valor*0.18)+ajus << endl;
            }else{
                k = valor/1500;
                valor = aux - 1500; 
                ajus1 = k*1500*0.18; // taxando valor
                if(valor < 4500){
                   cout << (valor*0.28)+ajus+ajus1 << endl;        
                }else
                   cout << (valor*0.28)+ajus+ajus1 << endl;
            }
        }            
    }    
    
    return 0;
}   