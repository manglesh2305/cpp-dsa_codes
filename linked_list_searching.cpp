#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node(int value)
    {
        data=value;
        next=NULL;
    }
};
bool search(node* head, int value)
{
    node* temp;
    temp=head;
    while(temp != NULL)
    {
        if(temp->data==value)
        {
            return true ;
        }
        temp=temp->next;
    }
        return false ;   
}
bool recursive_search(node* head, int value)
{
    if(head==NULL)
    {
        return false;
    }
    if(head->data==value)
    {
        return true ;
    }
    else{
        return recursive_search(head->next,value);
    }
}
int main()
{
    node* head=new node(1);
    node* second=new node(2);
    node* third=new node(3);
    head->next=second;
    second->next=third;
    return 0;
}