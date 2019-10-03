#include <iostream>
#include <set>
#include <string>
#include <utility>
#include <algorithm>

using namespace std;

bool res;

bool comp(pair<int, string> a1, pair<int, string> a2 ){    

    res = a1.first > a2.first;
    if ( a1.first == a2.first){
        res = a1.second < a2.second;
    }
        
    return res;
}

int main(){
    
    int p, a, r, i, j;
    set <string> prof;
    set < pair< int, string>, bool(*)(pair<int, string>, pair<int, string>) > quadro (comp) ;    
    set < pair< int, string> >:: iterator it;    

    string linha;    

    cin >> p >> a >> r; 

    while (p != 0 && a != 0 && r != 0){
        
        cin.ignore();

        for(i = 0; i < p; i++){
            getline( cin, linha);
            prof.insert(linha);
        }
        
        for(i = 0; i < a; i++){
            int erro = 0;

            string nome;
            cin >> nome;
            cin.ignore();

            for(j = 0; j < r; j++){
                getline( cin, linha);

                if(prof.insert(linha).second ){
                    prof.erase(linha);
                }else erro++;
            }
            quadro.insert(make_pair(erro,nome));
          
         }   

        it = quadro.begin();
        int guardei = it->first;

        cout << it->second;
        ++it;
        while( it->first == guardei ){
           cout << ", " << it->second;
           ++it; 
        } 
        cout << endl;         
        quadro.clear();
        prof.clear();
        cin >> p >> a >> r; 
    }    

    return 0;
}