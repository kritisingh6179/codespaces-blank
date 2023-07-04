#include<bits/stdc++.h>
using namespace std;
stack<int> a(stack<int> &input){
    stack<int>temp1;
    cout<<"pushing"<<endl; 
    while(!input.empty()){
        int x=input.top();
        input.pop();
        cout<<x<<endl;
        temp1.push(x);
    }
    stack<int> temp2;
    cout<<"pushing 2"<<endl;
    while(!temp1.empty()){
        int y=temp1.top();
        temp1.pop();
        cout<<y<<endl;
        temp2.push(y);
    }
    return temp2;
}
int main(){
    stack<int> st;
  st.push(1);
  st.push(2);
  st.push(3);
  stack<int> copy=a(st);
  while(!copy.empty()){
      int  z=copy.top();
      copy.pop();
      cout<<z<<endl;
  }
    return 0;
}
