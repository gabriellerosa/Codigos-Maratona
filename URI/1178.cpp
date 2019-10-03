#include<iostream>

using namespace std;

int main(){
    int i;
    double v[110], x, aux;

    cin >> x;
    aux = x;
    for(i = 0; i < 100; i++){
        v[i] = aux;
        aux= aux/2;
    }

    for(i = 0; i < 100; i++){
        printf("N[%d] = %.4f\n", i, v[i]);       
    }

    

    return 0;
}