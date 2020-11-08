#include <iostream>
#include <vector>

using namespace std;

int main() {

    int qtd;
    cin >> qtd;

    while(qtd--) {
        int n;
        cin >> n;

        vector<int> book (n);

        for(int i = 0; i < n; i++) {
            cin >> book[i];
        }

        int gaps = 0;
        int index_firstOne, index_lastOne;
    
        for(int i = 0; i < n; i++){
            if(book[i] == 1) {
                index_firstOne = i;
                //cout << "começa " << i << endl;
                break;
            }
        }

        for(int i = n - 1; i >= 0; i--) {
            if(book[i] == 1){
                index_lastOne = i;
                //cout << "termina " << i << endl;
                break;
            }
        }
        
        // looking for gaps now
        for(int i = index_firstOne; i <= index_lastOne; i++){

            if(book[i] == 0){
                gaps++;
            }
        }
        
        cout << gaps << "\n";
    }

    return 0;
}