#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int c;

    cin >> c;

    while(c--){
        
        long long num1, num2, num3;

        cin >> num1 >> num2 >> num3;

        cout << (num1 + num2 + num3) / 2 << endl;
    }

    return 0;
}