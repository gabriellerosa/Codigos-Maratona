#include <iostream>

using namespace std;

int main(){
    
    int horai, horaf, mini, minf, aux, auxm;

    cin >> horai >> mini >> horaf >> minf;

    if(horai > horaf){
        aux = 24 - horai;
        aux+= horaf;

        if(mini > minf){
            auxm = 60 - mini;
            auxm+= minf;
            cout << "O JOGO DUROU " << aux-1 << " HORA(S) E " << auxm << " MINUTO(S)" << endl;
        }else if(mini < minf){
            cout << "O JOGO DUROU " << aux << " HORA(S) E " << minf - mini << " MINUTO(S)" << endl;
        }else
            cout << "O JOGO DUROU " << aux << " HORA(S) E 0 MINUTO(S)" << endl;
        
    }else if(horai < horaf){
        aux = horaf - horai;
        
        if(mini > minf){
        auxm = 60 - mini;
        auxm+= minf;
        cout << "O JOGO DUROU " << aux-1<< " HORA(S) E " << auxm << " MINUTO(S)" << endl;
        }else if(mini < minf){
            cout << "O JOGO DUROU " << aux << " HORA(S) E " << minf - mini << " MINUTO(S)" << endl;
        }else
            cout << "O JOGO DUROU " << aux << " HORA(S) E 0 MINUTO(S)" << endl;
    }else{
        aux = 24;   
        if(mini > minf){
            auxm = 60 - mini;
            auxm+= minf;
            cout << "O JOGO DUROU " << aux-1 << " HORA(S) E " << auxm << " MINUTO(S)" << endl;
        }else if(mini < minf){
            cout << "O JOGO DUROU " << aux << " HORA(S) E " << minf - mini << " MINUTO(S)" << endl;
        }else
            cout << "O JOGO DUROU " << aux << " HORA(S) E 0 MINUTO(S)" << endl;
    }

    return 0;
}