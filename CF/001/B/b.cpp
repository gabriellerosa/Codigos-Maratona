#include <iostream>
#include <vector>
#include <climits>

typedef long long ll;

using namespace std;

ll cross(pair<ll, ll> p1, pair<ll, ll> p2){
    return p1.first * p2.second - p1.second * p2.first;
}

ll signedArea(vector<pair<ll, ll>> &p){

    ll result = 0;
    ll n = p.size();

    for(int i = 0; i < n; i++){
        result += cross(p[i], p[(i + 1) % n]);
    }    

    return result;
}

int main(){

    vector<pair<ll, ll>> pontos;
    
    ll menor = LLONG_MAX;
    ll qtd;
    cin >> qtd;

    while(qtd--){

        ll x, y;
        cin >> x >> y;

        pontos.push_back(make_pair(x, y));
    }

    pontos.push_back(pontos[0]);
    pontos.push_back(pontos[1]);

    // para cada 3 seguidos calcular o valor min
    for(int i = 0; i < pontos.size() - 2; i++){
        vector<pair<ll, ll>> triangulo;
        triangulo.push_back(pontos[i]);
        triangulo.push_back(pontos[i + 1]);
        triangulo.push_back(pontos[i + 2]);
        triangulo.push_back(pontos[i]);

        ll area = signedArea(triangulo);
        menor = min(menor, area);
    }

    cout << menor << "\n";

    return 0;
}