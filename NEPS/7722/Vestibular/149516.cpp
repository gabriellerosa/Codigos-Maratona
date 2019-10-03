#include <iostream>

using namespace std;

int main(){

    int num, f = 0;
    string a, b;

    cin >> num;
    cin >> a >> b;

    for(int i = 0; i < num; i++){
        if(a[i] == b[i]) f++;
    }

    cout << f << endl;

    return 0;
}