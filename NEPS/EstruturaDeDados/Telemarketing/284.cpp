#include <iostream>
#include <queue>
#include <algorithm>

#define mp make_pair

using namespace std;

int n, l, v[10230];

int main(){

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> tele;
    int t;

    cin >> n >> l;
        
    for(int i = 1; i <= n; i++){
        tele.push( mp(0, i) );    
    }
    
    int tempo_vendedor = 0;

    for(int i = 1; i <= l; i++){
        cin >> t;

        pair<int, int> vendedor = tele.top();
        tele.pop();        

        v[vendedor.second] += 1;

        tele.push(make_pair(vendedor.first + t, vendedor.second) ); 

    }

    for(int i = 1; i <= n; i++){
        cout << i << " " << v[i] << "\n";
    }

    return 0;
}