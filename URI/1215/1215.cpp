#include <iostream>
#include <set>
#include <string>
#include <ctype.h>

using namespace std;

int main(){

    set<string> dici;
    string frase;    

    while(getline(cin, frase)){
        string palavra = "";

        for(int i = 0; i < frase.size(); i++){

            if(isalpha(frase[i])){
                frase[i] = tolower(frase[i]);
            }
        }

        for(int i = 0; i < frase.size(); i++){
   
            if(isalpha(frase[i])) {
                palavra.push_back(frase[i]);
            } else {
                
                if(palavra != "")
                    dici.insert(palavra);
                palavra = "";
            }           
        }

        if(palavra != ""){
            dici.insert(palavra);
            palavra = "";
        }        
    }

    for(auto s : dici){
       cout << s << "\n";
    }          

}