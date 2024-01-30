#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
    cout<<"enter t";
	cin>>T;
	while(T--)
	{
	    int X,Y;
        cout<<"enter x" ;
	    cin>>X;
        cout<<"enter y";
        cin>>Y;
	    if(X>Y)
	    {
	        return X-Y;
	    }
	    else
	    {
	        int a=0;
	        return a; 
	    }
	}
	
	return 0;
}
