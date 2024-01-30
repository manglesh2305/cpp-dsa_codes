#include<iostream>
#include<fstream>
using namespace std;
/*The usefull classes for working with files in c++ are :
1. fstreambase
2. ifstream ----->>> derived from fstreambase
3. ofstream ----->>> derived from fstreambase

IN order to wrork with files in C++ we will have to open it . There are two ways to open a file :
1. using the constructor 
2. using the member function open() of the class. *///////
int main(){
    string name;
    cout<<"enter your name :";
    cin>>name;
    string st2;
    // opening file using constructor and writing it
    ofstream hout("file.txt");
    hout<<name + " is my name";
    hout.close();
    //opening file using constructor and reading it
    ifstream hin("file.txt");
    //in>>st2;
    getline(hin,st2);
    cout<<st2;
    hin.close();
    return 0;
}
