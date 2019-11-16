#include <iostream>
#include <queue>
#define MAX 11234

using namespace std;

int n, m, t, tempo[MAX];

int main(){
    int res = 0;
    cin >> n >> m;

    priority_queue< pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>> > caixa;
    
    for(int i = 1; i <= n; i++){
        cin >> tempo[i];
        caixa.push(make_pair(0, i));
    }
    
    for(int i = 0; i < m; i++){
        cin >> t;
        int time_caixa = tempo[caixa.top().second];
        pair<int, int> caixa_free, atual;

        atual = caixa.top();
        caixa.pop();

        caixa_free = make_pair( atual.first + (time_caixa*t) , atual.second);
        caixa.push(caixa_free);
        res = max(res, atual.first + (time_caixa * t));
    }

    cout << res << "\n";

    return 0;
}