#include <iostream>

using namespace std;

typedef long long ll;

ll solve(ll a, ll b, ll x, ll y, ll n){
    
    // primeiro diminuir o maximo que der e se sobrar diminuir 
    // o resto   
    ll da = a - x;
    ll db = b - y;    

    if(n > da) {
        a = x;
        n -= da;
    } else {
        a -= n;
        n = 0;
    }
    
    if(n > db) {
        b = y;
        n -= db;
    } else {
        b -= n;
        n = 0;
    }

    return a * b;
}

int main(){

    long long qtd;

    cin >> qtd;

    while(qtd--) {

        long long a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;

        //primeiro vamos tentar diminuir o a o maximo que da
        ll pa = solve(a, b, x, y, n);
        ll pb = solve(b, a, y, x, n);

        cout << min(pa, pb) << endl;

    }

    return 0;
}