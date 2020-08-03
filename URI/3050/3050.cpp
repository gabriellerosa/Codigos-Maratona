#include<iostream>
#include<vector>

using namespace std;

//comp::O(n)
//memo::O(n) e memoextra::O(1)
int main(){

    int rua, maiorSum = 0, maiorSum2 = 0;
    cin >> rua;

    vector<int> v(rua, 0); 
    
    for(int i = 0; i < rua; i++){
        cin >> v[i];
    }    
    
    for(int i = 0; i < rua; i++){
        maiorSum = max(v[i] - i, maiorSum);
    }

    for(int i = 0; i < rua; i++){
        maiorSum2 = max(v[i] + i, maiorSum2);
    }

    cout << maiorSum + maiorSum2 << endl;

    return 0;
}

//sum = v[i] - i + v[j] + j;