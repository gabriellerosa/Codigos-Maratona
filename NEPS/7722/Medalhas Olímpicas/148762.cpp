#include <iostream>

using namespace std;

int main(){
    
    int o1, o2, p1, p2, b1, b2;
    cin >> o1 >> p1 >> b1;
    cin >> o2 >> p2 >> b2;

    if(o1 > o2)cout << "A";
    else if(o1 < o2)cout << "B";
    else{
        if(p1 > p2) cout << "A";
        else if(p1 < p2) cout << "B";
        else{
            if(b1 > b2) cout << "A";
            else cout << "B";
        }
    }

    return 0;
}