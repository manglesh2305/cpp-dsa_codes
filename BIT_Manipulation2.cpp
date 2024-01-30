#include <iostream>
using namespace std;
bool ispowerof2(int n)
{
    return (n && !(n & n - 1));
}
int numberofones(int n)
{
    int count=0;
    while (n)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}
void subset(int arr[], int n)
{
    for(int i=0; i<(1<<n); i++)
    {
        for(int j=0; j<n;j++)
        {
            if( i & (1<<j))
            {
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
}
int main()
{
    int arr[4]={1,2,3,4};
    subset(arr,4);
    cout << ispowerof2(16) << endl;
    cout << ispowerof2(22) << endl;
    cout << numberofones(44) << endl;
    return 0;
}