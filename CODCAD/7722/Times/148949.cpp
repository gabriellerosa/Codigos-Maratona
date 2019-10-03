#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

vector< pair<int, string> > escola;
vector< vector<string> > aux;

bool comp(const pair<int,string> p1, const pair<int,string> p2)
{
      return (p1.first > p2.first);
}

int main(){
  
   int q, t, nota;
   string nome;

   cin >> q >> t;

   for(int i = 0; i < q; i++){
       cin >> nome >> nota;
       escola.push_back(make_pair(nota,nome));
   }

   sort(escola.begin(), escola.end(), comp);

aux.assign(t, vector<string>());

   for(int i = 0; i < t; i++){
      for(int j = i; j < q; j += t){
aux[i].push_back(escola[j].second);
      }
sort(aux[i].begin(), aux[i].end());
   }

for(int i = 0; i < t; i++){
cout << "Time " << i + 1 << endl;
for(int j = 0; j < aux[i].size(); j++){
cout << aux[i][j] << endl;
}
cout << endl;
}

   return 0;
}