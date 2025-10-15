#include <iostream>
using namespace std;
int main(){
   int num=5;

   cout<<num<<endl;

   //adress of operator

   cout<<"Address of the num: "<<&num<<endl;

   int *ptr=&num;

   cout<<"Address is: "<<ptr<<endl;
   cout<<"Value is: "<<*ptr<<endl;

   double d2= 4.2;
   
   double *ptr2=&d2;

   cout<<"Address is: "<<ptr2<<endl;
   cout<<"Value is: "<<*ptr2<<endl;

   cout<<"size of int: "<<sizeof(num)<<endl;
   cout<<"Size of pointer: "<<sizeof(ptr)<<endl;


   return 0;
}