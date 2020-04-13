#include <iostream>

using namespace std;

bool isOne(long long n){

    while(n > 1){
        cout << "Valor de N " << n << endl;
        if(n % 2 == 0)    
            return false;
        n /= 2; 

    }
    if(n == 0)
        return false;

    return true;
}

int main(){
    long long num;
    cin >> num;

    if(isOne(num))
        cout << "S" << endl;
    else
        cout << "N" << endl;

    return 0;
}