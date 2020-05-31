#include <iostream>
#include <set>

using namespace std;

int main(){

    set<int> g;
    int n;

    cin >> n;
    for(int i = 0; i < n ; i++){
        int aux;
        cin >> aux;
        g.insert(aux);
    }

    cout << g.size() << endl;

    return 0;
}