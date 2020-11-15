#include <iostream>
#include <vector>

using namespace std;

int main() {

    int qtd;
    cin >> qtd;

    while(qtd--) {

        int n;
        cin >> n;

        vector<pair<int, int>> grafo;
        vector<int> nums (n);

        for(int i = 0; i < n; i++) {
            cin >> nums[i];
        }

        int index = -1;        
        
        for(int i = 0; i < n; i++){

            if(nums[i] != nums[0]) {
                grafo.push_back({0 + 1, i + 1});
                index = i;
            }            
        }

        if(index == -1) {
            cout << "NO\n";
            continue;
        }
        
        for(int i = 1; i < n; i++){ 
            if(nums[0] == nums[i]) {
                grafo.push_back({index + 1, i + 1});
            }
        }

        cout << "YES\n";
        for(auto e: grafo) {
            cout << e.first << " " << e.second << "\n";            
        }
    }

    return 0;
}