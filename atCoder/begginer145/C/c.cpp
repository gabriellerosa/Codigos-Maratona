#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>

using namespace std;

vector<pair<int, int>> cord;

double calc(vector<pair<int, int>>& v){
    
    double dis = 0.0;    
    for(int i = 0; i < (v.size() - 1); i++){
        
        double x = (v[i].first - v[i+1].first) * (v[i].first - v[i+1].first);        
        double y = (v[i].second - v[i+1].second) * (v[i].second - v[i+1].second);  
        dis += sqrt((x + y));
    }

    return dis;
}

int main(){

    int n;
    scanf("%d", &n); 

    for(int i = 0; i < n; i++){
        int a, b;
        scanf("%d %d", &a, &b);

        cord.push_back(make_pair(a, b));        
    }    
    
    sort(cord.begin(), cord.end());
   
    double dist = 0.0, qtd = 0.0;
    do{

        qtd++;
        dist += calc(cord);

    }while(next_permutation(cord.begin(), cord.end()));

    printf("%.10lf\n", dist/qtd);

    return 0;
}