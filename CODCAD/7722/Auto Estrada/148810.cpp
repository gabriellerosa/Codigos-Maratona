#include <iostream>

using namespace std;

int main(){
    
    string s;
    int c, tot = 0;

    cin >> c;
    cin >> s;

    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'P')
          tot = tot+2;
        if(s[i] == 'C')
          tot = tot+2;
        if(s[i] == 'A')
          tot = tot+1;      
    }

    cout << tot << endl;
    return 0;
}