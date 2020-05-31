#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

    int c;
    cin >> c;

    while(c--){

        int n;
        cin >> n;
        vector<string> matrix(n);        

        for(int i = 0; i < n; i++){
            cin >> matrix[i];
        }

        bool saida = false;        

        for(int i = 0; i < n - 1; i++){
            for(int j = 0; j < n - 1; j++){
                
                if(matrix[i][j] == '1'){
                    //cout << "matrix[i][j]: " << matrix[i][j] << " ";
                    //cout << "matrix[i][j+1]: " << matrix[i][j + 1] << " ";
                    //cout << "matrix[i+1][j]: " << matrix[i + 1][j] << " ";

                    if(matrix[i][j + 1] == '0' && matrix[i + 1][j] == '0'){
                        saida = true;
                    }
                
                }
            }
        }

        if(saida){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }

    }

    return 0;
}