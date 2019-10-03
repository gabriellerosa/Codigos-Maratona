#include <iostream>

using namespace std;

int main(){
    int i, num, par=0, pos=0, neg=0, imp=0;

    for( i = 0; i < 5; i++){
        cin >> num;

        if(num > 0){
            pos++;
            if(num%2 == 0)
                par++;
            else
                imp++;
        }else if(num != 0 && num < 0)
            neg++;

        if(num < 0){
            int aux = num*-1;   
            if(aux%2 == 0)
                par++;
            else{
                imp++;    
            }
        }

        if(num == 0)
            par++;
    }
    
    cout << par << " valor(es) par(es)" << endl;
    cout << imp << " valor(es) impar(es)" << endl;
    cout << pos << " valor(es) positivo(s)" << endl;
    cout << neg << " valor(es) negativo(s)" << endl;     
    return 0;
}