#include<iostream>
#include<algorithm>

using namespace std;

int bb(int arranjo[], int tamanho, int chave){

    int i = 0;
    int f = tamanho -1;
    int meio;
    
    while(i <= f){

        meio = (i+f)/2;

        if(arranjo[meio] == chave)

             if(meio == 0 || arranjo[meio - 1] != arranjo[meio])
                return meio;
             else
                f = meio-1;
        else{  
            
            if(chave > arranjo[meio])
                i = meio + 1;
            else
                f = meio - 1;        
        }
    }

    return -1;
}

int main(){

    int n, q, peca, res, caso = 1; 

    while(cin >> n >> q, n){
               
        int marmore[n];
        
        for(int i = 0; i < n; i++){
            cin >> marmore[i];
        }
        
        sort(marmore, marmore+n);
        
        cout << "CASE# " << caso <<":" << endl;
        caso++;
        for(int i = 0; i < q; i++){
            cin >> peca;
            
            res = bb(marmore, n, peca);    
            if( res == -1)
                cout << peca << " not found" << endl;
            else
                cout << peca << " found at " << res + 1 << endl;
        }
    }

    return 0;
}

