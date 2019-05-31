#include <iostream>
#include <queue>

using namespace std;

/*

(0) + 
( 4 ) + 
( 4 + 1000 ) + 
( 4 + 1000 + 2) + 
( 4 + 2 + 6) + 
(2 + 6) + 
(2 + 6) + 
(2 + 6) + 
(2) + (2) + (2) + (2) + (2) + 
0 + 0

*/

int main(){
    
    int t, f, id = 0, tempoFinal = 0;
    long long multaTotal = 0, multaParcial = 0;
    //multaParcial -= dragao q vou começar treinar, dragaoatual.second

    priority_queue< pair<float, int> > pq; //smp começa o peso pelo FIRST Na pq            
    vector< pair<int, int> > dragoes;
    pair<int, int> dragaoAtual;

    while(scanf("%d %d", &t, &f) != EOF ){
        
        dragoes.push_back( make_pair(t, f) );
        
        multaParcial += f;
        pq.push( make_pair((float)f / t, id++)); // DICA SEMPRE SEPARAR OPERADORES
        
        if( tempoFinal == 0){

            dragaoAtual = dragoes[ pq.top().second ];
            tempoFinal = dragaoAtual.first;
            multaParcial -= dragaoAtual.second ;

            pq.pop();
            
        }
        tempoFinal--;
        multaTotal += multaParcial;       
    }
    
    multaTotal += (tempoFinal * multaParcial);
    
    while( !pq.empty() ){
                
        dragaoAtual = dragoes[ pq.top().second ];
        multaParcial -= dragaoAtual.second;
        multaTotal += (dragaoAtual.first * multaParcial);         
        
        pq.pop();
    }

    cout << multaTotal << endl;

    return 0;
}