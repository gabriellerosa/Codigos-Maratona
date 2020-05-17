#include <iostream>

using namespace std;

int main(){

    int n, n1;
    double d, v, d1, v1;

    cin >> n >> d >> v;
    cin >> n1 >> d1 >> v1;

    double ans, ans1;

    ans = d/v;
    ans1 = d1/v1;    

    if(ans <= ans1){
        cout << n << endl;
    }else
        cout << n1 << endl;

    return 0;
}