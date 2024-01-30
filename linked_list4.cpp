#include<iostream>
#include<map>
using namespace std;
class node
{   public :
    int data ;
    node *next ;
    node(){
        next=NULL;
    }
   
};
int intersectPoint(node* head1, node* head2)
{
    // Your Code Here
    map<node*, int> m;
    while(head1)
    {
        m[head1]++;
        head1=head1->next;
    }
    while(head2)
    {
        m[head2]++ ;
        head2=head2->next;
    }
   
      map<node*,int> :: iterator it;
    for(auto it=m.begin(); it!=m.end(); it++)
    {
        if(it->second==2)
        {
            break;
        }
    }
    return it->first->data; 
}
int main()
{
     node* newNode;
 
    // Addition of new nodes
    node* head1 = new node();
    head1->data = 10;
 
    node* head2 = new node();
    head2->data = 3;
 
    newNode = new node();
    newNode->data = 6;
    head2->next = newNode;
 
    newNode = new node();
    newNode->data = 9;
    head2->next->next = newNode;
 
    newNode = new node();
    newNode->data = 15;
    head1->next = newNode;
    head2->next->next->next = newNode;
 
    newNode = new node();
    newNode->data = 30;
    head1->next->next = newNode;
 
    head1->next->next->next = NULL;
    intersectPoint( head1,  head2);
    return 0;
}