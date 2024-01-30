#include<iostream>
using namespace std;
class stack
{
   public:
   int top;
   int size;
   char *arr;
};
//without using oops
int is_khali(stack* s)
{
    if(s->top==0)
    {
        return 1 ;
    }
    else{
        return 0;
    }
}
void push(stack* s, char c)
{
    s->top++ ;
    s->arr[s->top]=c;
}
void pop(stack *s)
{   
    int a=is_khali(s);
    if(a==1)
    {
        cout<<"stack underflow";
    }
    else{
        s->top--;
    }
}
int main()
{
    stack* s=new stack ;
    s->size=10;
    s->top=0;
    s->arr=new char[10];
    char expression[10];
    cout<<"enter expression";
    cin>>expression;
    for(int i=0;i<10;i++)
    {
        char e=expression[i];
        if(e=='(')
        {
            push(s,'(');
        }
        else if(e==')')
        {
            pop(s);
        }
    }
    if(s->top==0)
    {
        cout<<"correct expresion" ;
    }
    else{cout<<"wrong expression";}
    return 0;
}