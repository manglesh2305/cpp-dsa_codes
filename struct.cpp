#include<iostream>
using namespace std;
typedef struct student 
{   
    int roll_number ;
    float marks ;
}cp;///////////////////////////////////////////// We can declare variable with assigned values here also before semicolon.
int main()
{
    cp Golu, Harry, Abhi ;
    Abhi={36,56.2};
    cout<<"enter roll number of student ";
    cin>>Golu.roll_number ;
    cout<<"enter marks obtained ";
    cin>>Golu.marks ;
    cout<<Golu.roll_number<<endl<<Golu.marks<<endl;
    Harry.roll_number=Golu.roll_number+1;
    Harry.marks=Golu.marks+5;
    cout<<Harry.roll_number<<endl<<Harry.marks<<endl;
    cout<<Abhi.roll_number<<endl<<Abhi.marks<<endl;
    return 0;
}