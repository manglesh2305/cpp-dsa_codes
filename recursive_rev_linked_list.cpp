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
node* recursive_rev(node* &head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    node* new_head=recursive_rev(head->next);
    head->next->next=head;
    head->next=NULL;
    return new_head;
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
    node* head=new node(1);
    node* second=new node(2);
    node* third=new node(3);
    node* fourth=new node(4);
    node* fifth=new node(5);
    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    head=recursive_rev(head);
    display(head);
    cout<<head->next->data<<" "<<head->next->next->data;
    return 0;
}