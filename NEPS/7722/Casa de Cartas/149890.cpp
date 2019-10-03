#include <iostream>
#include <algorithm>

using namespace std;

int deputados;

int lucro(int valor, int valor2){
    if(valor % deputados == valor2 % deputados){
        return valor > valor2;
    }
    return valor % deputados > valor2 % deputados;
}

int main(){
    int n;

    cin >> n >> deputados;
    
    int v[n];

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v, v + n, lucro);
    
    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}


