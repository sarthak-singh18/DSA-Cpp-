#include <iostream>
#include <vector>
using namespace std;
void subarray(vector<int> &arr){
    for(int i=0;i<5;i++){
        for(int j=i;j<5;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k];
            }
            cout<<" ";
        }
        cout<<endl;
    }
}
int main(){
    vector<int> arr={1,2,3,4,5};
    subarray(arr);
}