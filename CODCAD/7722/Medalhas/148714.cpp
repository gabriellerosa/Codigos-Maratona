//Codigo de exemplo
#include<iostream>

using namespace std;

int main(){
    int a, b, c, maior = 0, menor = 1010, v[4];
    cin >> a >> b >> c;

    if(a < b && b < c){
        cout << "1" << endl;
        cout << "2" << endl;
        cout << "3" << endl;
    }else if(a < c && c < b){
        cout << "1" << endl;
        cout << "3" << endl;
        cout << "2" << endl;
    }else if(c < b && b < a){
        cout << "3" << endl;
        cout << "2" << endl;
        cout << "1" << endl;
    }else if(c < a && a < b){
        cout << "3" << endl;
        cout << "1" << endl;
        cout << "2" << endl;
    }else if(b < a && a < c){
        cout << "2" << endl;
        cout << "1" << endl;
        cout << "3" << endl;
    }else{
        cout << "2" << endl;
        cout << "3" << endl;
        cout << "1" << endl;
    }
 }
