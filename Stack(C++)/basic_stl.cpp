#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<int> st;
    cout<<st.size()<<endl;
    st.push(40);
    st.push(30);
    st.push(20);
    st.push(90);
    cout<<st.size()<<endl;
    st.pop();
    cout<<st.size()<<endl;

    //Accesing element from the stack in the reverse order;->empty in the space
    while(st.size()>0){
        cout<<st.top();
        st.pop();
    }

    //Accesing elemnet without deleting the elements
}