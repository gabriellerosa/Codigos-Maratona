#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    int n;
    cin >> n;

    vector<int> num;

    for(int i = 0; i < n; i++){        
        int aux;
        cin >> aux;
        num.push_back(aux);
    }

    long long ans = 1000000000000000;
    int res;    

    for(int i = 1; i <= 100; i++){
       long long c = 0;
       for(int j = 0; j < num.size(); j++){        
            
           c += (num[j] - i) * (num[j] - i);                     

       }
       if(c < ans){
           res = i;
           ans = c;  
       }        
    }

    cout << ans << endl;

    return 0;
}
