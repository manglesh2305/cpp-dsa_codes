#include<iostream>
using namespace std;
int power(int n, int p)
{
    if(p==0)
    {
        return 1; 
    }
    int prev=power(n,p-1);
    return n*prev;
}
int fact(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    int prev=fact(n-1);
    return n*prev;
}
int fib(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    return fib(n-1)+fib(n-2);
}
int main()
{
    int p=power(2,5);
    cout<<p<<endl;
    cout<<fact(5);
    return 0;
}