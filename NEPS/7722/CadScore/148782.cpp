#include<iostream>

using namespace std;

int main(){

    int P,N,F,t=0;

    cin>>P>>N;

    t=P;

    for(int i=1; i<=N; i=i+1){

        cin>>F;

        t=t+F;

        if(t>=100){

            t=100;
        }

        if(t<=0){

            t=0;
        }
    }

        cout<<t<<"\n";

    return 0;
}