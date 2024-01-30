#include<iostream>
using namespace std;
class node{
    public:
     int data;
    node* next;
    node(int value){
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
int length(node* head){
    int l=0;
    node* temp =head;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    return l;
}
node* kappend(node* head, int k){
     node* newhead;
     node* newtail;
     node* tail=head;
     int l=length(head);
     k=k%l;
     int count=1;
     while(tail->next!=NULL){
        if(count==l-k){
            newtail=tail;
        }
        if(count==l-k+1){
            newhead=tail;
        }
        tail=tail->next;
        count++;
     }
     newtail->next=NULL;
     tail->next=head;
     return newhead;
}
int main(){
    node* head=NULL;
    return 0;
}