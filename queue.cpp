#include<iostream>
using namespace std;
#define n 20
class queue{
    int front,back;
    int* arr;
    public:
    queue()
    {
        arr=new int[n];
        front=back=-1; 
    }
    void enqueue(int x)
    {
        if(back==n-1)
        {
            cout<<"queue overflow"<<endl;
            return;
        }
        back++;
        arr[back]=x;
        if(front==-1)
        {
            front++ ;
        }
    }
    void dequeue()
    {
        if(front==-1 || front>back)
        {
            cout<<"no elements in queue"<<endl;
            return;
        }
        cout<<"popped element is "<<arr[front];
        front++;
    }
    int peek(){
         if(front==-1 || front>back)
        {
            cout<<"no elements in queue"<<endl;
            return -1;
        }
        return arr[front];
    }
    bool empty()
    {
        if(front==-1 || front>back)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    int x=q.peek();
    cout<<x;
    return 0;
}
