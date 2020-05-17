#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

bool comp(pair<int, int> a, pair<int, int> b){

    return a.second < b.second;

}

int main(){

    int n, m;

    cin >> n >> m;

    vector<pair<int, int>> ans;

    vector< vector<int>> t; 
    t.assign(n, vector<int>(m));

    for(int i = 0 ; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> t[i][j];    
        }
    }

    /*for(int i = 0 ; i < n; i++){
        cout << "vetor " << i << " : "; 
        for(int j = 0; j < m; j++){
            cout << t[i][j] << " ";
        }
        cout << endl;
    }*/

    for(int i = 0 ; i < n; i++){
        int tot = 0;
        for(int j = 0; j < m; j++){
            tot += t[i][j];      
        }
        //cout << "i: " << i + 1 << " tot: " << tot << endl;
        ans.push_back(make_pair(i + 1, tot));
    }
    
    sort(ans.begin(), ans.end(), comp);

    /*for(int i = 0 ; i < n; i++){
        cout << "Colocado " << ans[i].first << " " << ans[i].second << endl;
    }*/

    cout << ans[0].first << endl;   

    return 0;
}