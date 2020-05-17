#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solve(int n, int k){

    vector<int> a, b;
    int sum = 0;

    for(int i = 0; i < n; i++){
        int aux;
        cin >> aux;
        a.push_back(aux);
    }

    for(int i = 0; i < n; i++){
        int aux;
        cin >> aux;
        b.push_back(aux);
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    while(k--){     
        if(a[0] > b[b.size() - 1]){
            for(int i = 0; i < n; i++){
                sum += a[i];
            }  
            return sum;
        }
        swap(a[0], b[b.size() - 1]);
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
    }

    for(int i = 0; i < n; i++){
        sum += a[i];
    }

    return sum;
}

int main(){

    int t;
    cin >> t;

    while(t--){
        int n, k, ans = 0;
        cin >> n >> k;
        ans = solve(n, k);
        cout << ans << "\n";
    }

    return 0;
}