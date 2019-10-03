#include <iostream>

using namespace std;

int prob(int n){
    int c = 0;    
    
    if(n == 1) return 0;

    if(!(n%2)){
        return prob(n/2) + 1;
    }else{
        return prob(3 * n + 1) + 1;
    }

    return c;
}

int main(){
    int n;
    cin >> n;
    cout << prob(n) << endl;    

    return 0;
}