#include <iostream>

using namespace std;

int main(){
    
    int i, a, b, num, cont = 0, aux, aux2;
    double pa, pb;

    cin >> num;

    while(num--){
        
        cin >> a >> b >> pa >> pb;    
        for( i = 0; ; i++){
            aux = pa/100;
            aux2 = pb/100;
            
            cont++;
            (int)pa = (int)pa + (int)(pa*aux);
            (int)pb = (int)pb + (int)(pb*aux2);
            if(pa > pb){
                if(cont > 100)
                    cout << "Mais de 1 seculo." << endl;
                else{
                    cout << cont << endl;
                    break;
                    cont = 0;
                }
            }            

        }        

    }
    return 0;
}