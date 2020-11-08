#include <iostream>
#include <vector>

using namespace std;

int findLucky(vector<int>& arr) {
        
        int a[505];
        int ma = 0;
        bool tem = false;
        
        for(int i = 0 ; i < 505; i++){
            
            a[i] = 0;
        }
        

        for(int i = 0; i < arr.size(); i++){
            
            a[arr[i]]++;
            
        }
        
        for(int i = 1; i <= 500; i++){
            //cout << arr[i] << " ";
            if(a[i] == i){
                cout << arr[i] << " -> " << i << endl;
                tem = true;
                ma = max(ma, i);
            }
            
        }
        
        if(tem) return ma;
        else return -1;
}

int main(){

    vector<int> arr;
    for(int i = 0; i < 4; i++){
        int aux;
        cin >> aux;
        arr.push_back(aux);
    }

    int comp = findLucky(arr);

    if(comp == -1)
        cout << "-1" << endl;
    else
        cout << comp << endl;
    

    return 0;
}