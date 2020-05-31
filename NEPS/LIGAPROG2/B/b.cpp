#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool comp(pair<string, int> a, pair<string, int> b){
    if(a.second == b.second){
        return a.first < b.first;
    }
    return a.second > b.second;    
}

int main(){

    int msg, minValid;
    cin >> msg >> minValid;
    
    map<string, int> rank; // vai guardar FULANO = XP TOTAL DELE
    map<string, int> calc; // vai guardar FULANO = MIN DA ULTIMA MSG

    for(int i = 0; i < msg; i++){
        string nome;
        int min;
        cin >> nome >> min;

        if(rank.find(nome) == rank.end()){ //se n achou FULANO
            //rank.insert( nome, 25);
            rank[nome] = 25;
            calc[nome] = min;        
        }else{
            if(min - calc[nome] >= minValid){
                rank[nome] += 25;
                calc[nome] = min;
            }/*else{
                calc[nome] = min;
            }*/
        }
    }

    /*for(auto x : rank){
        cout << x.first << " " << x.second << endl;
    }*/

    vector<pair<string, int>> rankFinal; 
   
    for(auto x : rank){
        rankFinal.push_back( make_pair(x.first, x.second) );
    }

    /*for(auto x : rankFinal){
        cout << x.first << " " << x.second << endl;
    }*/

    sort(rankFinal.begin(), rankFinal.end(), comp);    
    
    /*for(auto x : rankFinal){
        cout << x.first << " " << x.second << endl;
    }*/

    for(int i = 0; i < rankFinal.size(); i++){
        
        int xp = rankFinal[i].second;
        if(xp < 100){
            rankFinal[i].second = 1;
        }else{
            xp = xp/100;
            rankFinal[i].second = xp + 1;
        }        
    }

    /*for(auto x : rankFinal){
        cout << x.first << " " << x.second << endl;
    }*/

    cout << "--Rank do Nepscord--" << endl;
    cout << "#1. " << rankFinal[0].first << " - " << "Nivel " << rankFinal[0].second << endl;                   

    if(rankFinal.size() >= 2){
        cout << "#2. " << rankFinal[1].first << " - " << "Nivel " << rankFinal[1].second << endl;                   
    }else{
        cout << "#2." << endl;
    }

    if(rankFinal.size() >= 3){
        cout << "#3. " << rankFinal[2].first << " - " << "Nivel " << rankFinal[2].second << endl;                   
    }else{
        cout << "#3." << endl;
    }

    return 0;
}