#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    void getdata(int v1, int v2){
        a=v1;
        b=v2;
        cout<<"complex number is "<<a<<"+"<<b<<"i"<<endl;
    }
    void setdata(complex o1, complex o2){
        a=o1.a + o2.a ;
        b=o1.b + o2.b ;
        cout<<"complex number is "<<a<<"+"<<b<<"i"<<endl;
}
    };
int main(){
    complex c1,c2,c3;
    c1.getdata(1,2);
    c2.getdata(4,5);
    c3.setdata(c1,c2);
    return 0;
}