#include <iostream>

using namespace std;

int main(){
    int n, atu, ant, i, v[110], ok = 0, ta = 0;

    cin >> n;
    
    cin >> ant;
    v[1] = ant;
    for(i = 2; i <= n; n++){
       cin >> atu;
       v[i] = atu;

       if(v[i] > v[i-1]){
          ok++;  
       }else if(v[i] < v[i-1]){
          ta++;  
       }else{ 
            break; 
       }
    } 
 
    if(n%2 == 0 && ta == ok){
       cout << "1" << endl;     
    }else if(n%3 != 0 && (ta == ok+1 || ok == ta+1))
       cout << "1" << endl;   
    else
        cout << "0" << endl;

    return 0;
}