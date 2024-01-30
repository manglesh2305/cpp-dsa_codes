#include<iostream>
using namespace std;
class student{
    private:
    int roll_no;
    public:
    void get_data(){
        cout<<"enter roll number";
        cin>>roll_no;
    }
    void show(){
        cout<<roll_no;
    }
};
class marks:public student{
    private:
    int mark[3];
    public:
    marks(int m1,int m2, int m3){
        mark[0]=m1;
        mark[1]=m2;
        mark[2]=m3;
    }
    int total(){
        return mark[0]+mark[1]+mark[2];
    }
    void show_data(){
        get_data();
        show();
        int t=total();
        cout<<t;
    }
};
int main(){
    marks m(10,20,30);
    m.show_data();
    return 0;
}