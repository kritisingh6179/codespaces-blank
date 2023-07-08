//balanced paranthesis
//tc=o(n) sc=o(n)
#include <bits/stdc++.h>
using namespace std;
bool balancebracket(string a){
    stack<char> st;
    for(int i=0;i<a.size();i++){
        char ch=a[i];
        if(ch=='(' or ch=='{' or ch=='['){
            st.push(ch);
            //cout<<ch<<endl;
        }
        else{
            if(ch==')' and !st.empty() and st.top()=='('){
                st.pop();
            }
            else if(ch=='}' and !st.empty() and st.top()=='{'){
                st.pop();
            }
            else if(ch==']' and !st.empty() and st.top()=='['){
                st.pop();
            }else{
                return false;
            }
        }
        
    }
    return st.empty();
}
int main() {
    string a="({})";
    cout<<balancebracket(a);
    return 0;
}
