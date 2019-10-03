#include <iostream>

using namespace std;

int main(){
    int c, t, aux, pp;

    cin >> c;
    while(c != 0){   
      for(int i = 1; i <= c; i++){
            cin >> t;
            aux = t;
            aux -=1;  // sentando na primeira ponta
            if(aux%2 == 0){        
                aux = aux*2 + 1;
                cout << aux << endl;
            }else{
                aux-=1;
                aux=aux*2+2;
                cout << aux<< endl;
            }
        }  
        cin >> c;  
    }
    return 0;
}