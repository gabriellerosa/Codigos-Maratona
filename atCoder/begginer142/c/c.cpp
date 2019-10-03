#include <iostream>
#include <map>
#include <utility>

using namespace std;

int main(){

    int n, num;
    map<int, int> aluno;
    pair<int, int> aux;

    cin >> n;

    for(int i = 1; i <= n; i++){
       /*cin >> num;
       aux = make_pair(num, i);
       aluno.insert(aux);*/
       cin >> num; 
       aluno.insert( make_pair(num, i) );
    }
    
    for(int i = 1; i <= n; i++){
        cout << " " << aluno[i];
    }
    cout << endl;

    return 0;
}