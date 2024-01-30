#include<iostream>
using namespace std ;
class Solution{
    public:
    void printTable(int n)
    {   int number=n;
        int multiplier=10;
        int table ;
       // while(multiplier<=1)
           table = number*multiplier;
           multiplier-- ;
           cout<<table;
        cout<<endl;
    }  
};

// { Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    Solution obj;
	    obj.printTable(n);    
	}
	return 0;
} 