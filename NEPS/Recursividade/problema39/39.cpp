#include<iostream>

using namespace std;

int recu(long long n){
    
    if(n == 1 || n == 0)
        return 1;
    return n * recu( n - 1);
}

int main(){
    long long n;
    
    cin >> n;

    cout << recu(n) << endl;    
    
    return 0;
}