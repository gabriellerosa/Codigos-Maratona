#include<iostream>

using namespace std;

int main(){

    long long k, n, w, ans;

    cin >> k >> n >> w;

    ans = ((k + (k * w)) * w)/2;

    if(n >= ans)
        cout << "0\n";
    else
        cout << abs(ans - n) << endl;

    return 0;
}