#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>

using namespace std;

int main(){

    long long t;
    cin >> t;

    while(t--){

        long long n;
        cin >> n;

        vector<long long> num(n);
        for(int i =0; i < n; i++) {
            cin >> num[i];
        }

        unordered_set<long long> escolhidos;
        //unordered_set<long long> possiveis;
        unordered_map<long long, long long> ans;
        
        for(int i = 0; i < n; i++) {

            if(escolhidos.find(num[i]) == escolhidos.end()){
                escolhidos.insert(num[i]);
                ans[num[i]] = i + 1;
                //possiveis.insert(num[i]);
            } else {
                //possiveis.erase(num[i]);
                ans[num[i]] = -1;
            }                
        }

        bool temresposta = false;
        long long menorIndex = 1000000000000;
        long long menorNumero = 1000000000000;

        for(auto e : ans) {
            if(e.second != -1) {
                temresposta = true;
                if(e.first < menorNumero) {
                    menorIndex = e.second;
                    menorNumero = e.first;
                }
            }
        }
        
        if(temresposta == false) 
            cout << "-1" << endl;
        else
            cout << menorIndex << endl;
    }

    return 0;
}