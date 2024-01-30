#include<iostream>
#include<stack>
using namespace std;
void revSen(string s)
{
    stack<string> st;
    for(int i=0; i<s.length();i++)
    {
        string word="";
        while(s[i]!=' ' && i<s.length())
        {
            word+=s[i];
            i++;
        }
        st.push(word);
    }
    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    } 
}
/* Reverse stack using recursion*/
 void insertAtBottom(stack<int> &st, int ele){
        if(st.empty()){
            st.push(ele);
        }
        int top=st.top();
        st.pop();
        insertAtBottom(st,ele);
        st.push(top);
    }
void  Reverse(stack<int> &st){
        if(st.empty()){
            return ;
        }
           int top=st.top();
           st.pop();
           Reverse(st);
           insertAtBottom(st,top);
    }
int main()
{
   
    string s="hey, how are you doing?";
    revSen(s);
    return 0;
}