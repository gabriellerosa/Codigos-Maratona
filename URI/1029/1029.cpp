#include<iostream>

using namespace std;

int sum;

int fibi(int num){
    sum++;

    if(num == 0){
        return 0;
    }else if(num == 1){
        return 1;
    }
    
    return fibi(num - 1) + fibi(num - 2);    
}

int main(){

    int n, num;
    long long res;

    cin >> n;

    while(n--){

        cin >> num;
        
        res = fibi(num);
        cout<< "fib(" << num << ")" << " = " << sum - 1 << " calls = " << res << endl;
        sum = 0;
    }

    return 0;
}