#include <iostream>

using namespace std;

int n, k;
int pai[100010];

//funcoes do union-find
//A função find serve para encontrar o patriarca do elem
int find(int x){
    
    if(pai[x] == x) 
        return x;

    //return find(pai[x]);
    return pai[x] = find(pai[x]); //otimizaçao

}
// Junta dois elementos num mesmo conjunto
void join(int x, int y){

    pai[find(x)] = find(y);

}

int main(){

    char op;
    int b1, b2;

    cin >> n >> k; 
   
    for(int i = 1; i <= n; i++){
        pai[i] = i;
    }

    for(int i = 0; i < k; i++){
        cin >> op >> b1 >> b2;

        if( op == 'F'){
            join(b1, b2);
        }else{
            
            if(find(b1) == find(b2) ){
                cout << "S\n";
            }else{
                cout << "N\n";
            }
        }            
    }

    return 0;
}