#include<iostream>
using namespace std ;
class base1 {
    protected :
       int base1int ;
    public :
       void set_base1int(int a){
           base1int = a ;
       }
};
class base2{
    protected :                                       //Remember ambiguidity resolution ////
       int base2int ;
    public :
       void set_base2int(int b){
           base2int = b;
       }
};
class derived : public base1 , public base2{
    public :
       void show(){
           cout<<"value of base1int is "<<base1int<<endl;
           cout<<"value of base2int is "<<base2int<<endl;
           cout<<"sum is "<<base1int+base2int<<endl;
       }
};
int main(){
    derived golu ;
    golu.set_base1int(23);
    golu.set_base2int(25);
    golu.show();
    return 0;
}