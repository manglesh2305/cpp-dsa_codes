#include<iostream>
using namespace std;
#include<map>
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    map<int,int> m;
    for(int i=0; i<n; i++)
    {
        m[arr[i]]++ ;
    }
    map<int,int> :: iterator it;
    for(auto it=m.begin(); it!=m.end(); it++)
    {
        cout<<it->first<<"->"<<it->second<<endl;
    }
}