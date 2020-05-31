#include <iostream>
#define MOD 1000000007

using namespace std;

int main(){
   
    long long nums, k, menor[200005] , maior[200005];
    long long ans = 0;
    cin >> nums >> k;     

    menor[0] = 0;
    for(int i = 1; i <= nums; i++){
        menor[i] = menor[i - 1] + i; 
        //cout << "menor[" << i << "]: " << menor[i] << endl;       
    }

    maior[nums] = nums;
    for(int i = nums - 1; i >= 0; i--){
        maior[i] = maior[i + 1] + i;
        //cout << "maior[" << i << "]: " << maior[i] << endl; 
    }

    for(int i = k; i <= nums + 1; i++){        
        ans += maior[nums - i + 1] - menor[i - 1] + 1;
        //cout << "i: " << i << endl;
        //cout << "Ans: " << ans << endl;
        ans = ans % MOD;
    }    

    cout << ans << endl;

    return 0;
}
