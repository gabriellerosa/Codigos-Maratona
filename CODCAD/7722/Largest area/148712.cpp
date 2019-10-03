//Codigo de exemplo
#include<iostream>

using namespace std;

int main(){
  int a, l, b, c;
  cin >> a >> l >> b >> c;

  if(a*l > b*c){
      cout << "Primeiro" << endl;
  }else
    if(a*l < b*c){
      cout << "Segundo" << endl;
  }else{
      cout << "Empate" << endl;
  }

}
