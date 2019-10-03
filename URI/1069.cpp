#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
    
    int n, d = 0;
    string p;

    cin >> n;
    
    while(n--){
        stack<char> pilha;

        cin >> p;

        for(int i = 0; i < p.size(); i++){
            
            if(p[i] == '<'){
                pilha.push(p[i]);
            }else 
                if(!pilha.empty() && p[i] == '>' && pilha.top() == '<'){
                    pilha.pop();
                    d++;
                }
        }
        cout << d << endl;
        d = 0;
    }    
    
    return 0;
}