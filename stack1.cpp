#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(){}
    node(int value){
        data=value;
        next=NULL;
    }
};
//without using oops
int is_emp(node* top)
{
    if(top==NULL)
    {
        return 1 ;
    }
    return 0;
}
int is_full(node* top)
{
    node* n=new node();
    if (n==NULL){return 1;}
    return 0;
}
node* push(node* &top, int value)
{
    if(is_full(top))
    {
        cout<<"overflow";
    }
    else{
        node* n=new node(value);
        n->next=top ;
        top=n ;
        return top ;
    }
}
int pop(node* &top)
{
    if(is_emp(top))
    {
        cout<<"underflow";
    }
    else{
        node* n=top;
        top=top->next;
        int p=n->data;
        delete n ;
        return p ;
    }
}
void traversal(node* top)
{
    while(top != NULL)
    {
        cout<<top->data<<endl;
        top=top->next;
    }
}
int peek(node* top,int pos)
{
    node* ptr=top;
    for(int i=0;(i<pos-1 && ptr!= NULL);i++)
    {
        ptr=ptr->next;
    }
    if(ptr != NULL)
    {
        return ptr->data ;
    }
    else{return -1;}
}
int main()
{
    node* top=NULL;
    push(top,78);
    push(top,98);
    push(top,34);
    pop(top);
    traversal(top);
    int x=peek(top,2);
    cout<<x;
    return 0;
}