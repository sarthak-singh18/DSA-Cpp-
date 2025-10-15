#include <iostream>
using namespace std;
int main(){
    //Playing with the pointers;

    // int *p;   //bad practice wild pointers that refers to garbage value

    int i=5;

    int *q=&i;
    cout<<q<<endl;
    cout<<*q<<endl;

    //Null pointer:

    int *p=0;
    p=&i;
    cout<<p<<endl;
    cout<<*p<<endl;

    //Important Concept
    int *t=&i;
    cout<<(*t)++<<endl;

}