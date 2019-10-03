#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int i;
    double v[110], val;
	for(i = 0; i < 100; i++){
        cin >> val;
        v[i] = val;
    }

	for(i = 0; i <= 100; i++){
       if(v[i] <= 10.000000001){
            printf("A[%d] = %.1f", i, v[i]);
            cout << endl;
       }
	}
	return 0;
}