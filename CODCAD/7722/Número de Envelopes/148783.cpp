#include <iostream>
using namespace std;
int main () {

  int n, cons, menor = 10000000, num, comp;
    cin >> n;
  for(int i = 0; i < n; i++){
    cin >> num;
    if(num < menor){
        menor = num;
    }
  }
  
  cout << menor << endl;

}