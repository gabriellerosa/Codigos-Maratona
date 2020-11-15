#include <iostream>
#include <vector>

using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> nums (n);

    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    int maior = 0;
    int index = 0;

    for(int i = 2; i <= 1000; i++){
        int divs = 0;

        for(int j = 0; j < n; j++){

            if(nums[j] % i == 0) {
                divs++;
            }        
        }
        if(divs > maior) {
            index = i;
            maior = divs;
        }
    }    

    cout << index << endl;

    return 0;
}