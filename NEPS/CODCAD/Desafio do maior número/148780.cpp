#include <iostream>
using namespace std;
int main () {

  int maior = 0, num;

  while(cin >> num, num){
    if(num > maior)
        maior = num;
  }

  cout << maior << endl;
}
