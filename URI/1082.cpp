#include<bits/stdc++.h>
 
using namespace std;

vector< vector<bool> >grafo;
vector<bool> visita;

void bfs(int v){
    int atual, qc = 0; // atual é quem eu vejo os filhos dele no momento
    queue<int> fila;
    vector<char> components;    

    for(int i = 'a'; i < 'a' + v; i++){      //percorrer tds os vértices        
        if(visita[i] == false){
            fila.push(i);
            qc++;
            components.clear();
            while(!fila.empty()){
            
                atual = fila.front(); // vertice pai
                fila.pop();            
               if(visita[atual] == false){ // nao ficar repetindo os filhos
                    components.push_back((char)atual);                    
                    // vou percorrer os filhos do pai que é o ATUAL 

                    visita[atual] = true; // pois agr já visitamos ele               
                    for(int j = 'a'; j < 'a' + v; j++){
                        if(grafo[atual][j] == true){   //Saber se tem aresta [ é filho ]                                                         
                          //if(visita[j] == false)  seria redundante por causa do if da linha 21
                            fila.push(j);
                        }
                    }

               }   
            }
           sort(components.begin(), components.end());
                
           for(int k = 0; k < components.size(); k++){
              cout << components[k] << ",";
           }
           cout << endl ;     
        }        
    }
    cout << qc << " connected components" << endl << endl;    
}
 
int main() {
    
    int n, v, a, t = 0;
    char o, d;

    cin >> n;

    while(n--){
        cin >> v >> a;
        
        grafo.assign(256, vector<bool>(256, false));
        visita.assign(256, false);

        while(a--){
            cin >> o >> d;
            grafo[o][d] = true;
            grafo[d][o] = true;
        }

        cout << "Case #" << t+1 << ":" << endl;
        bfs(v);
        t++;
    }    
 
    return 0;
}