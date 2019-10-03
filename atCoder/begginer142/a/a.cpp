#include <iostream>

using namespace std;

int main(){
    
    int n;
    double res, aux;
    cin >> n;

    if( n%2 == 0){
        res = n/2;         
        printf("%.10f\n", res / n);       
    }else if( n == 1){
        printf("1.0000000000");
    }else{
        res = (n-1)/2;
        aux = n - res;         
        printf("%.10f\n", aux / n); 
    }

    return 0;
}