#include <iostream>
#include <vector>

using namespace std;

int main(){

    long long n, ans;
    vector<long long> v;

    cin >> n;

    for(int i = 0; i < n; i++){
        long long aux;
        cin >> aux;        
        v.push_back(aux);
    }

    long long maior = 0;

    maior = max(v[0] * v[1] * v[v.size() - 1], v[v.size() - 1] * v[v.size() - 2] * v[v.size() - 3]);    

    cout << maior << "\n";

    return 0;
}