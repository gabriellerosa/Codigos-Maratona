#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int n, k;
    cin >> n >> k;
    vector< vector<int>> cityCost(n);
    vector<int> city;
    int ans = 0;

    for(int i = 1; i < n; i++){
        city.push_back(i + 1);
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int aux;
            cin >> aux;

            cityCost[i].push_back(aux);
        }        
    }

    
    do {
        int sum = 0;
        int i = 0;

        sum += cityCost[0][city[0] - 1];

        for( i = 0; i < city.size() - 1; i++) {
            sum += cityCost[city[i] - 1][city[i + 1] - 1];
        }

        sum += cityCost[city[i] - 1][0];
      
        if(sum == k) {
            ans++;
        }
    } while (next_permutation(city.begin(), city.end()));

    cout << ans << endl;

    return 0;
}