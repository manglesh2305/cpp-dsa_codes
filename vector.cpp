#include<iostream>
#include<vector>
using namespace std;
 void display(vector<int> &v){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
           // cout<<v.at(i)<<" ";
        }
        cout<<endl;
    }
int main(){
    vector<int> v1;
    vector<int> v2(4,6);
    int element,size;
    cout<<"enter the size of vector ";
    cin>>size;
    for(int i=0; i<size; i++){
        cout<<"enter the element to add in vector ";
        cin>>element;
        v1.push_back(element);
    }
    v1.pop_back();
    vector<int> :: iterator iter=v1.begin();
    v1.insert(iter+2,4,566);
    display(v1);
    display(v2);
    return 0;
}