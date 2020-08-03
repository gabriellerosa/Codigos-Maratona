#include <bits/stdc++.h>

using namespace std;

struct No{

    int val;
    No* left, * right;        

    No(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
}; 

//O(da altura da arvore) que pode ser n, entao é O(n)
void add(No* no, No* raiz){

    // Se o valor do NO for menor que o valor da RAIZ, vamos para a ESQUERDA
    if(no->val < raiz->val){

        // Se o filho da esquerda for NULL, o proprio NO tem que se tornar o filho da ESQ
        if(raiz->left == NULL){
            
            raiz->left = no;

        // senão, descemos a arvore para a ESQ
        } else {
            add(no, raiz->left);    
        }
    } else {

        if(raiz->right == NULL){
            
            raiz->right = no;
        } else {
            add(no, raiz->right);    
        }
    }
}

int main(){
    
    int C;
    cin >> C;        

    for(int i = 1; i <= C; i++){
        cout << "Case " << i << ":\n";

        int tam, valoRaiz;
        cin >> tam;                
        cin >> valoRaiz;

        No* raiz = new No(valoRaiz);
        tam--;

        while(tam--){
            
            int num;
            cin >> num;
            
            No* prox = new No(num);

            // Criando a árvore :D
            add(prox, raiz); 
        }

        // Fzd a Busca em Largura
        queue<No*> fila;
        fila.push(raiz);    
 
        while(!fila.empty()){

            No* atual = fila.front();
            fila.pop();

            cout << atual->val;

            if(atual->left)            
                fila.push(atual->left);

            if(atual->right)            
                fila.push(atual->right);
            
            if(!fila.empty())
                cout << " ";
        }

        //if(i != C)
            cout << "\n";
        cout << "\n";
        
    }

    return 0;
}