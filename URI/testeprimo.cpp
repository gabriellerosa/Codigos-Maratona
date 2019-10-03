#include <iostream>

using namespace std;

/*bool isPrimo(int n){
    int cont = 0;

    for(int i = 2; i*i <= n; i++){
            if(n%i == 0){
                cont++;
            }
    }
    if(cont == 0 || n == 1){
        return true;
    }else
        return false;    
}*/

bool isPrimo(int n){
 if(n <= 1) return false;
 for(int i = 2; i * i <= n; i++){
  if(n % i == 0)
   return false;
 }
 return true;
}

bool isSuper(int n){
    int cont = 0, aux;
    while(n != 0){
        aux = n % 10;
        if(!isPrimo(aux)) 
            cont++;         
        n /= 10;
    }
    if(cont == 0){
        return true;
        int k = 2;
    }else{
        return false;
        int k = 3;
    }
}

int main(){
    int numero;    

    while(cin >> numero){
        
        if(numero == 1)cout << "Nada" << endl; 
        else if(isPrimo(numero) && isSuper(numero)){
            cout << "Super" << endl;
            cout << isPrimo(numero) << " e " << isSuper(numero) << endl;
        }
        else if(isPrimo(numero)) cout << "Primo" << endl;
        else cout << "Nada" << endl;

    }

    return 0;
}