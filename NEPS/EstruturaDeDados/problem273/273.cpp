#include <iostream>
#include <stack>

using namespace std;

int main(){

    int t;

    scanf("%d", &t);

    while(t--){
        
        bool deuruim = false;
        string p;
        cin >> p;
        stack<char> exp;
            
        for(int i = 0; i < p.size(); i++){
        
            if(p[i] == '(' || p[i] == '[' || p[i] == '{'){
                exp.push(p[i]);
            }else{
                if(exp.empty()){
                    deuruim = true;
                    break;
                }else{
                    if(p[i] == ')' && exp.top() == '(' ){
                        exp.pop();               
                    }else
                        if(p[i] == ']' && exp.top() == '['){
                            exp.pop();
                        }else
                            if(p[i] == '}' && exp.top() == '{' ){
                                exp.pop();
                        }else{
                            deuruim = true;
                            break;
                        }  
                }
        
            }
        }
        if(!exp.empty())
            deuruim = true;

        if(deuruim)
            cout << "N" << endl;
        else
            cout << "S" << endl;
    }    

    return 0;
}