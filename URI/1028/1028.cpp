#include <iostream>

using namespace std;

int mdc(int a, int b){

    if(b == 0){
        return a;
    }
    return mdc(b, a % b);

}

int main(){

    int n;
    cin >> n;

    while(n--){
        int n, k;
        cin >> n >> k;

        cout << mdc(n, k) << endl;

    }

    return 0;
}