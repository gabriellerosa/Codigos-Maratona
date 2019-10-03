#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, num;
    vector<int> col;
    bool flag = true;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> num;
        col.push_back(num);    
    }
    
    sort(col.begin(), col.end());

    for(vector<int>::iterator it = col.begin(); it != col.end(); ++it){
        if(flag == true)  {      
            cout << *it;
            flag = false;
        }else
            cout << " " << *it;   
    }
    cout << endl;

    return 0;
}