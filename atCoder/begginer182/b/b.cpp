#include <iostream>

using namespace std;

int main(){

    long long n;
    cin >> n;

    if(n % 3 == 0){
        cout << "0\n";
    } else {

        //se tds os digitos nao forem multiplos de 3
        // ja é -1;
        string s = to_string(n);        

        int sum = 0;

        for(int i = 0; i < s.size(); i++){
            sum += (s[i] - '0');
        }

        if(s.size() > 1){
            // testar tirando 1 numero
            for(int i = 0; i < s.size(); i++){
                if((sum - (s[i] - '0')) % 3 == 0){
                    cout << "1\n";
                    return 0;
                }
            }            
        }

        if(s.size() > 2) {
            for(int i = 0; i < s.size(); i++){
                for(int j = i + 1; j < s.size(); j++){
                    if((sum - (s[i] - '0') - (s[j] - '0')) % 3 == 0){
                        cout << "2\n";
                        return 0;
                    }
                }
            }
        }

        cout << "-1\n";
    }

    return 0;
}