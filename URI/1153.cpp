#include <iostream>

using namespace std;

int main(){

    int n, i, val = 1;

    cin >> n;

    for(i = n; i >= 1; i--){
        val*=i;
    }    
    cout << val << endl;
    return 0;
}