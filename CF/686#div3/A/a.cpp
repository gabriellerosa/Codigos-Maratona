#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;

int main(){

    int n;
    cin >> n;

    while(n--){
        int t;
        cin >> t;
        vector<int> num;

        for(int i = t; i > 0; i--) {
            num.push_back(i);
        }
        
        if(t % 2 != 0){
            swap(num[0], num[(t/2)]);
        } 

        for(int i = 0; i < t; i++){
            cout << num[i] << " ";
        }

        cout << endl;
    }

    return 0;
}