#include <iostream>

using namespace std;

long long mdc(long long a, long long b){

    return (b == 0 ? a : mdc(b, a % b));
}

int main(){

    long long a, b, c, d;
    char lixo, op, lixo2;
    int n;

    cin >> n;

    while(n--){

        cin >> a >> lixo >> b >> op >> c >> lixo2 >> d;
        long long cima, baixo;
        
        switch(op){

            case '+':
                cima = (a * d) + (b * c);
                baixo = b * d;
            
                cout << cima << "/" << baixo << " = " << cima/mdc(cima, baixo) << "/" << baixo/mdc(cima, baixo) << endl;   
                break;
            case '-':
                cima = (a * d) - (b * c);
                baixo = b * d;    

                cout << cima << "/" << baixo << " = " << cima/mdc(abs(cima), abs(baixo)) << "/" << baixo/mdc(abs(cima), abs(baixo)) << endl;
                break;
            case '*':
                cima = a * c;
                baixo = b * d;

                cout << cima << "/" << baixo << " = " << cima/mdc(cima, baixo)<< "/" << baixo/mdc(cima, baixo) << endl;
                break;
            case '/':
                cima = a*d;
                baixo = b*c;
        
                cout << cima << "/" << baixo << " = " << cima/mdc(cima, baixo) << "/" << baixo/mdc(cima, baixo) << endl;
                break;
        }    
    }

    //cout << "\n";

    return 0;
}