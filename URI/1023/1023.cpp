#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <math.h>

using namespace std;

bool comp(pair<int, double> a, pair<int, double> b){

    if(a.second == b.second){
        return a.first < b.first;
    }else{
        return a.second < b.second;
    }

}

int main(){

    int n, ins = 1;

    while(cin >> n, n != 0){

       double cm = 0;

       if(ins != 1){
            cout << "\n";
       }

        vector<pair<int, double>> city;

       for(int i = 0; i < n; i++){           
            int x, y;
            cin >> x >> y;
            city.push_back(make_pair(x, y));
       }
    
        // Fazendo consumo medio geral
        int tot_pessoas = 0;
        for(int i = 0; i < n; i++){           
            tot_pessoas += city[i].first;
            cm += city[i].second;    
        }

        cm = cm / (double)tot_pessoas;

        // Fazendo consumo médio por pessoa
        for(int i = 0; i < n; i++){
          city[i].second = floor(city[i].second / (double) city[i].first);  
        }  

        map<int, double> aux;
        vector<pair<int, double>> v;
        
        // porem as pessoas que tem o msm consumo eu devo juntar
        for(int i = 0; i < n; i++){
            aux[city[i].second] += city[i].first;            
        }
        int p = 0;

        for(auto k: aux){
            if(k.second != 0){
                p++;
                v.push_back(make_pair(k.second, k.first));
            }
        }

        sort(v.begin(), v.end(), comp);
    
        cout << "Cidade# " << ins << ":\n";
        ins++;
        for(int i = 0; i < n - (n - p); i++){
            if(i != 0) 
                cout << " ";
            cout << v[i].first << "-" << v[i].second;            
        }       
        cout << "\n"; 
        printf("Consumo medio: %.2f m3.\n", cm - 0.00499999);
    }

    return 0;
}