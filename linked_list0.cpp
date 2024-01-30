#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node(int val)
    {
        data = val;
        next=NULL;
    }
};
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
void insertion_in_between(node* &head, int val, int index)
{
    node* ptr=new node(val);
    node* temp= head ;
    int i=0;
    while(i != index-1)
    {
        temp=temp->next;
        i++ ;
    }
    ptr->next=temp->next;
    temp->next=ptr;
}
void insertion_at_begining(node *&head, int val)
{
    node* ptr=new node(val);
    ptr->next=head;
    head=ptr;
}
void insertion_at_end(node* &head, int val)
{
    node* ptr=new node(val);
    node* temp=head;
    while(temp->next != NULL)
    {
        temp=temp->next;
    }
    temp->next=ptr;
}
node* rev_linked_list(node* &head)
{
    node* prev=NULL;
    node* current=head;
    node* nextptr;
    while(current != NULL)
    {
        nextptr=current->next;
        current->next=prev;
        prev=current;
        current=nextptr;
    }
    return prev ;
}
node* recursive_rev(node* &head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    node* newhead=recursive_rev(head->next);
    head->next->next=head;                         /*  newhead->next=head; */
    head->next=NULL;
    return newhead;
}
int main()
{
    node* head=new node(1);
    node* second=new node(2);
    node* third=new node(3);
    head->next=second;
    second->next=third;
    insertion_in_between(head,5,2);
    display(head);
    insertion_at_begining(head,9);
    display(head);
    insertion_at_end(head,8);
    display(head);
    head=rev_linked_list(head);
    display(head);
    head=recursive_rev(head);
    display(head);
    return 0;
}