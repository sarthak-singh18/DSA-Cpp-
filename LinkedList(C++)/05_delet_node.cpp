#include <iostream>
using namespace std;
class Node{
    public:
    int value;
    Node* next;
    Node(int value){
        this->value=value;
        this->next=NULL;
    }
};
void display(Node* head){
    while(head!=NULL){
        cout<<head->value<<" ";
        head=head->next;
    }
}

void deleteNode(Node* head,Node* target){
    if(head==target){
        head=head->next;
        
    }
    Node* temp=head;
    while(temp->next!=target){
        temp=temp->next;
    }
    temp->next=temp->next->next;
    
}
int main(){
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    Node* e=new Node(50);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    
    Node* head=a;
    display(head);
    cout<<endl;
    
    deleteNode(head,d);
    display(head);
}