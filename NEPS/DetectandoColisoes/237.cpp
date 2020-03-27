#include <iostream>

using namespace std;

int main(){

    int x1, y1, x2, y2;
    int x3, y3, x4, y4;

    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x3 >> y3 >> x4 >> y4;
    
    // se algum ponto passar entre x1 e x2
    if( (x3 > x2) || (y1 > y4) || (x4 < x1) || (y2 < y3) ){
        cout << "0" << endl;
    }else
        cout << "1" << endl;

    return 0;
}