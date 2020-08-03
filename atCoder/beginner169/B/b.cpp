#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    long long n, som = 1, ant = 1;  
    bool ze = false, o = false;  

    cin >> n;

    vector<long long> v (n);   

    for(long long i = 0; i < n; i++){
        cin >> v[i];
        //cout << v[i] << endl;
        if(v[i] == 0)
            ze = true;
    }

    ant *= v[0]; 

    if(!ze){
        for(long long i = 1; i < n; i++){
            som = v[i] * ant;
            //cout << som << endl;
            if(som > 1000000000000000000 || som < 0 || som < ant){
                o = true;
                break;            
            }
            ant = som;
        }
    }

    if(ze){
        cout << "0" << endl;
    }else if(o){
        cout << "-1" << endl;
    }else{
        cout << som << endl;
    }

    return 0;
}
