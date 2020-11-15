#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

    long long n , w;
    cin >> n >> w;
    vector<pair<long long, pair<long long, long long>>> tot;
    
    // entrou : 1 saiu : 0
    for(long long i = 0; i < n; i++){
        long long str, end, p;
        cin >> str >> end >> p;

        tot.push_back({str, {1, p}});
        tot.push_back({end, {0, p}});
    }

    sort(tot.begin(), tot.end());

    long long sum = 0;    
    for(long long i = 0; i < tot.size(); i++) {

        if(tot[i].second.first == 1){
            //cout << "vou somar: " << tot[i].second.second << endl;
            sum += tot[i].second.second;
            //cout << "sum: " << sum << endl;

            if(sum > w) {
                cout << "No\n";
                return 0;
            }
        } else {
            sum -= tot[i].second.second;
        }
    }

    cout << "Yes\n";

    return 0;
}