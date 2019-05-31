#include <iostream>
#include <queue>
#include <vector>

using namespace std;

void clear( std::queue<int> &q )
{
   std::queue<int> empty;
   std::swap( q, empty );
}

int main(){
    
    int n, i, aux, aux2;
    queue <int> f;    
    vector<int> descarte;    

    cin >> n;
    while(n!=0){
        
        for(i = 1; i <= n; i++){
            f.push(i);
        }

        while(f.size() >= 2 ){
           aux = f.front(); 
           f.pop();
           descarte.push_back(aux);
           aux2 = f.front();
           f.push(aux2);
           f.pop();
           
        }

        cout << "Discarded cards:";
        
        int k = descarte.size();
        for(i = 0; i < descarte.size(); i++){
            if( i == (k-1) )
                cout << " " << descarte[i] << endl;
            else
                cout << " " << descarte[i] << ",";
        }

        cout << "Remaining card: " << f.front() << endl;

        descarte.clear(); 
        clear(f);        
  
        cin >> n;
    } 

    return 0;
}