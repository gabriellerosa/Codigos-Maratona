/*#include<stdio.h>
#include<iostream>

using namespace std;

int main(){

    long long x=1, y=1, z, n, achei=0;
    
    cin >> n;

    for(long long c = 1; c <= n; c++){

        if( x + y == n){

            achei=1;
            break;

        }else{

            z = x+y;
            x = y;
            y = z;
            if(n == z){

                achei=1;
                break;

            }
        }
    }

    if(achei==1){

        printf("SIM\n");

    }else{

        printf("NAO\n");

    }

    return 0;
}*/