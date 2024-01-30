#include<iostream>
using namespace std;
class node
{
    public :
    int data;
    node *next ;
    node(int value)
    {
        data=value;
        next=NULL;
    }
};
void deletion_at_begining(node* &head)
{
    node *ptr= head ;
    head=head->next;
    delete ptr ;
}
void deletion_in_between(node* &head, int index)
{
    node* ptr=head ;
    node* q=head->next;
    int i=1;
    while(i != index-1 )
    {
        ptr=ptr->next;
        q=q->next;
        i++ ;
    }
    ptr->next=q->next;
    delete q ;
}
void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
    node *head=new node(3);
    node *second=new node(5);
    node *third=new node(7);
    node *fourth=new node(9);
    head->next=second;
    second->next=third;
    third->next=fourth;
    deletion_in_between(head,2);
    //deletion_at_begining(head);
    display(head);
    return 0;
}