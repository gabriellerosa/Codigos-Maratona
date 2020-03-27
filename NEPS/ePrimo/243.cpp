#include <iostream>

using namespace std;

bool eh_primo(long long n){

    if(n == 1)
        return false;
    
    for(int i = 2; i * i <= n; i++){
        
        if(n % i == 0){
            return false;
        }
    }    
    return true;
}

int main(){

    long long n;

    cin >> n;

    if(eh_primo(n))
        cout << "S" << endl;
    else
        cout << "N" << endl;

    return 0;
}