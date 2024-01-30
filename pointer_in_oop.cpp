#include<iostream>
using namespace std ;
class complex {
    int real, imaginary ;
    public :
    void get_data(){
        cout<<"real part is "<<real<<endl;
        cout<<"imaginary part is "<<imaginary<<endl;
    }
    void set_data(int a, int b){
        real=a;
        imaginary=b;
    }
};
int main(){
    complex *ptr = new complex[3];
    ptr->set_data(1,5);
    ptr->get_data();
    (ptr+1)->set_data(5,8);
    (ptr+1)->get_data();
    (ptr+2)->set_data(6,3);
    (ptr+2)->get_data();
    return 0;
}
