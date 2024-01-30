#include<iostream>
using namespace std;
#define N 15
int main()
{
    for(int i=1; i<=N; i++)
    {   
        if(i<=int(N/2))
        {
            for(int j=1; j<=i; j++)
            {
               cout<<"*"<<" " ;
            }
        } 
        else
        {
            for(int k=N-i+1; k>=1; k--)
            {
                cout<<"*"<<" " ;
            }
        } 
    cout<<endl ;
    }
    return 0;
}