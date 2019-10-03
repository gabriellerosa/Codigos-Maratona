#include <iostream>
using namespace std;
int main () {

  long long a, dia = 0, num, valor = 0;
  bool parou = true;
  cin >> a;
  while(a--){
    cin >> num;
    valor+=num;
    if(valor <= 1000000 && parou){
       dia++;
    }else if(valor > 1000000 && parou) dia++;
    
    if(valor >= 1000000) parou = false;
  }
  cout << dia << endl;
}