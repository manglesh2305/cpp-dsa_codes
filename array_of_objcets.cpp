#include<iostream>
using namespace std;
class shop{
   int id ;
   float price ;
   public :
   void setData(int a, float b){
       id =a;
       price=b;}
    void getData(){
        cout<<"code of this item is "<<id<<endl;
        cout<<"price of this item is "<<price<<endl;
    }
};
int main(){
    int p;
    float q;
    int size=3;
    shop *ptr = new shop[size];
    shop *ptrtemp=ptr;
    for(int i=0;i<size;i++){
        cout<<"enter id and prize of item "<<i+1<<endl;
        cin>>p>>q;
        ptr->setData(p,q);
        ptr++;
    }
    for(int i=0;i<size;i++){
        cout<<"item number "<<i+1<<endl;
        ptrtemp->getData();
       // ptrtemp++;
    }

}