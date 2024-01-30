#include<iostream>
using namespace std;
// Base class
class employee{
    public :
    int id ;
    float salary ;
    employee(){}
    employee(int inpid){
        salary =34.0;
        id=inpid;
        
    }
    void getdata(void){
        cout<<id<<"  "<<salary<<endl;

    }
};

class programmer : public  employee {       ///default visibility mode is private/////
    public :
    programmer(int inpid){
        id=inpid;
    }
    void getdata(){
        cout<<id<<" "<<endl;
    }
    int languagecode=9;
};


int main(){
    employee harry(1), golu(2);
    harry.getdata();
    golu.getdata();
    programmer skillf(3);
    //skillf.getdata();
    cout<<skillf.id;
    return 0;
}