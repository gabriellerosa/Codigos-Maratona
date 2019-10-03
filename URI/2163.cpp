#include<iostream>

using namespace std;

int main(){
    int i, j, l, c, value, m[1001][1001], naoachei = 0;
    cin >> l >> c;

    for(i = 0; i < l; i++){ // linha 
        for(j = 0; j < c; j++){ // coluna
            cin >> value;
            m[i][j] = value;
        }
    }

    /*for(i = 0; i < l; i++){ // linha 
        for(j = 0; j < c; j++){ // coluna
            cout << m[i][j] << " ";
        }
        cout << endl;
    }*/

    for(i = 1; i < l-1; i++){ // linha 
        for(j = 0; j < c-1; j++){ // coluna
            if( m[i][j] == 42 && m[i-1][j-1] == 7 && m[i-1][j] == 7 && m[i-1][j+1] == 7 && m[i][j-1] == 7 && m[i][j+1] == 7 && m[i+1][j-1] == 7 && m[i+1][j+1] == 7 && m[i+1][j] == 7){
                cout << i+1 << " " << j+1 << endl;
                naoachei = 1;
            }
        }
    }    
    
    if(naoachei == 0)
        cout << "0 0" << endl; 

    return 0;
}