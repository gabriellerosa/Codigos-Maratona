#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int main(){
    
    double n, value;
    cin >> n;

    value = (pow(((1+sqrt(5))/2),n) - pow(((1-sqrt(5))/2),n) )/ sqrt(5);

    printf("%.1f\n", value);
    return 0;
}