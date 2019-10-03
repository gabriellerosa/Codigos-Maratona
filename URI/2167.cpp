#include <iostream>

using namespace std;

int main(){
    int q, i, value, v[130], nunca = 0;

    cin >> q;

    for(i = 0; i < q; i++){
       cin >> value;
       v[i] = value;
    }   

    for(i = 1; i < q; i++){
       if(v[i] < v[i-1]){
         cout << i+1 << endl;
         nunca = 1;
         break;
       }
    }  
    if(nunca == 0)
        cout << "0" << endl;
    return 0;
}