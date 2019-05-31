#include <iostream>
#include <stack>
#include <queue>
#include <string>

using namespace std;

void clear( std::queue<int> &q )
{
   queue<int> empty;
   swap( q, empty );
}

void cleare( std::stack<int> &l )
{
   stack<int> vazio;
   swap( l, vazio );
}

int main(){
    
    stack <int> estacao;
    queue <int> num;
    string s;
    int i, k = 0, n, aux, p;

    cin >> n;
        
    while( n != 0){ 
        
        cin >> aux;
        if(aux==0){
            cout << endl;
            cin>>n;
            continue;
        }
        num.push(aux);        
    
        for(i = 0; i < (n-1); i++){
            cin >> aux;
            num.push(aux);
        }
        
        while(k <= n ){

            if( estacao.empty() == false && estacao.top() == num.front() ){
    
                estacao.pop();
                num.pop();
            }else{
                k++;
                if(k <= n){
                    estacao.push(k);
                }
            }
        }

        if ( estacao.empty() == true ) 
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
        
        k = 0;
        clear(num);
        cleare(estacao);         

   }  
    return 0;
}