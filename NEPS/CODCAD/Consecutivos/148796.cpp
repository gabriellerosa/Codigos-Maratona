#include <iostream>

using namespace std;

int main(){
    
    int num, cons = 1, x, n1, consmaior = 0, laco;

    cin >> laco;

    cin >> num;
    x = num;
    for(int i = 1; i < laco; i++){
        cin >> num;
        //cout << "NUm vale: " << num << endl;
        if(num == x){
            cons++;            
            //cout << "Cons vale: " << cons << endl;
        }else{
            x = num;
            if(cons > consmaior){
                consmaior = cons;
                //cout << "consmaior : " << consmaior << endl;
            }
            cons = 1;
        }
    }
    if(cons > consmaior) consmaior = cons;
    cout << consmaior << endl;

    return 0;
}