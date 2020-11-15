#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int qtd;
    cin >> qtd;

    int index = -1;
    int sum = 100;

    vector<int> caixas (qtd);
    vector<int> final;

    for(int i = 0 ; i < qtd; i++){
        cin >> caixas[i];
    }

    for(int i = 0; i < qtd; i++){
        sum += caixas[i];
        final.push_back(sum);
    }

    sort(final.begin(), final.end());

    cout << max(100, final[final.size()-1]) << endl;

    return 0;
}