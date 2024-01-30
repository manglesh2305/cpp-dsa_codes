#include<iostream>
using namespace std;
class A{
   int a;
   public :
   void setdata(int a){
     this->a=a;                   ///this is a keyword which is a pointer which points to the object which invokes the member function.
   }
   void getdata(){
       cout<<"value of a for this object is "<<a<<endl;
   }
   A get_data()
   {
     return *this ;
   }
};
int main(){
    A a ,b;
    a.setdata(4);
    a.getdata();
    b.setdata(5);
    b.getdata();
    b.get_data();
    return 0;
}