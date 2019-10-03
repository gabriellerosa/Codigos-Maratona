#include <iostream>
#include <vector>

#define MAX 1000005

using namespace std;

int main(){
    
    int t, n;

    cin >> t;

    while(t--){

        cin >> n;
        vector<int> dias(n);

        for(int i = 0; i < n; i++){
            cin >> dias[i];
        }
        
        int menor = MAX; 
        int ans = 0;
        
        for(int i = n - 1; i >= 0; i--){
            if(dias[i] > menor)
                ans++;
            menor = min(menor, dias[i]);
        }
        
        cout << ans << endl;
    }    

    return 0;
}