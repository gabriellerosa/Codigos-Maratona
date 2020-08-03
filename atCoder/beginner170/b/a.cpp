#include <iostream>

using namespace std;

int main(){

    int t, p;
    cin >> t >> p;

    if(p >= t * 2 && p <= t * 4 && p % 2 == 0){
        cout << "Yes\n";
    }else{
        cout << "No\n";
    }

    return 0;
}