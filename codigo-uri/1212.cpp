#include <iostream>

using namespace std;

int main(){

   int n1, n2, aux1 = 0, aux2 = 0, res=0, carry = 0 , ad = 0;
   
   cin >> n1 >> n2;
   while( n1 != 0 || n2 != 0){ 
       while( n1 > 0 || n2 > 0 ){
          aux1 = n1%10;
          aux2 = n2%10;
    
          res = aux1 + aux2 + ad;
          ad = 0;  
    
          n1 = n1/10;
          n2 = n2/10;
    
          if ( res >= 10 ){
            carry++;
            ad = 1;
          }       
       } 
        ad = 0;
   if(carry == 0) 
        cout << "No carry operation."<< endl;
   else 
        if (carry == 1)
            cout << carry << " carry operation." << endl;
        else
            cout << carry << " carry operations." << endl; 
    carry = 0;
    cin >> n1 >> n2;
  }
   return 0;
}