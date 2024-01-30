#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int N;
	    cin>>N;
	    char str[N];
	    for(int i=0; i<N; i++)
	    {
	        cin>>str[i];
	    }
	    for(int i=0; i<N; i++)
	    {
	        if(str[i]=='A')
	        {
	            str[i]='T';
	        }
	        else if(str[i]=='T')
	        {
	            str[i]='A';
	        }
	        else if(str[i]=='C')
	        {
	            str[i]='G';
	        }
	        else 
	        {
	            str[i]='C';
	        }
	    }
	    cout<<str<<endl;
	}
	return 0;
}
