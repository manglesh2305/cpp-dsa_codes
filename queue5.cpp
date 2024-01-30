#include<iostream>
#include<queue>
using namespace std;
class stack
{
    int n ;
    queue<int> q1;
    queue<int> q2;
    public:
    stack()
    {
        n=0;
    }
    void push(int x)
    {
        q1.push(x);
        n++ ;
    }
    void pop()
    {
        if(q1.empty())
        {
            return ;
        }
        while(q1.size()!=1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        n-- ;
        queue<int> temp=q1;
        q1=q2;
        q2=temp;
    }
    int top()
    {
        if(q1.empty())
        {
            return -1 ;
        }
        while(q1.size() !=1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int ans=q1.front();
        q2.push(ans);
        queue<int> temp=q1;
        q1=q2;
        q2=temp;
        return ans ;
    }
};
int main()
{
    stack s;
    s.push(2);
    s.push(8);
    s.push(75);
    s.push(23);
    cout<<s.top();
    return 0;
}