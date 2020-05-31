#include <iostream>

using namespace std;

int main(){
    
    int n, r, i = 0;
    cin >> n >> r;

    if(n >= 10){
        cout << r << endl;
    }else{
        cout << r + 1000 - 100 * n << endl;
    }

    //r = nota mostrada [display raiting]
    //i = inner rating
    //r = i - 100 * ( 10 - n )

    return 0;
}
