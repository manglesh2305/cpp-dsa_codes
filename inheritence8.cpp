#include<iostream>
using namespace std;                          //pointer revisit///
int main(){
    float*p= new float(46.6);
    int *arr = new int[3];
    arr[0]=27;
    *(arr+1)=78;
    arr[2]=102;
    delete[] arr;
    cout<<arr[0]<<endl<< arr[1] <<endl<<arr[2]<<endl<<*p;
    return 0;

}