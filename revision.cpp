#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"enter a string"<<endl;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s.at(i)!='0' and s.at(i)!='1'){
            cout<<"not a binary"<<endl;
            exit(1);
        }
    }
   /* cout<<s.length()<<endl;
    cout<<s.at(3);*/
    return 0;
}