#include <iostream>
using namespace std;
#define n 100
class stack
{   
    int top;
    int* arr;
    public:
    stack()
    {
        arr=new int[n];
        top=-1;
    }
    void push(int x)
    {
        if(top==n-1)
        {
            cout<<"stack overflow";
            return ;
        }
        top++;
        arr[top]=x;
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"stack underflow";
            return;
        }
        top--;
    }
    int Top()
    {
        if(top==-1)
        {
            cout<<"stack underflow";
            return -1;
        }
        return arr[top];
    }
};
int main()
{
    stack s ;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
   // cout<<s.Top;
    return 0;
}