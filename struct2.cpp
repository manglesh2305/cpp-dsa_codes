#include<iostream>
using namespace std;
struct NAME 
{
    char first_name[10];
    char last_name[10];
};
struct DOB
{
    int dd,mm,yr;
};
struct student  
{
    struct NAME name ;
    struct DOB dob;
}Golu;
int main()
{
    cin>>Golu.name.first_name>>Golu.name.last_name;
    cin>>Golu.dob.yr;
    cout<<Golu.name.first_name<<endl<<Golu.dob.yr<<endl;
    return 0;
}
