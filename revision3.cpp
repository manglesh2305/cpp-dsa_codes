#include<iostream>
using namespace std;
class B;
class A{
    private:
    int x;
    friend class B;
    public:
    void set_data(){
        cout<<"enter x";
        cin>>x;
    }
    void get_data(){
        cout<<x;
    }
};
class B{
    private:
    int y;
    public:
    void set_data(){
        cout<<"enter y";
        cin>>y;
    }
    void get_data(){
        cout<<y;
        
    }
    void swap(A &a){
        int temp=a.x;
        a.x=y;
        y=temp;
    }
};
int main(){
    A a;
    B b;
    a.set_data();
    b.set_data();
    a.get_data();
    b.get_data();
    b.swap(a);
    a.get_data();
    b.get_data();
    return 0;
}