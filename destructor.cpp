#include<iostream>
using namespace std;
int count=0;
class num{
    public :
    num(){
        count++ ;
        cout<<"constructor is called for object "<<count<<endl;
    }
    ~num(){
        cout<<"destructor is called for object "<<count<<endl;
        count-- ;
    }
};
int main(){
    cout<<"entering to main function"<<endl;
    cout<<"creating one object"<<endl;
    num n1 ;
    {
        cout<<"entering in the block"<<endl;
        cout<<"creating two more object"<<endl;
        num n2, n3 ;
        cout<<"exiting from the block"<<endl;
    }
    cout<<"back to main"<<endl;
    return 0;
}