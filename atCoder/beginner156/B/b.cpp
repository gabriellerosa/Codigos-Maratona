#include <iostream>

using namespace std;

int main(){

    long long a, b, p = 1, i = 0;
    cin >> a >> b;

    for(i = 0; p <= a; i++){

        p = p * b;

    }

    cout << i << endl;  

    return 0;
}
