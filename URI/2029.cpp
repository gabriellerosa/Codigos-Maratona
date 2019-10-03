#include<iostream>
#include<math.h>
#include<stdio.h>
#define PI 3.14

using namespace std;

int main(){
    
    double di, vol, r, ba, h;

    while(cin >> vol >> di){
        
        r = di/2;
        ba = PI*pow(r,2);
        h = vol/ba;
        
        printf("ALTURA = %.2f\n", h);
        printf("AREA = %.2f\n", ba);
    }

    return 0;
}