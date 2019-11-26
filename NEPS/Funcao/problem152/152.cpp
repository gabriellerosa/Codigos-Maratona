#include <iostream>
#include <string>

using namespace std;

string title(string F){
    
    char letra;
    bool space = false;
    string newString = "";

    for(int i = 0; i < F.size(); i++){
        
        letra = F[i];

        if(i == 0)
            newString += toupper(letra);
        else if(letra == ' ') 
            space = true;
            else if(space){
                newString += " ";
                newString += toupper(letra);
                space = false;
            }else
                newString += tolower(letra);                    
    }

    return newString;
}

int main(){ 
    string F;

    getline(cin, F);

    cout << title(F) << "\n";
}