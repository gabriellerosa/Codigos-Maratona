#include <iostream>

using namespace std;

long long fato(long long n){

    if(n == 1 || n == 0)
        return 1;
    return n * fato(n - 1);
}

int main(){

    long long a, b;

    while(cin >> a && cin >> b){
   
        cout << fato(a) + fato(b) << endl;
 
    }     
      
   return 0;
}