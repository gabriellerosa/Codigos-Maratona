#include <iostream>
#include <map>
#include <set>

using namespace std;

int main(){

    int c, j, x, y;
    map<int, int> total;
    set<int> mudei;

    scanf("%d %d", &c, &j);
        
    for(int i = 0; i < c; i++){
        scanf("%d %d", &x, &y);
        total.insert(make_pair(x, y));
    }

    for(int i = 0; i < j; i++){
        scanf("%d %d", &x, &y);
        
        //if (total.find(x) != total.end()){

            if(y > total[x]){
                total[x] = y;
                mudei.insert(x);
            }
        //}        
    }
    
    for(int i : mudei){
        printf("%d %d\n", i, total[i]);
    }

    return 0;
}