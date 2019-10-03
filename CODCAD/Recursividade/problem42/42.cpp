#include <iostream>

using namespace std;

int fibi(int n){
    
    if(n == 1 || n == 0) return 1;
    return  fibi(n - 1) + fibi(n - 2);
}

int main(){

    int n;
    cin >> n;    
    
    cout << fibi(n) << endl;

    return 0;
}