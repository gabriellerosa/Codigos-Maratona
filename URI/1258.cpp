#include <iostream>
#include <set>

using namespace std

bool comp(map<string, pair<string, string> > p1, map<string, pair<string, string> > p2){
    if(p1.second.first == p2.second.first) // cores iguais iguais
        return p1.second > p2.second;    // retorna o maior tamanho
    else
        return p1.second.first < p2.second.first;
}
typedef Struct{
    string name, tam, color;
}campo;

int main(){

    string cor, siz, nome;
    set<campo> myset;
    campo alo;
    //set<campo> :: iterator it;    
    int qtd;    
    
    while(cin >> qtd){
        getline(cin, nome);
        cin.ignore();
        cin >> cor >> siz;
        
        alo.name = nome;
        alo.tam = siz;
        alo.color = cor; 
        
        mymset.insert(campo);        
    }

    for(set<campo>::iterator it = myset.begin(); it != myset.end(); it++){    
        cout << it->name << " " << it->tam << " " << it->color << endl;    
    }
    return 0;
}