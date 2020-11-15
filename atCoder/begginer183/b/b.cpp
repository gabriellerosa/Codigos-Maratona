#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double d, gx, sx, gy, sy;
    cin >> sx >> sy >> gx >> gy;

    d = (gx - sx) / (1 + (gy / sy));

    cout << setprecision(11) << d + sx << endl;

    return 0;
}