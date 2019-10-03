#include <iostream>
#include <set>
 
using namespace std;
 
long long v[10];
 
bool achei(long long n){
   
    for(int i = 0; i < 10; i++){
        if(v[i] == n) return true;
    }
    return false;
}
 
int main(){
   
    long long q, n, m, x, aux, soma_seq, res, tam_seq;
       
    v[10] = {0};
 
    cin >> q;
    while(q--){
        cin >> n >> m;        
       
        tam_seq = 0;
        soma_seq = 0;
        res = 0;
        for(int i = 0; i < 10; i++) v[i]=-1;
        x = n/m;   // qtd d numeros menores que N que são multiplos de M
 
        for(int i = 1; i <= 10; i++){ // fazendo a sequencia usando apenas o ultimo digito do número
            aux = m*i;
            if(achei(aux%10))
                break;
            else{
                v[i-1] = aux%10;
                tam_seq++;
            }
        }
       
        for(int i = 0; i < tam_seq; i++){ // somando a seq do ultimo digito do num
            soma_seq += v[i];
        }
       
        if(x%tam_seq == 0){
            long long aux2;
            aux2 = x/tam_seq;
            res = soma_seq*aux2;            
        }else{
            long long aux2;
            aux2 = x/tam_seq;
            res = soma_seq*aux2;
            for(int i = 0; i < x%tam_seq; i++){
                res += v[i];
            }              
        }
 
        cout << res << endl;
    }
 
    return 0;
}