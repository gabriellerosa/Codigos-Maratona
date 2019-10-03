#include <iostream>

using namespace std;

int main(){
    
    int v[55], i, cont, n, k;

    cin >> k;
    
    for(i = 0; i < k; i++){
        cin >> n;
        v[i] = n;
    }
    
    for(i = 0; i < k; i++){
        cont = 0;
        if(i == 0){
            if(v[i] == 1) cont++;
            if(v[i+1] ==1) cont++;
        }else{ 
            if(i == k-1){
               if(v[i] == 1) cont++;
               if(v[i-1] ==1) cont++; 
            }else{
                if(v[i-1] == 1) cont++;
                if(v[i] == 1) cont++;
                if(v[i+1] == 1) cont++;
            }
        }
        //cout << "tem" << cont << "bombas" << endl;
        cout << cont << endl;
    }
    
    return 0;
}