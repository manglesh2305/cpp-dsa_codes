#include<iostream>
using namespace std;
class binary{
    string c;
    public:
    void read();
    void chk_bin();
};
 void binary :: read(){
    cout<<"enter a binary number"<<endl;
    cin>>c;
}
void binary :: chk_bin(){
    for (int i=0;i<c.length();i++){
        if(c.at(i)!='0' and c.at(i)!='1'){
            cout<<"not a binary digit"<<endl;
            exit(0);
        }
    }
}
int main(){
    binary b;
    b.read();
    b.chk_bin();
    return 0;

}
