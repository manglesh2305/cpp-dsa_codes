#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* prev;
    node* next;
    node(int value)
    {
        data=value;
    }
};
void display(node* head)
{
    node* ptr=head;
    while(ptr->next!= NULL)
    {
        cout<<ptr->data<<"<=>";
        ptr=ptr->next;
    }
    while(ptr != head)
    {
        cout<<ptr->data<<"<=>";
        ptr=ptr->prev;
    }
    cout<<ptr->data;
}
int main()
{
    node* N1=new node(5);
    node* N2=new node(10);
    node* N3=new node(15);
    node* N4=new node(20);
    N1->prev=NULL;
    N1->next=N2;
    N2->prev=N1;
    N2->next=N3;
    N3->prev=N2;
    N3->next=N4;
    N4->prev=N3;
    N4->next=NULL; 
    display(N1);
    return 0;  
}