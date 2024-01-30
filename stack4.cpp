#include<bits/stdc++.h>
using namespace std;
int prefix(string st){
    stack<int> s;
    for(int i=st.length()-1;i>=0;i++){
        if(st[i]>'0' && st[i]<'9'){
            s.push(st[i]);
        }
        else{
            int op1=s.top();
            s.pop();
            int op2=s.top();
            s.pop();
            switch(st[i]){
                case '+':
                s.push(op1+op2);
                break;
                case '-':
                s.push(op1-op2);
                break;
            }
        }
    }
    return s.top();
}
int prec(char c){
    if(c=='^') return 3;
    else if(c=='*' || c=='/') return 2;
    else if(c=='+' || c=='-') return 1;
    else return -1;
}
string infixToPostfix(string s){
    stack<char> st;
    string res;
    for(int i=0;i<s.length();i++){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
              res+=s[i];
        }
        else if(s[i]=='(') st.push(s[i]);
        else if(s[i]==')'){
            while(!st.empty() && st.top()!='('){
                res+=st.top();
                st.pop();
            }
            if(!st.empty()){
                st.pop();
            }
        }
        else{
            while(!st.empty() && prec(st.top())>prec(s[i])){
                res+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        res+=st.top();
        st.pop();
    }
    return res;
}