#include<iostream>

using namespace std;

int main(){
    
    int a, b, soma = 0, maior, menor, aux;
    
    cin >> a >> b;
    
    if(a > b){
        maior = a;
        menor = b;
    }else{
        maior = b;
        menor = a;
    }
    
    for(int i = menor; i <= maior; i++){
        //cout << "i : " << i << endl;
        aux = i;
        if(i < 0 && i != menor && i!= maior){
            aux = i*-1;
            if(aux%2 != 0){
                aux = aux*-1;
                soma+= aux;
                //cout << "soma: " << soma << endl;
            }
        }else{
            if(aux%2 != 0 && i != menor && i!= maior ){
                soma+= aux;
                //cout << "soma oi: " << soma << endl;
            }
        }
    }   

    cout << soma << endl;
    
    return 0;
}