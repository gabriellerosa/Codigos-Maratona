#include <iostream>
#include <string>

using namespace std;

int main(){

    int n;

    cin >> n;

    while(n--){
        
        int tam;    
        int max = 0;
        string caso, s1, s2;        

        cin >> tam >> caso;
        for(int i = 0; i < tam; i++){
            
            if(caso[i] == '0'){
                
                s1.push_back('0');                
                s2.push_back('0');

            }else if(caso[i] == '1' && max == 0){
                
                s1.push_back('1');                
                s2.push_back('0');
                max = 1;                
      
            }else if(caso[i] == '2' && max == 0){

                s1.push_back('1');              
                s2.push_back('1');   
            
            }else if(caso[i] == '1' && max == 1){
                
                s1.push_back('0');               
                s2.push_back('1');

            }else if(caso[i] == '2' && max == 1){

                s1.push_back('0');                
                s2.push_back('2');

            }
        }

        cout << s1;          
        cout << "\n";
        cout << s2;
        cout << "\n";       

    }

    return 0;
}