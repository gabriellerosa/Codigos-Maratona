#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    
    float id, cont = 0, tot = 0;
    float media;    

    cin >> id;

    while(id > 0){        
        cont++;
        tot+=id;
        cin >> id;
    }
    media = tot/cont;
    printf("%.2f\n", media);
    return 0;
}