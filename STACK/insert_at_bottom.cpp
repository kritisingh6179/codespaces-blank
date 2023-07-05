//insert at bottom 
//space-o(n) , time-o(n)
#include<bits/stdc++.h>
using namespace std;

//iterative  
// void f(stack<int> &st,int x){
//     stack<int> a;
//     while(!st.empty()){
//         int curr=st.top();
//         st.pop();
//         a.push(curr);
//     }
//     st.push(x);
//     while(!a.empty()){
//         int x=a.top();
//         a.pop();
//         st.push(x);
//     }
// }

//recursive approach
void f(stack<int>&st,int x){
    if(st.empty()){
        st.push(x);
        return;
    }
    int curr=st.top();
    st.pop();
    f(st,x);
    st.push(curr);
}
int main(){
    stack<int> st;
  st.push(1);
  st.push(2);
  st.push(3);
  int x;
  cout<<"Enter the no : "<<endl;
  cin>>x;
 f(st,x);
 cout<<"After inserting at bottom"<<endl;
 while(!st.empty()){
     int curr=st.top();
     st.pop();
     cout<<curr<<endl;
 }
    return 0;
}
