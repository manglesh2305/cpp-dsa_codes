#include<iostream>
using namespace std;
void insertion_sort(int* A, int n)
{
    int key,j;
    for(int i=1; i<n; i++)
    {
       key=A[i];
       j=i-1;
       while(j>=0 && A[j]>key)
       {
           A[j+1]=A[j];
           j--;
       }  
       A[j+1]=key;
    }
}
void display(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n=6;
    int A[]={12,54,65,7,23,9};
    insertion_sort(A,n);
    display(A,n);
    return 0;
}