#include<iostream>

using namespace std;

long long mdc(long long a, long long b){

  return (b == 0 ? a : mdc(b, a%b));
}

int main(){

    long long a, b, c, d, cima, baixo, aux = 0;

    cin >> a >> b >> c >> d;

    cima = (a*d) + (b*c);
    baixo = b*d;     

    aux = mdc(cima, baixo);

    cout << cima/aux << " " << baixo/aux << "\n";

    return 0;
}