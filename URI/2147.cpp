#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int i, q;
    string palavra;   
    double sum = 0;

    cin >> q;

    while(q--){
        cin >> palavra;
        for(i = 1; i <= palavra.length(); i++){
            sum+=0.01;
        }        
        printf("%.2f\n", sum);
        sum = 0;
    }

    return 0;
}