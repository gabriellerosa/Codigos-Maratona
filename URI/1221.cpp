#include<iostream>

using namespace std;

int main(){
    
    int x, n, aux, cont = 0, i;

    cin >> x;

    while(x--){
        cin >> n;
        //aux = sqrt(n);
        
//cout << "aqui" << aux << endl; 
        cont = 0;
        for(i = 2; i*i <= n; i++){

            if(n%i == 0){
                cont++;
            }
        }
        //cout << cont << endl;
        if(cont == 0 || n == 1){
            printf("Prime\n");
        }else
            printf("Not Prime\n");
    }

    return 0;
}