#include<iostream>
using namespace std ;
class Base{
    int data1 ;
    public :
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
void Base :: setdata(void){
    data1=10;
    data2=20;
}
int Base :: getdata1(void){
    return data1;
}
int Base :: getdata2(void){
    return data2;
}
class derived : public Base {
    int data3;
    public :
    void process();
    void display();
};
void derived :: process(){
    data3=data2 * getdata1();                        //since data1 is private so we used getdata() function //
}
void derived :: display(){
    cout<<"value of data1 is "<<getdata1()<<endl;
    cout<<"value of data2 is "<<data2<<endl;
    cout<<"value of data3 is "<<data3<<endl;
}
int main(){
    derived der;
    der.setdata();
    der.process();
    der.display();
    return 0;
}