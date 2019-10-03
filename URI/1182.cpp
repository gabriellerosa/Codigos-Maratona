#include<iostream>
#include <stdio.h>

using namespace std;

int main(){

    int m[12][12], i, j, c;
    double me = 0, val, s = 0;
    char op;    
    
    cin >> c;
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
    if(op == 'S'){
        for(i = 0; i < 12; i++){ //linha
            for(j = 0; j <= c; j++){    //coluna
                if(j == c){
                   s+=m[i][j];
                   cout << "soma da linha " << i << " coluna " << j << ":" << s << endl;  
                }               
            }
        }
        printf("%.1f\n",s);
    }else{
        for(i = 0; i < 12; i++){ //linha
            for(j = 0; j <= c; j++){    //coluna
                if(j == c){
                   me+=m[i][j]; 
                }               
            }
        }
        printf("%.1f\n", me/12);
    }

    return 0;
}