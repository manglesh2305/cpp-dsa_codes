#include<iostream>
using namespace std;
class employee{
    int id;
    static int count;   //default value is 0 .
    public:
    void setdata(void){
        cout<<"enter the id ";
        cin>>id;
        count++;
    }
    void getdata(void){
        cout<<"id of employee number "<<count<<" with id number "<<id<<endl;
    }
};
int employee :: count=100; //********//
int main(){
    employee fb[5];
    for (int i=0;i<5;i++){
        fb[i].setdata();
        fb[i].getdata();
    }
   /* golu.setdata();
    golu.getdata();
    harry.setdata();
    harry.getdata();
    mangu.setdata();
    mangu.getdata();*/ 
    return 0;
}
