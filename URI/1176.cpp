#include<iostream>

using namespace std;

int main(){

    long long int n, i, atu, ant = 1, antant = 1, num, v[65];
    cin >> num;

    while(num--){
        cin >> n;
        for(i = 0; i <= n; i++){
            if(i == 0){
              v[i] = 0;
            }else if(i == 1 || i == 2){
               v[i] = 1;
            }else{
                atu = ant + antant;
                antant = ant;
                ant = atu;
                v[i] = atu;
             }     
        }
    
        cout << "Fib(" << n << ") = " << v[n] << endl;
    }
    return 0;
}