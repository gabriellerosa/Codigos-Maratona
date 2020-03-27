#include <iostream>

using namespace std;

int main(){

    int n;
    int a, b;
    cin >> n;

    while(n){
        
        cin >> a >> b;
        int mod;
        mod = a%b;
        
        if(a%b == 0){
           cout << "0" << endl;   
        }else{
            cout << b-mod << endl;
        }
        n--;  
    }

    return 0;
}