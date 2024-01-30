#include<iostream>
using namespace std;
class sample{
    public :
    sample(){
        cout<<"constructor\n";
    }
    ~sample(){
        cout<<"destructor";
    }
};
main(){
    sample s;
}