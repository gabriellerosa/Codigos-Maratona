#include <iostream>
#include <map>

using namespace std;

int main() {
    
    int n, m, v, i, ult;
    string word, frase;    
    map<string, string> dici;

    cin >> v;
    int aux = v;
    ult = v;
    while(v > 0){

        cin >> n >> m;
        for(i = 0 ; i < n ; i++){
            cin >> word;
            cin.ignore();
            getline(cin, frase);
            dici[word] = frase;
        }
        
        while(m--){
            map<string, string>:: iterator it;
            getline(cin, word);
            string japones;
            for(i = 0; i < word.length(); i++){
                if (word[i]==' '){
                        if(!japones.empty()){
                            it = dici.find(japones);
                            if(it!=dici.end())
                                cout << it->second;
                            else
                                cout << japones;
                            japones.clear();
                                            
                        }
                        cout << word[i];                                        
                }else
                    japones = japones+word[i];           
            }
            if(!japones.empty()){
                 it = dici.find(japones);
                 if(it!=dici.end())
                      cout << it->second << endl;
                 else
                     cout << japones << endl;
                japones.clear();                    
            }            
        }

        dici.clear();
        ult--;
        /*if(ult != 0) */
            cout << endl;
        v--;
    }
    return 0;
}