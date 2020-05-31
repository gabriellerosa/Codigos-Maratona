#include <iostream>
#include <vector>

using namespace std;

int main(){

    int c;
    cin >> c;

    while(c--){
        int n;
        cin >> n;        

        vector<int> par, impar;
        vector<int> nums (n);
        
        for(int i = 0; i < n; i++){
            cin >> nums[i];
        }

        for(int i = 0; i < n; i++){
            
            if(nums[i] % 2 == 0){
                par.push_back(nums[i]);
            }else{
                impar.push_back(nums[i]);
            }
        }

        bool saida = false;    

        if(par.size() % 2 == 0){
           cout << "YES" << endl;
        }else{
            // VOu tentar achar um elemento do PAR que diminuido 
            // do IMPAR da 1
            for(int i = 0; i < par.size(); i++){
                for(int j = 0; j < impar.size(); j++){

                    if(abs(par[i] - impar[j]) == 1){                    
                        saida = true;
                    }
                }
            }

            if(saida){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}