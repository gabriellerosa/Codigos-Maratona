#include <iostream>

using namespace std;

int find(int x){
    // se x for o patriarca, retorne x
    if(pai[x]==x){
        return x;
    }
    // se não, retorne o valor do patriarca de seu pai
    return pai[x]=find(pai[x]);
}

void join(int x, int y){

    pai[find(x)] = find(y);

}

int main(){

    
    

    return 0;
}