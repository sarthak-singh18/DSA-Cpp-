#include <iostream>
using namespace std;
class Student{//Student is a new data type
    public:
    string name;
    int rno;
    float gpa;
    
};

int main(){
    Student s1;
    s1.name = "Sarthak";
    s1.rno=6;
    s1.gpa = 7.73;

    Student s2;
    
    s2.name = "Virat";
    s2.rno = 18;
    s2.gpa= 8.2;

    cout<<s1.name<<" "<<s1.rno<<" "<<s1.gpa<<endl;
    cout<<s2.name<<" "<<s2.rno<<" "<<s2.gpa<<endl;
}