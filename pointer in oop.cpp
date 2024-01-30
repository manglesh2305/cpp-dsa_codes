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
    return 0;
}
