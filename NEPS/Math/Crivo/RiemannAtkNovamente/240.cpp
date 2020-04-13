#include <iostream>
#include <vector>

using namespace std;

bool eh_composto[12000003];
int ans[12000003];
int pos;

void crivo(int k){
    pos = 1;

    eh_composto[1] = true;
    for(int i = 2; i <= k; i++){
       
        if(eh_composto[i] == false){
            ans[i] = pos++;       
            for(int j = 2; j * i <= k; j++){                
                eh_composto[j * i] = true;
            }
        }

    }
    return;
}

int main(){
    
    int n;
    cin >> n;

    crivo(12000003);

    while(n--){
        int aux;
        cin >> aux;
        
        cout << ans[aux] << endl;    
    }

    return 0;
}