#include<iostream>
using namespace std;
void selection_sort(int* A, int n)
{
    int index_min ;
    for(int i =0; i<n; i++)
    {
        index_min=i;
        for(int j=i+1; j<n; j++)
        {
            if(A[index_min]>A[j])
            {
                index_min=j;
            }
        }
        int temp=A[i];
        A[i]=A[index_min];
        A[index_min]=temp;
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
    int A[]={5,8,2,4,6};
    display(A,5);
    selection_sort(A,5);
    display(A,5);
    return 0;

}