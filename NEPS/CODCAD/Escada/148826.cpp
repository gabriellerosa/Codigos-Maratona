#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, t;
    bitset<10100> e;

    scanf("%d", &n);
    while(n--){
        scanf("%d", &t);
        
        for(int i = t; i < t + 10; i++) e[i] = 1;
    }

    printf("%d\n", e.count());

}