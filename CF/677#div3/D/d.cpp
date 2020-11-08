#include <iostream>
#include <vector>

using namespace std;

int main() {

    int qtd;
    cin >> qtd;

    while(qtd--) {

        int n;
        cin >> n;

        vector<pair<int, int>> grafo;
        vector<int> nums (n);

        for(int i = 0; i < n; i++) {
            cin >> nums[i];
        }

        bool connected = false;

        // pego um e conecto com o primeiro que da pra conectar
        for(int i = 0; i < n; i++){
            connected = false;

            for(int j = 0; j < n; j++){

                if(j != i && nums[i] != nums[j]){
                    grafo.push_back(make_pair(i, j));
                    grafo.push_back(make_pair(j, i));
                    connected = true;
                }
            }

            if(connected == false) {
                cout << "NO\n";
                break;
            }
        }    

        if(connected == false){
            continue;
        }

        vector<bool> printed (n, false);        

        cout << "YES\n";
        for(int i = 0; i < n; i++){
            if(printed[i] == false) {
                cout << grafo[i].first + 1 << " " << grafo[i].second + 1 << endl;
                printed[grafo[i].first] = true;
                printed[grafo[i].second] = true;
            }
        }

    }

    return 0;
}