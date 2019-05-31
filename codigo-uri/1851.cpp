#include <queue>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Dragao{
    
public:
    int diaTreino, multaPd, diaAtual;
    float peso;
    dragao(int diaTreino, int multaPd, int diaAtual, float peso){
        this->diaTreino = diaTreino;
        this->multaPd = multaPd;
        this->diaAtual = diaAtual;
        this->peso = peso;    
    }

        bool operator<(const Dragao& dg) const{
            return dg.peso < peso;
        }
};

int main(){
    
    int d, m, totaldias=0, today=0, multa = 0;
    float peso;
    priority_queue< pair<pair<int, int>, float>, vector<pair<pair<int, int>, float>>, comp > pq;
    pair<int, int> dragaoTreinando; 
    
    dragaoTreinando = make_pair( -1, -1);
    while (cin >> d >> m){

        totaldias = d + totaldias;
        peso = (float)m/(float)d;
        pq.push(make_pair(make_pair(d, m), peso));

        
        if(dragaoTreinando.first == -1 || dragaoTreinando.first <= today ){

           dragaoTreinando = make_pair(pq.top().first.first, pq.top().first.second);
           pq.pop();
           today = 0;            
            
        }
         
        today++; 
        
    }
    
        
    return 0;
}