#include <iostream>

using namespace std;

int main(){

    int c;
    cin >> c;

    while(c--){

        int n, k;
        cin >> n >> k;
                
        long long de = 1;
        long long ate = 10000000000;
        long long mid;

        while(de <= ate){

            mid = (de + ate) / 2;
            //p saber qnts multiplos tenho até mid mid/n;

            if(mid - (mid/n) == k){
                break;
            }else if( (mid - (mid/n)) > k){
                ate = mid - 1;

            }else{
                de = mid + 1;
            }
        }

        if(mid % n == 0){
            cout << mid - 1 << "\n";
        }else{
            cout << mid << "\n";
        }      

    }

    return 0;
}