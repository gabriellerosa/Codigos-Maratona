#include<iostream>

using namespace std;

int main(){
    string texto;

    getline(cin, texto);

    if(texto.length() > 80)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;    
    
    return 0;
}