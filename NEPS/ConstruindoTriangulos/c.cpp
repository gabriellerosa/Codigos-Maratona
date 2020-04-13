#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

bool isTria(long long a, long long b, long long c){

    if( a + b > c && b + c > a && a + c > b)
        return true;
    return false;
}

double areaTria(long long a, long long b, long long c){

    double k = 0, v = 0, o = 0, p = 0;
    p =  (a + b + c) / 2.0;
    k = sqrt(p - c);
    v = sqrt(p - b);
    o = sqrt(p*(p - a));
    
    return o*v*k;    
}

int main(){

    long long n, res = 0;
    cin >> n;
    
    vector<long long> v;
    vector<long long> ans(3);

    for(long long i = 0 ; i < n; i++){
               
        long long aux;
        cin >> aux;
        v.push_back(aux);
    }

    sort(v.begin(), v.end());
    long long n3, n1, n2;
    double maior = 0; 

    for(long long i = v.size() - 1; i >= 2; i--){
       
        n1 = v[i];    
        n2 = v[i - 1];
        n3 = v[i - 2];
        
        //se for triangulo
        if(isTria(n1, n2, n3)){
                       
            double area;
            area = areaTria(n1, n2, n3);
            if(area > maior){
                
                maior = area;                
                ans[0] = n3;
                ans[1] = n2;
                ans[2] = n1;
            }
        }
    }

    for(int i = 0; i < 3; i++)    
        cout << ans[i] << " ";
    cout << "\n";

    return 0;
}