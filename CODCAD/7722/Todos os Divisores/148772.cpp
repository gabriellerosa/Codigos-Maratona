//Codigo de exemplo
#include<iostream>
#include <stdio.h>
using namespace std;

int main(){
    int a, k;

    cin >> a;
    k = 1;
    while(k <= a){
        if(a%k == 0) cout << k << " ";
        k++;
    }
    cout << endl;
 }
