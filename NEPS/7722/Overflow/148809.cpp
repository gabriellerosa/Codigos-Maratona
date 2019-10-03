#include <iostream>

using namespace std;

int main(){
    int max, num, num2;
    string opera;

    cin >> max >> num >> opera >> num2;
    if(opera == "*"){
        if(max < num*num2) 
            cout << "OVERFLOW" << endl;
        else   
            cout << "OK" << endl;
    }else{
        if(max < num+num2)
            cout << "OVERFLOW" << endl;
        else 
            cout << "OK" << endl;
    }    
    return 0;
}