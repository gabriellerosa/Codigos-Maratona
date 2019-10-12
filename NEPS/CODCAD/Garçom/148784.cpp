#include <iostream>
using namespace std;
int main () {

  int l, c, vzs, tot = 0;

  cin >> vzs;

  for(int i = 0; i < vzs; i++){
      cin >> l >> c;

      if(l > c){
        tot+=c;
      }
  }
    cout << tot << endl;
}
