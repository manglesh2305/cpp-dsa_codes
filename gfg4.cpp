#include<iostream>
using namespace std;
 int getsum(int a[],int n){
     int sum=0;
     
        for(int i=0;i<n;i++){
            sum=sum+a[i];
        }
        return sum;
    }
int main(){
    int n;
    cin>> n;
    int p[n];
    for (int i=0;i<n;i++){
        cin>>p[i];
    }
    cout<<getsum(p,n);
    return 0;
}