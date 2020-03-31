#include <iostream>
#include <algorithm>
#include <string> 

using namespace std;

int main(){

    int n;
    string frase;   
    bool first = true;
    cin >> n;

    while(n--){

        if(first){
            cin.ignore();
            getline(cin, frase);
            first = false;
        }else
            getline(cin, frase);

        for(int i = 0 ; i < frase.size(); i++){
            
            if((frase[i] >= 65 && frase[i] <= 90) || (frase[i] >= 97 && frase[i] <= 122)){
                frase[i] += 3; 
            }
        } 

        std::reverse(frase.begin(), frase.end());
        int aux = (frase.size()/2);
       
        for(int i = aux ; i < frase.size(); i++){
            
            frase[i] -= 1;
        } 
        
        cout << frase << "\n";
    }

    return 0;
}