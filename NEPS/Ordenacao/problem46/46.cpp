#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    
    int origem[100005], v_ordem[100005], wrong = 0, aux[100005], n, num, j = 0;
    
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> num;        
        origem[i] = num;
        v_ordem[i] = num;
    }    
    
    sort(v_ordem, v_ordem + n);

    for(int i = 0; i < n; i++){
        if(origem[i] != v_ordem[i]){
            wrong++;
            aux[j] = origem[i];
            j++;
        }
    }

    sort(aux, aux + j);    
    bool flag = true;

    cout << wrong << endl;
    for(int i = 0; i < j; i++){
        if(flag == true) {       
            cout << aux[i];
            flag = false;
        }else
            cout << " " << aux[i];
    }

    cout << endl;
    return 0;
}