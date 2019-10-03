#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

struct aluno{
    string nome;
    char reg;
    int dis;
};

bool ordem(aluno a, aluno b){
    if(a.dis != b.dis){
        return a.dis < b.dis;
    }else{
        if(a.reg != b.reg){
            return a.reg < b.reg;
        }else{
            return a.nome < b.nome;
        }
    }
}

int main(){
    
    int n;
    aluno p;    
    
    while(cin >> n){
        
        vector<aluno> onibus;
        for(int i = 0; i < n; i++){
            cin >> p.nome >> p.reg >> p.dis;            
            onibus.push_back(p);
        }

        sort(onibus.begin(), onibus.end(), ordem);
        
        for(int i = 0; i < n; i++){
            cout << onibus[i].nome << endl;
        }
    }

    return 0;
}