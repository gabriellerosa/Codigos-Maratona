#include <iostream>
#include <bitset>

using namespace std;

int main(){
    
    int n, i, j, aux;
    bitset<25000000> portas;

    cin >> n;

    while( n != 0 ){
      
          
      portas.set(); // fechado é 1 aberto é 0
      for(j = 1; j <=n; j++){  // criança que entra na casa
        for( i = 1; i <= n; i++){   // portas pelas quais passar
            aux = i%j;
            if ( aux == 0 ){
                portas.flip(i);
            }            
        }
      }

      for(i = 1; i <= n; i++){
        
        if( portas[i] == 0 && i == 1){
            cout << i;
        }
        if( portas[i] == 0 && i > 1){
            cout << " " << i;
        }
      }
      cout << endl;  
      cin >> n;
    }

    return 0;
}