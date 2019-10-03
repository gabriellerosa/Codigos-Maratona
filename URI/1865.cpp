#include <iostream>

using namespace std;

int main(){

    int c, num;
    string nome;

    cin >> c;

    while(c--){
        cin >> nome >> num;

        if(nome == "Thor"){
            cout << "Y" << endl;
        }else
            cout << "N" << endl;
    }
    return 0;
}