#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int L, C;
    cin >> L >> C;
    char M[L][C];
    int R[L][C];
    for(int i=0; i<L; i++){
        for(int j=0; j<C; j++){
            cin >> M[i][j];
            R[i][j] = 0;
        }
    }

    /*for(int i = 0; i < L; i++){
        for(int j = 0; j < C; j++) {
            cout << M[i][j];
        }
        cout << endl;
    }*/

    int N;
    cin >> N;
    string palavra[N];
    cin.ignore();
    for(int i=0; i<N; i++){
        getline(cin, palavra[i]);
        sort(palavra[i].begin(), palavra[i].end());
    }

    for(int i=0; i<N; i++){
        
        cout << "Olhando palavra : " << palavra[i] << endl;

        int tam = palavra[i].size();
        string anag = "";

        for(int j=0; j<L; j++){
            cout << "LINHAAAAAAAA: " << j << " ";
            for(int k=0; k<C; k++){
                cout << "COLUNAAAAA: " << k << " ";                

                if(k+tam <= C){
                    anag = "";
                    cout << "\nOLHANDO PARA A DIREITA" << endl;
                    cout << "k+tam: " << k+tam << endl;

                    for(int l=0, n=k; l<tam; l++, n++){
                        cout << "Letra: " << M[j][n] << " linha: " << j << " coluna: " << n << endl;
                        anag.push_back(M[j][n]);
                    }

                    sort(anag.begin(), anag.end());
                    cout << "anag: " << anag << endl;
                    cout << "palavra: " << palavra[i] << endl;

                    if(anag == palavra[i]){
                        for(int m=k; m<tam; m++){
                            if(R[j][m] == 0 || R[j][m] == i+1){
                                R[j][m] = i+1;
                            }
                            else{
                                R[j][m] = -1;
                            }
                        }
                    }
                    
                    anag = "";   
                    if(j + tam <= L) {
                        cout << "\n";
                        cout << "OLHANDO DIAGONAL BAIXO DIREITA" << endl;

                        for(int l=0, n=k, m=j; l<tam; l++, n++, m++){
                            cout << "Letra: " << M[m][n] << endl;
                            anag.push_back(M[m][n]);
                        }
                        cout << "anag diagonal: " << anag << endl;
                        cout << "palavra : " << palavra[i] << endl;
    
                        sort(anag.begin(), anag.end());
                        if(anag == palavra[i]){
                            for(int m=k, n=j; m<tam; m++, n++){
                                if(R[n][m] == 0 || R[n][m] == i+1){
                                    R[n][m] = i+1;
                                }
                                else{
                                    R[n][m] = -1;
                                }
                            }
                        }
                    }
                }
                
                anag = "";
                if(j+tam <= L){
                    cout << "\nOLHANDO PARA BAIXO" << endl;
                    cout << "k+tam: " << k+tam << endl;
                    
                    for(int l=0, n=j; l<tam; l++, n++){
                        cout << "Letra: " << M[n][k] << "linha: " << n << "coluna: " << k << endl;
                        anag.push_back(M[n][k]);
                    }
                    cout << "Anag: " << anag << endl;
                    cout << "palavra: " << palavra[i] << endl;

                    sort(anag.begin(), anag.end());
                    if(anag == palavra[i]){
                        for(int m=k; m<tam; m++){
                            if(R[m][k] == 0 || R[m][k] == i+1){
                                R[m][k] = i+1;
                            }
                            else{
                                R[m][k] = -1;
                            }
                        }
                    }
                }
                if(k-tam >= -1 && j + tam <= L){
                    cout << "\nANALISANDO DIAGONAL BAIXO TRAS\n";
                    cout << "k-tam: " << k-tam << endl;

                    anag = "";
                    for(int l=0, n=k, m=j; l<tam; l++, n--, m++){
                        cout << "Lettra: " << M[m][n] << " linha: " << m << "coluna: n" << endl;                        
                        anag.push_back(M[m][n]);
                    }
                    sort(anag.begin(), anag.end());

                    cout << "Anag: " << anag << endl;
                    cout << "palavra: " << palavra[i] << endl;

                    if(anag == palavra[i]){
                        for(int m=k, n=j; m<tam; m--, n++){
                            if(R[n][m] == 0 || R[n][m] == i+1){
                                R[n][m] = i+1;
                            }
                            else{
                                R[n][m] = -1;
                            }
                        }
                    }
                }
            }
        }
    }
    int cont = 0;
    for(int j=0; j<L; j++){
        for(int k=0; k<C; k++){
            if(R[j][k] == -1){
                cont++;
            }
        }    
    }
    cout << cont << endl;
    return 0;
}