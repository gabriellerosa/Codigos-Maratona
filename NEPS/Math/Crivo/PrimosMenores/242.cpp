#include <iostream>
#include <vector>

using namespace std;

bool eh_composto[100000500];

void crivo(int n){
    eh_composto[1] = true;
    for(int i = 2; i <=n; i++){

        if(eh_composto[i] == false){
            for(int j = 2; i * j <=n; j++){
                eh_composto[j * i] = true;
            }
        }
    }
    return;
}

int main(){

    int n;
    cin >> n;

    crivo(n);
    for(int i = 2; i <= n; i++){
        
        if(eh_composto[i] == false){
            cout << i << " "; 
        }
    }    
    cout << endl;

    return 0;
}