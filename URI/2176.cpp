#include <iostream>

using namespace std;

int main(){
        
    string sinal[101];
    int i, par = 0;
    cin >> sinal;

    for(i = 0; i < sinal.length(); i++){
        if(sinal[i] == 1){
            par++;
        }
    }

    if(par%2==0){
        sinal.length()+1 = 0;
    }else    
        sinal.length()+1 = 1;

    cout << sinal << endl;

    return 0;
}