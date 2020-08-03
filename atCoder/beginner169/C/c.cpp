#include <iostream>

using namespace std;

int main(){
    
    long long a;
    double b;       

    cin >> a >> b;

    a = (long long) (a * (long long) ((b + 0.001) * 100))/100;

    cout << a << endl;

    return 0;
}
