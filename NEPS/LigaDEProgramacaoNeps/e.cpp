#include <iostream>

using namespace std;

int main(){
    int x;
    cin >> x;

    if(x - 9 < 0){
        cout << x - 9 + 24 << endl;
    }else{
        cout << x - 9 << endl;
    }

    return 0;
}