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
class queue
{
    node* front;
    node* back;
    public:
    queue()
    {
         front=NULL;
         back=NULL;
    }
    void enqueue(int value)
    {
        node* n=new node(value);
        if(front==NULL)
        {
            back=n;
            front=n;
            return;
        }
        back->next=n;
        back=n;
    }
    void dequeue()
    {
        if(front==NULL)
        {
            cout<<"queue underflow";
            return ;
        }
        node* f=front;
        cout<<"deleted element is "<<front->data<<endl;
        front=front->next;
        delete f;
    }
    int peek()
    {
        if(front==NULL)
        {
            cout<<"no element in queue";
            return -1;
        }
        return front->data;
    }
};
int main()
{
    queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    cout<<q.peek()<<endl;
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    cout<<q.peek();
    return 0;
}