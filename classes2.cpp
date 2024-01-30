#include<iostream>
using namespace std;
class shop{
    int itemId[100];
    int itemprice[100];
    int counter ;
public:
    void initcounter(void){
        counter=0;
    }
    void setprice(void);
    void displayprice(void);
};
//int shop:: counter;
void shop :: setprice(void){
    cout<<"enter id of your item"<<endl;
    cin>>itemId[counter];
    cout<<"enter price of item "<<endl;
    cin>>itemprice[counter];
    counter++;
}
void shop :: displayprice(void){
    for(int i=0;i<counter;i++){
        cout<<"price of item number "<<counter<<" with id "<<itemId[i]<<" is "<<itemprice[i]<<endl;
    }
}
int main(){
    shop dukaan,dukaan2;
    dukaan.initcounter();
    dukaan.setprice();
    dukaan.displayprice();
    dukaan2.initcounter();
    dukaan2.setprice();
    dukaan2.displayprice();
    return 0 ;
}
