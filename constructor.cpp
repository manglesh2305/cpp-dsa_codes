#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    complex(int , int);   // constructor declaration////do not have return types and can't return.
    void printnumber(){
        cout<<"your number is "<<a<<"+i"<<b;
    }
};
/*complex :: complex(void) ////DEFAULT CONSTRUCTOR//////
{
    a=10;
    b=9;
  ///////  cout<<"hello world";////////
}*/
complex :: complex(int x, int y) ////parameterized CONSTRUCTOR//////
{
    a=x;
    b=y;
}
int main(){
    //implicit call
    complex a(4,6);
    //explicit call
    complex b = complex(5,2);
   /* complex c,m,n;
    m.printnumber();
    n.printnumber();
    c.printnumber();*/
    a.printnumber();
    b.printnumber();
    return 0;
}
