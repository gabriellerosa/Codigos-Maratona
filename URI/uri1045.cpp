#include<iostream>
#include<algorithm>


using namespace std;

int main(){
    
    float a, v[3];

    for(int i = 0; i < 3; i++){
        cin >> a;
        v[i] = a;
    }

    sort(v, v+3, greater<float>());
    
    if(v[0] >= v[1]+v[2]){
        cout << "NAO FORMA TRIANGULO" << endl;
    }else{

    if( (v[0]*v[0]) ==  (v[1]*v[1])+(v[2]*v[2]) )
        cout << "TRIANGULO RETANGULO" << endl;

    if( (v[0]*v[0]) > (v[1]*v[1])+(v[2]*v[2]) )
        cout << "TRIANGULO OBTUSANGULO" << endl;

    if( (v[0]*v[0]) < (v[1]*v[1])+(v[2]*v[2]) )
        cout << "TRIANGULO ACUTANGULO" << endl;

    if(v[0] == v[1] && v[2] == v[1])
        cout << "TRIANGULO EQUILATERO" << endl;

    if( (v[0] == v[1] && v[2] != v[0]) || (v[2] == v[1] && v[2] !=v[0]) || (v[2] == v[0] && v[1] != v[2]))
        cout << "TRIANGULO ISOSCELES" << endl;
    }
    return 0;
}