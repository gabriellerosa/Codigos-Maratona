#include <iostream>
#include <string>

using namespace std;

int main(){

    int c;
    cin >> c;

    while(c--){

        int qtd;
        string frase;

        cin >> frase;
        cin >> qtd;

        for(int i = 0; i < frase.size(); i++){

            if(frase[i] - qtd < 65){
                frase[i] = frase[i] + 26 - qtd;        
            }else{
                frase[i] = frase[i] - qtd;
            }
        }

        cout << frase << endl;
    }

    return 0;
}