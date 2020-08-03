#include <iostream>
#include <set>

using namespace std;

int main(){

    int num, t;
    cin >> num >> t;

    if(t == 0){
        cout << num << endl;
        return 0;
    }

    set<int> forbid;
    
    for(int i = 0; i < t; i++){
        int k;
        cin >> k;
        forbid.insert(k);
    }

    int auxMA = num, auxME = --num;

    while(1){

        if(forbid.find(auxMA) == forbid.end()){
            cout << auxMA << endl;
            return 0;
        }

        if(forbid.find(auxME) == forbid.end()){
            cout << auxME << endl;
            return 0;
        }

        auxMA++;
        auxME--;
    }

    return 0;
}