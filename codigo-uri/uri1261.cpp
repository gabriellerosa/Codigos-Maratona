#include<iostream>
#include<map>
#include<string>
#include<algorithm>


using namespace std;

int main(){
    
   int m, n, i, valor;
   string palavra, texto;
   long long soma;

   map<string, int> dicionario;
    
   while(cin >> m >> n){ 

   for(i = 0; i < m; i++){
            cin >> palavra >> valor;
            //dicionario.insert(pair<string, int>(palavra, valor));
            dicionario[palavra] = valor;
   }


   while(n>0){  
        
        cin >> texto;
        soma = 0;
        while ( texto != "."){
            soma += dicionario[texto];    
            cin >> texto;
        }   
        cout << soma << endl;
        n--;          
        }
    }
    return 0;
}