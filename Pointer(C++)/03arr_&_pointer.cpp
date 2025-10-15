#include <iostream>
using namespace std;
int main(){
    
    int arr[10]={12,22,37};
    cout<<"Adrees of first block in memeory is: "<<arr<<endl;
    cout<<"Adress of first block in memort is: "<<&arr[0]<<endl;
    cout<<*arr<<endl;

    cout<<*(arr+2)<<endl;//arr ki position 2 block age hogyi hai

    //note;
    arr[0]=0[arr];  //both are same

    int temp[10];
    cout<<sizeof(temp)<<endl;

    int *ptr=&temp[0];
    cout<<sizeof(ptr)<<endl;


    int a[20]={1,2,3,4,5,6};
    cout<<&a[0]<<endl;

    int *p=&a[0];
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;


    //Char array
    int arr[5]={1,2,3,4,5};
    char ch[6]="abcde";


    cout<<arr<<endl; //it will show the address of array
    //attention
    cout<<ch<<endl; //output : abcde

    //note: cout function is differnetly implemented in arr and ch
    char *c=&ch[0];
    cout<<c<<endl; //prints entire string


//note;
    // char temp='z';
    // char *p= &temp;
    // cout<<p<<endl;

    
    
     
}