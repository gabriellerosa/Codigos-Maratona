#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<long long> fat(long long n){
    vector<long long> factor;

    for(long long i = 2; i*i <= n; i++){

        if(n%i == 0)
            factor.push_back(i);

        while(n%i == 0){
           n /= i;        
        }

    }
    if(n > 1)
        factor.push_back(n);

    return factor;
}

int main(){

    long long a, b;  
    vector<long long> fata, fatb;    
    vector<long long> final(10000);    

    cin >> a >> b;   
    
    fata = fat(a);
    fatb = fat(b);
    
    vector<long long>::iterator it = set_intersection(fata.begin(), fata.end(), fatb.begin(), fatb.end(), final.begin());  

    final.resize(it-final.begin()); 
    
    /*for (unsigned i=0; i<final.size(); i++)
        std::cout << " " << final[i];
    std::cout << '\n';*/
    cout << final.size() + 1 << endl;

    return 0;
}