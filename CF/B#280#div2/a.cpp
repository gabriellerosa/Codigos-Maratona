#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int n, l;
    double ma = 0;
    vector<int> v;
    //bool limit = false, ini = false;

    cin >> n >> l;

    for(int i = 0; i < n; i++){
        int aux;
        cin >> aux;
        v.push_back(aux);
    }
    
    sort(v.begin(), v.end());

    for(int i = 0; i < n - 1; i++){
        int val = abs(v[i] - v[i + 1]);        
        ma = max(ma, (double)val);
    }

    double ans = ma/2;

    if(ans < (abs(v[0] - 0)) || ans < (abs(l - v[n - 1]))){

        ans = max(abs(v[0] - 0), abs(l - v[n - 1]));

    }

    printf("%.9f\n", ans);

    return 0;
}