#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

struct pessoa{
    char tam;
    string cor, nome;
};

bool ordem(pessoa a, pessoa b){
    if(a.cor != b.cor){
        return a.cor < b.cor;
    }else{
        if(a.tam != b.tam){

            return a.tam > b.tam;

        }else{

            return a.nome < b.nome;

        }        
    }
}

int main(){

    int n;
    bool first = true;
    string name;
    pessoa p;   

    cin >> n;

    while(n){
        vector<pessoa> turma;  
    
        for(int i = 0; i < n; i++){          
            
            cin.ignore();
            getline(cin, name);
            p.nome = name;
    
            cin >> p.cor >> p.tam;
            
            turma.push_back(p);
        }
        
        sort(turma.begin(), turma.end(), ordem);
    
    if(first){
        for(int i = 0; i < n; i++){          
            cout << turma[i].cor << " " << turma[i].tam << " " << turma[i].nome;
            cout << endl;
        }
        first = false;
    }else{
         cout << endl;
         for(int i = 0; i < n; i++){          
            cout << turma[i].cor << " " << turma[i].tam << " " << turma[i].nome;
            cout << endl;
        }
    }
        cin >> n;
    }
    return 0;
}