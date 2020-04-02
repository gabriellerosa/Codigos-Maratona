#include <iostream>

using namespace std;

bool eh_primo(long long n){

    if(n == 1)
        return false;
    
    for(long long i = 2; i * i <= n; i++){
        
        if(n % i == 0){
            return false;
        }
    }    
    return true;
}

int main(){

    long long n, ini = 2;
    cin >> n;

    while(ini <= n){

        if(eh_primo(ini)){
            cout << ini << " ";
        }
    
        ini++;
    }
    cout << "\n";

    return 0;
}