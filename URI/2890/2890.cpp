#include <iostream>
#define MOD 1000007

using namespace std;

int main(){

    long long n;
    while(cin >> n, n != 0){

        long long aux;
        
        aux = n % MOD;
        aux += ((n * (n - 1) * (n - 2) * (n - 3)) / (4 * 3) ) % MOD;
        aux %= MOD;
        aux += (n * (((n - 1) * (n - 2)) / 2)) % MOD;
        aux %= MOD;
        aux += ((n * (n - 1)) / 2) % MOD;
        aux %= MOD;
        aux += (n * (n - 1)) % MOD;

        cout << aux % MOD << "\n";
    }

    return 0;
}