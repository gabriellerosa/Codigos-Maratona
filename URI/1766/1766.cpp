#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct rena{
    string nome;
    int peso, id;
    double alt; 
};

bool ordem(rena a, rena b){
    if(a.peso != b.peso){
       return a.peso > b.peso;     
    }else{
        
        if(a.id != b.id){        
            return a.id < b.id;
        }else{
            if(a.alt != b.alt){
                return a.alt < b.alt;
            }else{
                return a.nome < b.nome; 
            }
        }
    }
}

int main(){
    
    int qtd, n, m, caso = 1;   

    cin >> qtd;
    
    while(qtd--){

        cin >> n >> m;
        rena animal;         
        vector<rena> treno;
        int lugar = 1;    
        
        for(int i = 0; i < n; i++){    
        
            cin >> animal.nome >> animal.peso >> animal.id >> animal.alt;
            
            treno.push_back(animal);                        
        }   
    
        sort(treno.begin(), treno.end(), ordem);
    
        cout << "CENARIO {" << caso << "}" << endl;
        if(caso == qtd){
            for(int i = 0; i < m; i++){            
                cout << lugar << " - " << treno[i].nome << endl;                        
                lugar++;
            }
            cout << endl; 
        }else{
            for(int i = 0; i < m; i++){            
                cout << lugar << " - " << treno[i].nome << endl;                        
                lugar++;
            } 
        } 
        caso++;
    }

    return 0;
}