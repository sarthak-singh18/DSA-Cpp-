//Arrays Limatation
//1.fixed size 2.contigous memory location
//Creation of LL
#include <iostream>
using namespace std;
class Node{//LL Node
    public:
    int value;
    Node* next;
    Node(int value){
        this->value=value;
        next=NULL;
    }

};
void displayrec(Node* head){
    if(head==NULL) return;
    cout<<head->value<<" ";
    displayrec(head->next);
}

void rev_LL(Node* head){
    if(head==NULL) return;
    rev_LL(head->next);
    cout<<head->value<<" ";
}
int main() {
    
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    //forming LL
    a->next=b;
    b->next=c;
    c->next=d;
    // cout<<(a.next)->value;  //printing the value of b without using b 
    
    displayrec(a);
    cout<<endl;
    rev_LL(a);
}