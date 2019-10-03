#include<iostream>

using namespace std;

int main(){
    
    float sal, aju;
    
    cin >> sal;

    if( sal > 0 && sal <= 400){

        aju = sal*0.15;
        printf("Novo salario: %.2f\n", aju+sal);
        printf("Reajuste ganho: %.2f\n", aju);
        cout << "Em percentual: 15 %";
        cout << endl;
    }else if(sal >= 400.01 && sal <= 800){
        
        aju = sal*0.12;
        printf("Novo salario: %.2f\n", aju+sal);
        printf("Reajuste ganho: %.2f\n", aju);
        cout << "Em percentual: 12 %";
        cout << endl;
    }else if(sal >= 800.01 && sal <= 1200){
        
        aju = sal*0.10;
        printf("Novo salario: %.2f\n", aju+sal);
        printf("Reajuste ganho: %.2f\n", aju);
        cout << "Em percentual: 10 %";
        cout << endl;
    }else if(sal >= 1200.01 && sal <= 2000){
        
        aju = sal*0.07;
        printf("Novo salario: %.2f\n", aju+sal);
        printf("Reajuste ganho: %.2f\n", aju);
        cout << "Em percentual: 7 %";
        cout << endl;
    }else{
        aju = sal*0.04;
        printf("Novo salario: %.2f\n", aju+sal);
        printf("Reajuste ganho: %.2f\n", aju);
        cout << "Em percentual: 4 %";
        cout << endl;
    }       

    return 0;
}