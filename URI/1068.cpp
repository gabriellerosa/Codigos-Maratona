#include<stack>
#include<iostream>
 
using namespace std;
 
int main(){
    int i, aux;
    string conta;
 
    while(cin >> conta){
        stack<char> p;
        
        aux = conta.length();
        for(i = 0; i < aux; i++){
            
            if(!p.empty() && conta[i] == ')' && p.top() == '('){
                p.pop();
            }else if(conta[i] == ')'){
                p.push(conta[i]);
            }else if(conta[i] == '('){
                p.push(conta[i]);
            }
            /*if(conta[i] == ')' /*&& p.empty()){
                //cout << "incorrect" << endl;
                break;
            }else
                if(conta[i] == '(' /*&& p.empty()){
                    p.push(conta[i]);
                }else
                    if( conta[i] == ')' && p.top() == '(' )
                        p.pop();*/
        }
        if(p.empty()){
            //cout << "V : " << v << endl;
            cout << "correct" << endl;
        }else
            cout << "incorrect" << endl;
    }  
    return 0;
}