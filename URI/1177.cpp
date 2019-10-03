#include <iostream>
using namespace std;

int main(){

    int v[1010], i, num, n = 1000, cont = 0;
    
    cin >> num;

    while(n--){  
   
        for(i = 0; i < num; i++){
            v[cont] = i;
            //cout << "valor do cont " << cont << endl;
            cont++;
        }

        if(cont >= 1000)
            break;

    }

        for(i = 0; i < 1000; i++){
           cout << "N[" << i << "] = " << v[i] << endl; 
        }

    return 0;
}