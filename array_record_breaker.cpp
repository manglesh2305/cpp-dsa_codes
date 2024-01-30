#include<iostream>
using namespace std;

int solution(int arr[],int n)
{
    int ans=0, mx=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1] && arr[i]>=mx)
        {
            ans++ ;
        }
        mx=max(arr[i],mx);
    }
    return ans;
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
    int a=solution(arr,n);
    cout<<a;
    return 0;
}