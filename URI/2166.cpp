#include <bits/stdc++.h>


using namespace std;

double solve(int n){ 
    if(n==0) return 0;
    return 1/(2+solve(n-1)); 
}

int main(){ 
    int n; 
    cin >> n; 
    cout.precision(10); 
    cout.setf(ios::fixed); 
    cout << 1+solve(n) << endl; 
}