#include <iostream>

using namespace std;

int main(){

    int n;
    string num;
    
    cin >> n;

    while(n--){

        cin >> num;
        int ans = 0;

        for(long long i = 0; i < num.size(); i++){
            
            if(num[i] == '1'){
                ans += 2;
            }else if(num[i] == '2' || num[i] == '3' || num[i] == '5'){
                ans += 5;
            }else if(num[i] == '4'){
                ans += 4;
            }else if(num[i] == '6' || num[i] == '9' || num[i] == '0'){
                ans += 6;
            }else if(num[i] == '7'){
                ans += 3;
            }else{
                ans += 7;
            }

        }    
        cout << ans << " leds" << endl;    
    }

    return 0;
}