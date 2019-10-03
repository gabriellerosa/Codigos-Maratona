#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double x;
    int n;

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        printf("%.4f\n", sqrt(x));
        
    }
    return 0;
}