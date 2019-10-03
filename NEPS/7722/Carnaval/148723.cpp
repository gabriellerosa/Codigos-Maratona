//Codigo de exemplo
#include<iostream>
#include <stdio.h>
using namespace std;

int main(){
    double v[6], menor = 11, maior = 0, aux;
    int i;

    for(i = 0; i < 5; i++){
        cin >> aux;
        v[i] = aux;
    }

    for(i = 0; i < 5; i++){
        if(v[i] > maior){
            maior = v[i];
        }
        if(v[i] < menor){
            menor = v[i];
        }
    }
    aux = 0;
    for(i = 0; i < 5; i++){
        aux+=v[i];
    }
    printf("%.1f\n", aux-menor-maior);
    return 0;
 }
