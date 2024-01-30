#include<iostream>
using namespace std;
void bubble_sort(int* A, int n)
{
    int is_sorted=0;
    for(int i=0; i<n-1;i++)
    {
        is_sorted=1;
        for(int j=0; j<n-1-i; j++)
        {
            if(A[j]>A[j+1])
            {
                int temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
                is_sorted=0;
            }
        }
        if(is_sorted)
        {
            return;
        }
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
    display(A,6);
    bubble_sort(A,6);
    display(A,6);
}