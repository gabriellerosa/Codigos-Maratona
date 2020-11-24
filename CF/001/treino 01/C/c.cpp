#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int n;
    cin >> n;
    vector<pair<int, int>> v;

    for(int i = 0; i < n; i++){

        int c, f;
        cin >> c >> f;

        // quero ordenar pelo fim primeiro
        v.push_back(make_pair(f, c));            
    }

    sort(v.begin(), v.end());

    vector<int> ans;
    int lastBuy = -1;

    for(int i = 0; i < v.size(); i++){

        if(v[i].second > lastBuy){
            ans.push_back(v[i].first);
            lastBuy = v[i].first;
        }
    }

    cout << ans.size() << "\n";
    for(int i = 0; i < ans.size(); i++){

        if(i != 0)
            cout << " "; 
        cout << ans[i];    
    }

    cout << "\n";

    return 0;
}