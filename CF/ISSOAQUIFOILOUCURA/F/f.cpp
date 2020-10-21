#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n, ans = 0;
    vector<int> x;

    cin >> n;

    int d = 1;    

    // vamos dividir o array em dois pedaços
    while(d <= n){
        x.push_back(d);
        d += 2;  
        ans++;
    }

    if(n % 2 == 0) {
        x.push_back(n);
        ans++;
    }
    cout << ans << endl;

    cout << x[0];
    for(int i = 1; i < x.size(); i++){
        cout << " " << x[i];
    }
    cout << endl;

    return 0;
}