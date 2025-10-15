#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int k;
    cout<<"Enter the value of k: ";
    cin>>k;
    k=k%n;//for k>n
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   int temp[n];
   for(int i=0;i<k;i++){
    temp[i]=arr[n-k+i];
   }
   for(int i=0;i<n-k;i++){
    temp[i+k]=arr[i];
   }
   for(int i=0;i<n;i++){
    arr[i]=temp[i];
   }

   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
} 