#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> a, b, v;
    int A, B, aux, i;
    vector<int>:: iterator it;

    cin >> A >> B;
    while(scanf("%d %d", &A, &B), A || B){
        
        for(i = 0; i < A; i++){
            cin >> aux;
            a.push_back(aux);
        }
        for(i = 0; i < B; i++){
            cin >> aux;
            b.push_back(aux);
        } 
        
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());                

        if( A < B ){
            it = set_difference (a.begin(), a.end(), b.begin(), b.end(), v.begin());

          cout << "The difference has " << (v.size()) << " elements:\n";
          for (it=v.begin(); it!=v.end(); ++it)
            cout << ' ' << *it;
          cout << '\n';
        }
            
        cin >> A >> B;
    }    
    return 0;
}