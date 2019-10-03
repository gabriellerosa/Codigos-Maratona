#include <iostream>

using namespace std;

int main(){
    double resul, num1, num2;
    char op;

    cin >> op >> num1 >> num2;

    if(op == 'M'){
        resul = num1*num2;
        printf("%.2f\n", resul);
    }else{
        resul = num1/num2;
        printf("%.2f\n", resul);
    }   

    return 0;
}