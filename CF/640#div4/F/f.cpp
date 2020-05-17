#include <iostream>

using namespace std;

int main(){

    int c;
    cin >> c;

    while(c--){

        int n0, n1, n2;
        bool zero = true;
        string ans = "";

        cin >> n0 >> n1 >> n2;
    
        if(n1 == 0){
            if(n0 > 0){
               for(int i = 0; i <= n0; i++){
                  printf("0");
               }
               printf("\n");
            } else {
               for(int i = 0; i <= n2; i++){
                  printf("1");
               }
                printf("\n");
            }
        }else{

            //colocando os 0's
            for(int i = 0; i < n0; i++){
                ans += "0";
            }        
    
            for(int i = 0; i < (n1 + 1); i++){
                if(zero){
                    ans += "0";
                    zero = false;
                }else{
                    ans += "1";
                    zero = true;
                }
            }
    
            //vamos acrescentar os 1's
            for(int i = 0; i < n2; i++){
                ans += "1";
            }
            
            //se terminar em 0, ou seja, se n1 for par, devemos trocar o ultimo 1 com o 
            // ultimo 0 de qnd a string só tinha n0 + n2;
            if(n1 % 2 == 0 && n1 != 0){
               swap(ans[ans.size() - 1], ans[n0 + n1]);    
            }

            cout << ans << "\n";
        }
    }

    return 0;
}