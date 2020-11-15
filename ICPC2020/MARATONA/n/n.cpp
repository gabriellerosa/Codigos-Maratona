#include <iostream>
#include <vector>
#include<unordered_set>
#include <algorithm>

using namespace std;

void trial_division2(long long n, unordered_set<long long> &f) {
    //vector<long long> factorization;
    while (n % 2 == 0) {
        f.insert(2);
        n /= 2;
    }
    for (long long d = 3; d * d <= n; d += 2) {
        while (n % d == 0) {
            f.insert(d);
            n /= d;
        }
    }
    if (n > 1)
        f.insert(n);
    //return factorization;
}

int main (){

    long long m, n, k;
    cin >> m >> n >> k;
    vector<long long> numbers(n);
    for(int i = 0; i < n ; i++){
        cin >> numbers[i];
    }

    for(int i = 0; i < k; i++){
        int lixo, lixo2, lixo3;
        cin >> lixo >> lixo2 >> lixo3;
    }    

    unordered_set<long long> fac;    
   
    for(int i = 0; i < numbers.size(); i++){
        trial_division2(numbers[i], fac);
    }

    vector<long long> itens;

    for(auto e: fac){
        itens.push_back(e);
    }

    sort(itens.begin(), itens.end());
    
    for(auto a: itens){
        cout << a << " ";
    }
    cout << endl;

    return 0;
}