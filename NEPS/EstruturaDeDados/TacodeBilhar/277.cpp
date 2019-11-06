#include <iostream>
#include <set>

using namespace std;

int main(){

    set<int> estoque;
    int n, taco, tot = 0;

    scanf("%d", &n);

    while(n--){

        scanf("%d", &taco);

        if( estoque.find(taco) != estoque.end() ){ // se taco está no conjunto
            
            estoque.erase(taco);
        }else{
            
            estoque.insert(taco);
            tot += 2;
        }
    }    
    
    printf("%d\n", tot);

    return 0;
}