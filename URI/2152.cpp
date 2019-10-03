#include<iostream>

using namespace std;

int main(){
    int qtd, h, m, o;
    cin >> qtd;
    while(qtd--){
        cin >> h >> m >> o;

        if(o == 0)
            printf("%02d:%02d - A porta fechou!\n", h, m);
        else
           printf("%02d:%02d - A porta abriu!\n", h, m);
          
    }    
    return 0;
}