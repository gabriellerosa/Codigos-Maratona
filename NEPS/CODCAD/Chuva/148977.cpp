#include <iostream>

using namespace std;

int main(){
    int r1[102][102], r2[102][102], res[102][102], n;

    cin >> n;

    for(int i = 0; i < n; i ++){
        for(int j = 0; j < n; j ++)
            cin >> r1[i][j];
    }   

    for(int i = 0; i < n; i ++){
        for(int j = 0; j < n; j ++)
            cin >> r2[i][j];
    }  

    for(int i = 0; i < n; i ++){
        for(int j = 0; j < n; j ++)
            res[i][j] = r1[i][j] + r2[i][j];
    }  
    
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < n; j ++)
            cout << res[i][j] << " ";
       cout << endl;
    }
    return 0;
}