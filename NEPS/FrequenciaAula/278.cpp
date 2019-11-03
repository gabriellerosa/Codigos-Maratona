#include <iostream>
#include <set>

using namespace std;

int main(){

    set<int> sala;
    int n, num;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        
        scanf("%d", &num);
        sala.insert(num);

    }

    printf("%d\n", sala.size());
 
    return 0;
}