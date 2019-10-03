//Codigo de exemplo
#include<iostream>
#include <stdio.h>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    if(a == b && b == c){
        cout << "*" << endl;
    }else if(a != b && b == c){
        cout << "A" << endl;
    }else if(b != a && a == c){
        cout << "B" << endl;
    }else if(c != a && a == b){
        cout << "C" << endl;
    }

    return 0;
 }
