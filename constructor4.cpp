#include<iostream>
using namespace std ;
class bank{
    int principal ;
    int years ;
    float rate ;
    float rvalue;
    public :
    bank(){}
    bank(int p, int y, float r);
    bank(int p,int y, int r);
    void show();
};
bank :: bank(int p, int y, float r){
    principal=p;
    years=y;
    rate=r;
    rvalue=principal;
    for (int i = 0; i < y; i++){
        rvalue=rvalue*(1+rate);
    }
}
bank :: bank(int p, int y, int r){
    principal=p;
    years=y;
    rate=float(r)/100;
    rvalue=principal;
    for (int i = 0; i < y; i++){
        rvalue=rvalue*(1+rate);
    }
}
void bank :: show()
{
    cout<<"value of money after" <<years<<"year is "<<rvalue<<endl;
} 
int main(){
    bank b1,b2,b3;
    int p ,y;
    float r;
    int R;
    cout<<"enter value of p,y,r ";
    cin>>p>>y>>r;
    b1=bank(p,y,r);
    b1.show();
    return 0;
}
    
