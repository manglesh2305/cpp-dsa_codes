#include<iostream>
using namespace std;
void swap(int A[], int a, int b){
    int temp=A[a];
     A[a]= A[b];
     A[b]= temp;
}

int partition(int arr[], int low, int high){
    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<high;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,high);
    return i+1;
}
void quick_sort(int* A, int low, int high)
{
    if(low<high){
        int pivot=partition(A,low,high);
        quick_sort(A,low,pivot-1);
        quick_sort(A,pivot+1,high);
    }
}

int main(){
    int n=7;
    int arr[]={12,4,6,2,1,8,13};
    quick_sort(arr,0,6);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}