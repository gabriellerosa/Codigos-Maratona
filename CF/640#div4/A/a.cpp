#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

int qtd;

vector<int> barrel(vector<int> k){
    vector<int> ans;
    int g = k.size() - 1;
    int base = (int)(pow(10, g) + 0.5);    

    for(int i = k.size()-1; i >= 0; i--){
    
        ans.push_back(base * k[i]);
        base = base/10;
    }

    qtd = 0;
    for(int v = 0; v < ans.size(); v++){
        if(ans[v] != 0) qtd++;
    }

    sort(ans.begin(), ans.end());

    return ans;
}

vector<int> digit(int n){
    
    vector<int> ans;

    while(n > 0){

        //if(n%10 != 0)
        ans.push_back(n%10);
        n = n/10;

    }
    return ans;
}

int main(){

    int n;
    cin >> n;    
    vector<int> res;
    vector<int> b;

    while(n--){
        int num;
        cin >> num;
        
        if(num <= 10){
            cout << "1" << endl;
            cout << num << endl;
        }else{
            res = digit(num);
            b = barrel(res);

            cout << qtd << endl;
            for(int i = (b.size() - qtd) ; i < b.size(); i++){
                cout << b[i] << " ";
            }
            cout << "\n";
        }
    }    

}