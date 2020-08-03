#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

vector<bool> criv (1000010, false);

int main(){

    int n;
    cin >> n;

    vector<int> v (n);
    map<int, int> nums;

    for(int i = 0; i < n; i++){
        cin >> v[i];
        nums[v[i]]++;
    }

    sort(v.begin(), v.end());

    for(auto k: nums){

        if(criv[k.first] == false){
            //marcar tds os multiplos de k            
            for(int j = 2 * k.first; j <= 1000000; j += k.first){
                criv[j] = true;
            }
        }
    }

    int ans = 0;

    for(auto num: nums){

        if(num.second == 1 && criv[num.first] == false){
            ans++;
        }        
    }

    cout << ans << endl;

    return 0;
}