// Adjacent List graph representation
// feito por: Gabrielle Rosa :D

#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    int t, v, e, ori, des;

    scanf("%d", &t);
    
    while(t--){

        vector<int> grafo[1000];
        scanf("%d %d", &v, &e);        
        
        for(int i = 0; i < e; i++){
            
            scanf("%d %d", &ori, &des);            
            grafo[ori].push_back(des);
            grafo[des].push_back(ori);
        }
        
        for(int i = 0; i < v; i++){
            printf("%d -> ", i);
            for(int j = 0; j < grafo[i].size(); j++){
                printf("%d->", grafo[i][j]);    
            } 
            printf("\n");  
        }
        printf("\n");
    }

    return 0;
}