#include <iostream>

using namespace std;

int tot[11];

void pegaNum(string g){
    
    char num;
    
    for(int i = 0; i < g.size(); i++){
       
        num = g[i]; 
        tot[num - '0'] += 1;        

    }

}

int main(){

    int n;

    cin >> n;

    for(int i = 0; i < n; i++){
        string f;
        
        cin >> f;        
        
        pegaNum(f);
    }

    for(int i = 0; i < 10; i++){
               
        cout << i << " - " << tot[i] << "\n";

    }

    return 0;
}