#include<iostream>
using namespace std;
class base{
    public :
    int varB=5;
    virtual void display(){
        cout<<"value of base variable "<<varB<<endl;
    }
};
class derived: public base {
    public :
    int varD=7 ;
    void display(){
        cout<<"value of base variable "<<varB<<endl;
        cout<<"value of derived variable "<<varD<<endl;    }
};
int main(){
    base *base_ptr;
    base objB;
    derived objD;
    base_ptr =&objD;
    base_ptr->display();
}