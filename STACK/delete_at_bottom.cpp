//remove from bottom
#include<bits/stdc++.h>
using namespace std;
//iterative approach
// void f(stack<int> &st){
//     stack<int> temp;
//     int n=st.size();
//     while(n>1){
//         int curr=st.top();
//         st.pop();
//         temp.push(curr);
//         n--;
//     }
//     st.pop();
//     while(!temp.empty()){
//         int x=temp.top();
//         temp.pop();
//         st.push(x);
//     }
// }
//recursive approach
void f(stack<int> &st){
    int n=st.size();
    if(n==1){
        st.pop();
        return;
    }
    int curr=st.top();
    st.pop();
    f(st);
    st.push(curr);
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
