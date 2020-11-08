#include <iostream>

using namespace std;

int fat(int num){

    if(num == 0)
        return 1;
    return fat(num - 1) * num;

};

int main(){

    int n;
    cin >> n;
    
    int ans = 0;

    while(n > 0){
    
        int index = 1;

        while(fat(index) <= n){
            index++;
        }

        n -= fat(index - 1);
        ans++;
    }

    cout << ans << " \n";

    return 0;
}