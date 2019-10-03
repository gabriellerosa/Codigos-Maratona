#include <iostream>

using namespace std;

int main(){
    int abas, qtd;
    string pal;    

    cin >> abas >> qtd;

    while(qtd--){
       cin >> pal;
       if(pal == "fechou")
          abas+=1;
       else
          abas-=1;  
    }
    cout << abas << endl;
    return 0;
}