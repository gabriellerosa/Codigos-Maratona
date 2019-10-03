#include <iostream>

using namespace std;

int main(){
    int i, num, aux, cont=0;

    for( i = 0; i < 5; i++){
        cin >> num;
        if(num < 0){
            aux = num*-1;
            if(aux%2 == 0)
                cont++;
        }else
           if(num%2 == 0)
                cont++; 
    }
    
    cout << cont << " valores pares" << endl;

    return 0;
}