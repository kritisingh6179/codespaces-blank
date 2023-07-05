//remove from any index

#include<bits/stdc++.h>
using namespace std;
//iterative
// void f(stack<int> &st,int pos){
//     int n=st.size();
//     int count=0;
//     stack<int>temp;
//     while(count<n-pos-1){
//         int curr=st.top();
//         st.pop();
//         temp.push(curr);
//         count++;
//     }
//     st.pop();
//     while(!temp.empty()){
//         int a=temp.top();
//         temp.pop();
//         st.push(a);
//     }
// }
//recursive
void f(stack<int>&st,int pos){
    //int n=st.size();
    if(pos+1==0){
        st.pop();
        return;
    }
    int curr=st.top();
    st.pop();
    f(st,pos-1);
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
 f(st,2);
 while(!st.empty()){
     int curr=st.top();
     st.pop();
     cout<<curr<<endl;
 }
    return 0;
}
