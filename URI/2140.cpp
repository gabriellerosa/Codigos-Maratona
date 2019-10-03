#include<iostream>

using namespace std;

int main(){
    int valor, troco, aux, duas = 0;

    cin >> valor >> troco;    
    while(valor!= 0 && troco!=0){
        aux = troco - valor;

        if(aux >= 100 && duas < 2){
            aux=aux%100;
            duas++;
        }
        if( aux >= 50 && aux < 100 && duas < 2){
            aux=aux%50;
            duas++;
        }
        if( aux >= 20 && aux < 50 && duas < 2){
            aux=aux%20;
            duas++;
        }
        if(aux >=10 && aux < 20 && duas < 2){
            aux=aux%10;
            duas++;
        }
        if(aux >= 5 && aux < 10 && duas < 2){
            aux=aux%5;
            duas++;
        }
        if(aux >= 2 && aux < 5 && duas < 2){         
            aux=aux%2;
            duas++;
        }
        
        if(aux == 0 && duas == 2)
            cout << "possible" << endl;
        else 
            cout << "impossible" <<endl;
        duas = 0;
        cin >> valor >> troco;
    }
    return 0;
}