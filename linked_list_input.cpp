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
void insert_at_tail(node* &head, int data)
{
   node* ptr= new node(data);
   if(head==NULL)
   {
       head=ptr;
       return ;
   }
   node* temp=head;
   while(temp->next != NULL)
   {
       temp=temp->next;
   }
   temp->next=ptr;
}
void input_linked_list(node* &head)
{
    int data ;
    cin>> data ;
    while(data != -1)
    {
        insert_at_tail(head,data);
        cin>>data;
    }
}
void display(node* head)
{
    node* temp=head;
    while(temp != NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
node* merge_sort(node* a, node*b)
{
   if(a==NULL)
   {
       return b;
   } 
   if(b==NULL)
   {
       return a;
   }
   node* c;
   if(a->data < b->data)
   {
       c=a;
       c->next=merge_sort(a->next,b);
   }
   else{
       c=b;
       c->next=merge_sort(a,b->next);
   }
   return c; 
}
int main()
{
    node* head=NULL;
    input_linked_list(head);
    display(head);
    return 0;
}