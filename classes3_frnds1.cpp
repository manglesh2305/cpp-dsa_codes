#include<iostream>
using namespace std;
//Forward declaration 
class complex ;
class calculator{
    public:
    int add(int a, int b){
        return(a+b);
    }
    int sumrealcomplex(complex , complex );  //declaration 
    /*{
   return (o1.a+o2.a); 
    }*/
    int sumcompcomplex(complex , complex);
};
class complex{
    int a,b;
    //individually declaring function as a friend
    //friend int calculator :: sumrealcomplex(complex , complex);
    //friend int calculator :: sumcompcopmlex(complex , complex);

    // Declaring entire class as a friend 
    friend class calculator ;
    public:
    void setNumber(int n1, int n2){
        a=n1;
        b=n2;
    }
    void printNumber(){
        cout<<"your number is "<<a<<"+"<<b<<"i"<<endl;
    }
};
int calculator :: sumrealcomplex(complex o1, complex o2){
    return (o1.a+o2.a);
    }
int calculator :: sumcompcomplex(complex o1 , complex o2){
    return (o1.b+o2.b);
}

int main(){
    complex o1,o2;
    o1.setNumber(1,4);
    o2.setNumber(5,7);
    calculator calc ;
    int res=calc.sumrealcomplex(o1,o2);
    cout<<"sum of real part of o1 and o2 is "<<res<<endl;
    int resc=calc.sumcompcomplex(o1,o2);
    cout<<"sum of complex part of o1 and o2 is "<<resc<<endl;
    return 0;
}
