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
    int k = 1;
    int g = 10;
    if(op == 'S'){
        for(i = 0; i <= 5; i++){ //linha
            for(j = k; j <= 5; j++){    //coluna                   
                   s+=m[i][j];
                        
            }
            k++;
            
            for(j = 6; j <= g; j++){    //coluna                   
                   s+=m[i][j];
                   //cout << "soma s : " << s << endl;        
            }
            g--;
            
        }
        printf("%.1f\n",s);
    }else{
        for(i = 0; i <= 5; i++){ //linha
            for(j = k; j <= 5; j++){    //coluna         
                   me+=m[i][j]; 
                   cont++;          
            }
            k++;

            for(j = 6; j <= g; j++){    //coluna                   
                   me+=m[i][j]; 
                   cont++;      
            }
            g--;
            
        }
        printf("%.1f\n", me/cont);
    }

    return 0;
}