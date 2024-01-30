#include<iostream>
using namespace std;
class number {
    int a;
    public :
    number(){     //////default constructor/////
        a=23;
    }
    number(int num){
        a=num;
    }
    number(number &obj){
        cout<<"copy constructor called"<<endl;                             /////COPY CONSTRUCTOR///////////
        a=obj.a;
    }                                                 //remember that compiler allocate a default copy constructer to every class//
    void display(){
        cout<<"value of a for this object is "<<a<<endl;
    }
};
int main(){
    number x(5),y,t;
    x.display();
    y.display();
    number z(x);
    z.display();
    t=x;          ////copy constructor not invoked//
    t.display();
    number z1 = x ;      ////////copy constructor invoked////////
    z1.display();
    return 0;
}