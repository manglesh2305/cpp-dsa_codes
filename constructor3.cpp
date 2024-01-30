#include<iostream>
using namespace std;
class complex{
    int a,b ;
    public :
    complex(){
        a=5;
        b=6;
    }
    complex(int x, int y){    ////constructor with default argument can't be use here ////////
        a=x;
        b=y;
    }
    complex(int x){
        a=x;
        b=5;
    }
    void printnum(){
        cout<<a<<"+ i"<<b<<endl;
    }
};
int main(){
    complex c1;  ///////**************///////
    c1.printnum();
    complex c2(5);
    c2.printnum();
    complex c3(8);
    c3.printnum();
    complex c4(6,9);
    c4.printnum();
    return 0;
}
