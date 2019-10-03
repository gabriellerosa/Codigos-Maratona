#include <iostream>

using namespace std;

int main(){

   int bancos[25], qtdB, qtdD, money, dinheiros, bp, br;

   cin >> qtdB >> qtdD;
   while( qtdB != 0 && qtdD != 0){ 
         
        bool flag = false;
        
        for(int i = 1; i <= qtdB; i++){
            cin >> money;
            bancos[i] = money;
        }
    
        for(int i = 1; i <= qtdD; i++){
            cin >> bp >> br >> dinheiros;
    
            bancos[bp] -= dinheiros;
            bancos[br] += dinheiros; 
        }
        
        /*for(int i = 1; i <= qtdB; i++){
            
           cout << "banco " << i << " : " << bancos[i] << endl;  
                
        }*/

        for(int i = 1; i <= qtdB; i++){
            
            if(bancos[i] < 0){ 
                flag = true;
                break;
            }
        }
        
        if(flag) cout << "N" << endl;
        else cout << "S" << endl;

        cin >> qtdB >> qtdD;
    }
    return 0;
}