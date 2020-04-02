#include <iostream>
#include <string>

using namespace std;

string combinador(string s1, string s2){
  
    int mux = 0, j = 0, k = 0;
    string nova ="";       

    for(int i = 0; i < s1.size() && i < s2.size(); i++){
        
        if(mux == 0){
            nova[i] = s1[j];
            j++;
            mux = 1;
            cout << nova[i]; 
        }else{
            nova[i] = s2[k];
            k++;
            mux = 0;
            cout << nova[i]; 
        }

        if(i == s1.size()-1){
            while(i<s2.size()){
                i++;
                cout<<nova[i];
            }
        }
        if(i==s2.size()-1){
            while(i<s1.size()){
                i++;
                cout<<nova[i];
            }
        }

    }

    return nova;
}

int main(){

    int n;
    cin >> n;

    while(n--){
        string s1, s2;
        cin >> s1 >> s2;
         
        cout << combinador(s1, s2) << endl;

    }

    return 0;
}