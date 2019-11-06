#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int p, s, u, v, cont = 0;
    vector<pair<int, int>> praia;            

    cin >> p >> s;

    for(int i = 0; i < s; i++){
        
        cin >> u >> v;        
        praia.push_back( make_pair(u, 0));
        praia.push_back( make_pair(v, 1));        

    }
    
    sort(praia.begin(), praia.end());
    
    for(int i = 0; i < praia.size(); i++){

        if(praia[i].second == 0){
            if(cont == 0){
                cout << praia[i].first << " ";
            }
            cont++;
        }else{
            cont--;
            if(cont == 0){
                cout << praia[i].first << " " << endl;
            }
        }

    }

    /*for(int i = 0; i < praia.size(); i++){
        cout << praia[i].first << endl;
    }*/

	return 0;
}
