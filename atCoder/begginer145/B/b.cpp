#include <iostream>

using namespace std;

int n;
string s;

int main(){

    string s1, s2;

    cin >> n >> s; 
    
    s1 = s.substr(0,n/2);
    s2 = s.substr(n/2,n);

    if(s1 == s2) cout << "Yes" << endl;
    else cout << "No" << endl;
    //cout << s1 << " " << s2;
    /*if(n % 2 != 0){
        cout << "NO\n";
    }else{
        int k = n/2;
        
        for(int i = 0; i < (n/2); i++){
            
            if(s[i] != s[k]){
                cout << "NO\n";
                break;
            }
            k++;
        }
        cout << "YES\n";
    }  */      

    return 0;
}