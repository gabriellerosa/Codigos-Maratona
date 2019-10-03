#include <iostream>

using namespace std;

int main(){
    int menor = 50, i, num, val, index;

    cin >> num;

    for(i = 1; i <= num; i++){
        cin >> val;
        if(val < menor){
            menor = val;
            index = i;
        }
    }  
    
    cout << index << endl;

    return 0;
}