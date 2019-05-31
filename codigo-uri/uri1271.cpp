#include <iostream>
#include <bitset>

using namespace std;

int main(){
    
    int N, i, aux = 0;
    bitset<25000001> portas;

    cin >> N;

    while( N != 0 ){
      
      //13x1 = 13 ; 13x2 = 26 ...      
      portas.set(); // 1 é aberto   ====== 0 é fechado
      for(i = 2; i <=N; i++){  
        int cont = 1;
        aux = 0;

        while(aux < N ){  
            aux = i*cont;
            portas.flip(aux);
           
            cont ++;
        }
      }

      for(i = 1; i <= N; i++){
        
        if(i == 1){
            cout << i;
        }
        if( portas[i] == 1 && i > 1){
            cout << " " << i;
        }
      }
      cout << endl;  
      cin >> N;
    }

    return 0;
}