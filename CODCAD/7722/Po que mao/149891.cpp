#include <iostream>

using namespace std;

int main(){

    int x, y, z, n;

    cin >> n >> x >> y >> z;

    if(x+y+z <= n){
        cout << 3 << endl;
    }else if(x+y <= n or x+z <= n or z+y <= n){
        cout << 2 << endl;
    }else if(x <= n or z <= n or y <= n){
        cout << 1 << endl;
    }else{
        cout << 0 << endl;
    }

    return 0;
}