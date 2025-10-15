#include <iostream>
using namespace std;
class Student{
    public:
    string name;
    int rno;
    float gpa;

    Student(string s, int r, float g){
        name=s;
        rno=r;
        gpa=g;
    }
};
int main(){
    Student s1("Sarthak Singh",6,7.73);
    cout<<s1.name<<" "<<s1.rno<<" "<<s1.gpa;
}