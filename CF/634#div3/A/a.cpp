#include <iostream>

using namespace std;

int main(){

    int k;
    cin >> k;

    while(k--){

        long long n, ans = 0, x, b;
        cin >> n;
        
        if(n == 1 || n == 2)
            cout << "0\n";
        else if(n % 2 == 0) cout << (n/2) - 1 << "\n";
        else{
                
            x = (n/2) + 1;
            //ans++;
            b = n - x;
            cout << b << "\n"; 
        }
    }

    return 0;
}