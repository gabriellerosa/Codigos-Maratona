#include<iostream>

using namespace std;

int main(){

    int n, i, atu, ant = 1, antant = 1;
    cin >> n;
    
    for(i = 0; i < n; i++){
        if(i == 0){
          cout << "0";
        }else if(i == 1 || i == 2){
           cout << " 1";
        }else{
            atu = ant + antant;
            antant = ant;
            ant = atu;
            cout << " " << atu;
         }     
    }
    cout << endl;

    return 0;
}