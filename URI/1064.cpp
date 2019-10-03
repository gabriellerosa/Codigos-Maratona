#include <iostream>

using namespace std;

int main(){
    int i, aux, cont=0;
    float num, soma = 0;

    for( i = 0; i < 6; i++){
        cin >> num;
        if(num > 0){
            cont++;
            soma+=num;
        } 
    }
    
    cout << cont << " valores positivos" << endl;
    printf("%.1f\n", soma/cont); 

    return 0;
}