#include<iostream>
using namespace std;

int main(){
    int N,S, dia=1;
    cin >> N >> S;
    int menor = S;
    0<=N<=30;
    -1000 <= S <= 1000;
    while(dia<=N){
        int valor;
        cin >> valor;
        S+=valor;
        -1000 <= S,valor <= 1000;
        if(S<menor){
            menor=S;
        }
        dia+=1;
    }
    cout << menor;
}