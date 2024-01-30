#include<iostream>
using namespace std;
#define N 5
int main()
{
   for(int i=1; i<=N; i++)
   {
       for(int j=i; j>=1; j--)
       {
           cout<<j<<" ";
       }
       if(i>1)
       {
           for(int k=2; k<=i; k++)
           {
               cout<<k<<" ";
           }
       }
       cout<<endl;
   }
   return 0;
}