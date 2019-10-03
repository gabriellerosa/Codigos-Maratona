#include <iostream>

using namespace std;

int main(){
    int p, j1, j2, r, a, tot = 0;

    cin >> p >> j1 >> j2 >> r >> a;
    tot = j1+j2;

    if(p == 1){ //escolheu par
        if((tot%2 == 0 && r== 0 && a == 0) || (r == 0 && a == 1) || (r == 1 && a == 0)){
            cout << "Jogador 1 ganha!" << endl;
        }else
            cout << "Jogador 2 ganha!" << endl;   
    }else{
        if((tot%2 != 0 && r== 0 && a == 0) || (r == 0 && a == 1) || (r == 1 && a == 0)){
            cout << "Jogador 1 ganha!" << endl;
        }else
            cout << "Jogador 2 ganha!" << endl;   
    }

    return 0;
}