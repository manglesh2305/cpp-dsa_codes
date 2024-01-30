// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}
// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
     //Your code here
     int i=0,k=0, count=1 ;
     while(s[i] != '\0')
     {   
         if (s[i]==x[0])
         {   
             for(int j=1; j<x.length();j++)
             {   
                 k++ ;
                 if(s[k]==x[j])
                 {
                     count++ ;
                 }
             }
         }
         if(count==x.length())
         {
             return i ;
         }
         else
         {
             return -1 ;
         }
         i++ ;
     }
    
}