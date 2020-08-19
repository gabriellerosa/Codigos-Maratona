#include <iostream>
#include <stack>

using namespace std;

int main(){

    int n;

    while(cin >> n, n != 0){

        char entrada[26], saida[26];
        string ans = "";
        stack<char> estacao;
        int e = 0, s = 0;

        for(int i = 0; i < n; i++){
            cin >> entrada[i];
        }

        for(int i = 0; i < n; i++){
            cin >> saida[i];
        }

        while(e < n){
            estacao.push(entrada[e]);
            ans.push_back('I');
            
            while(!estacao.empty() && estacao.top() == saida[s]){
                estacao.pop();
                ans.push_back('R');
                s++;      
            }

            e++;
        }

        if(!estacao.empty()){
            ans.append(" Impossible");
        }    

        cout << ans << "\n";
    }

    return 0;
}