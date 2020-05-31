#include <iostream>
#include <algorithm>
#include <utility>

using namespace std;

int main(){

    int c;
    cin >> c;

    while(c--){

        int l, l2;
        cin >> l >> l2;

        if(l > l2){
            swap(l, l2);
        }

        if(l + l >= l2){
            cout << (l + l) * (l + l) << endl;
        }else{
            cout << l2 * l2 << endl;
        }

    }

    return 0;
}