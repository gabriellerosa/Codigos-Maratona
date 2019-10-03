#include <iostream>

using namespace std;

int main(){
    long long q, xp, m;

    while(cin >> q >> xp, xp != 0 && q != 0){
        m = xp*q;
        cout << m << endl;
    }
    return 0;
}