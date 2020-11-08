#include <iostream>

using namespace std;

int main(){

    int v[9][4];
    int valor = 0;

    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 4; j++){
            valor += j + 1;
            v[i][j] = valor;
        }
    }

    int qtd;
    cin >> qtd;

    while(qtd--){
        int num;
        cin >> num;

        string s = to_string(num);

        cout << v[(num % 10) - 1][s.size() - 1] << endl;
    }

    return 0;
}