#include <iostream>
#include <vector>

using namespace std;

vector<int> vet;

int main(){

    int n, maior = 0, res;
    cin >> n;

    cin >> res;
    for(int i = 1; i < n; i++){
        int a;
        cin >> a;
        
        res |= a; 
        
    }

    cout << res << endl;

    return 0;
}