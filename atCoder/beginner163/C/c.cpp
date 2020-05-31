#include <iostream>

using namespace std;

int main(){
    
    int n, v[200005], ans[200005] = {0};
   
    cin >> n;

    for(int i = 2; i <= n; i++){
        cin >> v[i];
        ans[v[i]]++;
    }

    for(int i = 1; i <= n; i++){
        cout << ans[i] << endl;
    }

    return 0;
}
