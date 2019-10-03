#include<iostream>

using namespace std;

int main(){
    
    int ini, fim, cont, i;

    cin >> ini >> fim;

    cont = ini;
    
    if(ini > fim){
        while(cont <= 24){
            if(cont == 24){
               for(i = 0; i < fim; i++) {
                    cont++;     
                     }break;}
            cont ++;

        }
        cout << "O JOGO DUROU " << (cont-ini) << " HORA(S)" << endl;
   
    }else
        if(ini < fim){
          cout << "O JOGO DUROU " << fim-ini << " HORA(S)" << endl;
    }else
         cout << "O JOGO DUROU 24 HORA(S)" << endl;

    return 0;
}