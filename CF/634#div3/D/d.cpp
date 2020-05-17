#include <iostream>
 
using namespace std;
 
int main(){
   
    int t;
 
    cin >> t;
   
    while(t--){
        string a, b, c, d, e, f, g, h, k, ans;
    
        cin >> a >> b >> c >> d >> e >> f >> g >> h >> k;

        ans.append(a);
        ans.append(b);
        ans.append(c);
        ans.append(d);
        ans.append(e);
        ans.append(f);
        ans.append(g);
        ans.append(h);
        ans.append(k);

        for(int i = 0; i < ans.size(); i++){
            if(ans[i] == '3')
                ans[i] = '1';        
        }

        for(int i = 0; i < ans.size(); i++){
            cout << ans[i];

            if(i == 8 || i == 17 || i == 26 || i == 35 || i == 44 || i == 53 || i == 62 || i == 71 || i == 80)   
                cout << "\n";    
        }

        cout << "\n";
    }
    return 0;
}