#include <iostream>

using namespace std;

int natu(int n){
    if(n == 1)
        return 1;
    return natu(n - 1) + n;
}

int main(){
    int n;    
    cin >> n;

    cout << natu(n) << endl;

    return 0;
}