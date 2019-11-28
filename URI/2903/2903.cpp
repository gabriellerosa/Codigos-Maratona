#include <iostream>

using namespace std;

//complexidade : O(log b)
int mdc(int a, int b){

    if(b == 0){

        return a;        

    }
    return mdc(b, a % b);    

}

int main(){

    int r, R, resto_do_intR, x, ans;  //quando o cin lê um numero 11.52 (o que seria float), mas vc declarou como variável inteiro, o cin vai ler o 11 e assim q vc der outro cin char ignora o . e ler o 52 c cin dnv;
    char lixo;

    cin >> r >> lixo >> resto_do_intR;
    
    R = (r * 100) + resto_do_intR;
    //cout << R << " ";
    x = mdc(R, 36000); //proporcionalmente aumentamos o 360 para evitar os float    
    //cout << x << " ";
    ans = 36000/x;

    cout << ans << "\n";

    return 0;
}