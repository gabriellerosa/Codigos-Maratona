#include<iostream>
#include<vector>
#include<string>
#include<stdio.h>

using namespace std;

int main(){
    
    int i;
    char c;
    vector<char> v(127);

    v['`']= '`';
    v['1']= '`'; 
    v['2']= '1';
    v['3']= '2'; 
    v['4']= '3';
    v['5']= '4';  
    v['6']= '5';
    v['7']= '6';
    v['8']= '7';
    v['9']= '8';
    v['0']= '9';
    v['-']= '0';
    v['=']= '-';
    v['Q']= 'Q';
    v['W']= 'Q'; 
    v['E']= 'W';
    v['R']= 'E'; 
    v['T']= 'R'; 
    v['Y']= 'T'; 
    v['U']= 'Y';
    v['I']= 'U';
    v['O']= 'I'; 
    v['P']= 'O';   
    v['[']= 'P';
    v[']']= '[';
    v['\\']= ']';
    v['A']= 'A';
    v['S']= 'A';
    v['D']= 'S';
    v['F']= 'D';
    v['G']= 'F';
    v['H']= 'G';
    v['J']= 'H';
    v['K']= 'J';
    v['L']= 'K';
    v[';']= 'L';
    v['\'']= ';';
    v['Z']= 'Z';
    v['X']= 'Z';
    v['C']= 'X';
    v['V']= 'C';
    v['B']= 'V'; 
    v['N']= 'B';
    v['M']= 'N';
    v[',']= 'M';
    v['.']= ',';
    v['/']= '.';
    v[' ']= ' ';    

    while((c = getchar()) != EOF){
      if (c == '\n') cout << endl;      
      else cout << v[c];
    }
    cout << endl; 

    return 0;
}