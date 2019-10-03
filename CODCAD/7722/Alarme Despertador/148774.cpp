#include <iostream>
using namespace std;
int main () {
  
  int H1, M1, H2, M2;
  
  while (cin>>H1>>M1>>H2>>M2) {
    if (H1==0 and M1==0 and H2==0 and M2==0) {
    cout<<" ";
      
    }
    else if ((60*H1)+M1<(60*H2)+M2){
      
      cout<<-((60*H1)+M1)+(60*H2)+M2<<endl;
   
    }else{
        cout<<1440-((60*H1+M1)-(60*H2+M2))<<endl;
    }
  }
}