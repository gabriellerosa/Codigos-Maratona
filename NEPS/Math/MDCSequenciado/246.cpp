#include <iostream>

using namespace std;

long long mdc(long long a, long long b){
    return (b == 0 ? a : mdc(b, a % b));
}


int main(){

    int n;
    long long ans, v[1000050];    

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    ans = mdc(v[0], v[1]);

    for(int i = 2; i < n; i++){
        ans = mdc(ans, v[i]);
    }    
    
    cout << ans << endl;

    return 0;
}