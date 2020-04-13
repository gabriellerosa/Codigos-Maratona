#include <iostream>

using namespace std;

long long count(long long n){
    int ans = 0;
    
    while(n > 1){

        if(n % 2 == 1){
            ans++;
        }        

        n /= 2;
    }    

    if(n == 1) ans++;

    return ans;
}

int main(){

    long long n;
    cin >> n;

    cout << count(n) << endl;

    return 0;
}