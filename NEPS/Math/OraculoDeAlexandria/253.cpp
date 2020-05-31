#include <iostream>
#include <string>

using namespace std;

int main(){

    int c;
    cin >> c;

    while(c--){
        
        int k = 0;
        long long n;
        string num;

        cin >> num;            
        
        while(num[num.size() - 1] == '!'){
            k++;
            num.pop_back();
        }

        n = stoll(num);
        //cout << "n: " << n << endl;
        long long ans = n;
        int i = 1;        

        while( (n-(i*k)) >= 1 ){
        
            ans *= n-(i*k); 
            //cout << "ans: " << ans << endl;   
            i++;
        }
    
        cout << ans << endl;        
    }

    return 0;
}