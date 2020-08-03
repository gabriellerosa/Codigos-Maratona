#include <iostream>
#include <bitset>
#include <vector>
#include <map>

typedef long long ll;
//typedef vector<ll> vll;

using namespace std;

bitset<10000007> e_composto;
vector<ll> primos;

void crivo(ll max){

    e_composto.set();
    e_composto[0] = e_composto[1] = 0;        
    for(ll i = 2; i <= max + 1; i++){
        if(e_composto[i]){

            for(ll j = 2; j * i <= max; j++){
                e_composto[i * j] = 1;
            }
            primos.push_back(i);
        }
    }
    return;
}

//pp = primeiro_primo
map<ll, ll> fatoracao(ll n){
	ll ind = 0, pp = primos[0];
	map<ll, ll> ans;

	while(pp * pp <= n){

		if(n % pp == 0){
			ll count = 0;
			while(n % pp == 0){
				n = n/pp;
				count++;
			}
			ans[pp] = count;
		}

		ind++;
		if(ind == primos.size()) break;
		pp = primos[ind];

	}
	if(n != 1) ans[n] = 1;
	return ans;
}

//somatorio da qntds d numero necessario para fazer a soma
ll func(ll e){
	// s: 1 + 2 + 3 +..+i <= e
	ll sum = 0;
	ll i = 0;
	// e = 2
	while(sum <= e){
		i++;
		sum += i;
	}
	return i-1;
}

int main(){
    
    ll n;
	cin >> n;

	crivo(1000000);
	map<ll, ll> fats = fatoracao(n);
	// [p, e]
	ll ans = 0;
	
	for(auto x : fats){
		// printf("[%lld, %lld]\n", x.first, x.second);
		ll e = x.second;	
		ans += func(e);
	}
	cout << ans << endl;
	return 0;
}