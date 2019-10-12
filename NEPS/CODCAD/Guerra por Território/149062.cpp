#include <iostream>

using namespace std;

int main(){
    
    int qtd, soma = 0, index, val, v[100005];

    cin >> qtd;

    for(int i = 0; i < qtd; i++){
        cin >> v[i];
        soma+=v[i];
    }

    val = soma/2;
    soma = 0;
    for(int i = 0; i < qtd; i++){
        soma+= v[i];

        if(soma == val){
            cout << i+1 << endl;
            break;
        }
    }

    return 0;
}