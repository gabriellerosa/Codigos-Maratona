#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int m;

bool comp(int a, int b){

    if(a % m == b % m){     
        if(a % 2 != 0 && b % 2 == 0){
            return true;
        }
        else if(a % 2 == 0 && b % 2 != 0){
            return false;
        }
        else if (a % 2 != 0 && b % 2 != 0) {
            return a > b;
        }else { 
            return a < b;
        }
    }

    return a % m < b % m;

}

int main(){

    int n;

    while(cin >> n >> m, n != 0){

        vector<int> nums (n, 0);
        for(int i = 0; i < n; i++){
            cin >> nums[i];
        }

        sort(nums.begin(), nums.end(), comp);

        cout << n << " " << m << "\n";
        for(int i = 0; i < n; i++){
            cout << nums[i] << "\n";
        }
    }

    cout << "0 0\n";

    return 0;
}