#include <iostream>

using namespace std;

unsigned long long cont(int n){
    unsigned long long ans = 0, aux = 1;
    
    for(int i = 1; i <= n; i++){

        ans *= 2; 
        ans += aux;       
        cout << ans << " ";
    }
    
    return ans;    
}

int main(){

    int n;
    cin >> n;

    while(n--){
        int num;
        unsigned long long kg;
        cin >> num;
    
        if(num > 64){
            cout << "Out of specification" << endl;
            continue;
        }
            
        kg = cont(num);

        printf("%llu kg\n", kg/12000);
    }    

    return 0;
}