#include<iostream>
#include<climits>
using namespace std;
int main(){
int maxNo=INT_MIN;
int minNo=INT_MAX;
int n;
cout<<"enter the length of array :" ;
cin>>n;
int array[n];
for(int i=0;i<n;i++){
    cout<<"enter element to add in array :"<<endl;
    cin>>array[i];
}
for(int i=0;i<n;i++){
    maxNo=max(maxNo, array[i]);
    minNo=min(minNo, array[i]);
}
cout<<"maximum number in array is"<<maxNo<<endl;
cout<<"minimum number in array is"<<minNo<<endl;
return 0;}