#include <iostream>
#include <stack>
#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string line;
    stack<char> fita;
    

    while(cin >> line){
        int cont = 0;
        int tam = 0;
        while(tam <= line.size()){
            
            if(fita.empty()){
                fita.push(line[tam]);
            }else{
                if( (line[tam] == 'S' && fita.top() == 'B') || (line[tam] == 'B' && fita.top() == 'S') ){
                    fita.pop();
                    cont++;
                }else if( (line[tam] == 'C' && fita.top() == 'F') || (line[tam] == 'F' && fita.top() == 'C') ) {
                    fita.pop();
                    cont++;
                }else
                    fita.push(line[tam]);
            }            
            tam++;
        }
        cout << cont << endl;

    }
}
