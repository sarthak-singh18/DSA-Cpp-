//Arrays Limatation
//1.fixed size 2.contigous memory location
//Creation of LL
#include <iostream>
using namespace std;
class Node{  //LL Node
    public:
    int value;
    Node* next;
    Node(int value){
        this->value=value;
        next=NULL;
    }

};
int main() {
    // 10 20 30 40
    // Node a;
    // a.value=10;
    // Node b;
    // b.value=20;
    // Node c;
    // c.value=30;
    // Node d;
    // d.value=40;

    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    //forming LL
    a.next=&b;
    b.next=&c;
    c.next=&d;
    // cout<<(a.next)->value;  //printing the value of b without using b
    
    Node temp=a;
    while(1){
        cout<<temp.value<<" ";
        if(temp.next==NULL) break;
        temp=*(temp.next);
    }
}

