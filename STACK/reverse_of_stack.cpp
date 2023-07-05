//remove from any index

#include<bits/stdc++.h>
using namespace std;
void f(stack<int>&st){
    stack<int>temp;
    while(!st.empty()){
        int curr=st.top();
        st.pop();
        temp.push(curr);
    }
    stack<int> temp1;
    while(!temp.empty()){
        int x=temp.top();
        temp.pop();
        temp1.push(x);
    }
    while(!temp1.empty()){
        int y=temp1.top();
        temp1.pop();
        st.push(y);
    }
    
}
int main(){
    stack<int> st;
  st.push(1);
  st.push(2);
  st.push(3);
    st.push(6);
  st.push(5);
  st.push(9);
 f(st);
 while(!st.empty()){
     int curr=st.top();
     st.pop();
     cout<<curr<<endl;
 }
    return 0;
}
