#include<iostream>
#include<map>

using namespace std;

int main(){
    
    int n;
    cin >> n;

    while(n--){
        
        int m, p, qtd;
        map<string, double> feira;
        string fruta;
        double preco, tot = 0;        

        cin >> m;   
        
        for(int i = 0; i < m; i++){
            cin >> fruta >> preco;
            feira.insert(make_pair(fruta, preco));
        }
        
        cin >> p;

        for(int i = 0; i < p; i++){
            cin >> fruta >> qtd;

            tot += feira[fruta]*qtd;
        }

        printf("R$ %.2f\n", tot);
    }

    return 0;
}