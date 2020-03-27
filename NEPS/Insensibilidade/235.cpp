#include <iostream>

using namespace std;


int main(){

    int n, x1, y1, x2, y2, ans = 0;

    cin >> n;

    while(n--){

        cin >> x1 >> y1 >> x2 >> y2;
        ans += (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1);

    }

    cout << ans << endl;

    return 0;
}