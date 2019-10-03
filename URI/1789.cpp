#include <iostream>

using namespace std;

int main(){

    int maior = 0, i, num, les;
    
    while(cin >> num){
    for(i = 0; i < num; i++){
        cin >> les;

        if(les > maior){
            maior = les;
        }
    }

    if(maior < 10)cout << "1" << endl;
    else if( maior >= 10 && maior < 20) cout << "2" << endl;
    else cout << "3" << endl;

    maior = 0;    
    }    
    return 0;
}