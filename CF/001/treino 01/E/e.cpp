#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int str = 0, end = 0;
    string s, t;
    cin >> s >> t;

    for(int i = 0; i < t.size(); i++){
        if(s[i] != t[i]){
            str = i;
            break;
        }
    }

    for(int i = t.size() - 1; i >= 0; i--){
        if(s[i] != t[i]){
            end = i;
            break;
        }
    }

    string temp = "";
    
    //cout << "str: " << str << " end: " << end << endl;
    for(int i = str; i <= end; i++){
        temp.push_back(t[i]);
    }

    reverse(temp.begin(), temp.end());
    //cout << "temp: " << temp << endl;

    string nova = t;

    int index = 0;
    for(int i = str; i <= end; i++){
        nova[i] = temp[index];
        index++;
    }
    //cout << "nova: " << nova << endl;

    if(nova == s){
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}