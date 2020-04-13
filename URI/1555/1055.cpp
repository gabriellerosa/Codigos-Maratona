#include <iostream>

using namespace std;

int r(int x, int y){
    int ans = 0;

    ans = (3*x)*(3*x) + (y)*(y);

    return ans;
}

int b(int x, int y){
    int ans = 0;

    ans = 2*(x*x) + (5*y)*(5*y);
    return ans;
}

int c(int x, int y){
    int ans = 0;
    
    ans = -100*x + y*y*y;
    return ans;
}

int main(){

    int n;
    cin >> n;

    while(n--){
        int x, y;
        cin >> x >> y;

        if( r(x, y) > b(x, y) && r(x, y) > c(x, y))
            cout << "Rafael ganhou" << endl;

        else if( b(x, y) > r(x, y) && b(x, y) > c(x, y) )
            cout << "Beto ganhou" << endl;

        else 
            cout << "Carlos ganhou" << endl;

    }

    return 0;
}