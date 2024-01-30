#include<iostream>
using namespace std;
class node{
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
node* rev_k_nodes(node* &head, int k)
{
    
}
int main()
{
    node* head=NULL;
    input_linked_list(head);
}