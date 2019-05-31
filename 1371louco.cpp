#include <iostream>
#include <math.h>

using namespace std;


int main(){
    
    int n, i, aux;
    
    cin >> n;

    while(n != 0){
        
        for(i = 1; i*i <= n; i++ ){ 

            if( i*i == 1)
                cout << i*i;
            else           
                cout <<" "<< i*i;
        }
        cout << endl;
        cin >> n;
    }
    return 0;
}