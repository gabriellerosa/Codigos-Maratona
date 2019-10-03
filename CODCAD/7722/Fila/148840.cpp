#include <iostream>
#include <list>
#include <stdio.h>

using namespace std;

int main(){

    int v[100001], lixo[100001], i, n, m, n2, m2, first;

    scanf("%d", &n);    
    for(i = 0; i < n; i++){
        scanf("%d", &m);
        v[i] = m;
    }   
    
    for(i=0 ; i<100001; i++) lixo[i] = 0;   //setando os ids todos com 0

    scanf("%d", &n2);    
    for(i = 0; i < n2; i++){
        scanf("%d", &m2);
        lixo[m2] = 1;
    }  
    
    first = 1;
    for(i = 0; i < n; i++){
        
        if(lixo[ v[i] ] == 1){
            continue;
        }
        if(first == 1){
            printf("%d", v[i]);
            first = 0;
        }else{
             printf(" %d", v[i]);    
        }
    }
    printf("\n");
    
    return 0;
}