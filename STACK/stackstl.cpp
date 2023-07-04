#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> a;
    a.push(2);
    a.push(3);
    a.push(1);
    a.pop();
    cout<<a.size()<<endl;
    cout<<a.top()<<endl;
    cout<<a.empty();
    return 0;
}