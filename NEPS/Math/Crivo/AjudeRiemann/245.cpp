#include <iostream>
#include <vector>

using namespace std;

bool eh_composto[12000003];
vector<int> ans;

void crivo(int n){

    eh_composto[1] = true;
    for(int i = 2; i <= n; i++){
        
        if(!eh_composto[i]){
            ans.push_back(i);
            for(int j = 2; i * j <= n; j++){
                eh_composto[i * j] = true;
            }
        }
    
    }   
    return;
}

int main(){

    int n, cont = 1, aux;
    cin >> n;

    crivo(12000000);

    cout << ans[n - 1] << endl;

    return 0;
}