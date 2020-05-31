#include <iostream>

using namespace std;

int main(){
    
    int n, m, s = 0;
    cin >> n >> m;

    int v[10005];
   
    for(int i = 0; i < m; i++){
        cin >> v[i];
    }

    for(int i = 0; i < m; i++){
        s += v[i];
    }

    if(s > n)
        cout << "-1" << endl;
    else if(s == n)
        cout << "0" << endl;
    else
        cout << n - s << endl;

    return 0;
}
