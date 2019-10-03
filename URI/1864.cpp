#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int n;
    char v[]="LIFE IS NOT A PROBLEM TO BE SOLVED";
    
    cin >> n;

    for(int i = 0; i < n; i++){
        printf("%c", v[i]);
    }

    cout << endl;

    return 0;
}