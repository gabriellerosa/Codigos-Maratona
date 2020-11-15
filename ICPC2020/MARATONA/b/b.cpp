#include <iostream>
#include <vector>

using namespace std;

int main () {

    int qtd;
    vector<vector<bool>> m (12, vector<bool> (12, false));  

    cin >> qtd;

    /*for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cout << m[i][j] << " ";
        }
    }*/

    for(int i = 0; i < qtd; i++) {

        int d, tam, r, c;
        cin >> d >> tam >> r >> c;

        if(d == 0) {
            
            if(c  - 1 + tam - 1 > 9){
                cout << "N\n";
                return 0;
            }

            for(int i = c - 1; i <= c - 1 + tam - 1; i++) {

                //cout << "0 Olhando a posiçao l c : " << r - 1 << " " << i << endl;
                //cout << "está ocupada: " << m[r - 1][i] << endl;  
 
                if(m[r - 1][i] == false)
                    m[r - 1][i] = true;
                else {
                    cout << "N\n";
                    return 0;
                }
            }

        } else { 

            if(r - 1 + tam - 1 > 9){
                cout << "N\n";
                return 0;
            }

            for(int i = r - 1; i <= r - 1 + tam - 1; i++) {

                //cout << "1 Olhando a posiçao l c: " << i << " " << c - 1 << endl;
                //cout << "está ocupada: " << m[r-1][i] << endl; 

                if(m[i][c - 1] == false)
                    m[i][c - 1] = true;                
                else {
                    cout << "N\n";
                    return 0;
                }
            }
        }
    }   

    cout << "Y\n";
    
    return 0;
}