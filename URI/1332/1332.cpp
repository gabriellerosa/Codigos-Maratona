#include <iostream>
#include <string>

using namespace std;

int main(){

    int c;
    cin >> c;

    while(c--){
        string pal;
        cin >> pal;

        if(pal.size() == 5){
            cout << "3" << endl;
        }else if(pal[0] == 'o' && pal[1] == 'n' || pal[0] == 'o' && pal[2] == 'e' || pal[1] == 'n' && pal[2] == 'e'){
            cout << "1" << endl;
        }else{
            cout << "2" << endl;
        }    
    }

    return 0;
}