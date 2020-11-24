#include <iostream>

using namespace std;

int main(){

    long long qtd;
    cin >> qtd;
    
    while(qtd--) {
        long long a, b;
        int ans = 0;
        cin >> a >> b;
        
        if(a == b){
            cout << "0\n";
            continue;
        } 
        
        if(a < b) {
            int s;
            s = b - a;
            
            if(s % 10 == 0) {
                cout << s/10 << endl;
            } else {
                cout << (s/10) + 1 << endl;
            }
        } else {
            int s;
            
            s = a - b;
            if(s % 10 == 0) {
                cout << s/10 << endl;
            } else {
                cout << (s/10) + 1 << endl;
            }
        }   
    }
 
    return 0;
}