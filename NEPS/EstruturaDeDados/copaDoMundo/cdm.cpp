#include <iostream>
#include <utility>
#include <queue>

using namespace std;

int main(){

    queue<pair<int, char>> copa;
    int m, time = 65, n;
    pair<int, int> a, b;

    for(int i = 0; i < 8; i++){
        
        scanf("%d %d", &m, &n);         
        copa.push(make_pair(m, time));
        time++;        
        copa.push(make_pair(n, time));
        time++;
        
    }
    
    while(copa.size() != 1){
        
                a = copa.front();
                copa.pop();
                b = copa.front();
                copa.pop();
                
                //printf("Agora %c %d x %c %d \n", a.second, a.first, b.second, b.first);

                if(a.first > b.first){
                    scanf("%d", &m);
                    a.first = m;
                    copa.push(a);
                }else{
                    scanf("%d", &m);
                    b.first = m;
                    copa.push(b);
                }
    }
    //printf("copa size: %d", copa.size());
    printf("%c\n", copa.front().second);

    return 0;
}