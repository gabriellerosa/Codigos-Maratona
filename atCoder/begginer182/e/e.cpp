#include <iostream>
#include <vector>

using namespace std;

void luzdireita(int lin, int col,vector<vector<int>> & m) {

    for(int i = col; i < m[0].size(); i++){
        if(m[lin][i] != 1) {
            if(m[lin][i] == 0){
                m[lin][i] = 10;
            } else if (m[lin][i] == -1) {
                break;
            }
        } else {
            if(col != i){
                break;
            }
        }
    }    
}

void luzcima(int lin, int col,vector<vector<int>> & m) {

     //cout << "cheguei aq" << endl;    
     //cout << lin << " " << col << endl;
    for(int i = lin; i >= 0; i--) {
        if(m[i][col] != 1) {
            if(m[i][col] == 0){
                m[i][col] = 10;
            } else if (m[i][col] == -1) {
                break;
            }
        } else {
            if(lin != i) {
                break;
            }
        }
    }
}

void luzbaixo(int lin, int col, vector<vector<int>> & m) {

    for(int i = lin; i < m.size(); i++) {
        if(m[i][col] != 1) {
            if(m[i][col] == 0){
                m[i][col] = 10;
            } else if (m[i][col] == -1) {
                break;
            }
        } else {
            if(lin != i) {
                break;
            }
        }
    }
}

void luzesq(int lin, int col, vector<vector<int>> & m) {
    
    for(int i = col; i >= 0; i--){
        if(m[lin][i] != 1) {
            if(m[lin][i] == 0){
                m[lin][i] = 10;
            } else if (m[lin][i] == -1) {
                break;
            }
        } else {
            if(col != i) {
                break;
            }
        }
    } 
}

int main(){

    int l, c, bu, bl;
    cin >> l >> c >> bu >> bl;

    vector<vector<int>> m (l, vector<int>(c, 0));

    // bub vai ser 1
    // block vai ser -1
    // luz vai ser 10
    // nada vai ser 0
    for(int i = 0; i < bu; i++){
        int lin, col;
        cin >> lin >> col;

        m[lin - 1][col - 1] = 1;
    }

    for(int i = 0; i < bl; i++){
        int lin, col;
        cin >> lin >> col;
        
        m[lin - 1][col - 1] = -1; 
    }
    
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            if(m[i][j] == 1){
                luzdireita(i, j, m);
                luzcima(i, j, m);
                luzbaixo(i, j, m);
                luzesq(i, j, m);        
            }
        }
    }

    int ans = 0;

    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            if(m[i][j] == 10 || m[i][j] == 1)
                ans++;
        }
    }   

    cout << ans << endl;

    return 0;
}