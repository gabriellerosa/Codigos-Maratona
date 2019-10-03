#include <iostream>

using namespace std;

/*bool primo(int n){
    
    if(n == 1) return false;
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0)
            return false;
    }
    return true;
}
*/
bool primo(int n){
  if(n == 1)  return 0;
  for(int i = 2; i < n; ++i){ //note que se o número for 2 ele não entra no loop, comportamento desejado
    if(n % i == 0){ //se o resto de x por i for 0, então i divide x
      return 0;
    }
  }
  return 1;
}
int main(){
    
    int n;
    cin >> n;

    if(primo(n)){
        cout << "S" << endl;
    }else
        cout << "N" << endl;

    return 0;
}