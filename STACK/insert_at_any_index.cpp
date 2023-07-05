//insert at any index
#include<bits/stdc++.h>
using namespace std;
//iterative
// void f(stack<int> &st,int x,int idx){
//   stack<int>temp;
//   int n=st.size();
//   int count=0;
//   while(count<n-idx){
//       count++;
//       int curr=st.top();
//       st.pop();
//       temp.push(curr);
//   }
//   st.push(x);
//   while(!temp.empty()){
//       int y=temp.top();
//       temp.pop();
//       st.push(y);
//   }
// }

//recursive
void f(stack<int> &st,int x,int idx){
    int n=st.size();
    if(idx==0){
        st.push(x);
        return;
    }
    int curr=st.top();
    st.pop();
    f(st,x,idx-1);
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
 f(st,4,3);
 while(!st.empty()){
     int curr=st.top();
     st.pop();
     cout<<curr<<endl;
 }
    return 0;
}
