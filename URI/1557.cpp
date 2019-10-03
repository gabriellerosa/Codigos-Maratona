#include <iostream>
#include <math.h>

using namespace std;

int main(){
    unsigned long long i, j, valor = 1, n, var;
    int k;
    
    cin >> n;
    
    k = pow(2,(n-1)+(n-1));
   while(n){
        for(i = 0; i < n; i++){
            //valor = i;
            for(j = 0; j < n; j++){
                var = pow(2,i+j);
                printf("%4llu", var);   
            }
            cout << endl;
        }
        cout << endl;
        cin >> n;    
    }
    return 0;
}