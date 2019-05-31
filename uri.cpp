#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>

using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2){
    if(p1.first == p2.first) // pesos iguais

        return p1.second < p2.second;

    else

        return p1.first > p2.first;
}

bool ordem(pair<int, int> p1, pair<int, int> p2){

        return p1.second < p2.second;    
}

int main(){   

    vector<pair <int , int > > vet;

    int n, id, a, b, c, ident, i, aux, qtd, aux2;

    scanf("%d", &n); //cin >> n;

    while(n!=0){

        vet.clear();

        scanf("%d %d", &ident, &qtd); //cin >> ident >> qtd;

        for(i = 0; i < ident ; i++){           
            scanf("%d %d %d %d", &id, &a, &b, &c); //cin >> id >> a >> b >> c;
            vet.push_back(make_pair(a*b*c, id));

        }

        sort(vet.begin(), vet.end(), comp);
        sort(vet.begin(), vet.begin()+qtd, ordem);

        for(i = 0; i < qtd-1; i++){  // colocou qtd -1 pois nao queremos q o espaço saia no ultimo valor

            printf("%d ", vet[i].second); //cout<< vet[i].second << " ";

        }

        printf("%d\n", vet[qtd-1].second); //cout << vet[qtd-1].second << endl;

        /*for(i=0; i < qtd; i++){
            cout << vet[i].first << " ID: " << vet[i].second << endl;
        }*/
        n--;
    }

    return 0;

}
