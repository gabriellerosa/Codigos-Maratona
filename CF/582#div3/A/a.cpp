#include <iostream>

using namespace std;

int main(){
    
    int n, v[105], par = 0, impar = 0;

    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(v[i]%2 == 0)
            par++;
        else
            impar++;
    }

    if(par == n || impar == n){
        cout << "0" << endl;
    }else if(impar <= par){
        cout << impar << endl;
    }else if(par < impar)
        cout << par << endl; 

    return 0;
}