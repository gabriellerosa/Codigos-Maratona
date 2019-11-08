#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int c, n;

int main(){

    int t, d, ans = 0; // t é o tempo q o cara chega e o d o tempo q leva para ser atendido 
    priority_queue<int, vector<int>, greater<int> > caixa; // greater faz a priority queue ordenar do menor com prioridade

    cin >> c >> n;

    // todos os caixas começam com 0 pois está abrindo o mercado agr
    for(int i = 0; i < c; i++){
        caixa.push(0);
    }

    for(int i = 0; i < n; i++){

        cin >> t >> d;   
        
        int momento_em_q_o_esta_caixa_pronto = caixa.top();
        caixa.pop();

        int tempo_espera = momento_em_q_o_esta_caixa_pronto - t;

        cout << tempo_espera << "\n";
        if(tempo_espera > 20){
            ans++;
        }

        int novo_tempo_espera_do_caixa = max(momento_em_q_o_esta_caixa_pronto, t) + d;        
        caixa.push(novo_tempo_espera_do_caixa);

    }    

    cout << ans << endl;

    return 0;
}