#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int c;
    cin >> c;
    
    while(c--){

        int n, menor = 10050;
        cin >> n;
        vector<int> a (n);
        
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        for(int i = 0; i < n - 1; i++){
            
            menor = min(menor, a[i+1] - a[i]);

        }

        cout << menor << endl;
    }

    return 0;
}