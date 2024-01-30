#include<iostream>
#include<list>
using namespace std;
class Solution{
    public:
    void Rearrange(int a[], int n)
    {
        sort(a,a+n);
        for(int i=0; i<n; i++)
        {
            cout<<a[i]<<" ";
        }
    }
};
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    Solution ob;
    ob.Rearrange(arr,n);
    return 0;
}