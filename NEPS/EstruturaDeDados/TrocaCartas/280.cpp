#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main(){

    int n, n2, aux, id1, id2, tot = 0, k;
    set<int> x, y;

    cin >> n >> n2;

    for(int i = 0; i < n; i++){
        cin >> aux;                        
        x.insert(aux);
    }

    for(int i = 0; i < n2; i++){
        cin >> aux;                        
        y.insert(aux);
    }
    
    //interseção 

    for(set<int>::iterator it = x.begin(); it != x.end(); ++it){
                
        if(y.find(*it) != y.end()){ //Se 3 está no conjunto
           tot++;
        }    
    }    

    k = min(x.size(), y.size());

    cout << k - tot << endl;    

    return 0;
}