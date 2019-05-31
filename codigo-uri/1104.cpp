#include<iostream>
#include<bitset>
#include<stdio.h>

using namespace std;

int main(){
    bitset<100001> a, b, aux1, aux2;    
    int qtdA, qtdB, carta, aa, bb;    
    
    scanf("%d %d", &qtdA, &qtdB);
    //while(scanf("%d %d", &qtdA, &qtdB), qtdA || qtdB)
    while(qtdA != 0 || qtdB != 0){
        
        aa = qtdA;
        bb = qtdB;

        while(aa--){
            cin >> carta;
            a[carta] = 1;
        }
    
        while(bb--){
            cin >> carta;
            b[carta] = 1;
        }
        
        aux1 = a ^ b;   // XOR
        aux2 = a ^ b;

        /*if ( qtdA <= qtdB ){
            aux = aux & a;
            cout << aux.count() << endl;
        }else{
            aux = aux & b;
            cout << aux.count() << endl;
        }*/
        aux1 = aux1 & a;
        aux2 = aux2 & b; 
        printf("%d\n", min(aux1.count(), aux2.count()));

        a.reset();    
        b.reset();
        aux1.reset(); 
        aux2.reset(); 
        scanf("%d %d", &qtdA, &qtdB);
    }
    return 0;
}