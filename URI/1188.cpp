#include<iostream>
#include <stdio.h>

using namespace std;

int main(){

    int i, j, cont = 0;
    double me = 0, val, s = 0, m[12][12];
    char op;    

    cin >> op;
    
    for(i = 0; i < 12; i++){ //linha
        for(j = 0; j < 12; j++){    //coluna
            cin >> val;
            m[i][j] = val;
        }
    }
    
    for(i = 0; i < 12; i++){ //linha
        for(j = 0; j < 12; j++){    //coluna
            cout << " " << m[i][j];
        }
        cout << endl;
    }
    int k = 11;
    int g = 7;
    if(op == 'S'){
        for(i = 1; i < 11 ; i++){ //linha
           if(i <= 5){            
                for(j = 11; j >= k; j--){    //coluna                   
                       s+=m[i][j];                        
                }
                k--;
            }else{
                for(j = g; j <= 11; j++){    //coluna                   
                       s+=m[i][j];
                       //cout << "soma s : " << s << endl;        
                }
                g++;
            }
        }
        printf("%.1f\n",s);
    }else{
        for(i = 1; i < 11 ; i++){ //linha
            if(i <= 5){            
                for(j = 0; j < k; j++){    //coluna                   
                       me+=m[i][j]; 
                        cont++;                       
                }
                k++;
            }else{
                for(j = 0; j < g; j++){    //coluna                   
                       me+=m[i][j]; 
                       cont++; 
                       //cout << "soma s : " << s << endl;        
                }
                g--;
            }
            
        }
        printf("%.1f\n", me/cont);
    }

    return 0;
}