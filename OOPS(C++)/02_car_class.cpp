#include <iostream>
using namespace std;
class Car{
    public:
    string name;
    int price;
    int seats;
};

void Print(Car c){
    cout<<c.name<<" "<<c.price<<" "<<c.seats<<endl;
}

int main(){
    Car c1;
    c1.name="Fortuner";
    c1.price=4000000;
    c1.seats=7;

    Car c2;
    c2.name="Mercedes";
    c2.price=5000000;
    c2.seats=6;

    Car c3;
    c3.name="Rolls Royce";
    c3.price=40000000;
    c3.seats=5;
    
    Print(c1);
    Print(c2);
    Print(c3);
}
