#include<iostream>
using namespace std ;
class base1{
    int data1 ;
    public :
    base1(int i) : data1(i){                  ////data initialisation////
       // data1=i;
        cout<<"base1 class constructor called "<<endl;
    }
    print_datab1(){
        cout<<"value of data1 "<<data1<<endl;
    }};
class base2{
    int data2 ;
    public :
    base2(int i){
        data2=i;
        cout<<"base2 class constructor called "<<endl;
    }
    print_datab2(){
        cout<<"value of data2 "<<data2<<endl;
    }};
class derived : public base1 , public base2 {
    int derived1 , derived2;
    public :
    derived(int a,int b, int c, int d): base1(a), base2(b){
        derived1=c;
        derived2=d;
        cout<<"derived wala constructor called"<<endl;
    }
    void print_datadr(){
        cout<<"value of derived1 one is "<<derived1<<endl;
        cout<<"value of derived2 one is "<<derived2<<endl;
    }
};
int main(){
    derived harry(1,2,3,4);
    harry.print_datab1();
    return 0;
}