#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream out;
    out.open("file.txt");
    string name;
    cout<<"enter your name : ";
    cin>>name;
    out<<name + " is my name\n ";
    out<<"i am fan of srk\n";
    out<<"i love cricket\n";
    out<<"i am practicing cpp";
    out.close();
    ifstream in ;
    in.open("file.txt");
    string st;
    while (in.eof()==0)
    {
        getline(in,st);
        cout<<st<<endl;
    }
    in.close();
    return 0;
    }