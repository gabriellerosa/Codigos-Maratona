#include <iostream>

using namespace std;

int main(){
    float a[6], num;
    int i;

    for( i = 0; i < 6 ; i++){
        cin >> num;
        a[i] = num;        
    }

    int cont = 0;
    
    for( i = 0; i < 6 ; i++){
        if(a[i] > 0)
            cont++;        
    }

    cout << cont << " valores positivos" << endl;
    return 0;
}
