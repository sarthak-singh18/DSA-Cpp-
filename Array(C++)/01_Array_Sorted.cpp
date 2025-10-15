//Chech whether the array is sorted or not in non decreasing order
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of arr: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int flag=1;
    for(int i=0;i<n;i++){
       if(arr[i]>arr[i+1]){
        flag=0;
        break;
       }
    
    }
    if(flag==1){
        cout<<"Array is sorted";
    }
    else{
        cout<<"Array is not sorted";
    }

}