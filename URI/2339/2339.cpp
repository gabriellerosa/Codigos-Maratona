#include <stdio.h>

using namespace std;

int main(){

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if(a*c > b){
        printf("N\n");
    }else
        printf("S\n");

    return 0;
}