#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    int n, k, aux, tot = 0;

    cin >> n >> k;
    
    for(int i = 0; i < n; i++){
        cin >> aux;

        if(aux >= k)
            tot++;
    }   

    cout << tot << endl;

    return 0;
}