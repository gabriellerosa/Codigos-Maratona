#include <iostream>
#include <vector>

using namespace std;

vector<int> divs(int n){
    vector<int> ans;

    for(int i = 1; i * i <= n; i++){

        if(n % i == 0){
            ans.push_back(i);
            ans.push_back(n/i);
        }
    }

    return ans;
}

int main(){

    int c;
    cin >> c;

    while(c--){
        int n, k;
        cin >> n >> k;

        if(k >= n){
            cout << "1" << endl;
        }else{
            vector<int> div;
            div = divs(n);
            int maior = 0;

            for(int i = 0; i < div.size(); i++){
                
                if(div[i] <= k)                
                    maior = max(maior, div[i]);                
            }

            cout << n/maior << endl;    
        }
    }

    return 0;
}