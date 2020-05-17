#include <iostream>

using namespace std;

int main(){

    int c;
    cin >> c;

    while(c--){

        int n;
        cin >> n;
        int v[n];

        for(int i = 0; i < n; i++){
            cin >> v[i];
        }

        int a = 0, b = (n - 1), movs = 0, sa = 0, sb = 0;
        bool flag = true;    
        int sum = 0, first = 1;
        int suma = 0;

        while(a <= b){
         
            movs++;
            //cout << movs << ") Jogada ------------------------ \n";
            if(flag){
                suma = 0;
                if(first == 1){
                    //cout << "Primeira vez da A\n";
                    first = 0;
                    suma = v[a];
                    a++;
                    flag = false;
                    sa = suma;
                    //cout << "A comeu agora " << suma << ", mas já comeu " << sa << endl;
                }else{
                    //cout << "Vez da A\n";
                    while(suma <= sum && a <= b){
                       suma += v[a];
                       a++;     
                    }
                    sa += suma;
                    flag = false;
                    //cout << "A comeu agora " << suma << ", mas já comeu " << sa << endl;
                }
            }else{
                sum = 0;
                //cout << "Vez da B\n";
                while(sum <= suma && a <= b){
                    sum += v[b];
                    b--;            
                }
                sb += sum;
                flag = true;
                //cout << "B comeu agora " << sum << ", mas já comeu " << sb << endl;
            }
        }
        //cout << "----------- Resultado final ------------";
        cout << movs << " " << sa << " " << sb << "\n";
    }

    return 0;
}