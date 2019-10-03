#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(){
    
    double n, p, m;
    cin >> n;

    p = n/log(n);
    m = 1.25506*(n/log(n));
    printf("%.1f %.1f\n", p, m);
    return 0;
}