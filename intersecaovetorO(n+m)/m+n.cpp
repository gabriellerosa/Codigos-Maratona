#include <iostream>
 
using namespace std;
 
int main(){
   
    int A[15], B[15], a = 0, b = 0;
    int n, m, tot = 0;
       
    cin >> n;
 
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
 
    cin >> m;
 
    for(int i = 0; i < m; i++){
        cin >> B[i];
    }
   
    while(a <= max(n,m) && b <= max(n,m)){
        //cout << a << ": " << A[a] << ", " << b << ": " << B[b] << endl;
        if(A[a] == B[b]){
            tot++;
            a++;
            b++;
        }else{
            if(A[a] < B[b]){
                a++;    
            }else
                b++;
        }    
    }
   
    cout << tot << endl;
 
    return 0;
}