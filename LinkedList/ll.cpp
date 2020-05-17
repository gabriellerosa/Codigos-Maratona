#include <iostream>

using namespace std;

Node head;

typedef struct Node(){
    
    int date;
    Node next;        

} Node;

void addBack(Node no){

    Node atual = head;

    while( atual.next != null){
        
        atual = atual.next;

    }
    atual.next = no;

}

int main(){


    return 0;
}