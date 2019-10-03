#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool vogal(char k){

    switch(k){
        case 'a': return true;
        break;

        case 'e': return true;
        break;

        case 'i': return true;
        break;

        case 'o': return true;
        break;

        case 'u': return true;
        break;

        default: return false;

    }

}

int main(){
    
    string p, v, p2;

    cin >> p;

    for(int i = 0; i < p.size(); i++){
        if(vogal(p[i])){
            v+= p[i];    
        }
    }
    
    p2 = v;

    reverse(p2.begin(), p2.end());

    if(p2 == v) cout << "S" << endl;
    else cout << "N" << endl;

    return 0;
}
