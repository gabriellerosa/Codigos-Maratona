#include <iostream>
#include <vector>
#include <stack>

#define INF 1000000009

using namespace std;
 
int solve(vector<int> &v, int limInferior) {

    int str = 0, end = v.size() - 1;
    int mid = 0;

    while(str <= end) {
        mid = (str + end) / 2;

        if(v[mid] <= limInferior) {
            str = mid + 1;
        } else {
                        
            if(mid - 1 >= 0 && v[mid - 1] > limInferior){
                end = mid - 1;
            } else {
                return v[mid];
            }
        }
    }

    return INF;
}

int main(){

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    string pal;
    int qtd;
    vector<vector<int>> indice_letras (26);

    cin >> pal;
    cin >> qtd;

    // montar o vetor dos indices das letras nas palavras
    for(int i = 0; i < pal.size(); i++){
        indice_letras[ pal[i] - 'a' ].push_back(i);
    }

    stack<int> pilha;

    while(qtd--){
        string oq;
        char l;

        cin >> oq;

        if(oq == "push") {
            cin >> l;

            //se a pilha tiver vazia o limite inferior é -1 senao é o topo da pilha
            int limInferior;

            if(pilha.empty())
                limInferior = -1;
            else
                limInferior = pilha.top();

            // Nessa letra l que leu, quero achar o menor
            // indice maior que o limInferior
            int prox = solve(indice_letras[l - 'a'], limInferior);

            if(prox == INF) {
                cout << "NO\n";
            } else {
                cout << "YES\n";
            }

            pilha.push(prox);

        } else {
            
            pilha.pop();
            
            if(!pilha.empty() && pilha.top() == INF) {
                cout << "NO\n";
            } else {
                cout << "YES\n";
            }

        }
    }
 
    return 0;
}