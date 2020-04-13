#include <iostream> 
#include <math.h> 
using namespace std; 
  
bool ehQdoPfto(long long x){ 

    long long ans = sqrt(x); 
    return (ans*ans == x); 
} 
  
bool isFibo(long long n){ 

    return ehQdoPfto(5*n*n + 4) || ehQdoPfto(5*n*n - 4); 
} 
  
int main() {
 
    long long n;
    cin >> n;

    if(isFibo(n))
      cout << "SIM\n";
    else
      cout << "NAO\n";
 
  return 0; 
} 