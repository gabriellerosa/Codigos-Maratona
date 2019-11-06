#include <iostream>
#include <stack>

using namespace std;

int main(){

    int d, n;
    char num;    

    while(cin >> d >> n, d){

        stack<char> pilha;
        char v[100005];
        int apagado = 0;
        
        for(int i = 0; i < d; i++){
        
            cin >> num;

            while(!pilha.empty() && pilha.top() < num && apagado < n){
                
                pilha.pop();
                apagado++;
            }
            
            if(pilha.size() < (d - n))
                pilha.push(num);
            else
                apagado++;

        }        

        for(int i = 0; i < (d - n); i++){            
            v[i] = pilha.top();
            pilha.pop();
        }

        for(int i = d - n - 1; i >= 0; i--){            
            cout << v[i];
        }
        cout << endl;
    } 

    return 0;
}