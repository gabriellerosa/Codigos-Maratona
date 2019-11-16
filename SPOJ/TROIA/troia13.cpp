#include <iostream>
#include <set>
#define MAX 200200

using namespace std;

int n, m, pai[MAX];
set<int> fam; 

int find(int a){ // serve para retornar o patriarca da familia

    if(pai[a] == a){ // se o pai de a for ele mesmo, retorna ele;
        return a;
    }

    return pai[a] = find(pai[a]);
}

void join(int a, int b){

    pai[find(a)] = find(b);     
    
}

int main(){
    
    //ios_base::sync_with_stdio(false); nao sei pra sq ser mas é legal
    //cin.tie(NULL);    

    scanf("%d %d", &n, &m); //cin >> n >> m;
    int a, b;    

    //iniciar cada um como pai de si mesmo
    for(int i = 1; i <= n; i++){
        pai[i] = i;
    }

    for(int i = 0; i < m; i++){
        scanf("%d %d", &a, &b);//cin >> a >> b;

        join(a, b);
    }
    
    for(int i = 1; i <= n; i++){
        fam.insert(find(i));
    }

    printf("%d\n", fam.size());//cout << fam.size() << "\n";    
    // O VETOR PAI PEGA O PAI IMEDIATO E O PAI MAXIMO É COM O FIND
    return 0;
}