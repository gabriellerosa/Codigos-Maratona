#include <iostream>

#define MAX 100000

// o maior eu vejo com o min, e o menor eu vejo com o max
using namespace std;

int main(){

    int qtd;

    cin >> qtd;

    while(qtd--){
        
        int n, maxX, minX, maxY, minY;        
        int x, y, esq, dir, cima, bax;            

        cin >> n;
        maxX = maxY = MAX;
        minX = minY = -MAX;

        for(int i = 0; i < n; i++){
            cin >> x >> y >> esq >> cima >> dir >> bax;

            if(esq == 0) minX = max( minX, x);
            if(dir == 0) maxX = min( maxX, x);
            if(cima == 0) maxY = min( maxY, y);
            if(bax == 0) minY = max( minY, y);           
        }
        
        if(minX <= maxX && minY <= maxY)
            cout << "1 " << minX << " " << minY << "\n";       
        else
            cout << "0\n";    
    }

    return 0;
}