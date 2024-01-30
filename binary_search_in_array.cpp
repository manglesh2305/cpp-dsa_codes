#include<iostream>
//#include<algorithm>
using namespace std;
int binary_search(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1 ;
        }
        else{
            s=mid+1;
        } 
            
    }
    return -1;
}
int main(){
    int n ;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<binary_search(arr,n,key);
    return 0;
}