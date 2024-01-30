#include<iostream>
using namespace std;
class base{
    public :
    int varB;
    void display(){
        cout<<"value of base variable "<<varB<<endl;
    }
};
class derived: public base {
    public :
    int varD ;
    void display(){
        cout<<"value of base variable "<<varB<<endl;
        cout<<"value of derived variable "<<varD<<endl;    }
};
int main(){
    base *base_ptr ;
    base objB;
    derived objD;
    base_ptr = &objD;
    base_ptr->varB=56;
   // base_ptr->varD=12;------->>>>'will throw error'
    base_ptr->display();
    derived *derived_ptr;
    derived_ptr->varB=456;
    derived_ptr->varD=123;
    derived_ptr->display();
}
