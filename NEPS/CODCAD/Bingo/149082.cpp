#include <bits/stdc++.h>

using namespace std;

int main(){

    int v[92] = {0}, n, b, aux, val = 0, vecB[92];

    cin >> n >> b;
    while(n != 0){
        bool flag = false;
        memset(v, 0, sizeof(v));

        /*for(int i = 0; i <= n; i++){
            cout << v[i] << endl;
        }   */        

        for(int i = 0; i < b; i++){
            cin >> aux;
            v[aux] = 1;
            vecB[i] = aux;
        }   
    
        for(int i = 0; i < b-1; i++){
            for(int j = i+1; j < b; j++){
                val = abs(vecB[i]-vecB[j]);
                //cout << "val :" << val << endl;        
                v[val] = 1;
            }
        }    
        
        for(int i = 0; i <= n; i++){
                
            if(v[i] == 0){
                flag = true;
                break;
            }
        }

        if(flag){
            cout << "N" << endl;
        }else
            cout << "Y" << endl;

        cin >> n >> b;    
    }
    return 0;
}