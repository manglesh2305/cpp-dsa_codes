 
#include<iostream>
using namespace std;
void reverse_dig(int &a,int &b)
{   int rem1,rem2,rev1=0,rev2=0;
    while(a!=0 ){
        rem1=a%10;
        rev1=(rev1*10)+rem1;
        //rem2=b%10;
        //rev2=(rev2*10)+rem2;
        a=a/10;
        //b=b/10;      
    }
    while(b!=0){
        rem2=b%10;
        rev2=rev2*10+rem2;
        b=b/10;
    }
    a=rev1;
    b=rev2;
    cout<<"value of a "<<rev1<<endl<<"value of b "<<rev2;}
        int main()
        {
            int a,b;
            cin>>a>>b;
            reverse_dig(a,b);
        return 0;
        }