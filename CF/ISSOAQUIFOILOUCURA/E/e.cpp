#include <iostream>
#include <vector>

using namespace std;

int main(){

    long long n, i, menor = 0, acu = 0;
    cin >> n;

    vector<long long> mana(n, 0);

    for(long long k = 0; k < n; k++){
        cin >> mana[k];
    }

    /*for(long long k = 0; k < n; k++){
        cout << mana[k] << " ";
    }
    cout << endl;
    cout << endl;*/

    acu = mana[0];
    menor = min(menor, acu);    

    for(i = 1; i < n; i++){
        
        //cout << acu << " - (" << mana[i] << ")" << endl;
        acu += mana[i];        
        //cout << "acu: " << acu << endl;
        menor = min(menor, acu);
    }

    //cout << menor << endl;
    if(menor >= 0)
        cout << 0 << endl;
    else
        cout << -menor << endl;
}