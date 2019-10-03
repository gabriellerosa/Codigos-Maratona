#include <iostream>

using namespace std;

int main(){
    int q, i, t;

    cin >> q >> i >> t;

    if(q == i || i == t || t == q || t+i == q || i+q == t || q+t == i ){
            cout << "S" << endl;
    }else
            cout << "N" << endl;
    return 0;
}
