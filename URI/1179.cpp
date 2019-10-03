#include <iostream>

using namespace std;

int main(){
    
    int par[5], impar[5], num, i, k = 0, g = 0;

    for(i = 0; i < 14; i++){
        cin >> num;
        if(num%2 == 0){
            par[k] = num;
            k++;

            if(k == 5){
                for(i=0; i<5; i++)
                    cout << par[i] << endl;
                k = 0; 
            }    
        }else{
            impar[g] = num;
            g++;

            if(g == 5){
                for(i=0; i<5; i++)
                    cout << impar[i] << endl;
                g = 0; 
            }    
        }
    }

    return 0;
}