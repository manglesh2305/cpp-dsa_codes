#include<iostream>
//#include<string>
using namespace std;
string rev_str(string m, int n)
{   
    for(int i=0; i<n; i++)
    {
        swap(m[i],m[n-i+1]);
    }
    return m;
}
int main()
{
    // str[6]="HELLO" ;
    // name[20];
   // cin.getline(name,' ');
   // cout<<"welcome "<<name ;          //ASCII code for A to Z varies from 65 to 91//
    string a="Manglesh";                //ASCII code for a to z varies from 97 to 123//
    string b="Yadav";
    string d=a+" "+b;
    swap(a,b);
    cout<<a<<endl;
    int x,y;
    x=12;
    y=34;
    swap(x,y);
    cout<<y<<endl;
    int n;
    cout<<"enter n "<<endl;
    cin>>n;
    char m[n+1];
    for(int i=0; i<n; i++)
    {
        cin.getline(m,n+1);
    }
    cout<<rev_str(m,n);
    return 0 ;
}