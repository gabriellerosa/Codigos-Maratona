//Codigo de exemplo
#include<iostream>
#include <stdio.h>
using namespace std;

int main(){
    int n, t, x, y, alu = 0;

    cin >> n >> t;
    while(n--){
        cin >> x >> y;
        if(x+y >= t) alu++;
    }
    cout << alu << endl;
 }
