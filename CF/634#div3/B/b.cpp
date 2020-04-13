#include <iostream>

using namespace std;

int main(){

    int n, a, b, cases;
    cin >> cases;

    while(cases--){

        cin >> n >> a >> b;        
        string s, ans;

        for(int i = 0; i <= a - b; i++){
            s += 'a';
        }
        // + pq a gt pula o 'a' já q a gt colocou lá em cima
        for(int i = 0; i < b - 1; i++){
            s += 'a' + i + 1;
        }

        while(ans.size() < n){
            ans.append(s);
        }
        ans = ans.substr(0, n);

        cout << ans << "\n";
    }    
    
    return 0;
}