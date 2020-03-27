#include <iostream>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int h, m, ans = 0;
        cin >> h >> m;

        ans = (h*60) + m;
        
        ans = 1440 - ans;
        cout << ans << endl;
    }

    return 0;

}