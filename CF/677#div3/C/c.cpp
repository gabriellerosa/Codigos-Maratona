#include <iostream>
#include <vector>

using namespace std; 

int main(){

    int qtd;
    cin >> qtd;

    while(qtd--) {
    
        int n;
        cin >> n;
        
        int peixao = 0;
        int index_peixao = 0;

        vector<int> aqua (n);
        vector<pair<int, int>> piranhas;

        for(int i = 0; i < n; i++){
            cin >> aqua[i];
        }

        // encontrar as possíveis respostas
        for(int i = 0; i < n; i++){

            if(i == 0) {
                if(aqua[i] > aqua[i + 1]){
                    piranhas.push_back(make_pair(i + 1, aqua[i]));
                }
            } else if (i == n - 1) {
                if(aqua[i] > aqua[i - 1]) {
                    piranhas.push_back(make_pair(i + 1, aqua[i]));
                }
            } else {
                if(aqua[i] > aqua[i + 1] || aqua[i] > aqua[i - 1]){
                    piranhas.push_back(make_pair(i + 1, aqua[i]));
                }
            }
        }

        if(piranhas.size() == 0) {
            cout << "-1\n";
            continue;
        }

        //select the big possible piranha
        for(int i = 0; i < piranhas.size(); i++){
            if(peixao < piranhas[i].second){
                peixao = piranhas[i].second;
                index_peixao = piranhas[i].first;
            }
        }
        
        cout << index_peixao << endl;
    }

    return 0;
}