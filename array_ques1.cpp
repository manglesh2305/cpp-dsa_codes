#include<iostream>
#include<climits>
using namespace std;
void max_till(int arr[],int n)
{
    int mx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        mx=max(mx,arr[i]);
        cout<<mx<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    max_till(arr,n);
    return 0;
}