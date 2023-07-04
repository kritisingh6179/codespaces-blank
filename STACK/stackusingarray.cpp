#include <bits/stdc++.h>
using namespace std;
class Stack
{
    int capacity;
    int *arr;
    int top;

public:
    Stack(int c)
    {
        this->capacity = c;
        arr = new int[c];
        top = -1;
    }
    void push(int data)
    {
        if (this->top == this->capacity - 1)
        {
            cout << "Overflow \n";
            return;
        }
        this->top++;
        this->arr[this->top] = data;
    }
    void pop()
    {
        if (this->top == -1)
        {
            cout << "Underflow\n";
            return;
        }
        this->top--;
    }

    int size()
    {
        return this->top + 1;
    }
    void gettop()
    {
        cout << this->arr[this->top] << endl;
    }
    bool isempty()
    {
        return this->top == -1;
    }
    bool isFull()
    {
        return this->top == this->capacity - 1;
    }
};
int main()
{
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.gettop();
    st.pop();
    st.gettop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    return 0;
}