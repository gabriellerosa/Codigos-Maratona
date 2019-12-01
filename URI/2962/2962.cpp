#include <bits/stdc++.h>

using namespace std;

vector< vector<bool> > sala;
vector< pair<int, int>> movs;
int m, n, k, x, y, s;

void sensor(int x, int y, int s){
    
    int s0;
    
    s0 = s;
    for(int i = x; i >= 1 && s0; i--, s0--){
        sala[y][i] = true;
    }
    
    s0 = s;
    for(int i = y; i <= n && s0; i++, s0--){
        sala[y][i] = true;
    }
    
    s0 = s;
    for(int i = x; i <= m && s0; i++, s0--){
        sala[y][i] = true;
    }
    
    s0 = s;
    for(int i = y; i >= 1 && s0; i--, s0--){
        sala[i][x] = true;
    }
    
}

void dfs(int x, int y){
    
    if(x > m || x < 1 || y > n || y < 1) return;
    if(sala[y][x] == true) return;
    sala[y][x] = true;
    
    for(auto aux : movs){
        dfs(x + aux.first, y + aux.second);
    }
}

int main(){
    
    scanf("%d %d %d", &m, &n, &k);
    
    sala.assign(n+1, vector<bool>(m + 1, false));
    
    movs.push_back(make_pair(0, -1));
    movs.push_back(make_pair(0, 1));
    movs.push_back(make_pair(1, 0));
    movs.push_back(make_pair(-1, 0));
    
    for(int i = 0; i < k; i++){
        scanf("%d %d %d", &x, &y, &s);
        sensor(x, y, s);
    }
    
    //printf("\n\n");
    
    dfs(1, 1);
    
    if(sala[n][m]){
        printf("S\n");
    }else{
        printf("N\n");
    }
    
    return 0;
}