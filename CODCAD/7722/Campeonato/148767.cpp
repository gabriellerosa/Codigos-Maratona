//Codigo de exemplo
#include<iostream>
#include <stdio.h>
using namespace std;

int main(){
    int cv, ce, cs, fv, fe, fs, totf = 0, totc = 0;

    cin >> cv >> ce >> cs >> fv >> fe >> fs;

    totc = cv*3 + ce;
    totf = fv*3 + fe;

    if(totc > totf){
        cout << "C" << endl;
    }else if (totc < totf){
        cout << "F" << endl;
    }else if(cs > fs){
        cout << "C" << endl;
    }else if(cs < fs){
        cout << "F" << endl;
    }else{
        cout << "=" << endl;
    }

    return 0;
 }
