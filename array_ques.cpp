#include<iostream>
using namespace std;
int long_arithmetic_array(int arr[], int n)
{
    int d,ans=2,mx=2;
    d=arr[1]-arr[0];
    for(int i=2;i<n;i++)
    {
        if(arr[i]-arr[i-1]==d)
        {
           ans++ ;
           mx=max(mx,ans);
        }
        else{
            d=arr[i]-arr[i-1];
            ans=2;
        }
    }
    return mx;
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
    int a=long_arithmetic_array(arr,n);
    cout<<a;
    return 0;
}