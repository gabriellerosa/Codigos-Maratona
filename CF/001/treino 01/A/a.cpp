#include <iostream>

using namespace std;

int main(){
    
    int sum, mdc;
    cin >> sum >> mdc;

    if(sum % mdc == 0 && mdc != sum)
            cout << mdc << " " << sum - mdc << endl;
    else 
        cout << "-1\n";

    return 0;
}