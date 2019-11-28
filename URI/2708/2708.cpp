#include <iostream>

using namespace std;

int main(){

    string acao;
    int num, gipes = 0, tu = 0;

    while(cin >> acao, acao != "ABEND"){
        
        cin >> num;
        
        if(acao == "SALIDA"){
            gipes++;
            tu += num;
        }else{
            gipes--;
            tu -= num;
        }

    }
    
    cout << tu << "\n" << gipes << "\n";

    return 0;
}