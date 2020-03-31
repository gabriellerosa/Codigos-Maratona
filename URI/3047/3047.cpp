#include <iostream>

using namespace std;

int main(){

    int m, f1, f2;

    cin >> m >> f1 >> f2;

    int res = m - (f1 + f2);

    cout << max(res, max(f1, f2)) << endl;

    return 0;
}