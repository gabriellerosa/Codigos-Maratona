#include <iostream>

using namespace std;

int main(){
    int ini, horas, fuso, fim;

    cin >> ini >> horas >> fuso;
    fim = ini+horas+fuso;

    if(fim > 24){
        cout << fim-24 << endl;
    }else if(fim == 24 || fim == 0){
        cout << "0" << endl;
    }else if(fim < 24 && fim > 0){
        cout << fim << endl;
    }else
        cout << fim+24 << endl;

    return 0;
}